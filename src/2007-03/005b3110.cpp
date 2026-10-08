// roc 2007-03 005b3110  unit: seg_005b0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3110
//
// 005b3110  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b3113  8b01                 mov eax, dword ptr [ecx]
// 005b3115  8b4004               mov eax, dword ptr [eax + 4]
// 005b3118  ffe0                 jmp eax
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QBE?AW4NormalId@3@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
