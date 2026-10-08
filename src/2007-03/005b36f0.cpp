// roc 2007-03 005b36f0  unit: seg_005b0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b36f0
//
// 005b36f0  56                   push esi
// 005b36f1  57                   push edi
// 005b36f2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005b36f6  57                   push edi
// 005b36f7  8bf1                 mov esi, ecx
// 005b36f9  e872f4ffff           call 0x5b2b70
// 005b36fe  8bc8                 mov ecx, eax
// 005b3700  e80b2be9ff           call 0x446210
// 005b3705  84c0                 test al, al
// 005b3707  741f                 je 0x5b3728
// 005b3709  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b370c  8d542410             lea edx, [esp + 0x10]
// 005b3710  52                   push edx
// 005b3711  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b3715  897c2414             mov dword ptr [esp + 0x14], edi
// 005b3719  8b01                 mov eax, dword ptr [ecx]
// 005b371b  8b4008               mov eax, dword ptr [eax + 8]
// 005b371e  52                   push edx
// 005b371f  ffd0                 call eax
// 005b3721  5f                   pop edi
// 005b3722  b001                 mov al, 1
// 005b3724  5e                   pop esi
// 005b3725  c20800               ret 8
// 005b3728  5f                   pop edi
// 005b3729  32c0                 xor al, al
// 005b372b  5e                   pop esi
// 005b372c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
