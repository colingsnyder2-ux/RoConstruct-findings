// roc 2012-06 00859590  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00859590
//
// 00859590  6aff                 push -1
// 00859592  6838e1ac00           push 0xace138
// 00859597  64a100000000         mov eax, dword ptr fs:[0]
// 0085959d  50                   push eax
// 0085959e  64892500000000       mov dword ptr fs:[0], esp
// 008595a5  83ec08               sub esp, 8
// 008595a8  56                   push esi
// 008595a9  8bf1                 mov esi, ecx
// 008595ab  89742408             mov dword ptr [esp + 8], esi
// 008595af  8b4614               mov eax, dword ptr [esi + 0x14]
// 008595b2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008595ba  85c0                 test eax, eax
// 008595bc  740f                 je 0x8595cd
// 008595be  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 008595c1  51                   push ecx
// 008595c2  50                   push eax
// 008595c3  8d4c240f             lea ecx, [esp + 0xf]
// 008595c7  ff15f825b200         call dword ptr [0xb225f8]
// 008595cd  8bce                 mov ecx, esi
// 008595cf  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008595d7  e874feffff           call 0x859450
// 008595dc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008595e0  5e                   pop esi
// 008595e1  64890d00000000       mov dword ptr fs:[0], ecx
// 008595e8  83c414               add esp, 0x14
// 008595eb  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp