// roc 2008-06 0056d220  unit: G3D::VColor3::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d220
//
// 0056d220  8b442404             mov eax, dword ptr [esp + 4]
// 0056d224  56                   push esi
// 0056d225  8bf1                 mov esi, ecx
// 0056d227  50                   push eax
// 0056d228  8d4c240c             lea ecx, [esp + 0xc]
// 0056d22c  e84ff7ffff           call 0x56c980
// 0056d231  3bc6                 cmp eax, esi
// 0056d233  7408                 je 0x56d23d
// 0056d235  8b16                 mov edx, dword ptr [esi]
// 0056d237  8b08                 mov ecx, dword ptr [eax]
// 0056d239  8910                 mov dword ptr [eax], edx
// 0056d23b  890e                 mov dword ptr [esi], ecx
// 0056d23d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056d241  85c9                 test ecx, ecx
// 0056d243  7408                 je 0x56d24d
// 0056d245  8b01                 mov eax, dword ptr [ecx]
// 0056d247  8b10                 mov edx, dword ptr [eax]
// 0056d249  6a01                 push 1
// 0056d24b  ffd2                 call edx
// 0056d24d  8bc6                 mov eax, esi
// 0056d24f  5e                   pop esi
// 0056d250  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
