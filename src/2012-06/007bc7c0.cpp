// roc 2012-06 007bc7c0  unit: RBX::Geometry  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007bc7c0
//
// 007bc7c0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007bc7c4  8b442408             mov eax, dword ptr [esp + 8]
// 007bc7c8  83ec48               sub esp, 0x48
// 007bc7cb  56                   push esi
// 007bc7cc  8b742450             mov esi, dword ptr [esp + 0x50]
// 007bc7d0  51                   push ecx
// 007bc7d1  56                   push esi
// 007bc7d2  50                   push eax
// 007bc7d3  8d542410             lea edx, [esp + 0x10]
// 007bc7d7  52                   push edx
// 007bc7d8  8d442438             lea eax, [esp + 0x38]
// 007bc7dc  50                   push eax
// 007bc7dd  e81effe6ff           call 0x62c700
// 007bc7e2  8bc8                 mov ecx, eax
// 007bc7e4  e827fce6ff           call 0x62c410
// 007bc7e9  8bc8                 mov ecx, eax
// 007bc7eb  e820fce6ff           call 0x62c410
// 007bc7f0  8bc6                 mov eax, esi
// 007bc7f2  5e                   pop esi
// 007bc7f3  83c448               add esp, 0x48
// 007bc7f6  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToObjectSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
