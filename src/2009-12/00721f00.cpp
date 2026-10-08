// roc 2009-12 00721f00  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00721f00
//
// 00721f00  8b09                 mov ecx, dword ptr [ecx]
// 00721f02  85c9                 test ecx, ecx
// 00721f04  7408                 je 0x721f0e
// 00721f06  8b01                 mov eax, dword ptr [ecx]
// 00721f08  8b10                 mov edx, dword ptr [eax]
// 00721f0a  6a01                 push 1
// 00721f0c  ffd2                 call edx
// 00721f0e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??1any@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
