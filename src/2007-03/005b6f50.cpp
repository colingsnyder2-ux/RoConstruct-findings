// roc 2007-03 005b6f50  unit: seg_005b0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b6f50
//
// 005b6f50  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b6f53  8b01                 mov eax, dword ptr [ecx]
// 005b6f55  8b542404             mov edx, dword ptr [esp + 4]
// 005b6f59  8b4004               mov eax, dword ptr [eax + 4]
// 005b6f5c  52                   push edx
// 005b6f5d  ffd0                 call eax
// 005b6f5f  50                   push eax
// 005b6f60  e87bfbffff           call 0x5b6ae0
// 005b6f65  8bc8                 mov ecx, eax
// 005b6f67  e8941afcff           call 0x578a00
// 005b6f6c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
