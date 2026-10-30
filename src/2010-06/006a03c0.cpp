// roc 2010-06 006a03c0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a03c0
//
// 006a03c0  6aff                 push -1
// 006a03c2  6838279a00           push 0x9a2738
// 006a03c7  64a100000000         mov eax, dword ptr fs:[0]
// 006a03cd  50                   push eax
// 006a03ce  64892500000000       mov dword ptr fs:[0], esp
// 006a03d5  83ec08               sub esp, 8
// 006a03d8  56                   push esi
// 006a03d9  8bf1                 mov esi, ecx
// 006a03db  89742408             mov dword ptr [esp + 8], esi
// 006a03df  8b4614               mov eax, dword ptr [esi + 0x14]
// 006a03e2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006a03ea  85c0                 test eax, eax
// 006a03ec  740f                 je 0x6a03fd
// 006a03ee  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006a03f1  51                   push ecx
// 006a03f2  50                   push eax
// 006a03f3  8d4c240f             lea ecx, [esp + 0xf]
// 006a03f7  ff150ca59e00         call dword ptr [0x9ea50c]
// 006a03fd  8bce                 mov ecx, esi
// 006a03ff  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006a0407  e884feffff           call 0x6a0290
// 006a040c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a0410  5e                   pop esi
// 006a0411  64890d00000000       mov dword ptr fs:[0], ecx
// 006a0418  83c414               add esp, 0x14
// 006a041b  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp