// roc 2010-06 006a0280  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0280
//
// 006a0280  8b09                 mov ecx, dword ptr [ecx]
// 006a0282  85c9                 test ecx, ecx
// 006a0284  7408                 je 0x6a028e
// 006a0286  8b01                 mov eax, dword ptr [ecx]
// 006a0288  8b10                 mov edx, dword ptr [eax]
// 006a028a  6a01                 push 1
// 006a028c  ffd2                 call edx
// 006a028e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??1any@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
