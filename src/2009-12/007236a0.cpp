// roc 2009-12 007236a0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007236a0
//
// 007236a0  6aff                 push -1
// 007236a2  6853ec9400           push 0x94ec53
// 007236a7  64a100000000         mov eax, dword ptr fs:[0]
// 007236ad  50                   push eax
// 007236ae  64892500000000       mov dword ptr fs:[0], esp
// 007236b5  83ec08               sub esp, 8
// 007236b8  56                   push esi
// 007236b9  8bf1                 mov esi, ecx
// 007236bb  89742408             mov dword ptr [esp + 8], esi
// 007236bf  8b464c               mov eax, dword ptr [esi + 0x4c]
// 007236c2  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007236ca  85c0                 test eax, eax
// 007236cc  740f                 je 0x7236dd
// 007236ce  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 007236d1  51                   push ecx
// 007236d2  50                   push eax
// 007236d3  8d4c240f             lea ecx, [esp + 0xf]
// 007236d7  ff15fcb59800         call dword ptr [0x98b5fc]
// 007236dd  807e4400             cmp byte ptr [esi + 0x44], 0
// 007236e1  7404                 je 0x7236e7
// 007236e3  c6464400             mov byte ptr [esi + 0x44], 0
// 007236e7  8bce                 mov ecx, esi
// 007236e9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007236f1  ff1584b49800         call dword ptr [0x98b484]
// 007236f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007236fb  5e                   pop esi
// 007236fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00723703  83c414               add esp, 0x14
// 00723706  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@detail@iostreams@boost@@UAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp