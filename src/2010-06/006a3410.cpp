// roc 2010-06 006a3410  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a3410
//
// 006a3410  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a3414  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006a3418  50                   push eax
// 006a3419  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a341d  52                   push edx
// 006a341e  99                   cdq 
// 006a341f  52                   push edx
// 006a3420  50                   push eax
// 006a3421  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a3425  50                   push eax
// 006a3426  e8d5f4ffff           call 0x6a2900
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp