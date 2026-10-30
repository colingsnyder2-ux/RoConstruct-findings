// roc 2011-06 006e1800  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1800
//
// 006e1800  6aff                 push -1
// 006e1802  68583d9f00           push 0x9f3d58
// 006e1807  64a100000000         mov eax, dword ptr fs:[0]
// 006e180d  50                   push eax
// 006e180e  64892500000000       mov dword ptr fs:[0], esp
// 006e1815  51                   push ecx
// 006e1816  56                   push esi
// 006e1817  8bf1                 mov esi, ecx
// 006e1819  89742404             mov dword ptr [esp + 4], esi
// 006e181d  e85e081200           call 0x802080
// 006e1822  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006e182a  85f6                 test esi, esi
// 006e182c  7405                 je 0x6e1833
// 006e182e  8d4614               lea eax, [esi + 0x14]
// 006e1831  eb02                 jmp 0x6e1835
// 006e1833  33c0                 xor eax, eax
// 006e1835  50                   push eax
// 006e1836  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e183a  6a00                 push 0
// 006e183c  6a00                 push 0
// 006e183e  6a01                 push 1
// 006e1840  50                   push eax
// 006e1841  8bce                 mov ecx, esi
// 006e1843  e8880a1200           call 0x8022d0
// 006e1848  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e184c  8bc6                 mov eax, esi
// 006e184e  5e                   pop esi
// 006e184f  64890d00000000       mov dword ptr fs:[0], ecx
// 006e1856  83c410               add esp, 0x10
// 006e1859  c20400               ret 4
// copied from an identical function in another client (function ??0?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@ABUzlib_params@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp