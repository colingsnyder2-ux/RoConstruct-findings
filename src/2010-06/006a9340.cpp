// roc 2010-06 006a9340  unit: VWiniInetRequest_source::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a9340
//
// 006a9340  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a9344  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006a9348  50                   push eax
// 006a9349  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a934d  52                   push edx
// 006a934e  99                   cdq 
// 006a934f  52                   push edx
// 006a9350  50                   push eax
// 006a9351  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a9355  50                   push eax
// 006a9356  e8b5fbffff           call 0x6a8f10
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp