// roc 2007-03 00576180  unit: seg_00570000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00576180
//
// 00576180  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00576183  8b01                 mov eax, dword ptr [ecx]
// 00576185  8b542404             mov edx, dword ptr [esp + 4]
// 00576189  8b4004               mov eax, dword ptr [eax + 4]
// 0057618c  52                   push edx
// 0057618d  ffd0                 call eax
// 0057618f  50                   push eax
// 00576190  e80bf7ffff           call 0x5758a0
// 00576195  8bc8                 mov ecx, eax
// 00576197  e864280000           call 0x578a00
// 0057619c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
