// roc 2007-08 005b88d0  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b88d0
//
// 005b88d0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b88d3  8b01                 mov eax, dword ptr [ecx]
// 005b88d5  8b542404             mov edx, dword ptr [esp + 4]
// 005b88d9  8b4004               mov eax, dword ptr [eax + 4]
// 005b88dc  52                   push edx
// 005b88dd  ffd0                 call eax
// 005b88df  50                   push eax
// 005b88e0  e89bf5ffff           call 0x5b7e80
// 005b88e5  8bc8                 mov ecx, eax
// 005b88e7  e894f7ffff           call 0x5b8080
// 005b88ec  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
