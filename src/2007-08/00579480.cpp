// roc 2007-08 00579480  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579480
//
// 00579480  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00579483  8b01                 mov eax, dword ptr [ecx]
// 00579485  8b542404             mov edx, dword ptr [esp + 4]
// 00579489  8b4004               mov eax, dword ptr [eax + 4]
// 0057948c  52                   push edx
// 0057948d  ffd0                 call eax
// 0057948f  50                   push eax
// 00579490  e8abf7ffff           call 0x578c40
// 00579495  8bc8                 mov ecx, eax
// 00579497  e8e4eb0300           call 0x5b8080
// 0057949c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
