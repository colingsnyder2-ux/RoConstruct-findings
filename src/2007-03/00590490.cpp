// roc 2007-03 00590490  unit: seg_00590000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00590490
//
// 00590490  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00590493  8b01                 mov eax, dword ptr [ecx]
// 00590495  8b542404             mov edx, dword ptr [esp + 4]
// 00590499  8b4004               mov eax, dword ptr [eax + 4]
// 0059049c  52                   push edx
// 0059049d  ffd0                 call eax
// 0059049f  50                   push eax
// 005904a0  e89bfbffff           call 0x590040
// 005904a5  8bc8                 mov ecx, eax
// 005904a7  e85485feff           call 0x578a00
// 005904ac  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
