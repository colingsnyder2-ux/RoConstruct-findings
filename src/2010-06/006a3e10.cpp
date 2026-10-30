// roc 2010-06 006a3e10  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a3e10
//
// 006a3e10  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a3e14  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a3e18  50                   push eax
// 006a3e19  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a3e1d  52                   push edx
// 006a3e1e  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a3e22  50                   push eax
// 006a3e23  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a3e27  52                   push edx
// 006a3e28  50                   push eax
// 006a3e29  51                   push ecx
// 006a3e2a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a3e2e  51                   push ecx
// 006a3e2f  e83cffffff           call 0x6a3d70
// copied from an identical function in another client (function ??$seek@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$concept_adapter@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@QAE?AV?$fpos@H@std@@_JHHPAV?$linked_streambuf@DU?$char_traits@D@std@@@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp