// roc 2007-08 0057a320  unit: RBX::VSpecialShape::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a320
//
// 0057a320  56                   push esi
// 0057a321  8d44240c             lea eax, [esp + 0xc]
// 0057a325  8bf1                 mov esi, ecx
// 0057a327  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057a32b  50                   push eax
// 0057a32c  51                   push ecx
// 0057a32d  e84efbffff           call 0x579e80
// 0057a332  8bc8                 mov ecx, eax
// 0057a334  e897dd0300           call 0x5b80d0
// 0057a339  84c0                 test al, al
// 0057a33b  7422                 je 0x57a35f
// 0057a33d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057a341  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057a344  8954240c             mov dword ptr [esp + 0xc], edx
// 0057a348  8b01                 mov eax, dword ptr [ecx]
// 0057a34a  8b4008               mov eax, dword ptr [eax + 8]
// 0057a34d  8d54240c             lea edx, [esp + 0xc]
// 0057a351  52                   push edx
// 0057a352  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057a356  52                   push edx
// 0057a357  ffd0                 call eax
// 0057a359  b001                 mov al, 1
// 0057a35b  5e                   pop esi
// 0057a35c  c20800               ret 8
// 0057a35f  32c0                 xor al, al
// 0057a361  5e                   pop esi
// 0057a362  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
