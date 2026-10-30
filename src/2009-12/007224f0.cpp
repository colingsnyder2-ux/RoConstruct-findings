// roc 2009-12 007224f0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007224f0
//
// 007224f0  6aff                 push -1
// 007224f2  6852769500           push 0x957652
// 007224f7  64a100000000         mov eax, dword ptr fs:[0]
// 007224fd  50                   push eax
// 007224fe  64892500000000       mov dword ptr fs:[0], esp
// 00722505  83ec20               sub esp, 0x20
// 00722508  56                   push esi
// 00722509  68b4fd9d00           push 0x9dfdb4
// 0072250e  8d4c240c             lea ecx, [esp + 0xc]
// 00722512  c744240800000000     mov dword ptr [esp + 8], 0
// 0072251a  ff15f4b69800         call dword ptr [0x98b6f4]
// 00722520  8b742434             mov esi, dword ptr [esp + 0x34]
// 00722524  8d442408             lea eax, [esp + 8]
// 00722528  50                   push eax
// 00722529  8bce                 mov ecx, esi
// 0072252b  c744243001000000     mov dword ptr [esp + 0x30], 1
// 00722533  e8586eceff           call 0x409390
// 00722538  c7061cfd9d00         mov dword ptr [esi], 0x9dfd1c
// 0072253e  8d4c2408             lea ecx, [esp + 8]
// 00722542  c744240401000000     mov dword ptr [esp + 4], 1
// 0072254a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0072254f  ff15e4b69800         call dword ptr [0x98b6e4]
// 00722555  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00722559  8bc6                 mov eax, esi
// 0072255b  5e                   pop esi
// 0072255c  64890d00000000       mov dword ptr fs:[0], ecx
// 00722563  83c42c               add esp, 0x2c
// 00722566  c3                   ret 
// copied from an identical function in another client (function ?cant_seek@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp