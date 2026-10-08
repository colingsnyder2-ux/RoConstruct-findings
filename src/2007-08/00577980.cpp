// roc 2007-08 00577980  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577980
//
// 00577980  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00577983  8b01                 mov eax, dword ptr [ecx]
// 00577985  8b542404             mov edx, dword ptr [esp + 4]
// 00577989  8b4004               mov eax, dword ptr [eax + 4]
// 0057798c  52                   push edx
// 0057798d  ffd0                 call eax
// 0057798f  50                   push eax
// 00577990  e80bf7ffff           call 0x5770a0
// 00577995  8bc8                 mov ecx, eax
// 00577997  e8e4060400           call 0x5b8080
// 0057799c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
