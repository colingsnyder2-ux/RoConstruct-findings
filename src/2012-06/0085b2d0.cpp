// roc 2012-06 0085b2d0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085b2d0
//
// 0085b2d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085b2d4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0085b2d8  50                   push eax
// 0085b2d9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085b2dd  52                   push edx
// 0085b2de  99                   cdq 
// 0085b2df  52                   push edx
// 0085b2e0  50                   push eax
// 0085b2e1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085b2e5  50                   push eax
// 0085b2e6  e885fbffff           call 0x85ae70
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp