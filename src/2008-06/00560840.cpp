// from server: 100% by auto
// roc 2008-06 00560840  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00560840
//
// 00560840  51                   push ecx
// 00560841  56                   push esi
// 00560842  8bf1                 mov esi, ecx
// 00560844  8b460c               mov eax, dword ptr [esi + 0xc]
// 00560847  85c0                 test eax, eax
// 00560849  741f                 je 0x56086a
// 0056084b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056084f  51                   push ecx
// 00560850  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00560853  8d5608               lea edx, [esi + 8]
// 00560856  52                   push edx
// 00560857  51                   push ecx
// 00560858  50                   push eax
// 00560859  e852edffff           call 0x55f5b0
// 0056085e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00560861  52                   push edx
// 00560862  e813fe1300           call 0x6a067a
// 00560867  83c414               add esp, 0x14
// 0056086a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00560871  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00560878  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0056087f  5e                   pop esi
// 00560880  59                   pop ecx
// 00560881  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
