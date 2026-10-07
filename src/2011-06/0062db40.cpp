// roc 2011-06 0062db40  unit: RBX::VTextureId::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062db40
//
// 0062db40  8b442404             mov eax, dword ptr [esp + 4]
// 0062db44  56                   push esi
// 0062db45  8bf1                 mov esi, ecx
// 0062db47  50                   push eax
// 0062db48  8d4c240c             lea ecx, [esp + 0xc]
// 0062db4c  e8affeffff           call 0x62da00
// 0062db51  3bc6                 cmp eax, esi
// 0062db53  7408                 je 0x62db5d
// 0062db55  8b16                 mov edx, dword ptr [esi]
// 0062db57  8b08                 mov ecx, dword ptr [eax]
// 0062db59  8910                 mov dword ptr [eax], edx
// 0062db5b  890e                 mov dword ptr [esi], ecx
// 0062db5d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062db61  85c9                 test ecx, ecx
// 0062db63  7408                 je 0x62db6d
// 0062db65  8b01                 mov eax, dword ptr [ecx]
// 0062db67  8b10                 mov edx, dword ptr [eax]
// 0062db69  6a01                 push 1
// 0062db6b  ffd2                 call edx
// 0062db6d  8bc6                 mov eax, esi
// 0062db6f  5e                   pop esi
// 0062db70  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
