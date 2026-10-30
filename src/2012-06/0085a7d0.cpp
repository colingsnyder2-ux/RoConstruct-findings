// roc 2012-06 0085a7d0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085a7d0
//
// 0085a7d0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085a7d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085a7d8  50                   push eax
// 0085a7d9  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085a7dd  52                   push edx
// 0085a7de  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085a7e2  50                   push eax
// 0085a7e3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0085a7e7  52                   push edx
// 0085a7e8  50                   push eax
// 0085a7e9  51                   push ecx
// 0085a7ea  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085a7ee  51                   push ecx
// 0085a7ef  e8acffffff           call 0x85a7a0
// copied from an identical function in another client (function ??$seek@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$concept_adapter@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@QAE?AV?$fpos@H@std@@_JHHPAV?$linked_streambuf@DU?$char_traits@D@std@@@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp