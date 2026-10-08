// from server: 100% by auto
// roc 2007-08 00458090  unit: CRobloxWnd  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00458090
//
// 00458090  8b09                 mov ecx, dword ptr [ecx]
// 00458092  85c9                 test ecx, ecx
// 00458094  7408                 je 0x45809e
// 00458096  8b01                 mov eax, dword ptr [ecx]
// 00458098  8b10                 mov edx, dword ptr [eax]
// 0045809a  6a01                 push 1
// 0045809c  ffd2                 call edx
// 0045809e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??1any@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
