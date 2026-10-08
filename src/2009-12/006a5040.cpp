// roc 2009-12 006a5040  unit: RBX::VScriptContext::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a5040
//
// 006a5040  51                   push ecx
// 006a5041  56                   push esi
// 006a5042  8bf1                 mov esi, ecx
// 006a5044  8b460c               mov eax, dword ptr [esi + 0xc]
// 006a5047  85c0                 test eax, eax
// 006a5049  741f                 je 0x6a506a
// 006a504b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a504f  51                   push ecx
// 006a5050  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006a5053  8d5608               lea edx, [esi + 8]
// 006a5056  52                   push edx
// 006a5057  51                   push ecx
// 006a5058  50                   push eax
// 006a5059  e8f2f7ffff           call 0x6a4850
// 006a505e  8b560c               mov edx, dword ptr [esi + 0xc]
// 006a5061  52                   push edx
// 006a5062  e8f3e71400           call 0x7f385a
// 006a5067  83c414               add esp, 0x14
// 006a506a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006a5071  c7461000000000       mov dword ptr [esi + 0x10], 0
// 006a5078  c7461400000000       mov dword ptr [esi + 0x14], 0
// 006a507f  5e                   pop esi
// 006a5080  59                   pop ecx
// 006a5081  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
