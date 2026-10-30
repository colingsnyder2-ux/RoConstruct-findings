// roc 2011-06 006e2e10  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e2e10
//
// 006e2e10  6aff                 push -1
// 006e2e12  68543f9f00           push 0x9f3f54
// 006e2e17  64a100000000         mov eax, dword ptr fs:[0]
// 006e2e1d  50                   push eax
// 006e2e1e  64892500000000       mov dword ptr fs:[0], esp
// 006e2e25  51                   push ecx
// 006e2e26  56                   push esi
// 006e2e27  8bf1                 mov esi, ecx
// 006e2e29  89742404             mov dword ptr [esp + 4], esi
// 006e2e2d  8d4e24               lea ecx, [esi + 0x24]
// 006e2e30  c744241001000000     mov dword ptr [esp + 0x10], 1
// 006e2e38  ff15d004a400         call dword ptr [0xa404d0]
// 006e2e3e  8d4e08               lea ecx, [esi + 8]
// 006e2e41  c644241000           mov byte ptr [esp + 0x10], 0
// 006e2e46  ff15d004a400         call dword ptr [0xa404d0]
// 006e2e4c  8b7604               mov esi, dword ptr [esi + 4]
// 006e2e4f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006e2e57  85f6                 test esi, esi
// 006e2e59  742a                 je 0x6e2e85
// 006e2e5b  8d4604               lea eax, [esi + 4]
// 006e2e5e  83c9ff               or ecx, 0xffffffff
// 006e2e61  f00fc108             lock xadd dword ptr [eax], ecx
// 006e2e65  751e                 jne 0x6e2e85
// 006e2e67  8b16                 mov edx, dword ptr [esi]
// 006e2e69  8b4204               mov eax, dword ptr [edx + 4]
// 006e2e6c  8bce                 mov ecx, esi
// 006e2e6e  ffd0                 call eax
// 006e2e70  8d4e08               lea ecx, [esi + 8]
// 006e2e73  83caff               or edx, 0xffffffff
// 006e2e76  f00fc111             lock xadd dword ptr [ecx], edx
// 006e2e7a  7509                 jne 0x6e2e85
// 006e2e7c  8b06                 mov eax, dword ptr [esi]
// 006e2e7e  8b5008               mov edx, dword ptr [eax + 8]
// 006e2e81  8bce                 mov ecx, esi
// 006e2e83  ffd2                 call edx
// 006e2e85  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e2e89  5e                   pop esi
// 006e2e8a  64890d00000000       mov dword ptr fs:[0], ecx
// 006e2e91  83c410               add esp, 0x10
// 006e2e94  c3                   ret 
// copied from an identical function in another client (function ??1?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp