// from server: 100% by auto
// roc 2011-06 00404c10  unit: ATL::CRegObject  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00404c10
//
// 00404c10  8b09                 mov ecx, dword ptr [ecx]
// 00404c12  85c9                 test ecx, ecx
// 00404c14  7408                 je 0x404c1e
// 00404c16  8b01                 mov eax, dword ptr [ecx]
// 00404c18  8b10                 mov edx, dword ptr [eax]
// 00404c1a  6a01                 push 1
// 00404c1c  ffd2                 call edx
// 00404c1e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??1any@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
