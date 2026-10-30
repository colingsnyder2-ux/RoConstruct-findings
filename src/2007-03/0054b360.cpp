// roc 2007-03 0054b360  unit: seg_00540000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054b360
//
// 0054b360  6aff                 push -1
// 0054b362  6803327500           push 0x753203
// 0054b367  64a100000000         mov eax, dword ptr fs:[0]
// 0054b36d  50                   push eax
// 0054b36e  64892500000000       mov dword ptr fs:[0], esp
// 0054b375  83ec08               sub esp, 8
// 0054b378  56                   push esi
// 0054b379  8bf1                 mov esi, ecx
// 0054b37b  89742408             mov dword ptr [esp + 8], esi
// 0054b37f  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0054b382  85c0                 test eax, eax
// 0054b384  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0054b38c  740f                 je 0x54b39d
// 0054b38e  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 0054b391  51                   push ecx
// 0054b392  50                   push eax
// 0054b393  8d4c240f             lea ecx, [esp + 0xf]
// 0054b397  ff1560e77700         call dword ptr [0x77e760]
// 0054b39d  807e4400             cmp byte ptr [esi + 0x44], 0
// 0054b3a1  7404                 je 0x54b3a7
// 0054b3a3  c6464400             mov byte ptr [esi + 0x44], 0
// 0054b3a7  8bce                 mov ecx, esi
// 0054b3a9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0054b3b1  ff15ece57700         call dword ptr [0x77e5ec]
// 0054b3b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054b3bb  5e                   pop esi
// 0054b3bc  64890d00000000       mov dword ptr fs:[0], ecx
// 0054b3c3  83c414               add esp, 0x14
// 0054b3c6  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@detail@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp