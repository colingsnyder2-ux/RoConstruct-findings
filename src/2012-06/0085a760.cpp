// roc 2012-06 0085a760  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085a760
//
// 0085a760  8d4424d8             lea eax, [esp - 0x28]
// 0085a764  83ec28               sub esp, 0x28
// 0085a767  50                   push eax
// 0085a768  e863f6ffff           call 0x859dd0
// 0085a76d  83c404               add esp, 4
// 0085a770  68e01dd200           push 0xd21de0
// 0085a775  8d4c2404             lea ecx, [esp + 4]
// 0085a779  51                   push ecx
// 0085a77a  e8c5891200           call 0x983144
// copied from an identical function in another client (function ??$read@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$device_wrapper_impl@Uoutput@iostreams@boost@@@detail@iostreams@boost@@SAHAAV?$basic_null_device@DUoutput@iostreams@boost@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@PADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp