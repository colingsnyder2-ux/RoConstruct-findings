// roc 2010-06 006a5320  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a5320
//
// 006a5320  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a5324  83ec34               sub esp, 0x34
// 006a5327  6a01                 push 1
// 006a5329  8d442407             lea eax, [esp + 7]
// 006a532d  50                   push eax
// 006a532e  e80df7ffff           call 0x6a4a40
// 006a5333  83f801               cmp eax, 1
// 006a5336  750f                 jne 0x6a5347
// 006a5338  0fb6442403           movzx eax, byte ptr [esp + 3]
// 006a533d  83f8ff               cmp eax, -1
// 006a5340  7405                 je 0x6a5347
// 006a5342  83f8fe               cmp eax, -2
// 006a5345  751d                 jne 0x6a5364
// 006a5347  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006a534b  51                   push ecx
// 006a534c  8d4c2408             lea ecx, [esp + 8]
// 006a5350  e80bf2ffff           call 0x6a4560
// 006a5355  685872b300           push 0xb37258
// 006a535a  8d542408             lea edx, [esp + 8]
// 006a535e  52                   push edx
// 006a535f  e84e361000           call 0x7a89b2
// 006a5364  83c434               add esp, 0x34
// 006a5367  c3                   ret 
// copied from an identical function in another client (function ??$read_uint8@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAEAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp