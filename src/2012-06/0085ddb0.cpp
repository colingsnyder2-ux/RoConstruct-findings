// roc 2012-06 0085ddb0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085ddb0
//
// 0085ddb0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085ddb4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0085ddb8  50                   push eax
// 0085ddb9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085ddbd  52                   push edx
// 0085ddbe  99                   cdq 
// 0085ddbf  52                   push edx
// 0085ddc0  50                   push eax
// 0085ddc1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085ddc5  50                   push eax
// 0085ddc6  e8b5fcffff           call 0x85da80
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp