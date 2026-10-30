// roc 2010-06 006a19b0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a19b0
//
// 006a19b0  6aff                 push -1
// 006a19b2  68a3279a00           push 0x9a27a3
// 006a19b7  64a100000000         mov eax, dword ptr fs:[0]
// 006a19bd  50                   push eax
// 006a19be  64892500000000       mov dword ptr fs:[0], esp
// 006a19c5  83ec08               sub esp, 8
// 006a19c8  56                   push esi
// 006a19c9  8bf1                 mov esi, ecx
// 006a19cb  89742408             mov dword ptr [esp + 8], esi
// 006a19cf  8b464c               mov eax, dword ptr [esi + 0x4c]
// 006a19d2  c744241401000000     mov dword ptr [esp + 0x14], 1
// 006a19da  85c0                 test eax, eax
// 006a19dc  740f                 je 0x6a19ed
// 006a19de  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 006a19e1  51                   push ecx
// 006a19e2  50                   push eax
// 006a19e3  8d4c240f             lea ecx, [esp + 0xf]
// 006a19e7  ff150ca59e00         call dword ptr [0x9ea50c]
// 006a19ed  807e4400             cmp byte ptr [esi + 0x44], 0
// 006a19f1  7404                 je 0x6a19f7
// 006a19f3  c6464400             mov byte ptr [esi + 0x44], 0
// 006a19f7  8bce                 mov ecx, esi
// 006a19f9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006a1a01  ff1528a69e00         call dword ptr [0x9ea628]
// 006a1a07  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a1a0b  5e                   pop esi
// 006a1a0c  64890d00000000       mov dword ptr fs:[0], ecx
// 006a1a13  83c414               add esp, 0x14
// 006a1a16  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@detail@iostreams@boost@@UAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp