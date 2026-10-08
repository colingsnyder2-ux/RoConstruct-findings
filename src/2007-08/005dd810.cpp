// roc 2007-08 005dd810  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd810
//
// 005dd810  56                   push esi
// 005dd811  57                   push edi
// 005dd812  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005dd816  57                   push edi
// 005dd817  8bf1                 mov esi, ecx
// 005dd819  e8e2b6fdff           call 0x5b8f00
// 005dd81e  8bc8                 mov ecx, eax
// 005dd820  e89b94e6ff           call 0x446cc0
// 005dd825  84c0                 test al, al
// 005dd827  741f                 je 0x5dd848
// 005dd829  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dd82c  8d542410             lea edx, [esp + 0x10]
// 005dd830  52                   push edx
// 005dd831  8b542410             mov edx, dword ptr [esp + 0x10]
// 005dd835  897c2414             mov dword ptr [esp + 0x14], edi
// 005dd839  8b01                 mov eax, dword ptr [ecx]
// 005dd83b  8b4008               mov eax, dword ptr [eax + 8]
// 005dd83e  52                   push edx
// 005dd83f  ffd0                 call eax
// 005dd841  5f                   pop edi
// 005dd842  b001                 mov al, 1
// 005dd844  5e                   pop esi
// 005dd845  c20800               ret 8
// 005dd848  5f                   pop edi
// 005dd849  32c0                 xor al, al
// 005dd84b  5e                   pop esi
// 005dd84c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
