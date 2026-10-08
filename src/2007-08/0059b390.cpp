// roc 2007-08 0059b390  unit: RBX::VCamera::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b390
//
// 0059b390  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0059b393  8b01                 mov eax, dword ptr [ecx]
// 0059b395  8b542404             mov edx, dword ptr [esp + 4]
// 0059b399  8b4004               mov eax, dword ptr [eax + 4]
// 0059b39c  52                   push edx
// 0059b39d  ffd0                 call eax
// 0059b39f  50                   push eax
// 0059b3a0  e89bfbffff           call 0x59af40
// 0059b3a5  8bc8                 mov ecx, eax
// 0059b3a7  e8d4cc0100           call 0x5b8080
// 0059b3ac  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
