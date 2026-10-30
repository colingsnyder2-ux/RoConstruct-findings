// roc 2011-06 006e28a0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e28a0
//
// 006e28a0  6aff                 push -1
// 006e28a2  68433e9f00           push 0x9f3e43
// 006e28a7  64a100000000         mov eax, dword ptr fs:[0]
// 006e28ad  50                   push eax
// 006e28ae  64892500000000       mov dword ptr fs:[0], esp
// 006e28b5  83ec08               sub esp, 8
// 006e28b8  56                   push esi
// 006e28b9  8bf1                 mov esi, ecx
// 006e28bb  89742408             mov dword ptr [esp + 8], esi
// 006e28bf  8b464c               mov eax, dword ptr [esi + 0x4c]
// 006e28c2  c744241401000000     mov dword ptr [esp + 0x14], 1
// 006e28ca  85c0                 test eax, eax
// 006e28cc  740f                 je 0x6e28dd
// 006e28ce  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 006e28d1  51                   push ecx
// 006e28d2  50                   push eax
// 006e28d3  8d4c240f             lea ecx, [esp + 0xf]
// 006e28d7  ff152805a400         call dword ptr [0xa40528]
// 006e28dd  807e4400             cmp byte ptr [esi + 0x44], 0
// 006e28e1  7404                 je 0x6e28e7
// 006e28e3  c6464400             mov byte ptr [esi + 0x44], 0
// 006e28e7  8bce                 mov ecx, esi
// 006e28e9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006e28f1  ff150806a400         call dword ptr [0xa40608]
// 006e28f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e28fb  5e                   pop esi
// 006e28fc  64890d00000000       mov dword ptr fs:[0], ecx
// 006e2903  83c414               add esp, 0x14
// 006e2906  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@detail@iostreams@boost@@UAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp