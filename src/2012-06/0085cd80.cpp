// roc 2012-06 0085cd80  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085cd80
//
// 0085cd80  56                   push esi
// 0085cd81  57                   push edi
// 0085cd82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085cd86  33f6                 xor esi, esi
// 0085cd88  eb06                 jmp 0x85cd90
// 0085cd8a  8d9b00000000         lea ebx, [ebx]
// 0085cd90  8b0f                 mov ecx, dword ptr [edi]
// 0085cd92  b801000000           mov eax, 1
// 0085cd97  2bc6                 sub eax, esi
// 0085cd99  50                   push eax
// 0085cd9a  8d543414             lea edx, [esp + esi + 0x14]
// 0085cd9e  52                   push edx
// 0085cd9f  ff151426b200         call dword ptr [0xb22614]
// 0085cda5  03f0                 add esi, eax
// 0085cda7  83fe01               cmp esi, 1
// 0085cdaa  7ce4                 jl 0x85cd90
// 0085cdac  33c0                 xor eax, eax
// 0085cdae  83fe01               cmp esi, 1
// 0085cdb1  5f                   pop edi
// 0085cdb2  0f94c0               sete al
// 0085cdb5  5e                   pop esi
// 0085cdb6  c3                   ret 
// copied from an identical function in another client (function ??$put@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$write_device_impl@Uoutput@iostreams@boost@@@detail@iostreams@boost@@SA_NAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@23@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp