#pragma once

#include <memory.h>

#include "Core.h"

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace SF {
	class SUIHIRA_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private :
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core Log macros
#define SF_CORE_TRACE(...)		::SF::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SF_CORE_INFO(...)		::SF::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SF_CORE_WARN(...)		::SF::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SF_CORE_ERROR(...)		::SF::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SF_CORE_FATAL(...)		::SF::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client Log macros
#define SF_TRACE(...)		::SF::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SF_INFO(...)		::SF::Log::GetClientLogger()->info(__VA_ARGS__)
#define SF_WARN(...)		::SF::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SF_ERROR(...)		::SF::Log::GetClientLogger()->error(__VA_ARGS__)
#define SF_FATAL(...)		::SF::Log::GetClientLogger()->critical(__VA_ARGS__)
