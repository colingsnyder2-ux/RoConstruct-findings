// roc 2007-08 00544480  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544480
//
// 00544480  56                   push esi
// 00544481  57                   push edi
// 00544482  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00544486  57                   push edi
// 00544487  8bf1                 mov esi, ecx
// 00544489  e832f7ffff           call 0x543bc0
// 0054448e  8bc8                 mov ecx, eax
// 00544490  e82b28f0ff           call 0x446cc0
// 00544495  84c0                 test al, al
// 00544497  741f                 je 0x5444b8
// 00544499  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0054449c  8d542410             lea edx, [esp + 0x10]
// 005444a0  52                   push edx
// 005444a1  8b542410             mov edx, dword ptr [esp + 0x10]
// 005444a5  897c2414             mov dword ptr [esp + 0x14], edi
// 005444a9  8b01                 mov eax, dword ptr [ecx]
// 005444ab  8b4008               mov eax, dword ptr [eax + 8]
// 005444ae  52                   push edx
// 005444af  ffd0                 call eax
// 005444b1  5f                   pop edi
// 005444b2  b001                 mov al, 1
// 005444b4  5e                   pop esi
// 005444b5  c20800               ret 8
// 005444b8  5f                   pop edi
// 005444b9  32c0                 xor al, al
// 005444bb  5e                   pop esi
// 005444bc  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
