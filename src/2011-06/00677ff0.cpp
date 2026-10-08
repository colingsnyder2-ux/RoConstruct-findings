// from server: 100% by auto
// roc 2011-06 00677ff0  unit: RBX::VAnimationId::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00677ff0
//
// 00677ff0  8b442404             mov eax, dword ptr [esp + 4]
// 00677ff4  56                   push esi
// 00677ff5  8bf1                 mov esi, ecx
// 00677ff7  50                   push eax
// 00677ff8  8d4c240c             lea ecx, [esp + 0xc]
// 00677ffc  e83fffffff           call 0x677f40
// 00678001  3bc6                 cmp eax, esi
// 00678003  7408                 je 0x67800d
// 00678005  8b16                 mov edx, dword ptr [esi]
// 00678007  8b08                 mov ecx, dword ptr [eax]
// 00678009  8910                 mov dword ptr [eax], edx
// 0067800b  890e                 mov dword ptr [esi], ecx
// 0067800d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00678011  85c9                 test ecx, ecx
// 00678013  7408                 je 0x67801d
// 00678015  8b01                 mov eax, dword ptr [ecx]
// 00678017  8b10                 mov edx, dword ptr [eax]
// 00678019  6a01                 push 1
// 0067801b  ffd2                 call edx
// 0067801d  8bc6                 mov eax, esi
// 0067801f  5e                   pop esi
// 00678020  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
