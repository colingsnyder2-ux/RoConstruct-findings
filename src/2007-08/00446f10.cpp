// roc 2007-08 00446f10  unit: VCRenderSettings::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00446f10
//
// 00446f10  56                   push esi
// 00446f11  57                   push edi
// 00446f12  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00446f16  57                   push edi
// 00446f17  8bf1                 mov esi, ecx
// 00446f19  e892f8ffff           call 0x4467b0
// 00446f1e  8bc8                 mov ecx, eax
// 00446f20  e89bfdffff           call 0x446cc0
// 00446f25  84c0                 test al, al
// 00446f27  741f                 je 0x446f48
// 00446f29  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00446f2c  8d542410             lea edx, [esp + 0x10]
// 00446f30  52                   push edx
// 00446f31  8b542410             mov edx, dword ptr [esp + 0x10]
// 00446f35  897c2414             mov dword ptr [esp + 0x14], edi
// 00446f39  8b01                 mov eax, dword ptr [ecx]
// 00446f3b  8b4008               mov eax, dword ptr [eax + 8]
// 00446f3e  52                   push edx
// 00446f3f  ffd0                 call eax
// 00446f41  5f                   pop edi
// 00446f42  b001                 mov al, 1
// 00446f44  5e                   pop esi
// 00446f45  c20800               ret 8
// 00446f48  5f                   pop edi
// 00446f49  32c0                 xor al, al
// 00446f4b  5e                   pop esi
// 00446f4c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
