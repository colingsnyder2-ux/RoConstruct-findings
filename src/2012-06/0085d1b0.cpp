// roc 2012-06 0085d1b0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085d1b0
//
// 0085d1b0  56                   push esi
// 0085d1b1  8b742408             mov esi, dword ptr [esp + 8]
// 0085d1b5  57                   push edi
// 0085d1b6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0085d1ba  56                   push esi
// 0085d1bb  57                   push edi
// 0085d1bc  e8bffbffff           call 0x85cd80
// 0085d1c1  8bc6                 mov eax, esi
// 0085d1c3  c1f808               sar eax, 8
// 0085d1c6  50                   push eax
// 0085d1c7  57                   push edi
// 0085d1c8  e8b3fbffff           call 0x85cd80
// 0085d1cd  8bce                 mov ecx, esi
// 0085d1cf  c1f910               sar ecx, 0x10
// 0085d1d2  51                   push ecx
// 0085d1d3  57                   push edi
// 0085d1d4  e8a7fbffff           call 0x85cd80
// 0085d1d9  c1fe18               sar esi, 0x18
// 0085d1dc  56                   push esi
// 0085d1dd  57                   push edi
// 0085d1de  e89dfbffff           call 0x85cd80
// 0085d1e3  83c420               add esp, 0x20
// 0085d1e6  5f                   pop edi
// 0085d1e7  5e                   pop esi
// 0085d1e8  c3                   ret 
// copied from an identical function in another client (function ??$write_long@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CAXJAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp