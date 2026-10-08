// roc 2007-08 004eff40  unit: RBX::Render::AggregatingSceneManager  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eff40
//
// 004eff40  8b4904               mov ecx, dword ptr [ecx + 4]
// 004eff43  81c198000000         add ecx, 0x98
// 004eff49  e9b2fcffff           jmp 0x4efc00
// library rbxgs-render/AggregatingSceneManager.cpp (function ?addToScene@SceneManager@Render@RBX@@IAEXABV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
