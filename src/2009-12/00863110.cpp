// roc 2009-12 00863110  unit: CXTPToolTipContext::CLunaToolTip  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00863110
//
// 00863110  8b442404             mov eax, dword ptr [esp + 4]
// 00863114  56                   push esi
// 00863115  50                   push eax
// 00863116  8bf1                 mov esi, ecx
// 00863118  e8d3ecffff           call 0x861df0
// 0086311d  c7064ce39f00         mov dword ptr [esi], 0x9fe34c
// 00863123  8bc6                 mov eax, esi
// 00863125  5e                   pop esi
// 00863126  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
