// roc 2009-12 00722c50  unit: UString_sink::?$stream_buffer  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722c50
//
// 00722c50  6aff                 push -1
// 00722c52  68f3eb9400           push 0x94ebf3
// 00722c57  64a100000000         mov eax, dword ptr fs:[0]
// 00722c5d  50                   push eax
// 00722c5e  64892500000000       mov dword ptr fs:[0], esp
// 00722c65  83ec08               sub esp, 8
// 00722c68  56                   push esi
// 00722c69  8bf1                 mov esi, ecx
// 00722c6b  89742408             mov dword ptr [esp + 8], esi
// 00722c6f  8b4648               mov eax, dword ptr [esi + 0x48]
// 00722c72  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00722c7a  85c0                 test eax, eax
// 00722c7c  740f                 je 0x722c8d
// 00722c7e  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00722c81  51                   push ecx
// 00722c82  50                   push eax
// 00722c83  8d4c240f             lea ecx, [esp + 0xf]
// 00722c87  ff15fcb59800         call dword ptr [0x98b5fc]
// 00722c8d  807e4100             cmp byte ptr [esi + 0x41], 0
// 00722c91  7404                 je 0x722c97
// 00722c93  c6464100             mov byte ptr [esi + 0x41], 0
// 00722c97  8bce                 mov ecx, esi
// 00722c99  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00722ca1  ff1584b49800         call dword ptr [0x98b484]
// 00722ca7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00722cab  5e                   pop esi
// 00722cac  64890d00000000       mov dword ptr fs:[0], ecx
// 00722cb3  83c414               add esp, 0x14
// 00722cb6  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp