// roc 2009-12 00722570  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722570
//
// 00722570  6aff                 push -1
// 00722572  6852769500           push 0x957652
// 00722577  64a100000000         mov eax, dword ptr fs:[0]
// 0072257d  50                   push eax
// 0072257e  64892500000000       mov dword ptr fs:[0], esp
// 00722585  83ec20               sub esp, 0x20
// 00722588  56                   push esi
// 00722589  68c8fd9d00           push 0x9dfdc8
// 0072258e  8d4c240c             lea ecx, [esp + 0xc]
// 00722592  c744240800000000     mov dword ptr [esp + 8], 0
// 0072259a  ff15f4b69800         call dword ptr [0x98b6f4]
// 007225a0  8b742434             mov esi, dword ptr [esp + 0x34]
// 007225a4  8d442408             lea eax, [esp + 8]
// 007225a8  50                   push eax
// 007225a9  8bce                 mov ecx, esi
// 007225ab  c744243001000000     mov dword ptr [esp + 0x30], 1
// 007225b3  e8d86dceff           call 0x409390
// 007225b8  c7061cfd9d00         mov dword ptr [esi], 0x9dfd1c
// 007225be  8d4c2408             lea ecx, [esp + 8]
// 007225c2  c744240401000000     mov dword ptr [esp + 4], 1
// 007225ca  c644242c00           mov byte ptr [esp + 0x2c], 0
// 007225cf  ff15e4b69800         call dword ptr [0x98b6e4]
// 007225d5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007225d9  8bc6                 mov eax, esi
// 007225db  5e                   pop esi
// 007225dc  64890d00000000       mov dword ptr fs:[0], ecx
// 007225e3  83c42c               add esp, 0x2c
// 007225e6  c3                   ret 
// copied from an identical function in another client (function ?bad_putback@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp