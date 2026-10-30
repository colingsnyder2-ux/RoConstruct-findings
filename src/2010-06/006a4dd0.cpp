// roc 2010-06 006a4dd0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a4dd0
//
// 006a4dd0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a4dd4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006a4dd8  50                   push eax
// 006a4dd9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a4ddd  52                   push edx
// 006a4dde  99                   cdq 
// 006a4ddf  52                   push edx
// 006a4de0  50                   push eax
// 006a4de1  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a4de5  50                   push eax
// 006a4de6  e8b5fcffff           call 0x6a4aa0
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp