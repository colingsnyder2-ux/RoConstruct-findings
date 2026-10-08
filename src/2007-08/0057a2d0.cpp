// roc 2007-08 0057a2d0  unit: RBX::VSpecialShape::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a2d0
//
// 0057a2d0  56                   push esi
// 0057a2d1  8d44240c             lea eax, [esp + 0xc]
// 0057a2d5  8bf1                 mov esi, ecx
// 0057a2d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057a2db  50                   push eax
// 0057a2dc  51                   push ecx
// 0057a2dd  e89efbffff           call 0x579e80
// 0057a2e2  8bc8                 mov ecx, eax
// 0057a2e4  e8b71f0600           call 0x5dc2a0
// 0057a2e9  84c0                 test al, al
// 0057a2eb  7422                 je 0x57a30f
// 0057a2ed  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057a2f1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057a2f4  8954240c             mov dword ptr [esp + 0xc], edx
// 0057a2f8  8b01                 mov eax, dword ptr [ecx]
// 0057a2fa  8b4008               mov eax, dword ptr [eax + 8]
// 0057a2fd  8d54240c             lea edx, [esp + 0xc]
// 0057a301  52                   push edx
// 0057a302  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057a306  52                   push edx
// 0057a307  ffd0                 call eax
// 0057a309  b001                 mov al, 1
// 0057a30b  5e                   pop esi
// 0057a30c  c20800               ret 8
// 0057a30f  32c0                 xor al, al
// 0057a311  5e                   pop esi
// 0057a312  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
