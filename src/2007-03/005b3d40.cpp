// roc 2007-03 005b3d40  unit: seg_005b0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3d40
//
// 005b3d40  56                   push esi
// 005b3d41  8d44240c             lea eax, [esp + 0xc]
// 005b3d45  8bf1                 mov esi, ecx
// 005b3d47  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b3d4b  50                   push eax
// 005b3d4c  51                   push ecx
// 005b3d4d  e8aefdffff           call 0x5b3b00
// 005b3d52  8bc8                 mov ecx, eax
// 005b3d54  e8e79cfeff           call 0x59da40
// 005b3d59  84c0                 test al, al
// 005b3d5b  7422                 je 0x5b3d7f
// 005b3d5d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b3d61  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b3d64  8954240c             mov dword ptr [esp + 0xc], edx
// 005b3d68  8b01                 mov eax, dword ptr [ecx]
// 005b3d6a  8b4008               mov eax, dword ptr [eax + 8]
// 005b3d6d  8d54240c             lea edx, [esp + 0xc]
// 005b3d71  52                   push edx
// 005b3d72  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b3d76  52                   push edx
// 005b3d77  ffd0                 call eax
// 005b3d79  b001                 mov al, 1
// 005b3d7b  5e                   pop esi
// 005b3d7c  c20800               ret 8
// 005b3d7f  32c0                 xor al, al
// 005b3d81  5e                   pop esi
// 005b3d82  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
