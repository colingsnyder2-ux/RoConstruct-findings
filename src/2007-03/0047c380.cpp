// roc 2007-03 0047c380  unit: seg_00470000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047c380
//
// 0047c380  8bc1                 mov eax, ecx
// 0047c382  33c9                 xor ecx, ecx
// 0047c384  894804               mov dword ptr [eax + 4], ecx
// 0047c387  894808               mov dword ptr [eax + 8], ecx
// 0047c38a  8908                 mov dword ptr [eax], ecx
// 0047c38c  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ??0?$Array@PAVPrimitive@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
