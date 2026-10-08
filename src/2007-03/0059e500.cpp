// roc 2007-03 0059e500  unit: seg_00590000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059e500
//
// 0059e500  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0059e503  8b01                 mov eax, dword ptr [ecx]
// 0059e505  8b542404             mov edx, dword ptr [esp + 4]
// 0059e509  8b4004               mov eax, dword ptr [eax + 4]
// 0059e50c  52                   push edx
// 0059e50d  ffd0                 call eax
// 0059e50f  50                   push eax
// 0059e510  e89bfaffff           call 0x59dfb0
// 0059e515  8bc8                 mov ecx, eax
// 0059e517  e8e4a4fdff           call 0x578a00
// 0059e51c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
