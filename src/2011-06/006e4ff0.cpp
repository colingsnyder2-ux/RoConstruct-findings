// roc 2011-06 006e4ff0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4ff0
//
// 006e4ff0  56                   push esi
// 006e4ff1  8b742408             mov esi, dword ptr [esp + 8]
// 006e4ff5  57                   push edi
// 006e4ff6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006e4ffa  56                   push esi
// 006e4ffb  57                   push edi
// 006e4ffc  e8cffbffff           call 0x6e4bd0
// 006e5001  8bc6                 mov eax, esi
// 006e5003  c1f808               sar eax, 8
// 006e5006  50                   push eax
// 006e5007  57                   push edi
// 006e5008  e8c3fbffff           call 0x6e4bd0
// 006e500d  8bce                 mov ecx, esi
// 006e500f  c1f910               sar ecx, 0x10
// 006e5012  51                   push ecx
// 006e5013  57                   push edi
// 006e5014  e8b7fbffff           call 0x6e4bd0
// 006e5019  c1fe18               sar esi, 0x18
// 006e501c  56                   push esi
// 006e501d  57                   push edi
// 006e501e  e8adfbffff           call 0x6e4bd0
// 006e5023  83c420               add esp, 0x20
// 006e5026  5f                   pop edi
// 006e5027  5e                   pop esi
// 006e5028  c3                   ret 
// copied from an identical function in another client (function ??$write_long@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CAXJAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp