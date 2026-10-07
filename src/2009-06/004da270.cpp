// roc 2009-06 004da270  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004da270
//
// 004da270  8b09                 mov ecx, dword ptr [ecx]
// 004da272  85c9                 test ecx, ecx
// 004da274  7408                 je 0x4da27e
// 004da276  8b01                 mov eax, dword ptr [ecx]
// 004da278  8b10                 mov edx, dword ptr [eax]
// 004da27a  6a01                 push 1
// 004da27c  ffd2                 call edx
// 004da27e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??1any@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
