// from server: 100% by auto
// roc 2008-06 0059f190  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f190
//
// 0059f190  8b442404             mov eax, dword ptr [esp + 4]
// 0059f194  56                   push esi
// 0059f195  8bf1                 mov esi, ecx
// 0059f197  50                   push eax
// 0059f198  8d4c240c             lea ecx, [esp + 0xc]
// 0059f19c  e8effdffff           call 0x59ef90
// 0059f1a1  3bc6                 cmp eax, esi
// 0059f1a3  7408                 je 0x59f1ad
// 0059f1a5  8b16                 mov edx, dword ptr [esi]
// 0059f1a7  8b08                 mov ecx, dword ptr [eax]
// 0059f1a9  8910                 mov dword ptr [eax], edx
// 0059f1ab  890e                 mov dword ptr [esi], ecx
// 0059f1ad  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059f1b1  85c9                 test ecx, ecx
// 0059f1b3  7408                 je 0x59f1bd
// 0059f1b5  8b01                 mov eax, dword ptr [ecx]
// 0059f1b7  8b10                 mov edx, dword ptr [eax]
// 0059f1b9  6a01                 push 1
// 0059f1bb  ffd2                 call edx
// 0059f1bd  8bc6                 mov eax, esi
// 0059f1bf  5e                   pop esi
// 0059f1c0  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
