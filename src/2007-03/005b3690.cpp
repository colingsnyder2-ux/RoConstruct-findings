// roc 2007-03 005b3690  unit: seg_005b0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3690
//
// 005b3690  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b3693  8b01                 mov eax, dword ptr [ecx]
// 005b3695  8b542404             mov edx, dword ptr [esp + 4]
// 005b3699  8b4004               mov eax, dword ptr [eax + 4]
// 005b369c  52                   push edx
// 005b369d  ffd0                 call eax
// 005b369f  50                   push eax
// 005b36a0  e82bf5ffff           call 0x5b2bd0
// 005b36a5  8bc8                 mov ecx, eax
// 005b36a7  e85453fcff           call 0x578a00
// 005b36ac  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
