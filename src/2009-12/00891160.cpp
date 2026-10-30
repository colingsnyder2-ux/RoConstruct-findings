// roc 2009-12 00891160  unit: ATL::CRegObject  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00891160
//
// 00891160  8bc1                 mov eax, ecx
// 00891162  33c9                 xor ecx, ecx
// 00891164  c700803aa000         mov dword ptr [eax], 0xa03a80
// 0089116a  894804               mov dword ptr [eax + 4], ecx
// 0089116d  894810               mov dword ptr [eax + 0x10], ecx
// 00891170  89480c               mov dword ptr [eax + 0xc], ecx
// 00891173  894808               mov dword ptr [eax + 8], ecx
// 00891176  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
