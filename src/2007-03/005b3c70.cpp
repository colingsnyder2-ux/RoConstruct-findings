// roc 2007-03 005b3c70  unit: seg_005b0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3c70
//
// 005b3c70  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b3c73  8b01                 mov eax, dword ptr [ecx]
// 005b3c75  8b542404             mov edx, dword ptr [esp + 4]
// 005b3c79  8b4004               mov eax, dword ptr [eax + 4]
// 005b3c7c  52                   push edx
// 005b3c7d  ffd0                 call eax
// 005b3c7f  50                   push eax
// 005b3c80  e87bfeffff           call 0x5b3b00
// 005b3c85  8bc8                 mov ecx, eax
// 005b3c87  e8744dfcff           call 0x578a00
// 005b3c8c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
