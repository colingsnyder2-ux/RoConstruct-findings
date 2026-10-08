// roc 2007-08 00498c60  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00498c60
//
// 00498c60  8b0de8e28b00         mov ecx, dword ptr [0x8be2e8]
// 00498c66  8b01                 mov eax, dword ptr [ecx]
// 00498c68  8b00                 mov eax, dword ptr [eax]
// 00498c6a  ffe0                 jmp eax
// library rbxgs-net/CrashReporter.cpp (function ?CrashExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net CrashReporter.cpp
