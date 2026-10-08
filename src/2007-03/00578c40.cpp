// roc 2007-03 00578c40  unit: seg_00570000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578c40
//
// 00578c40  56                   push esi
// 00578c41  57                   push edi
// 00578c42  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00578c46  57                   push edi
// 00578c47  8bf1                 mov esi, ecx
// 00578c49  e842fcffff           call 0x578890
// 00578c4e  8bc8                 mov ecx, eax
// 00578c50  e8bbd5ecff           call 0x446210
// 00578c55  84c0                 test al, al
// 00578c57  741f                 je 0x578c78
// 00578c59  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00578c5c  8d542410             lea edx, [esp + 0x10]
// 00578c60  52                   push edx
// 00578c61  8b542410             mov edx, dword ptr [esp + 0x10]
// 00578c65  897c2414             mov dword ptr [esp + 0x14], edi
// 00578c69  8b01                 mov eax, dword ptr [ecx]
// 00578c6b  8b4008               mov eax, dword ptr [eax + 8]
// 00578c6e  52                   push edx
// 00578c6f  ffd0                 call eax
// 00578c71  5f                   pop edi
// 00578c72  b001                 mov al, 1
// 00578c74  5e                   pop esi
// 00578c75  c20800               ret 8
// 00578c78  5f                   pop edi
// 00578c79  32c0                 xor al, al
// 00578c7b  5e                   pop esi
// 00578c7c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
