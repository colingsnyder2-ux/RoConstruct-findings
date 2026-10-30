// roc 2009-12 00840b40  unit: CXTPCustomizeCommandsPage  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00840b40
//
// 00840b40  8bc1                 mov eax, ecx
// 00840b42  33c9                 xor ecx, ecx
// 00840b44  c700909b9f00         mov dword ptr [eax], 0x9f9b90
// 00840b4a  894804               mov dword ptr [eax + 4], ecx
// 00840b4d  894810               mov dword ptr [eax + 0x10], ecx
// 00840b50  89480c               mov dword ptr [eax + 0xc], ecx
// 00840b53  894808               mov dword ptr [eax + 8], ecx
// 00840b56  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
