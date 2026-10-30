// roc 2010-06 006a0420  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0420
//
// 006a0420  6aff                 push -1
// 006a0422  68e8269a00           push 0x9a26e8
// 006a0427  64a100000000         mov eax, dword ptr fs:[0]
// 006a042d  50                   push eax
// 006a042e  64892500000000       mov dword ptr fs:[0], esp
// 006a0435  83ec08               sub esp, 8
// 006a0438  56                   push esi
// 006a0439  8bf1                 mov esi, ecx
// 006a043b  89742408             mov dword ptr [esp + 8], esi
// 006a043f  8b4614               mov eax, dword ptr [esi + 0x14]
// 006a0442  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006a044a  85c0                 test eax, eax
// 006a044c  740f                 je 0x6a045d
// 006a044e  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006a0451  51                   push ecx
// 006a0452  50                   push eax
// 006a0453  8d4c240f             lea ecx, [esp + 0xf]
// 006a0457  ff150ca59e00         call dword ptr [0x9ea50c]
// 006a045d  8bce                 mov ecx, esi
// 006a045f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006a0467  e874feffff           call 0x6a02e0
// 006a046c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a0470  5e                   pop esi
// 006a0471  64890d00000000       mov dword ptr fs:[0], ecx
// 006a0478  83c414               add esp, 0x14
// 006a047b  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp