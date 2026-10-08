// roc 2007-08 005dc530  unit: RBX::VFeature::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc530
//
// 005dc530  56                   push esi
// 005dc531  57                   push edi
// 005dc532  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005dc536  57                   push edi
// 005dc537  8bf1                 mov esi, ecx
// 005dc539  e8d2faffff           call 0x5dc010
// 005dc53e  8bc8                 mov ecx, eax
// 005dc540  e87ba7e6ff           call 0x446cc0
// 005dc545  84c0                 test al, al
// 005dc547  741f                 je 0x5dc568
// 005dc549  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dc54c  8d542410             lea edx, [esp + 0x10]
// 005dc550  52                   push edx
// 005dc551  8b542410             mov edx, dword ptr [esp + 0x10]
// 005dc555  897c2414             mov dword ptr [esp + 0x14], edi
// 005dc559  8b01                 mov eax, dword ptr [ecx]
// 005dc55b  8b4008               mov eax, dword ptr [eax + 8]
// 005dc55e  52                   push edx
// 005dc55f  ffd0                 call eax
// 005dc561  5f                   pop edi
// 005dc562  b001                 mov al, 1
// 005dc564  5e                   pop esi
// 005dc565  c20800               ret 8
// 005dc568  5f                   pop edi
// 005dc569  32c0                 xor al, al
// 005dc56b  5e                   pop esi
// 005dc56c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
