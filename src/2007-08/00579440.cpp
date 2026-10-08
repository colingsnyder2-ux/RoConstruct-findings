// roc 2007-08 00579440  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579440
//
// 00579440  56                   push esi
// 00579441  57                   push edi
// 00579442  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00579446  57                   push edi
// 00579447  8bf1                 mov esi, ecx
// 00579449  e8f2f7ffff           call 0x578c40
// 0057944e  8bc8                 mov ecx, eax
// 00579450  e86bd8ecff           call 0x446cc0
// 00579455  84c0                 test al, al
// 00579457  741f                 je 0x579478
// 00579459  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0057945c  8d542410             lea edx, [esp + 0x10]
// 00579460  52                   push edx
// 00579461  8b542410             mov edx, dword ptr [esp + 0x10]
// 00579465  897c2414             mov dword ptr [esp + 0x14], edi
// 00579469  8b01                 mov eax, dword ptr [ecx]
// 0057946b  8b4008               mov eax, dword ptr [eax + 8]
// 0057946e  52                   push edx
// 0057946f  ffd0                 call eax
// 00579471  5f                   pop edi
// 00579472  b001                 mov al, 1
// 00579474  5e                   pop esi
// 00579475  c20800               ret 8
// 00579478  5f                   pop edi
// 00579479  32c0                 xor al, al
// 0057947b  5e                   pop esi
// 0057947c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
