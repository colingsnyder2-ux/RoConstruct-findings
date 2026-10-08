// roc 2007-03 005b3c30  unit: seg_005b0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3c30
//
// 005b3c30  56                   push esi
// 005b3c31  57                   push edi
// 005b3c32  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005b3c36  57                   push edi
// 005b3c37  8bf1                 mov esi, ecx
// 005b3c39  e8c2feffff           call 0x5b3b00
// 005b3c3e  8bc8                 mov ecx, eax
// 005b3c40  e8cb25e9ff           call 0x446210
// 005b3c45  84c0                 test al, al
// 005b3c47  741f                 je 0x5b3c68
// 005b3c49  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b3c4c  8d542410             lea edx, [esp + 0x10]
// 005b3c50  52                   push edx
// 005b3c51  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b3c55  897c2414             mov dword ptr [esp + 0x14], edi
// 005b3c59  8b01                 mov eax, dword ptr [ecx]
// 005b3c5b  8b4008               mov eax, dword ptr [eax + 8]
// 005b3c5e  52                   push edx
// 005b3c5f  ffd0                 call eax
// 005b3c61  5f                   pop edi
// 005b3c62  b001                 mov al, 1
// 005b3c64  5e                   pop esi
// 005b3c65  c20800               ret 8
// 005b3c68  5f                   pop edi
// 005b3c69  32c0                 xor al, al
// 005b3c6b  5e                   pop esi
// 005b3c6c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
