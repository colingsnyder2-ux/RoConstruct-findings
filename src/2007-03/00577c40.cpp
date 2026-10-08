// roc 2007-03 00577c40  unit: seg_00570000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00577c40
//
// 00577c40  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00577c43  8b01                 mov eax, dword ptr [ecx]
// 00577c45  8b542404             mov edx, dword ptr [esp + 4]
// 00577c49  8b4004               mov eax, dword ptr [eax + 4]
// 00577c4c  52                   push edx
// 00577c4d  ffd0                 call eax
// 00577c4f  50                   push eax
// 00577c50  e86bf7ffff           call 0x5773c0
// 00577c55  8bc8                 mov ecx, eax
// 00577c57  e8a40d0000           call 0x578a00
// 00577c5c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
