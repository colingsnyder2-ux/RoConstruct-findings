// from server: 100% by auto
// roc 2009-06 00625040  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00625040
//
// 00625040  8b442404             mov eax, dword ptr [esp + 4]
// 00625044  56                   push esi
// 00625045  8bf1                 mov esi, ecx
// 00625047  50                   push eax
// 00625048  8d4c240c             lea ecx, [esp + 0xc]
// 0062504c  e83ffeffff           call 0x624e90
// 00625051  3bc6                 cmp eax, esi
// 00625053  7408                 je 0x62505d
// 00625055  8b16                 mov edx, dword ptr [esi]
// 00625057  8b08                 mov ecx, dword ptr [eax]
// 00625059  8910                 mov dword ptr [eax], edx
// 0062505b  890e                 mov dword ptr [esi], ecx
// 0062505d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00625061  85c9                 test ecx, ecx
// 00625063  7408                 je 0x62506d
// 00625065  8b01                 mov eax, dword ptr [ecx]
// 00625067  8b10                 mov edx, dword ptr [eax]
// 00625069  6a01                 push 1
// 0062506b  ffd2                 call edx
// 0062506d  8bc6                 mov eax, esi
// 0062506f  5e                   pop esi
// 00625070  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
