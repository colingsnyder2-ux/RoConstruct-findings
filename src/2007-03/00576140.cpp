// roc 2007-03 00576140  unit: seg_00570000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00576140
//
// 00576140  56                   push esi
// 00576141  57                   push edi
// 00576142  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00576146  57                   push edi
// 00576147  8bf1                 mov esi, ecx
// 00576149  e852f7ffff           call 0x5758a0
// 0057614e  8bc8                 mov ecx, eax
// 00576150  e8bb00edff           call 0x446210
// 00576155  84c0                 test al, al
// 00576157  741f                 je 0x576178
// 00576159  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057615c  8d542410             lea edx, [esp + 0x10]
// 00576160  52                   push edx
// 00576161  8b542410             mov edx, dword ptr [esp + 0x10]
// 00576165  897c2414             mov dword ptr [esp + 0x14], edi
// 00576169  8b01                 mov eax, dword ptr [ecx]
// 0057616b  8b4008               mov eax, dword ptr [eax + 8]
// 0057616e  52                   push edx
// 0057616f  ffd0                 call eax
// 00576171  5f                   pop edi
// 00576172  b001                 mov al, 1
// 00576174  5e                   pop esi
// 00576175  c20800               ret 8
// 00576178  5f                   pop edi
// 00576179  32c0                 xor al, al
// 0057617b  5e                   pop esi
// 0057617c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
