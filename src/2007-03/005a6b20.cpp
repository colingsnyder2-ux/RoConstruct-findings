// roc 2007-03 005a6b20  unit: seg_005a0000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a6b20
//
// 005a6b20  83ec48               sub esp, 0x48
// 005a6b23  56                   push esi
// 005a6b24  8b742458             mov esi, dword ptr [esp + 0x58]
// 005a6b28  57                   push edi
// 005a6b29  8d442408             lea eax, [esp + 8]
// 005a6b2d  50                   push eax
// 005a6b2e  8bce                 mov ecx, esi
// 005a6b30  e81b82f5ff           call 0x4fed50
// 005a6b35  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 005a6b39  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005a6b3d  50                   push eax
// 005a6b3e  57                   push edi
// 005a6b3f  51                   push ecx
// 005a6b40  8d542438             lea edx, [esp + 0x38]
// 005a6b44  52                   push edx
// 005a6b45  8bce                 mov ecx, esi
// 005a6b47  e8b47ff5ff           call 0x4feb00
// 005a6b4c  8bc8                 mov ecx, eax
// 005a6b4e  e8ad7ff5ff           call 0x4feb00
// 005a6b53  8bc7                 mov eax, edi
// 005a6b55  5f                   pop edi
// 005a6b56  5e                   pop esi
// 005a6b57  83c448               add esp, 0x48
// 005a6b5a  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToWorldSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
