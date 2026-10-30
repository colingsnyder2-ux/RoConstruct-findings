// roc 2012-06 0085c3b0  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085c3b0
//
// 0085c3b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085c3b4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0085c3b8  50                   push eax
// 0085c3b9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085c3bd  52                   push edx
// 0085c3be  99                   cdq 
// 0085c3bf  52                   push edx
// 0085c3c0  50                   push eax
// 0085c3c1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085c3c5  50                   push eax
// 0085c3c6  e855f5ffff           call 0x85b920
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp