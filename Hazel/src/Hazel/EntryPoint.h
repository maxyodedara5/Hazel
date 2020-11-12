#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc , char ** argv) {


	Hazel::Log::Init();
	HZ_CORE_ERROR("Logger Error");
	int a = 10; 
	HZ_TRACE("Client Created {0}", a);

	printf("Hazel Engine Entry point");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}



#endif // HZ_PLATFORM_WINDOWS
