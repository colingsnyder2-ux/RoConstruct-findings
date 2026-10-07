// roc 2010-06 006bb360  unit: RBX::VUDim2::?$TypedPropertyDescriptor  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bb360
//
// 006bb360  51                   push ecx
// 006bb361  56                   push esi
// 006bb362  8bf1                 mov esi, ecx
// 006bb364  8b460c               mov eax, dword ptr [esi + 0xc]
// 006bb367  85c0                 test eax, eax
// 006bb369  741f                 je 0x6bb38a
// 006bb36b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006bb36f  51                   push ecx
// 006bb370  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006bb373  8d5608               lea edx, [esi + 8]
// 006bb376  52                   push edx
// 006bb377  51                   push ecx
// 006bb378  50                   push eax
// 006bb379  e882ffffff           call 0x6bb300
// 006bb37e  8b560c               mov edx, dword ptr [esi + 0xc]
// 006bb381  52                   push edx
// 006bb382  e813c60e00           call 0x7a799a
// 006bb387  83c414               add esp, 0x14
// 006bb38a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006bb391  c7461000000000       mov dword ptr [esi + 0x10], 0
// 006bb398  c7461400000000       mov dword ptr [esi + 0x14], 0
// 006bb39f  5e                   pop esi
// 006bb3a0  59                   pop ecx
// 006bb3a1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
