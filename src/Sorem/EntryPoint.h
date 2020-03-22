#pragma once
#ifdef SOREM_PLATFORM_WINDOWS

extern Sorem::SoremApp* Sorem::CreateApplication();

int main(int arc, char** argv) {

	Sorem::Log::Init();
	SOREM_CORE_WARN("Initialized Core");
	int a = 5;
	SOREM_INFO("Hello Var={0}", a);

	auto app = Sorem::CreateApplication();

	app->Run();
	delete app;
}

#endif //SOREM_PLATFORM_WINDOWS