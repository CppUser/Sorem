#pragma once
#include"Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include <memory>

namespace Sorem {
	class SOREM_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return m_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return m_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> m_CoreLogger;
		static std::shared_ptr<spdlog::logger> m_ClientLogger;
	};
}

//TODO: Define more Log  Macros for Core Warnings


#define SOREM_CORE_ERROR(...) ::Sorem::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SOREM_CORE_INFO(...)  ::Sorem::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SOREM_CORE_WARN(...)  ::Sorem::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SOREM_CORE_TRACE(...) ::Sorem::Log::GetCoreLogger()->trace(__VA_ARGS__)
//#define SOREM_CORE_FATAL(...) ::Sorem::Log::GetCoreLogger()->fatal(__VA_ARGS__)



//Client Macros
#define SOREM_ERROR(...) ::Sorem::Log::GetClientLogger()->error(__VA_ARGS__)
#define SOREM_INFO(...)  ::Sorem::Log::GetClientLogger()->info(__VA_ARGS__)
#define SOREM_WARN(...)  ::Sorem::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SOREM_TRACE(...) ::Sorem::Log::GetClientLogger()->trace(__VA_ARGS__)
//#define SOREM_FATAL(...) ::Sorem::Log::GetClientLogger()->fatal(__VA_ARGS__)
