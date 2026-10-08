// roc 2007-03 00572070  unit: seg_00570000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572070
//
// 00572070  56                   push esi
// 00572071  8b742408             mov esi, dword ptr [esp + 8]
// 00572075  56                   push esi
// 00572076  81c19c010000         add ecx, 0x19c
// 0057207c  e86f120100           call 0x5832f0
// 00572081  8bc6                 mov eax, esi
// 00572083  5e                   pop esi
// 00572084  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?getColor3@PartInstance@RBX@@QBE?AVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
