// roc 2010-06 006a4290  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a4290
//
// 006a4290  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a4294  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006a4298  50                   push eax
// 006a4299  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a429d  52                   push edx
// 006a429e  99                   cdq 
// 006a429f  52                   push edx
// 006a42a0  50                   push eax
// 006a42a1  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a42a5  50                   push eax
// 006a42a6  e815feffff           call 0x6a40c0
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp