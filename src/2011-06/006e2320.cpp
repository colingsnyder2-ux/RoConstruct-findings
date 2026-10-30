// roc 2011-06 006e2320  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e2320
//
// 006e2320  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e2324  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e2328  50                   push eax
// 006e2329  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e232d  52                   push edx
// 006e232e  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e2332  50                   push eax
// 006e2333  8b442424             mov eax, dword ptr [esp + 0x24]
// 006e2337  52                   push edx
// 006e2338  50                   push eax
// 006e2339  51                   push ecx
// 006e233a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e233e  51                   push ecx
// 006e233f  e8fcfeffff           call 0x6e2240
// copied from an identical function in another client (function ??$seek@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$concept_adapter@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@QAE?AV?$fpos@H@std@@_JHHPAV?$linked_streambuf@DU?$char_traits@D@std@@@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp