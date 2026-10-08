// roc 2007-08 005dc570  unit: RBX::VFeature::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc570
//
// 005dc570  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005dc573  8b01                 mov eax, dword ptr [ecx]
// 005dc575  8b542404             mov edx, dword ptr [esp + 4]
// 005dc579  8b4004               mov eax, dword ptr [eax + 4]
// 005dc57c  52                   push edx
// 005dc57d  ffd0                 call eax
// 005dc57f  50                   push eax
// 005dc580  e88bfaffff           call 0x5dc010
// 005dc585  8bc8                 mov ecx, eax
// 005dc587  e8f4bafdff           call 0x5b8080
// 005dc58c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
