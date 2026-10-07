// roc 2009-06 00607440  unit: RBX::DataModel  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00607440
//
// 00607440  b801000000           mov eax, 1
// 00607445  8405e0afa400         test byte ptr [0xa4afe0], al
// 0060744b  7524                 jne 0x607471
// 0060744d  d905e0a38c00         fld dword ptr [0x8ca3e0]
// 00607453  0905e0afa400         or dword ptr [0xa4afe0], eax
// 00607459  d915d0afa400         fst dword ptr [0xa4afd0]
// 0060745f  d915d4afa400         fst dword ptr [0xa4afd4]
// 00607465  d915d8afa400         fst dword ptr [0xa4afd8]
// 0060746b  d91ddcafa400         fstp dword ptr [0xa4afdc]
// 00607471  b8d0afa400           mov eax, 0xa4afd0
// 00607476  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?translucentBackdrop@GuiItem@RBX@@SAABVColor4@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
