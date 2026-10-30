// roc 2009-12 007f7880  unit: CPatchedControlComboBox  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7880
//
// 007f7880  8bc1                 mov eax, ecx
// 007f7882  33c9                 xor ecx, ecx
// 007f7884  c700c8179f00         mov dword ptr [eax], 0x9f17c8
// 007f788a  894804               mov dword ptr [eax + 4], ecx
// 007f788d  894810               mov dword ptr [eax + 0x10], ecx
// 007f7890  89480c               mov dword ptr [eax + 0xc], ecx
// 007f7893  894808               mov dword ptr [eax + 8], ecx
// 007f7896  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
