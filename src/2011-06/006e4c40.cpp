// roc 2011-06 006e4c40  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4c40
//
// 006e4c40  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e4c44  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e4c48  50                   push eax
// 006e4c49  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e4c4d  52                   push edx
// 006e4c4e  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e4c52  50                   push eax
// 006e4c53  8b442424             mov eax, dword ptr [esp + 0x24]
// 006e4c57  52                   push edx
// 006e4c58  50                   push eax
// 006e4c59  51                   push ecx
// 006e4c5a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e4c5e  51                   push ecx
// 006e4c5f  e8bcfeffff           call 0x6e4b20
// copied from an identical function in another client (function ??$seek@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$concept_adapter@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@QAE?AV?$fpos@H@std@@_JHHPAV?$linked_streambuf@DU?$char_traits@D@std@@@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp