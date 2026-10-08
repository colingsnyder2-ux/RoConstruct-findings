// roc 2007-08 005dc840  unit: RBX::VFeature::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc840
//
// 005dc840  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005dc843  8b01                 mov eax, dword ptr [ecx]
// 005dc845  8b542404             mov edx, dword ptr [esp + 4]
// 005dc849  8b4004               mov eax, dword ptr [eax + 4]
// 005dc84c  52                   push edx
// 005dc84d  ffd0                 call eax
// 005dc84f  50                   push eax
// 005dc850  e81bf8ffff           call 0x5dc070
// 005dc855  8bc8                 mov ecx, eax
// 005dc857  e824b8fdff           call 0x5b8080
// 005dc85c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
