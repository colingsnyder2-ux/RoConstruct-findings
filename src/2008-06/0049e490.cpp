// roc 2008-06 0049e490  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049e490
//
// 0049e490  8b0dc0069700         mov ecx, dword ptr [0x9706c0]
// 0049e496  8b01                 mov eax, dword ptr [ecx]
// 0049e498  8b00                 mov eax, dword ptr [eax]
// 0049e49a  ffe0                 jmp eax
// library rbxgs-net/CrashReporter.cpp (function ?CrashExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net CrashReporter.cpp
