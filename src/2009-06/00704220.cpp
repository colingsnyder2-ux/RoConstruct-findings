// roc 2009-06 00704220  unit: RBX::AdornG3D  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00704220
//
// 00704220  b801000000           mov eax, 1
// 00704225  84058c04a500         test byte ptr [0xa5048c], al
// 0070422b  7526                 jne 0x704253
// 0070422d  d905c4758b00         fld dword ptr [0x8b75c4]
// 00704233  09058c04a500         or dword ptr [0xa5048c], eax
// 00704239  d91d8004a500         fstp dword ptr [0xa50480]
// 0070423f  d905e0a38c00         fld dword ptr [0x8ca3e0]
// 00704245  d91d8404a500         fstp dword ptr [0xa50484]
// 0070424b  d9e8                 fld1 
// 0070424d  d91d8804a500         fstp dword ptr [0xa50488]
// 00704253  b88004a500           mov eax, 0xa50480
// 00704258  c3                   ret 
// library rbxgs-appdraw/Draw.cpp (function ?selectColor@Draw@RBX@@SAABVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
