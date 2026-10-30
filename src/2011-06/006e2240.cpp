// roc 2011-06 006e2240  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e2240
//
// 006e2240  51                   push ecx
// 006e2241  8b0424               mov eax, dword ptr [esp]
// 006e2244  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006e2248  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006e224c  50                   push eax
// 006e224d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e2251  51                   push ecx
// 006e2252  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e2256  52                   push edx
// 006e2257  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e225b  50                   push eax
// 006e225c  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e2260  51                   push ecx
// 006e2261  52                   push edx
// 006e2262  50                   push eax
// 006e2263  e8f8270000           call 0x6e4a60
// copied from an identical function in another client (function ??$seek@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$device_wrapper_impl@Uany_tag@iostreams@boost@@@detail@iostreams@boost@@SA?AV?$fpos@H@std@@AAV?$basic_null_device@DUoutput@iostreams@boost@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@_JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp