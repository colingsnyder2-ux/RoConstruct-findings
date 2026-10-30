// roc 2011-06 006e2fa0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e2fa0
//
// 006e2fa0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e2fa4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006e2fa8  50                   push eax
// 006e2fa9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e2fad  52                   push edx
// 006e2fae  99                   cdq 
// 006e2faf  52                   push edx
// 006e2fb0  50                   push eax
// 006e2fb1  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e2fb5  50                   push eax
// 006e2fb6  e8a5fcffff           call 0x6e2c60
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp