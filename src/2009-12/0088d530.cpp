// roc 2009-12 0088d530  unit: CXTPControlEditCtrl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088d530
//
// 0088d530  8bc1                 mov eax, ecx
// 0088d532  33c9                 xor ecx, ecx
// 0088d534  c7005c31a000         mov dword ptr [eax], 0xa0315c
// 0088d53a  894804               mov dword ptr [eax + 4], ecx
// 0088d53d  894810               mov dword ptr [eax + 0x10], ecx
// 0088d540  89480c               mov dword ptr [eax + 0xc], ecx
// 0088d543  894808               mov dword ptr [eax + 8], ecx
// 0088d546  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
