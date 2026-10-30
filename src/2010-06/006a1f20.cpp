// roc 2010-06 006a1f20  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a1f20
//
// 006a1f20  6aff                 push -1
// 006a1f22  68f4279a00           push 0x9a27f4
// 006a1f27  64a100000000         mov eax, dword ptr fs:[0]
// 006a1f2d  50                   push eax
// 006a1f2e  64892500000000       mov dword ptr fs:[0], esp
// 006a1f35  51                   push ecx
// 006a1f36  56                   push esi
// 006a1f37  8bf1                 mov esi, ecx
// 006a1f39  89742404             mov dword ptr [esp + 4], esi
// 006a1f3d  8d4e24               lea ecx, [esi + 0x24]
// 006a1f40  c744241001000000     mov dword ptr [esp + 0x10], 1
// 006a1f48  ff1500a49e00         call dword ptr [0x9ea400]
// 006a1f4e  8d4e08               lea ecx, [esi + 8]
// 006a1f51  c644241000           mov byte ptr [esp + 0x10], 0
// 006a1f56  ff1500a49e00         call dword ptr [0x9ea400]
// 006a1f5c  8b7604               mov esi, dword ptr [esi + 4]
// 006a1f5f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006a1f67  85f6                 test esi, esi
// 006a1f69  742a                 je 0x6a1f95
// 006a1f6b  8d4604               lea eax, [esi + 4]
// 006a1f6e  83c9ff               or ecx, 0xffffffff
// 006a1f71  f00fc108             lock xadd dword ptr [eax], ecx
// 006a1f75  751e                 jne 0x6a1f95
// 006a1f77  8b16                 mov edx, dword ptr [esi]
// 006a1f79  8b4204               mov eax, dword ptr [edx + 4]
// 006a1f7c  8bce                 mov ecx, esi
// 006a1f7e  ffd0                 call eax
// 006a1f80  8d4e08               lea ecx, [esi + 8]
// 006a1f83  83caff               or edx, 0xffffffff
// 006a1f86  f00fc111             lock xadd dword ptr [ecx], edx
// 006a1f8a  7509                 jne 0x6a1f95
// 006a1f8c  8b06                 mov eax, dword ptr [esi]
// 006a1f8e  8b5008               mov edx, dword ptr [eax + 8]
// 006a1f91  8bce                 mov ecx, esi
// 006a1f93  ffd2                 call edx
// 006a1f95  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a1f99  5e                   pop esi
// 006a1f9a  64890d00000000       mov dword ptr fs:[0], ecx
// 006a1fa1  83c410               add esp, 0x10
// 006a1fa4  c3                   ret 
// copied from an identical function in another client (function ??1?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp