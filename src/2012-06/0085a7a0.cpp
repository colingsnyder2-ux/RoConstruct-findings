// roc 2012-06 0085a7a0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085a7a0
//
// 0085a7a0  51                   push ecx
// 0085a7a1  8b0424               mov eax, dword ptr [esp]
// 0085a7a4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085a7a8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085a7ac  50                   push eax
// 0085a7ad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085a7b1  51                   push ecx
// 0085a7b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085a7b6  52                   push edx
// 0085a7b7  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085a7bb  50                   push eax
// 0085a7bc  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085a7c0  51                   push ecx
// 0085a7c1  52                   push edx
// 0085a7c2  50                   push eax
// 0085a7c3  e8b8ffffff           call 0x85a780
// copied from an identical function in another client (function ??$seek@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$device_wrapper_impl@Uany_tag@iostreams@boost@@@detail@iostreams@boost@@SA?AV?$fpos@H@std@@AAV?$basic_null_device@DUoutput@iostreams@boost@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@_JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp