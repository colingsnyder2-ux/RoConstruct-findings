// roc 2007-03 004e38b0  unit: seg_004e0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e38b0
//
// 004e38b0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e38b3  81c198000000         add ecx, 0x98
// 004e38b9  e9b2fcffff           jmp 0x4e3570
// library rbxgs-render/AggregatingSceneManager.cpp (function ?addToScene@SceneManager@Render@RBX@@IAEXABV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
