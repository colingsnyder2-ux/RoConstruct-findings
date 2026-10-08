// roc 2007-08 005dcad0  unit: RBX::VFeature::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dcad0
//
// 005dcad0  56                   push esi
// 005dcad1  57                   push edi
// 005dcad2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005dcad6  57                   push edi
// 005dcad7  8bf1                 mov esi, ecx
// 005dcad9  e8f2f5ffff           call 0x5dc0d0
// 005dcade  8bc8                 mov ecx, eax
// 005dcae0  e8dba1e6ff           call 0x446cc0
// 005dcae5  84c0                 test al, al
// 005dcae7  741f                 je 0x5dcb08
// 005dcae9  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dcaec  8d542410             lea edx, [esp + 0x10]
// 005dcaf0  52                   push edx
// 005dcaf1  8b542410             mov edx, dword ptr [esp + 0x10]
// 005dcaf5  897c2414             mov dword ptr [esp + 0x14], edi
// 005dcaf9  8b01                 mov eax, dword ptr [ecx]
// 005dcafb  8b4008               mov eax, dword ptr [eax + 8]
// 005dcafe  52                   push edx
// 005dcaff  ffd0                 call eax
// 005dcb01  5f                   pop edi
// 005dcb02  b001                 mov al, 1
// 005dcb04  5e                   pop esi
// 005dcb05  c20800               ret 8
// 005dcb08  5f                   pop edi
// 005dcb09  32c0                 xor al, al
// 005dcb0b  5e                   pop esi
// 005dcb0c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
