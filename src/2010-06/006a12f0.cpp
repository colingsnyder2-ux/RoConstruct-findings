// roc 2010-06 006a12f0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a12f0
//
// 006a12f0  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a12f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a12f8  50                   push eax
// 006a12f9  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a12fd  52                   push edx
// 006a12fe  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a1302  50                   push eax
// 006a1303  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a1307  52                   push edx
// 006a1308  50                   push eax
// 006a1309  51                   push ecx
// 006a130a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a130e  51                   push ecx
// 006a130f  e8acfeffff           call 0x6a11c0
// copied from an identical function in another client (function ??$seek@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$concept_adapter@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@QAE?AV?$fpos@H@std@@_JHHPAV?$linked_streambuf@DU?$char_traits@D@std@@@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp