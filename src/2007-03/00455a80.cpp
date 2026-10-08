// roc 2007-03 00455a80  unit: seg_00450000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00455a80
//
// 00455a80  56                   push esi
// 00455a81  8b742408             mov esi, dword ptr [esp + 8]
// 00455a85  56                   push esi
// 00455a86  81c1f0000000         add ecx, 0xf0
// 00455a8c  e8ff5f0a00           call 0x4fba90
// 00455a91  8bc6                 mov eax, esi
// 00455a93  5e                   pop esi
// 00455a94  c20400               ret 4
// library rbxgs/tool\PartDragTool.cpp (function ?getCameraCoordinateFrame@Camera@RBX@@QBE?AVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/PartDragTool.cpp
