// roc 2007-03 00578c80  unit: seg_00570000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578c80
//
// 00578c80  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00578c83  8b01                 mov eax, dword ptr [ecx]
// 00578c85  8b542404             mov edx, dword ptr [esp + 4]
// 00578c89  8b4004               mov eax, dword ptr [eax + 4]
// 00578c8c  52                   push edx
// 00578c8d  ffd0                 call eax
// 00578c8f  50                   push eax
// 00578c90  e8fbfbffff           call 0x578890
// 00578c95  8bc8                 mov ecx, eax
// 00578c97  e864fdffff           call 0x578a00
// 00578c9c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
