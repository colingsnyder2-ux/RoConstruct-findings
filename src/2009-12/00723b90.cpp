// roc 2009-12 00723b90  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00723b90
//
// 00723b90  6aff                 push -1
// 00723b92  6824ed9400           push 0x94ed24
// 00723b97  64a100000000         mov eax, dword ptr fs:[0]
// 00723b9d  50                   push eax
// 00723b9e  64892500000000       mov dword ptr fs:[0], esp
// 00723ba5  51                   push ecx
// 00723ba6  56                   push esi
// 00723ba7  8bf1                 mov esi, ecx
// 00723ba9  89742404             mov dword ptr [esp + 4], esi
// 00723bad  8d4e24               lea ecx, [esi + 0x24]
// 00723bb0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00723bb8  ff15e4b69800         call dword ptr [0x98b6e4]
// 00723bbe  8d4e08               lea ecx, [esi + 8]
// 00723bc1  c644241000           mov byte ptr [esp + 0x10], 0
// 00723bc6  ff15e4b69800         call dword ptr [0x98b6e4]
// 00723bcc  8b7604               mov esi, dword ptr [esi + 4]
// 00723bcf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00723bd7  85f6                 test esi, esi
// 00723bd9  742a                 je 0x723c05
// 00723bdb  8d4604               lea eax, [esi + 4]
// 00723bde  83c9ff               or ecx, 0xffffffff
// 00723be1  f00fc108             lock xadd dword ptr [eax], ecx
// 00723be5  751e                 jne 0x723c05
// 00723be7  8b16                 mov edx, dword ptr [esi]
// 00723be9  8b4204               mov eax, dword ptr [edx + 4]
// 00723bec  8bce                 mov ecx, esi
// 00723bee  ffd0                 call eax
// 00723bf0  8d4e08               lea ecx, [esi + 8]
// 00723bf3  83caff               or edx, 0xffffffff
// 00723bf6  f00fc111             lock xadd dword ptr [ecx], edx
// 00723bfa  7509                 jne 0x723c05
// 00723bfc  8b06                 mov eax, dword ptr [esi]
// 00723bfe  8b5008               mov edx, dword ptr [eax + 8]
// 00723c01  8bce                 mov ecx, esi
// 00723c03  ffd2                 call edx
// 00723c05  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00723c09  5e                   pop esi
// 00723c0a  64890d00000000       mov dword ptr fs:[0], ecx
// 00723c11  83c410               add esp, 0x10
// 00723c14  c3                   ret 
// copied from an identical function in another client (function ??1?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp