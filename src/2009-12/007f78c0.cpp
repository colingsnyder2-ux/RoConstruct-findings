// roc 2009-12 007f78c0  unit: CPatchedControlComboBox  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f78c0
//
// 007f78c0  8bc1                 mov eax, ecx
// 007f78c2  33c9                 xor ecx, ecx
// 007f78c4  c700e0179f00         mov dword ptr [eax], 0x9f17e0
// 007f78ca  894804               mov dword ptr [eax + 4], ecx
// 007f78cd  894810               mov dword ptr [eax + 0x10], ecx
// 007f78d0  89480c               mov dword ptr [eax + 0xc], ecx
// 007f78d3  894808               mov dword ptr [eax + 8], ecx
// 007f78d6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
