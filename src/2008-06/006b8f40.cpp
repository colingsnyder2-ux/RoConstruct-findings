// from server: 100% by auto
// roc 2008-06 006b8f40  unit: CXTPCommandBar  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b8f40
//
// 006b8f40  8b09                 mov ecx, dword ptr [ecx]
// 006b8f42  85c9                 test ecx, ecx
// 006b8f44  7408                 je 0x6b8f4e
// 006b8f46  8b01                 mov eax, dword ptr [ecx]
// 006b8f48  8b10                 mov edx, dword ptr [eax]
// 006b8f4a  6a01                 push 1
// 006b8f4c  ffd2                 call edx
// 006b8f4e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??1any@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
