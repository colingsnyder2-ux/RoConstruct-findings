// roc 2007-08 005441b0  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005441b0
//
// 005441b0  56                   push esi
// 005441b1  57                   push edi
// 005441b2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005441b6  57                   push edi
// 005441b7  8bf1                 mov esi, ecx
// 005441b9  e862faffff           call 0x543c20
// 005441be  8bc8                 mov ecx, eax
// 005441c0  e8fb2af0ff           call 0x446cc0
// 005441c5  84c0                 test al, al
// 005441c7  741f                 je 0x5441e8
// 005441c9  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005441cc  8d542410             lea edx, [esp + 0x10]
// 005441d0  52                   push edx
// 005441d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 005441d5  897c2414             mov dword ptr [esp + 0x14], edi
// 005441d9  8b01                 mov eax, dword ptr [ecx]
// 005441db  8b4008               mov eax, dword ptr [eax + 8]
// 005441de  52                   push edx
// 005441df  ffd0                 call eax
// 005441e1  5f                   pop edi
// 005441e2  b001                 mov al, 1
// 005441e4  5e                   pop esi
// 005441e5  c20800               ret 8
// 005441e8  5f                   pop edi
// 005441e9  32c0                 xor al, al
// 005441eb  5e                   pop esi
// 005441ec  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
