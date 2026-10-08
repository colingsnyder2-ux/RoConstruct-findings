// roc 2007-08 005dcb10  unit: RBX::VFeature::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dcb10
//
// 005dcb10  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005dcb13  8b01                 mov eax, dword ptr [ecx]
// 005dcb15  8b542404             mov edx, dword ptr [esp + 4]
// 005dcb19  8b4004               mov eax, dword ptr [eax + 4]
// 005dcb1c  52                   push edx
// 005dcb1d  ffd0                 call eax
// 005dcb1f  50                   push eax
// 005dcb20  e8abf5ffff           call 0x5dc0d0
// 005dcb25  8bc8                 mov ecx, eax
// 005dcb27  e854b5fdff           call 0x5b8080
// 005dcb2c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
