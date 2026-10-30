// roc 2011-06 006e5030  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e5030
//
// 006e5030  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e5034  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006e5038  50                   push eax
// 006e5039  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e503d  52                   push edx
// 006e503e  99                   cdq 
// 006e503f  52                   push edx
// 006e5040  50                   push eax
// 006e5041  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e5045  50                   push eax
// 006e5046  e815feffff           call 0x6e4e60
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp