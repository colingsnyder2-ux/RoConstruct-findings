// roc 2011-06 004f7020  unit: RBX::VRbxRay::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f7020
//
// 004f7020  8b442404             mov eax, dword ptr [esp + 4]
// 004f7024  56                   push esi
// 004f7025  8bf1                 mov esi, ecx
// 004f7027  50                   push eax
// 004f7028  8d4c240c             lea ecx, [esp + 0xc]
// 004f702c  e83fecffff           call 0x4f5c70
// 004f7031  3bc6                 cmp eax, esi
// 004f7033  7408                 je 0x4f703d
// 004f7035  8b16                 mov edx, dword ptr [esi]
// 004f7037  8b08                 mov ecx, dword ptr [eax]
// 004f7039  8910                 mov dword ptr [eax], edx
// 004f703b  890e                 mov dword ptr [esi], ecx
// 004f703d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f7041  85c9                 test ecx, ecx
// 004f7043  7408                 je 0x4f704d
// 004f7045  8b01                 mov eax, dword ptr [ecx]
// 004f7047  8b10                 mov edx, dword ptr [eax]
// 004f7049  6a01                 push 1
// 004f704b  ffd2                 call edx
// 004f704d  8bc6                 mov eax, esi
// 004f704f  5e                   pop esi
// 004f7050  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
