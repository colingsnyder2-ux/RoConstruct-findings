// from server: 100% by auto
// roc 2010-06 00611d80  unit: RBX::VScriptContext::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00611d80
//
// 00611d80  51                   push ecx
// 00611d81  56                   push esi
// 00611d82  8bf1                 mov esi, ecx
// 00611d84  8b460c               mov eax, dword ptr [esi + 0xc]
// 00611d87  85c0                 test eax, eax
// 00611d89  741f                 je 0x611daa
// 00611d8b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00611d8f  51                   push ecx
// 00611d90  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00611d93  8d5608               lea edx, [esi + 8]
// 00611d96  52                   push edx
// 00611d97  51                   push ecx
// 00611d98  50                   push eax
// 00611d99  e802f5ffff           call 0x6112a0
// 00611d9e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00611da1  52                   push edx
// 00611da2  e8f35b1900           call 0x7a799a
// 00611da7  83c414               add esp, 0x14
// 00611daa  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00611db1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00611db8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00611dbf  5e                   pop esi
// 00611dc0  59                   pop ecx
// 00611dc1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
