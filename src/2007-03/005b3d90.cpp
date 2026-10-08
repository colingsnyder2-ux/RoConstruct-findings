// roc 2007-03 005b3d90  unit: seg_005b0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3d90
//
// 005b3d90  56                   push esi
// 005b3d91  8d44240c             lea eax, [esp + 0xc]
// 005b3d95  8bf1                 mov esi, ecx
// 005b3d97  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b3d9b  50                   push eax
// 005b3d9c  51                   push ecx
// 005b3d9d  e85efdffff           call 0x5b3b00
// 005b3da2  8bc8                 mov ecx, eax
// 005b3da4  e8572e0000           call 0x5b6c00
// 005b3da9  84c0                 test al, al
// 005b3dab  7422                 je 0x5b3dcf
// 005b3dad  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b3db1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b3db4  8954240c             mov dword ptr [esp + 0xc], edx
// 005b3db8  8b01                 mov eax, dword ptr [ecx]
// 005b3dba  8b4008               mov eax, dword ptr [eax + 8]
// 005b3dbd  8d54240c             lea edx, [esp + 0xc]
// 005b3dc1  52                   push edx
// 005b3dc2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b3dc6  52                   push edx
// 005b3dc7  ffd0                 call eax
// 005b3dc9  b001                 mov al, 1
// 005b3dcb  5e                   pop esi
// 005b3dcc  c20800               ret 8
// 005b3dcf  32c0                 xor al, al
// 005b3dd1  5e                   pop esi
// 005b3dd2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
