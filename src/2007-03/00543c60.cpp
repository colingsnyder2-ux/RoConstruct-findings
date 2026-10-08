// roc 2007-03 00543c60  unit: seg_00540000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543c60
//
// 00543c60  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00543c63  8b01                 mov eax, dword ptr [ecx]
// 00543c65  8b542404             mov edx, dword ptr [esp + 4]
// 00543c69  8b4004               mov eax, dword ptr [eax + 4]
// 00543c6c  52                   push edx
// 00543c6d  ffd0                 call eax
// 00543c6f  50                   push eax
// 00543c70  e87bfaffff           call 0x5436f0
// 00543c75  8bc8                 mov ecx, eax
// 00543c77  e8844d0300           call 0x578a00
// 00543c7c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
