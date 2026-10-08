// from server: 100% by auto
// roc 2010-06 00611640  unit: RBX::VScriptContext::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00611640
//
// 00611640  51                   push ecx
// 00611641  56                   push esi
// 00611642  8bf1                 mov esi, ecx
// 00611644  8b460c               mov eax, dword ptr [esi + 0xc]
// 00611647  85c0                 test eax, eax
// 00611649  741f                 je 0x61166a
// 0061164b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0061164f  51                   push ecx
// 00611650  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00611653  8d5608               lea edx, [esi + 8]
// 00611656  52                   push edx
// 00611657  51                   push ecx
// 00611658  50                   push eax
// 00611659  e8521fffff           call 0x6035b0
// 0061165e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00611661  52                   push edx
// 00611662  e833631900           call 0x7a799a
// 00611667  83c414               add esp, 0x14
// 0061166a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00611671  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00611678  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0061167f  5e                   pop esi
// 00611680  59                   pop ecx
// 00611681  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
