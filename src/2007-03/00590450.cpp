// roc 2007-03 00590450  unit: seg_00590000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00590450
//
// 00590450  56                   push esi
// 00590451  57                   push edi
// 00590452  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00590456  57                   push edi
// 00590457  8bf1                 mov esi, ecx
// 00590459  e8e2fbffff           call 0x590040
// 0059045e  8bc8                 mov ecx, eax
// 00590460  e8ab5debff           call 0x446210
// 00590465  84c0                 test al, al
// 00590467  741f                 je 0x590488
// 00590469  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0059046c  8d542410             lea edx, [esp + 0x10]
// 00590470  52                   push edx
// 00590471  8b542410             mov edx, dword ptr [esp + 0x10]
// 00590475  897c2414             mov dword ptr [esp + 0x14], edi
// 00590479  8b01                 mov eax, dword ptr [ecx]
// 0059047b  8b4008               mov eax, dword ptr [eax + 8]
// 0059047e  52                   push edx
// 0059047f  ffd0                 call eax
// 00590481  5f                   pop edi
// 00590482  b001                 mov al, 1
// 00590484  5e                   pop esi
// 00590485  c20800               ret 8
// 00590488  5f                   pop edi
// 00590489  32c0                 xor al, al
// 0059048b  5e                   pop esi
// 0059048c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
