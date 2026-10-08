// roc 2008-06 00676c50  unit: RBX::AdornG3D  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676c50
//
// 00676c50  b801000000           mov eax, 1
// 00676c55  840538db9700         test byte ptr [0x97db38], al
// 00676c5b  7526                 jne 0x676c83
// 00676c5d  d90504e78100         fld dword ptr [0x81e704]
// 00676c63  090538db9700         or dword ptr [0x97db38], eax
// 00676c69  d91d2cdb9700         fstp dword ptr [0x97db2c]
// 00676c6f  d90538f88200         fld dword ptr [0x82f838]
// 00676c75  d91d30db9700         fstp dword ptr [0x97db30]
// 00676c7b  d9e8                 fld1 
// 00676c7d  d91d34db9700         fstp dword ptr [0x97db34]
// 00676c83  b82cdb9700           mov eax, 0x97db2c
// 00676c88  c3                   ret 
// library rbxgs-appdraw/Draw.cpp (function ?selectColor@Draw@RBX@@SAABVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
