// roc 2011-06 006e4bd0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4bd0
//
// 006e4bd0  56                   push esi
// 006e4bd1  57                   push edi
// 006e4bd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e4bd6  33f6                 xor esi, esi
// 006e4bd8  eb06                 jmp 0x6e4be0
// 006e4bda  8d9b00000000         lea ebx, [ebx]
// 006e4be0  8b0f                 mov ecx, dword ptr [edi]
// 006e4be2  b801000000           mov eax, 1
// 006e4be7  2bc6                 sub eax, esi
// 006e4be9  50                   push eax
// 006e4bea  8d543414             lea edx, [esp + esi + 0x14]
// 006e4bee  52                   push edx
// 006e4bef  ff150004a400         call dword ptr [0xa40400]
// 006e4bf5  03f0                 add esi, eax
// 006e4bf7  83fe01               cmp esi, 1
// 006e4bfa  7ce4                 jl 0x6e4be0
// 006e4bfc  33c0                 xor eax, eax
// 006e4bfe  83fe01               cmp esi, 1
// 006e4c01  5f                   pop edi
// 006e4c02  0f94c0               sete al
// 006e4c05  5e                   pop esi
// 006e4c06  c3                   ret 
// copied from an identical function in another client (function ??$put@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$write_device_impl@Uoutput@iostreams@boost@@@detail@iostreams@boost@@SA_NAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@23@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp