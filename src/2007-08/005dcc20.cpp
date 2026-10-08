// roc 2007-08 005dcc20  unit: RBX::VFeature::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dcc20
//
// 005dcc20  56                   push esi
// 005dcc21  8d44240c             lea eax, [esp + 0xc]
// 005dcc25  8bf1                 mov esi, ecx
// 005dcc27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dcc2b  50                   push eax
// 005dcc2c  51                   push ecx
// 005dcc2d  e89ef4ffff           call 0x5dc0d0
// 005dcc32  8bc8                 mov ecx, eax
// 005dcc34  e897b4fdff           call 0x5b80d0
// 005dcc39  84c0                 test al, al
// 005dcc3b  7422                 je 0x5dcc5f
// 005dcc3d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dcc41  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dcc44  8954240c             mov dword ptr [esp + 0xc], edx
// 005dcc48  8b01                 mov eax, dword ptr [ecx]
// 005dcc4a  8b4008               mov eax, dword ptr [eax + 8]
// 005dcc4d  8d54240c             lea edx, [esp + 0xc]
// 005dcc51  52                   push edx
// 005dcc52  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dcc56  52                   push edx
// 005dcc57  ffd0                 call eax
// 005dcc59  b001                 mov al, 1
// 005dcc5b  5e                   pop esi
// 005dcc5c  c20800               ret 8
// 005dcc5f  32c0                 xor al, al
// 005dcc61  5e                   pop esi
// 005dcc62  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
