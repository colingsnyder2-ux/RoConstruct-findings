// roc 2011-06 006e9e60  unit: VWiniInetRequest_source::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e9e60
//
// 006e9e60  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e9e64  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006e9e68  50                   push eax
// 006e9e69  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e9e6d  52                   push edx
// 006e9e6e  99                   cdq 
// 006e9e6f  52                   push edx
// 006e9e70  50                   push eax
// 006e9e71  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e9e75  50                   push eax
// 006e9e76  e835fcffff           call 0x6e9ab0
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp