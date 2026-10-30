// roc 2011-06 006e1f50  unit: UString_sink::?$stream_buffer  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1f50
//
// 006e1f50  6aff                 push -1
// 006e1f52  68c33d9f00           push 0x9f3dc3
// 006e1f57  64a100000000         mov eax, dword ptr fs:[0]
// 006e1f5d  50                   push eax
// 006e1f5e  64892500000000       mov dword ptr fs:[0], esp
// 006e1f65  83ec08               sub esp, 8
// 006e1f68  56                   push esi
// 006e1f69  8bf1                 mov esi, ecx
// 006e1f6b  89742408             mov dword ptr [esp + 8], esi
// 006e1f6f  8b4648               mov eax, dword ptr [esi + 0x48]
// 006e1f72  c744241401000000     mov dword ptr [esp + 0x14], 1
// 006e1f7a  85c0                 test eax, eax
// 006e1f7c  740f                 je 0x6e1f8d
// 006e1f7e  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006e1f81  51                   push ecx
// 006e1f82  50                   push eax
// 006e1f83  8d4c240f             lea ecx, [esp + 0xf]
// 006e1f87  ff152805a400         call dword ptr [0xa40528]
// 006e1f8d  807e4100             cmp byte ptr [esi + 0x41], 0
// 006e1f91  7404                 je 0x6e1f97
// 006e1f93  c6464100             mov byte ptr [esi + 0x41], 0
// 006e1f97  8bce                 mov ecx, esi
// 006e1f99  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006e1fa1  ff150806a400         call dword ptr [0xa40608]
// 006e1fa7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e1fab  5e                   pop esi
// 006e1fac  64890d00000000       mov dword ptr fs:[0], ecx
// 006e1fb3  83c414               add esp, 0x14
// 006e1fb6  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp