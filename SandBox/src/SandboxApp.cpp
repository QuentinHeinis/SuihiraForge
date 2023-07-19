#include <Suihira.h>


class Sandbox : public SF::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};


SF::Application* SF::CreateApplication()
{
	return new Sandbox();
}