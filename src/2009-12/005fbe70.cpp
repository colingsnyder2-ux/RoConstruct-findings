// roc 2009-12 005fbe70  unit: G3D::TextInput::WrongSymbol  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fbe70
//
// 005fbe70  8b442404             mov eax, dword ptr [esp + 4]
// 005fbe74  56                   push esi
// 005fbe75  50                   push eax
// 005fbe76  8bf1                 mov esi, ecx
// 005fbe78  e883ffffff           call 0x5fbe00
// 005fbe7d  c706e42d9c00         mov dword ptr [esi], 0x9c2de4
// 005fbe83  8bc6                 mov eax, esi
// 005fbe85  5e                   pop esi
// 005fbe86  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
