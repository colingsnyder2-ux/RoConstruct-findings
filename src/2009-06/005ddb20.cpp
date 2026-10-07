// roc 2009-06 005ddb20  unit: RBX::VInstance::?$NonFactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ddb20
//
// 005ddb20  51                   push ecx
// 005ddb21  56                   push esi
// 005ddb22  8bf1                 mov esi, ecx
// 005ddb24  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ddb27  85c0                 test eax, eax
// 005ddb29  741f                 je 0x5ddb4a
// 005ddb2b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ddb2f  51                   push ecx
// 005ddb30  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005ddb33  8d5608               lea edx, [esi + 8]
// 005ddb36  52                   push edx
// 005ddb37  51                   push ecx
// 005ddb38  50                   push eax
// 005ddb39  e8e2ebffff           call 0x5dc720
// 005ddb3e  8b560c               mov edx, dword ptr [esi + 0xc]
// 005ddb41  52                   push edx
// 005ddb42  e8ebae1300           call 0x718a32
// 005ddb47  83c414               add esp, 0x14
// 005ddb4a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005ddb51  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005ddb58  c7461400000000       mov dword ptr [esi + 0x14], 0
// 005ddb5f  5e                   pop esi
// 005ddb60  59                   pop ecx
// 005ddb61  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
