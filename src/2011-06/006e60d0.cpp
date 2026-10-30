// roc 2011-06 006e60d0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e60d0
//
// 006e60d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e60d4  83ec34               sub esp, 0x34
// 006e60d7  6a01                 push 1
// 006e60d9  8d442407             lea eax, [esp + 7]
// 006e60dd  50                   push eax
// 006e60de  e80df7ffff           call 0x6e57f0
// 006e60e3  83f801               cmp eax, 1
// 006e60e6  750f                 jne 0x6e60f7
// 006e60e8  0fb6442403           movzx eax, byte ptr [esp + 3]
// 006e60ed  83f8ff               cmp eax, -1
// 006e60f0  7405                 je 0x6e60f7
// 006e60f2  83f8fe               cmp eax, -2
// 006e60f5  751d                 jne 0x6e6114
// 006e60f7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006e60fb  51                   push ecx
// 006e60fc  8d4c2408             lea ecx, [esp + 8]
// 006e6100  e8fbf1ffff           call 0x6e5300
// 006e6105  68300abc00           push 0xbc0a30
// 006e610a  8d542408             lea edx, [esp + 8]
// 006e610e  52                   push edx
// 006e610f  e8984f1200           call 0x80b0ac
// 006e6114  83c434               add esp, 0x34
// 006e6117  c3                   ret 
// copied from an identical function in another client (function ??$read_uint8@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAEAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp