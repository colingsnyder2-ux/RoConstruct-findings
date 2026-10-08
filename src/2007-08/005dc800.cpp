// roc 2007-08 005dc800  unit: RBX::VFeature::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc800
//
// 005dc800  56                   push esi
// 005dc801  57                   push edi
// 005dc802  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005dc806  57                   push edi
// 005dc807  8bf1                 mov esi, ecx
// 005dc809  e862f8ffff           call 0x5dc070
// 005dc80e  8bc8                 mov ecx, eax
// 005dc810  e8aba4e6ff           call 0x446cc0
// 005dc815  84c0                 test al, al
// 005dc817  741f                 je 0x5dc838
// 005dc819  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dc81c  8d542410             lea edx, [esp + 0x10]
// 005dc820  52                   push edx
// 005dc821  8b542410             mov edx, dword ptr [esp + 0x10]
// 005dc825  897c2414             mov dword ptr [esp + 0x14], edi
// 005dc829  8b01                 mov eax, dword ptr [ecx]
// 005dc82b  8b4008               mov eax, dword ptr [eax + 8]
// 005dc82e  52                   push edx
// 005dc82f  ffd0                 call eax
// 005dc831  5f                   pop edi
// 005dc832  b001                 mov al, 1
// 005dc834  5e                   pop esi
// 005dc835  c20800               ret 8
// 005dc838  5f                   pop edi
// 005dc839  32c0                 xor al, al
// 005dc83b  5e                   pop esi
// 005dc83c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
