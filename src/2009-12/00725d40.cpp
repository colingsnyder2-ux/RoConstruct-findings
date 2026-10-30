// roc 2009-12 00725d40  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00725d40
//
// 00725d40  56                   push esi
// 00725d41  8b742408             mov esi, dword ptr [esp + 8]
// 00725d45  57                   push edi
// 00725d46  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00725d4a  56                   push esi
// 00725d4b  57                   push edi
// 00725d4c  e87ffbffff           call 0x7258d0
// 00725d51  8bc6                 mov eax, esi
// 00725d53  c1f808               sar eax, 8
// 00725d56  50                   push eax
// 00725d57  57                   push edi
// 00725d58  e873fbffff           call 0x7258d0
// 00725d5d  8bce                 mov ecx, esi
// 00725d5f  c1f910               sar ecx, 0x10
// 00725d62  51                   push ecx
// 00725d63  57                   push edi
// 00725d64  e867fbffff           call 0x7258d0
// 00725d69  c1fe18               sar esi, 0x18
// 00725d6c  56                   push esi
// 00725d6d  57                   push edi
// 00725d6e  e85dfbffff           call 0x7258d0
// 00725d73  83c420               add esp, 0x20
// 00725d76  5f                   pop edi
// 00725d77  5e                   pop esi
// 00725d78  c3                   ret 
// copied from an identical function in another client (function ??$write_long@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CAXJAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp