// roc 2011-06 006e18e0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e18e0
//
// 006e18e0  6aff                 push -1
// 006e18e2  685211a000           push 0xa01152
// 006e18e7  64a100000000         mov eax, dword ptr fs:[0]
// 006e18ed  50                   push eax
// 006e18ee  64892500000000       mov dword ptr fs:[0], esp
// 006e18f5  83ec20               sub esp, 0x20
// 006e18f8  56                   push esi
// 006e18f9  68e082aa00           push 0xaa82e0
// 006e18fe  8d4c240c             lea ecx, [esp + 0xc]
// 006e1902  c744240800000000     mov dword ptr [esp + 8], 0
// 006e190a  ff15c404a400         call dword ptr [0xa404c4]
// 006e1910  8b742434             mov esi, dword ptr [esp + 0x34]
// 006e1914  8d442408             lea eax, [esp + 8]
// 006e1918  50                   push eax
// 006e1919  8bce                 mov ecx, esi
// 006e191b  c744243001000000     mov dword ptr [esp + 0x30], 1
// 006e1923  e82890d2ff           call 0x40a950
// 006e1928  c7064882aa00         mov dword ptr [esi], 0xaa8248
// 006e192e  8d4c2408             lea ecx, [esp + 8]
// 006e1932  c744240401000000     mov dword ptr [esp + 4], 1
// 006e193a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006e193f  ff15d004a400         call dword ptr [0xa404d0]
// 006e1945  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e1949  8bc6                 mov eax, esi
// 006e194b  5e                   pop esi
// 006e194c  64890d00000000       mov dword ptr fs:[0], ecx
// 006e1953  83c42c               add esp, 0x2c
// 006e1956  c3                   ret 
// copied from an identical function in another client (function ?cant_seek@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp