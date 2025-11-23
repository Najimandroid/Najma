#include <Najma.h>

class TestApp : public Najma::Application
{
public:
	TestApp() {}
	~TestApp() {}
};

Najma::Application* Najma::CreateApplication()
{
	return new TestApp();
}