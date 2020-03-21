#pragma once
#ifdef SOREM_PLATFORM_WINDOWS

extern Sorem::SoremApp* Sorem::CreateApplication();

int main(int arc, char** argv) {

	auto app = Sorem::CreateApplication();

	app->Run();
	delete app;
}

#endif //SOREM_PLATFORM_WINDOWS