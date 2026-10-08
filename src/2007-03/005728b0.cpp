// roc 2007-03 005728b0  unit: seg_00570000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005728b0
//
// 005728b0  b001                 mov al, 1
// 005728b2  888158020000         mov byte ptr [ecx + 0x258], al
// 005728b8  888101010000         mov byte ptr [ecx + 0x101], al
// 005728be  888171020000         mov byte ptr [ecx + 0x271], al
// 005728c4  81c184010000         add ecx, 0x184
// 005728ca  e8e19d0a00           call 0x61c6b0
// 005728cf  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?onSurfaceChanged@PartInstance@RBX@@AAEXW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
