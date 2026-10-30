// roc 2011-06 006e60a0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e60a0
//
// 006e60a0  51                   push ecx
// 006e60a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e60a5  6a01                 push 1
// 006e60a7  8d442407             lea eax, [esp + 7]
// 006e60ab  50                   push eax
// 006e60ac  e83ff7ffff           call 0x6e57f0
// 006e60b1  83f801               cmp eax, 1
// 006e60b4  7507                 jne 0x6e60bd
// 006e60b6  0fb6442403           movzx eax, byte ptr [esp + 3]
// 006e60bb  59                   pop ecx
// 006e60bc  c3                   ret 
// 006e60bd  33c9                 xor ecx, ecx
// 006e60bf  83f8ff               cmp eax, -1
// 006e60c2  0f94c1               sete cl
// 006e60c5  83c1fe               add ecx, -2
// 006e60c8  8bc1                 mov eax, ecx
// 006e60ca  59                   pop ecx
// 006e60cb  c3                   ret 
// copied from an identical function in another client (function ??$get@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$read_device_impl@Uinput@iostreams@boost@@@detail@iostreams@boost@@SAHAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp