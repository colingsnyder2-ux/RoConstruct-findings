// roc 2011-06 006cce40  unit: RBX::Mechanism  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006cce40
//
// 006cce40  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006cce44  8b442408             mov eax, dword ptr [esp + 8]
// 006cce48  83ec48               sub esp, 0x48
// 006cce4b  56                   push esi
// 006cce4c  8b742450             mov esi, dword ptr [esp + 0x50]
// 006cce50  51                   push ecx
// 006cce51  56                   push esi
// 006cce52  50                   push eax
// 006cce53  8d542410             lea edx, [esp + 0x10]
// 006cce57  52                   push edx
// 006cce58  8d442438             lea eax, [esp + 0x38]
// 006cce5c  50                   push eax
// 006cce5d  e89e36e7ff           call 0x540500
// 006cce62  8bc8                 mov ecx, eax
// 006cce64  e8a733e7ff           call 0x540210
// 006cce69  8bc8                 mov ecx, eax
// 006cce6b  e8a033e7ff           call 0x540210
// 006cce70  8bc6                 mov eax, esi
// 006cce72  5e                   pop esi
// 006cce73  83c448               add esp, 0x48
// 006cce76  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToObjectSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
