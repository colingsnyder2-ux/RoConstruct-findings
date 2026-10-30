// roc 2007-08 0054d430  unit: std::D::V?$allocator::V?$zlib_compressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d430
//
// 0054d430  6aff                 push -1
// 0054d432  68e8267500           push 0x7526e8
// 0054d437  64a100000000         mov eax, dword ptr fs:[0]
// 0054d43d  50                   push eax
// 0054d43e  64892500000000       mov dword ptr fs:[0], esp
// 0054d445  51                   push ecx
// 0054d446  56                   push esi
// 0054d447  8bf1                 mov esi, ecx
// 0054d449  8b4608               mov eax, dword ptr [esi + 8]
// 0054d44c  c706c47a7a00         mov dword ptr [esi], 0x7a7ac4
// 0054d452  8b4804               mov ecx, dword ptr [eax + 4]
// 0054d455  89742404             mov dword ptr [esp + 4], esi
// 0054d459  c7443108bc7a7a00     mov dword ptr [ecx + esi + 8], 0x7a7abc
// 0054d461  8b4604               mov eax, dword ptr [esi + 4]
// 0054d464  8b00                 mov eax, dword ptr [eax]
// 0054d466  f6401c01             test byte ptr [eax + 0x1c], 1
// 0054d46a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054d472  7410                 je 0x54d484
// 0054d474  8b5608               mov edx, dword ptr [esi + 8]
// 0054d477  8b4204               mov eax, dword ptr [edx + 4]
// 0054d47a  8b4c3030             mov ecx, dword ptr [eax + esi + 0x30]
// 0054d47e  ff1504e67700         call dword ptr [0x77e604]
// 0054d484  8bce                 mov ecx, esi
// 0054d486  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0054d48e  e82df1ffff           call 0x54c5c0
// 0054d493  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054d497  5e                   pop esi
// 0054d498  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d49f  83c410               add esp, 0x10
// 0054d4a2  c3                   ret 
// copied from an identical function in another client (function ??1?$filtering_stream@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Upublic_@23@@iostreams@boost@@UAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_1a066d61bcfa73c0.cpp