// roc 2012-06 0085b020  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085b020
//
// 0085b020  6aff                 push -1
// 0085b022  6834e3ac00           push 0xace334
// 0085b027  64a100000000         mov eax, dword ptr fs:[0]
// 0085b02d  50                   push eax
// 0085b02e  64892500000000       mov dword ptr fs:[0], esp
// 0085b035  51                   push ecx
// 0085b036  56                   push esi
// 0085b037  8bf1                 mov esi, ecx
// 0085b039  89742404             mov dword ptr [esp + 4], esi
// 0085b03d  8d4e24               lea ecx, [esi + 0x24]
// 0085b040  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0085b048  ff153c26b200         call dword ptr [0xb2263c]
// 0085b04e  8d4e08               lea ecx, [esi + 8]
// 0085b051  c644241000           mov byte ptr [esp + 0x10], 0
// 0085b056  ff153c26b200         call dword ptr [0xb2263c]
// 0085b05c  8b7604               mov esi, dword ptr [esi + 4]
// 0085b05f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0085b067  85f6                 test esi, esi
// 0085b069  742a                 je 0x85b095
// 0085b06b  8d4604               lea eax, [esi + 4]
// 0085b06e  83c9ff               or ecx, 0xffffffff
// 0085b071  f00fc108             lock xadd dword ptr [eax], ecx
// 0085b075  751e                 jne 0x85b095
// 0085b077  8b16                 mov edx, dword ptr [esi]
// 0085b079  8b4204               mov eax, dword ptr [edx + 4]
// 0085b07c  8bce                 mov ecx, esi
// 0085b07e  ffd0                 call eax
// 0085b080  8d4e08               lea ecx, [esi + 8]
// 0085b083  83caff               or edx, 0xffffffff
// 0085b086  f00fc111             lock xadd dword ptr [ecx], edx
// 0085b08a  7509                 jne 0x85b095
// 0085b08c  8b06                 mov eax, dword ptr [esi]
// 0085b08e  8b5008               mov edx, dword ptr [eax + 8]
// 0085b091  8bce                 mov ecx, esi
// 0085b093  ffd2                 call edx
// 0085b095  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085b099  5e                   pop esi
// 0085b09a  64890d00000000       mov dword ptr fs:[0], ecx
// 0085b0a1  83c410               add esp, 0x10
// 0085b0a4  c3                   ret 
// copied from an identical function in another client (function ??1?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp