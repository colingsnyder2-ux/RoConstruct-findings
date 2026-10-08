// roc 2007-03 004929c0  unit: seg_00490000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004929c0
//
// 004929c0  8b0d28898b00         mov ecx, dword ptr [0x8b8928]
// 004929c6  8b01                 mov eax, dword ptr [ecx]
// 004929c8  8b00                 mov eax, dword ptr [eax]
// 004929ca  ffe0                 jmp eax
// library rbxgs-net/CrashReporter.cpp (function ?CrashExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net CrashReporter.cpp
