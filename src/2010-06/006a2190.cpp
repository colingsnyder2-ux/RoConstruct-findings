// roc 2010-06 006a2190  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a2190
//
// 006a2190  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a2194  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006a2198  50                   push eax
// 006a2199  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a219d  52                   push edx
// 006a219e  99                   cdq 
// 006a219f  52                   push edx
// 006a21a0  50                   push eax
// 006a21a1  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a21a5  50                   push eax
// 006a21a6  e8c5fbffff           call 0x6a1d70
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp