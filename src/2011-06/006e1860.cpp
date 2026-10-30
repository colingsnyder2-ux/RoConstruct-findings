// roc 2011-06 006e1860  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1860
//
// 006e1860  6aff                 push -1
// 006e1862  685211a000           push 0xa01152
// 006e1867  64a100000000         mov eax, dword ptr fs:[0]
// 006e186d  50                   push eax
// 006e186e  64892500000000       mov dword ptr fs:[0], esp
// 006e1875  83ec20               sub esp, 0x20
// 006e1878  56                   push esi
// 006e1879  68d082aa00           push 0xaa82d0
// 006e187e  8d4c240c             lea ecx, [esp + 0xc]
// 006e1882  c744240800000000     mov dword ptr [esp + 8], 0
// 006e188a  ff15c404a400         call dword ptr [0xa404c4]
// 006e1890  8b742434             mov esi, dword ptr [esp + 0x34]
// 006e1894  8d442408             lea eax, [esp + 8]
// 006e1898  50                   push eax
// 006e1899  8bce                 mov ecx, esi
// 006e189b  c744243001000000     mov dword ptr [esp + 0x30], 1
// 006e18a3  e8a890d2ff           call 0x40a950
// 006e18a8  c7064882aa00         mov dword ptr [esi], 0xaa8248
// 006e18ae  8d4c2408             lea ecx, [esp + 8]
// 006e18b2  c744240401000000     mov dword ptr [esp + 4], 1
// 006e18ba  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006e18bf  ff15d004a400         call dword ptr [0xa404d0]
// 006e18c5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e18c9  8bc6                 mov eax, esi
// 006e18cb  5e                   pop esi
// 006e18cc  64890d00000000       mov dword ptr fs:[0], ecx
// 006e18d3  83c42c               add esp, 0x2c
// 006e18d6  c3                   ret 
// copied from an identical function in another client (function ?cant_read@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp