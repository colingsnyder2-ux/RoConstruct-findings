// roc 2011-06 006cce80  unit: RBX::Mechanism  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006cce80
//
// 006cce80  83ec48               sub esp, 0x48
// 006cce83  56                   push esi
// 006cce84  8b742458             mov esi, dword ptr [esp + 0x58]
// 006cce88  57                   push edi
// 006cce89  8d442408             lea eax, [esp + 8]
// 006cce8d  50                   push eax
// 006cce8e  8bce                 mov ecx, esi
// 006cce90  e86b36e7ff           call 0x540500
// 006cce95  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 006cce99  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 006cce9d  50                   push eax
// 006cce9e  57                   push edi
// 006cce9f  51                   push ecx
// 006ccea0  8d542438             lea edx, [esp + 0x38]
// 006ccea4  52                   push edx
// 006ccea5  8bce                 mov ecx, esi
// 006ccea7  e86433e7ff           call 0x540210
// 006cceac  8bc8                 mov ecx, eax
// 006cceae  e85d33e7ff           call 0x540210
// 006cceb3  8bc7                 mov eax, edi
// 006cceb5  5f                   pop edi
// 006cceb6  5e                   pop esi
// 006cceb7  83c448               add esp, 0x48
// 006cceba  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToWorldSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
