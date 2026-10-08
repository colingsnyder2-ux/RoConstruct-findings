// roc 2007-08 005dd850  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd850
//
// 005dd850  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005dd853  8b01                 mov eax, dword ptr [ecx]
// 005dd855  8b542404             mov edx, dword ptr [esp + 4]
// 005dd859  8b4004               mov eax, dword ptr [eax + 4]
// 005dd85c  52                   push edx
// 005dd85d  ffd0                 call eax
// 005dd85f  50                   push eax
// 005dd860  e89bb6fdff           call 0x5b8f00
// 005dd865  8bc8                 mov ecx, eax
// 005dd867  e814a8fdff           call 0x5b8080
// 005dd86c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
