// roc 2012-06 00862270  unit: VWiniInetRequest_source::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00862270
//
// 00862270  8b442410             mov eax, dword ptr [esp + 0x10]
// 00862274  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00862278  50                   push eax
// 00862279  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086227d  52                   push edx
// 0086227e  99                   cdq 
// 0086227f  52                   push edx
// 00862280  50                   push eax
// 00862281  8b442414             mov eax, dword ptr [esp + 0x14]
// 00862285  50                   push eax
// 00862286  e835fcffff           call 0x861ec0
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp