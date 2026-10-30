// roc 2009-12 00726ea0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00726ea0
//
// 00726ea0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00726ea4  83ec34               sub esp, 0x34
// 00726ea7  6a01                 push 1
// 00726ea9  8d442407             lea eax, [esp + 7]
// 00726ead  50                   push eax
// 00726eae  e80df7ffff           call 0x7265c0
// 00726eb3  83f801               cmp eax, 1
// 00726eb6  750f                 jne 0x726ec7
// 00726eb8  0fb6442403           movzx eax, byte ptr [esp + 3]
// 00726ebd  83f8ff               cmp eax, -1
// 00726ec0  7405                 je 0x726ec7
// 00726ec2  83f8fe               cmp eax, -2
// 00726ec5  751d                 jne 0x726ee4
// 00726ec7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00726ecb  51                   push ecx
// 00726ecc  8d4c2408             lea ecx, [esp + 8]
// 00726ed0  e87bf1ffff           call 0x726050
// 00726ed5  68188aac00           push 0xac8a18
// 00726eda  8d542408             lea edx, [esp + 8]
// 00726ede  52                   push edx
// 00726edf  e894d90c00           call 0x7f4878
// 00726ee4  83c434               add esp, 0x34
// 00726ee7  c3                   ret 
// copied from an identical function in another client (function ??$read_uint8@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAEAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp