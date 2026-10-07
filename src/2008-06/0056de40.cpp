// roc 2008-06 0056de40  unit: G3D::VColor3::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056de40
//
// 0056de40  8b442404             mov eax, dword ptr [esp + 4]
// 0056de44  56                   push esi
// 0056de45  8bf1                 mov esi, ecx
// 0056de47  50                   push eax
// 0056de48  8d4c240c             lea ecx, [esp + 0xc]
// 0056de4c  e85ff4ffff           call 0x56d2b0
// 0056de51  3bc6                 cmp eax, esi
// 0056de53  7408                 je 0x56de5d
// 0056de55  8b16                 mov edx, dword ptr [esi]
// 0056de57  8b08                 mov ecx, dword ptr [eax]
// 0056de59  8910                 mov dword ptr [eax], edx
// 0056de5b  890e                 mov dword ptr [esi], ecx
// 0056de5d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056de61  85c9                 test ecx, ecx
// 0056de63  7408                 je 0x56de6d
// 0056de65  8b01                 mov eax, dword ptr [ecx]
// 0056de67  8b10                 mov edx, dword ptr [eax]
// 0056de69  6a01                 push 1
// 0056de6b  ffd2                 call edx
// 0056de6d  8bc6                 mov eax, esi
// 0056de6f  5e                   pop esi
// 0056de70  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
