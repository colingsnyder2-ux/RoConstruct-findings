// roc 2012-06 0085cdf0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085cdf0
//
// 0085cdf0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085cdf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085cdf8  50                   push eax
// 0085cdf9  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085cdfd  52                   push edx
// 0085cdfe  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085ce02  50                   push eax
// 0085ce03  8b442424             mov eax, dword ptr [esp + 0x24]
// 0085ce07  52                   push edx
// 0085ce08  50                   push eax
// 0085ce09  51                   push ecx
// 0085ce0a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085ce0e  51                   push ecx
// 0085ce0f  e8bcfeffff           call 0x85ccd0
// copied from an identical function in another client (function ??$seek@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$concept_adapter@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@QAE?AV?$fpos@H@std@@_JHHPAV?$linked_streambuf@DU?$char_traits@D@std@@@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp