// from server: 100% by auto
// roc 2009-06 00637c30  unit: RBX::VScriptContext::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00637c30
//
// 00637c30  51                   push ecx
// 00637c31  56                   push esi
// 00637c32  8bf1                 mov esi, ecx
// 00637c34  8b460c               mov eax, dword ptr [esi + 0xc]
// 00637c37  85c0                 test eax, eax
// 00637c39  741f                 je 0x637c5a
// 00637c3b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00637c3f  51                   push ecx
// 00637c40  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00637c43  8d5608               lea edx, [esi + 8]
// 00637c46  52                   push edx
// 00637c47  51                   push ecx
// 00637c48  50                   push eax
// 00637c49  e8f2f4ffff           call 0x637140
// 00637c4e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00637c51  52                   push edx
// 00637c52  e8db0d0e00           call 0x718a32
// 00637c57  83c414               add esp, 0x14
// 00637c5a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00637c61  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00637c68  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00637c6f  5e                   pop esi
// 00637c70  59                   pop ecx
// 00637c71  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
