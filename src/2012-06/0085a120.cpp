// roc 2012-06 0085a120  unit: UString_sink::?$stream_buffer  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085a120
//
// 0085a120  6aff                 push -1
// 0085a122  68c3e1ac00           push 0xace1c3
// 0085a127  64a100000000         mov eax, dword ptr fs:[0]
// 0085a12d  50                   push eax
// 0085a12e  64892500000000       mov dword ptr fs:[0], esp
// 0085a135  83ec08               sub esp, 8
// 0085a138  56                   push esi
// 0085a139  8bf1                 mov esi, ecx
// 0085a13b  89742408             mov dword ptr [esp + 8], esi
// 0085a13f  8b4648               mov eax, dword ptr [esi + 0x48]
// 0085a142  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0085a14a  85c0                 test eax, eax
// 0085a14c  740f                 je 0x85a15d
// 0085a14e  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0085a151  51                   push ecx
// 0085a152  50                   push eax
// 0085a153  8d4c240f             lea ecx, [esp + 0xf]
// 0085a157  ff15f825b200         call dword ptr [0xb225f8]
// 0085a15d  807e4100             cmp byte ptr [esi + 0x41], 0
// 0085a161  7404                 je 0x85a167
// 0085a163  c6464100             mov byte ptr [esi + 0x41], 0
// 0085a167  8bce                 mov ecx, esi
// 0085a169  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0085a171  ff15b424b200         call dword ptr [0xb224b4]
// 0085a177  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085a17b  5e                   pop esi
// 0085a17c  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a183  83c414               add esp, 0x14
// 0085a186  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp