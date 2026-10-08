// roc 2007-08 005b8810  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8810
//
// 005b8810  56                   push esi
// 005b8811  57                   push edi
// 005b8812  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005b8816  57                   push edi
// 005b8817  8bf1                 mov esi, ecx
// 005b8819  e862f6ffff           call 0x5b7e80
// 005b881e  8bc8                 mov ecx, eax
// 005b8820  e89be4e8ff           call 0x446cc0
// 005b8825  84c0                 test al, al
// 005b8827  741f                 je 0x5b8848
// 005b8829  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b882c  8d542410             lea edx, [esp + 0x10]
// 005b8830  52                   push edx
// 005b8831  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b8835  897c2414             mov dword ptr [esp + 0x14], edi
// 005b8839  8b01                 mov eax, dword ptr [ecx]
// 005b883b  8b4008               mov eax, dword ptr [eax + 8]
// 005b883e  52                   push edx
// 005b883f  ffd0                 call eax
// 005b8841  5f                   pop edi
// 005b8842  b001                 mov al, 1
// 005b8844  5e                   pop esi
// 005b8845  c20800               ret 8
// 005b8848  5f                   pop edi
// 005b8849  32c0                 xor al, al
// 005b884b  5e                   pop esi
// 005b884c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
