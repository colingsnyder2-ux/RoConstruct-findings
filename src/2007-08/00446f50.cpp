// roc 2007-08 00446f50  unit: VCRenderSettings::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00446f50
//
// 00446f50  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00446f53  8b01                 mov eax, dword ptr [ecx]
// 00446f55  8b542404             mov edx, dword ptr [esp + 4]
// 00446f59  8b4004               mov eax, dword ptr [eax + 4]
// 00446f5c  52                   push edx
// 00446f5d  ffd0                 call eax
// 00446f5f  50                   push eax
// 00446f60  e84bf8ffff           call 0x4467b0
// 00446f65  8bc8                 mov ecx, eax
// 00446f67  e814111700           call 0x5b8080
// 00446f6c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
