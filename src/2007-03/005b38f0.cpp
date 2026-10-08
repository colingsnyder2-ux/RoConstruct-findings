// roc 2007-03 005b38f0  unit: seg_005b0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b38f0
//
// 005b38f0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b38f3  8b01                 mov eax, dword ptr [ecx]
// 005b38f5  8b542404             mov edx, dword ptr [esp + 4]
// 005b38f9  8b4004               mov eax, dword ptr [eax + 4]
// 005b38fc  52                   push edx
// 005b38fd  ffd0                 call eax
// 005b38ff  50                   push eax
// 005b3900  e86bf2ffff           call 0x5b2b70
// 005b3905  8bc8                 mov ecx, eax
// 005b3907  e8f450fcff           call 0x578a00
// 005b390c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
