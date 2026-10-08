// roc 2009-12 0080b6b0  unit: CXTPImageManagerResource::CBitmapDC  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080b6b0
//
// 0080b6b0  8bc1                 mov eax, ecx
// 0080b6b2  33c9                 xor ecx, ecx
// 0080b6b4  c700d8309f00         mov dword ptr [eax], 0x9f30d8
// 0080b6ba  894804               mov dword ptr [eax + 4], ecx
// 0080b6bd  894810               mov dword ptr [eax + 0x10], ecx
// 0080b6c0  89480c               mov dword ptr [eax + 0xc], ecx
// 0080b6c3  894808               mov dword ptr [eax + 8], ecx
// 0080b6c6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
