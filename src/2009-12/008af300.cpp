// roc 2009-12 008af300  unit: CXTPDockingPaneMiniWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008af300
//
// 008af300  8bc1                 mov eax, ecx
// 008af302  33c9                 xor ecx, ecx
// 008af304  c7009870a000         mov dword ptr [eax], 0xa07098
// 008af30a  894804               mov dword ptr [eax + 4], ecx
// 008af30d  894810               mov dword ptr [eax + 0x10], ecx
// 008af310  89480c               mov dword ptr [eax + 0xc], ecx
// 008af313  894808               mov dword ptr [eax + 8], ecx
// 008af316  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
