// roc 2012-06 0085d1f0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085d1f0
//
// 0085d1f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085d1f4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0085d1f8  50                   push eax
// 0085d1f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085d1fd  52                   push edx
// 0085d1fe  99                   cdq 
// 0085d1ff  52                   push edx
// 0085d200  50                   push eax
// 0085d201  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085d205  50                   push eax
// 0085d206  e815feffff           call 0x85d020
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp