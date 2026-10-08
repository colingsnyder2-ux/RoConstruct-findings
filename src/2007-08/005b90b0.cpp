// roc 2007-08 005b90b0  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b90b0
//
// 005b90b0  56                   push esi
// 005b90b1  8d44240c             lea eax, [esp + 0xc]
// 005b90b5  8bf1                 mov esi, ecx
// 005b90b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b90bb  50                   push eax
// 005b90bc  51                   push ecx
// 005b90bd  e83efeffff           call 0x5b8f00
// 005b90c2  8bc8                 mov ecx, eax
// 005b90c4  e807f0ffff           call 0x5b80d0
// 005b90c9  84c0                 test al, al
// 005b90cb  7422                 je 0x5b90ef
// 005b90cd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b90d1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b90d4  8954240c             mov dword ptr [esp + 0xc], edx
// 005b90d8  8b01                 mov eax, dword ptr [ecx]
// 005b90da  8b4008               mov eax, dword ptr [eax + 8]
// 005b90dd  8d54240c             lea edx, [esp + 0xc]
// 005b90e1  52                   push edx
// 005b90e2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b90e6  52                   push edx
// 005b90e7  ffd0                 call eax
// 005b90e9  b001                 mov al, 1
// 005b90eb  5e                   pop esi
// 005b90ec  c20800               ret 8
// 005b90ef  32c0                 xor al, al
// 005b90f1  5e                   pop esi
// 005b90f2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
