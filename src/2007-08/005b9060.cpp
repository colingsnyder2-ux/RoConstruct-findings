// roc 2007-08 005b9060  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9060
//
// 005b9060  56                   push esi
// 005b9061  8d44240c             lea eax, [esp + 0xc]
// 005b9065  8bf1                 mov esi, ecx
// 005b9067  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b906b  50                   push eax
// 005b906c  51                   push ecx
// 005b906d  e88efeffff           call 0x5b8f00
// 005b9072  8bc8                 mov ecx, eax
// 005b9074  e827320200           call 0x5dc2a0
// 005b9079  84c0                 test al, al
// 005b907b  7422                 je 0x5b909f
// 005b907d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b9081  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b9084  8954240c             mov dword ptr [esp + 0xc], edx
// 005b9088  8b01                 mov eax, dword ptr [ecx]
// 005b908a  8b4008               mov eax, dword ptr [eax + 8]
// 005b908d  8d54240c             lea edx, [esp + 0xc]
// 005b9091  52                   push edx
// 005b9092  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b9096  52                   push edx
// 005b9097  ffd0                 call eax
// 005b9099  b001                 mov al, 1
// 005b909b  5e                   pop esi
// 005b909c  c20800               ret 8
// 005b909f  32c0                 xor al, al
// 005b90a1  5e                   pop esi
// 005b90a2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
