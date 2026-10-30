// roc 2010-06 006a11c0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a11c0
//
// 006a11c0  51                   push ecx
// 006a11c1  8b0424               mov eax, dword ptr [esp]
// 006a11c4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006a11c8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006a11cc  50                   push eax
// 006a11cd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a11d1  51                   push ecx
// 006a11d2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a11d6  52                   push edx
// 006a11d7  8b542418             mov edx, dword ptr [esp + 0x18]
// 006a11db  50                   push eax
// 006a11dc  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a11e0  51                   push ecx
// 006a11e1  52                   push edx
// 006a11e2  50                   push eax
// 006a11e3  e8b8ffffff           call 0x6a11a0
// copied from an identical function in another client (function ??$seek@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$device_wrapper_impl@Uany_tag@iostreams@boost@@@detail@iostreams@boost@@SA?AV?$fpos@H@std@@AAV?$basic_null_device@DUoutput@iostreams@boost@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@_JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp