// roc 2011-06 006e4290  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4290
//
// 006e4290  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e4294  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006e4298  50                   push eax
// 006e4299  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e429d  52                   push edx
// 006e429e  99                   cdq 
// 006e429f  52                   push edx
// 006e42a0  50                   push eax
// 006e42a1  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e42a5  50                   push eax
// 006e42a6  e8d5f4ffff           call 0x6e3780
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp