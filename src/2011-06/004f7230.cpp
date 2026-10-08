// from server: 100% by auto
// roc 2011-06 004f7230  unit: RBX::VRbxRay::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f7230
//
// 004f7230  8b442404             mov eax, dword ptr [esp + 4]
// 004f7234  56                   push esi
// 004f7235  8bf1                 mov esi, ecx
// 004f7237  50                   push eax
// 004f7238  8d4c240c             lea ecx, [esp + 0xc]
// 004f723c  e8efeaffff           call 0x4f5d30
// 004f7241  3bc6                 cmp eax, esi
// 004f7243  7408                 je 0x4f724d
// 004f7245  8b16                 mov edx, dword ptr [esi]
// 004f7247  8b08                 mov ecx, dword ptr [eax]
// 004f7249  8910                 mov dword ptr [eax], edx
// 004f724b  890e                 mov dword ptr [esi], ecx
// 004f724d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f7251  85c9                 test ecx, ecx
// 004f7253  7408                 je 0x4f725d
// 004f7255  8b01                 mov eax, dword ptr [ecx]
// 004f7257  8b10                 mov edx, dword ptr [eax]
// 004f7259  6a01                 push 1
// 004f725b  ffd2                 call edx
// 004f725d  8bc6                 mov eax, esi
// 004f725f  5e                   pop esi
// 004f7260  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
