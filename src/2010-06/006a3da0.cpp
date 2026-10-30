// roc 2010-06 006a3da0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a3da0
//
// 006a3da0  56                   push esi
// 006a3da1  57                   push edi
// 006a3da2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a3da6  33f6                 xor esi, esi
// 006a3da8  eb06                 jmp 0x6a3db0
// 006a3daa  8d9b00000000         lea ebx, [ebx]
// 006a3db0  8b0f                 mov ecx, dword ptr [edi]
// 006a3db2  b801000000           mov eax, 1
// 006a3db7  2bc6                 sub eax, esi
// 006a3db9  50                   push eax
// 006a3dba  8d543414             lea edx, [esp + esi + 0x14]
// 006a3dbe  52                   push edx
// 006a3dbf  ff15cca49e00         call dword ptr [0x9ea4cc]
// 006a3dc5  03f0                 add esi, eax
// 006a3dc7  83fe01               cmp esi, 1
// 006a3dca  7ce4                 jl 0x6a3db0
// 006a3dcc  33c0                 xor eax, eax
// 006a3dce  83fe01               cmp esi, 1
// 006a3dd1  5f                   pop edi
// 006a3dd2  0f94c0               sete al
// 006a3dd5  5e                   pop esi
// 006a3dd6  c3                   ret 
// copied from an identical function in another client (function ??$put@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$write_device_impl@Uoutput@iostreams@boost@@@detail@iostreams@boost@@SA_NAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@23@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp