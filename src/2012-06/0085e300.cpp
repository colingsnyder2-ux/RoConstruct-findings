// roc 2012-06 0085e300  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085e300
//
// 0085e300  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0085e304  83ec34               sub esp, 0x34
// 0085e307  6a01                 push 1
// 0085e309  8d442407             lea eax, [esp + 7]
// 0085e30d  50                   push eax
// 0085e30e  e80df7ffff           call 0x85da20
// 0085e313  83f801               cmp eax, 1
// 0085e316  750f                 jne 0x85e327
// 0085e318  0fb6442403           movzx eax, byte ptr [esp + 3]
// 0085e31d  83f8ff               cmp eax, -1
// 0085e320  7405                 je 0x85e327
// 0085e322  83f8fe               cmp eax, -2
// 0085e325  751d                 jne 0x85e344
// 0085e327  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0085e32b  51                   push ecx
// 0085e32c  8d4c2408             lea ecx, [esp + 8]
// 0085e330  e88bf1ffff           call 0x85d4c0
// 0085e335  68182cd200           push 0xd22c18
// 0085e33a  8d542408             lea edx, [esp + 8]
// 0085e33e  52                   push edx
// 0085e33f  e8004e1200           call 0x983144
// 0085e344  83c434               add esp, 0x34
// 0085e347  c3                   ret 
// copied from an identical function in another client (function ??$read_uint8@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAEAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp