// roc 2011-06 006e13c0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e13c0
//
// 006e13c0  6aff                 push -1
// 006e13c2  68d83d9f00           push 0x9f3dd8
// 006e13c7  64a100000000         mov eax, dword ptr fs:[0]
// 006e13cd  50                   push eax
// 006e13ce  64892500000000       mov dword ptr fs:[0], esp
// 006e13d5  83ec08               sub esp, 8
// 006e13d8  56                   push esi
// 006e13d9  8bf1                 mov esi, ecx
// 006e13db  89742408             mov dword ptr [esp + 8], esi
// 006e13df  8b4614               mov eax, dword ptr [esi + 0x14]
// 006e13e2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006e13ea  85c0                 test eax, eax
// 006e13ec  740f                 je 0x6e13fd
// 006e13ee  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006e13f1  51                   push ecx
// 006e13f2  50                   push eax
// 006e13f3  8d4c240f             lea ecx, [esp + 0xf]
// 006e13f7  ff152805a400         call dword ptr [0xa40528]
// 006e13fd  8bce                 mov ecx, esi
// 006e13ff  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006e1407  e884feffff           call 0x6e1290
// 006e140c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e1410  5e                   pop esi
// 006e1411  64890d00000000       mov dword ptr fs:[0], ecx
// 006e1418  83c414               add esp, 0x14
// 006e141b  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp