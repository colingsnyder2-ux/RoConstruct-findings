// from server: 100% by auto
// roc 2010-06 004e3920  unit: RBX::Network::IdSerializer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e3920
//
// 004e3920  51                   push ecx
// 004e3921  56                   push esi
// 004e3922  8bf1                 mov esi, ecx
// 004e3924  8b460c               mov eax, dword ptr [esi + 0xc]
// 004e3927  85c0                 test eax, eax
// 004e3929  741f                 je 0x4e394a
// 004e392b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e392f  51                   push ecx
// 004e3930  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004e3933  8d5608               lea edx, [esi + 8]
// 004e3936  52                   push edx
// 004e3937  51                   push ecx
// 004e3938  50                   push eax
// 004e3939  e892fbffff           call 0x4e34d0
// 004e393e  8b560c               mov edx, dword ptr [esi + 0xc]
// 004e3941  52                   push edx
// 004e3942  e853402c00           call 0x7a799a
// 004e3947  83c414               add esp, 0x14
// 004e394a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004e3951  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004e3958  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004e395f  5e                   pop esi
// 004e3960  59                   pop ecx
// 004e3961  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
