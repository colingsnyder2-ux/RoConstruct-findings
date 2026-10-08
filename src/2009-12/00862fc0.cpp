// roc 2009-12 00862fc0  unit: CXTPToolTipContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00862fc0
//
// 00862fc0  8b442404             mov eax, dword ptr [esp + 4]
// 00862fc4  56                   push esi
// 00862fc5  50                   push eax
// 00862fc6  8bf1                 mov esi, ecx
// 00862fc8  e823eeffff           call 0x861df0
// 00862fcd  c706f4e19f00         mov dword ptr [esi], 0x9fe1f4
// 00862fd3  8bc6                 mov eax, esi
// 00862fd5  5e                   pop esi
// 00862fd6  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
