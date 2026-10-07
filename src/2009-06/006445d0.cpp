// roc 2009-06 006445d0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006445d0
//
// 006445d0  8b442404             mov eax, dword ptr [esp + 4]
// 006445d4  56                   push esi
// 006445d5  8bf1                 mov esi, ecx
// 006445d7  50                   push eax
// 006445d8  8d4c240c             lea ecx, [esp + 0xc]
// 006445dc  e8dffcffff           call 0x6442c0
// 006445e1  3bc6                 cmp eax, esi
// 006445e3  7408                 je 0x6445ed
// 006445e5  8b16                 mov edx, dword ptr [esi]
// 006445e7  8b08                 mov ecx, dword ptr [eax]
// 006445e9  8910                 mov dword ptr [eax], edx
// 006445eb  890e                 mov dword ptr [esi], ecx
// 006445ed  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006445f1  85c9                 test ecx, ecx
// 006445f3  7408                 je 0x6445fd
// 006445f5  8b01                 mov eax, dword ptr [ecx]
// 006445f7  8b10                 mov edx, dword ptr [eax]
// 006445f9  6a01                 push 1
// 006445fb  ffd2                 call edx
// 006445fd  8bc6                 mov eax, esi
// 006445ff  5e                   pop esi
// 00644600  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
