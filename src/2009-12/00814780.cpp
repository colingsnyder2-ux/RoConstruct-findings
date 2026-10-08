// roc 2009-12 00814780  unit: CRobloxControlColorSelector  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814780
//
// 00814780  8bc1                 mov eax, ecx
// 00814782  33c9                 xor ecx, ecx
// 00814784  c700943d9f00         mov dword ptr [eax], 0x9f3d94
// 0081478a  894804               mov dword ptr [eax + 4], ecx
// 0081478d  894810               mov dword ptr [eax + 0x10], ecx
// 00814790  89480c               mov dword ptr [eax + 0xc], ecx
// 00814793  894808               mov dword ptr [eax + 8], ecx
// 00814796  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
