// roc 2007-08 0062e290  unit: RBX::AdornG3D  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062e290
//
// 0062e290  b801000000           mov eax, 1
// 0062e295  840530838c00         test byte ptr [0x8c8330], al
// 0062e29b  7526                 jne 0x62e2c3
// 0062e29d  d905b07e7900         fld dword ptr [0x797eb0]
// 0062e2a3  090530838c00         or dword ptr [0x8c8330], eax
// 0062e2a9  d91d24838c00         fstp dword ptr [0x8c8324]
// 0062e2af  d90540837a00         fld dword ptr [0x7a8340]
// 0062e2b5  d91d28838c00         fstp dword ptr [0x8c8328]
// 0062e2bb  d9e8                 fld1 
// 0062e2bd  d91d2c838c00         fstp dword ptr [0x8c832c]
// 0062e2c3  b824838c00           mov eax, 0x8c8324
// 0062e2c8  c3                   ret 
// library rbxgs-appdraw/Draw.cpp (function ?selectColor@Draw@RBX@@SAABVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
