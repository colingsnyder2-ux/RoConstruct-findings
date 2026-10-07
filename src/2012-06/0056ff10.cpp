// roc 2012-06 0056ff10  unit: RBX::Network::IdSerializer  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056ff10
//
// 0056ff10  8b09                 mov ecx, dword ptr [ecx]
// 0056ff12  85c9                 test ecx, ecx
// 0056ff14  7408                 je 0x56ff1e
// 0056ff16  8b01                 mov eax, dword ptr [ecx]
// 0056ff18  8b10                 mov edx, dword ptr [eax]
// 0056ff1a  6a01                 push 1
// 0056ff1c  ffd2                 call edx
// 0056ff1e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??1any@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
