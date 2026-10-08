// roc 2007-08 005bc060  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bc060
//
// 005bc060  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005bc063  8b01                 mov eax, dword ptr [ecx]
// 005bc065  8b542404             mov edx, dword ptr [esp + 4]
// 005bc069  8b4004               mov eax, dword ptr [eax + 4]
// 005bc06c  52                   push edx
// 005bc06d  ffd0                 call eax
// 005bc06f  50                   push eax
// 005bc070  e8dbfbffff           call 0x5bbc50
// 005bc075  8bc8                 mov ecx, eax
// 005bc077  e804c0ffff           call 0x5b8080
// 005bc07c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
