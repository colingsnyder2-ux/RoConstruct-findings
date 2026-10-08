// roc 2007-08 0057a210  unit: RBX::VSpecialShape::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a210
//
// 0057a210  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0057a213  8b01                 mov eax, dword ptr [ecx]
// 0057a215  8b542404             mov edx, dword ptr [esp + 4]
// 0057a219  8b4004               mov eax, dword ptr [eax + 4]
// 0057a21c  52                   push edx
// 0057a21d  ffd0                 call eax
// 0057a21f  50                   push eax
// 0057a220  e85bfcffff           call 0x579e80
// 0057a225  8bc8                 mov ecx, eax
// 0057a227  e854de0300           call 0x5b8080
// 0057a22c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
