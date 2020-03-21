#pragma once

#include "Core.h"

namespace Sorem {

	class SOREM_API SoremApp
	{
	public:
		SoremApp();
		virtual ~SoremApp();

		void Run();

	private:

	};

	Sorem::SoremApp* CreateApplication();


}