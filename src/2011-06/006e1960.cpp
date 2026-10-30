// roc 2011-06 006e1960  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1960
//
// 006e1960  6aff                 push -1
// 006e1962  685211a000           push 0xa01152
// 006e1967  64a100000000         mov eax, dword ptr fs:[0]
// 006e196d  50                   push eax
// 006e196e  64892500000000       mov dword ptr fs:[0], esp
// 006e1975  83ec20               sub esp, 0x20
// 006e1978  56                   push esi
// 006e1979  68f482aa00           push 0xaa82f4
// 006e197e  8d4c240c             lea ecx, [esp + 0xc]
// 006e1982  c744240800000000     mov dword ptr [esp + 8], 0
// 006e198a  ff15c404a400         call dword ptr [0xa404c4]
// 006e1990  8b742434             mov esi, dword ptr [esp + 0x34]
// 006e1994  8d442408             lea eax, [esp + 8]
// 006e1998  50                   push eax
// 006e1999  8bce                 mov ecx, esi
// 006e199b  c744243001000000     mov dword ptr [esp + 0x30], 1
// 006e19a3  e8a88fd2ff           call 0x40a950
// 006e19a8  c7064882aa00         mov dword ptr [esi], 0xaa8248
// 006e19ae  8d4c2408             lea ecx, [esp + 8]
// 006e19b2  c744240401000000     mov dword ptr [esp + 4], 1
// 006e19ba  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006e19bf  ff15d004a400         call dword ptr [0xa404d0]
// 006e19c5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e19c9  8bc6                 mov eax, esi
// 006e19cb  5e                   pop esi
// 006e19cc  64890d00000000       mov dword ptr fs:[0], ecx
// 006e19d3  83c42c               add esp, 0x2c
// 006e19d6  c3                   ret 
// copied from an identical function in another client (function ?bad_putback@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp