// roc 2007-03 00543c20  unit: seg_00540000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543c20
//
// 00543c20  56                   push esi
// 00543c21  57                   push edi
// 00543c22  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00543c26  57                   push edi
// 00543c27  8bf1                 mov esi, ecx
// 00543c29  e8c2faffff           call 0x5436f0
// 00543c2e  8bc8                 mov ecx, eax
// 00543c30  e8db25f0ff           call 0x446210
// 00543c35  84c0                 test al, al
// 00543c37  741f                 je 0x543c58
// 00543c39  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00543c3c  8d542410             lea edx, [esp + 0x10]
// 00543c40  52                   push edx
// 00543c41  8b542410             mov edx, dword ptr [esp + 0x10]
// 00543c45  897c2414             mov dword ptr [esp + 0x14], edi
// 00543c49  8b01                 mov eax, dword ptr [ecx]
// 00543c4b  8b4008               mov eax, dword ptr [eax + 8]
// 00543c4e  52                   push edx
// 00543c4f  ffd0                 call eax
// 00543c51  5f                   pop edi
// 00543c52  b001                 mov al, 1
// 00543c54  5e                   pop esi
// 00543c55  c20800               ret 8
// 00543c58  5f                   pop edi
// 00543c59  32c0                 xor al, al
// 00543c5b  5e                   pop esi
// 00543c5c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
