// roc 2009-12 007258d0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007258d0
//
// 007258d0  56                   push esi
// 007258d1  57                   push edi
// 007258d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007258d6  33f6                 xor esi, esi
// 007258d8  eb06                 jmp 0x7258e0
// 007258da  8d9b00000000         lea ebx, [ebx]
// 007258e0  8b0f                 mov ecx, dword ptr [edi]
// 007258e2  b801000000           mov eax, 1
// 007258e7  2bc6                 sub eax, esi
// 007258e9  50                   push eax
// 007258ea  8d543414             lea edx, [esp + esi + 0x14]
// 007258ee  52                   push edx
// 007258ef  ff153cb69800         call dword ptr [0x98b63c]
// 007258f5  03f0                 add esi, eax
// 007258f7  83fe01               cmp esi, 1
// 007258fa  7ce4                 jl 0x7258e0
// 007258fc  33c0                 xor eax, eax
// 007258fe  83fe01               cmp esi, 1
// 00725901  5f                   pop edi
// 00725902  0f94c0               sete al
// 00725905  5e                   pop esi
// 00725906  c3                   ret 
// copied from an identical function in another client (function ??$put@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$write_device_impl@Uoutput@iostreams@boost@@@detail@iostreams@boost@@SA_NAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@23@D@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp