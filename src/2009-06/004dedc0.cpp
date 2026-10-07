// roc 2009-06 004dedc0  unit: RBX::Network::IdSerializer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004dedc0
//
// 004dedc0  51                   push ecx
// 004dedc1  56                   push esi
// 004dedc2  8bf1                 mov esi, ecx
// 004dedc4  8b460c               mov eax, dword ptr [esi + 0xc]
// 004dedc7  85c0                 test eax, eax
// 004dedc9  741f                 je 0x4dedea
// 004dedcb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004dedcf  51                   push ecx
// 004dedd0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004dedd3  8d5608               lea edx, [esi + 8]
// 004dedd6  52                   push edx
// 004dedd7  51                   push ecx
// 004dedd8  50                   push eax
// 004dedd9  e8f2fbffff           call 0x4de9d0
// 004dedde  8b560c               mov edx, dword ptr [esi + 0xc]
// 004dede1  52                   push edx
// 004dede2  e84b9c2300           call 0x718a32
// 004dede7  83c414               add esp, 0x14
// 004dedea  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004dedf1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004dedf8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004dedff  5e                   pop esi
// 004dee00  59                   pop ecx
// 004dee01  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
