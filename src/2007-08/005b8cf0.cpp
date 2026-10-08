// roc 2007-08 005b8cf0  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8cf0
//
// 005b8cf0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b8cf3  8b01                 mov eax, dword ptr [ecx]
// 005b8cf5  8b542404             mov edx, dword ptr [esp + 4]
// 005b8cf9  8b4004               mov eax, dword ptr [eax + 4]
// 005b8cfc  52                   push edx
// 005b8cfd  ffd0                 call eax
// 005b8cff  50                   push eax
// 005b8d00  e8dbf1ffff           call 0x5b7ee0
// 005b8d05  8bc8                 mov ecx, eax
// 005b8d07  e874f3ffff           call 0x5b8080
// 005b8d0c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
