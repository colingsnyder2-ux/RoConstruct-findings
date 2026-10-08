// roc 2007-03 00446460  unit: seg_00440000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00446460
//
// 00446460  56                   push esi
// 00446461  57                   push edi
// 00446462  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00446466  57                   push edi
// 00446467  8bf1                 mov esi, ecx
// 00446469  e862f8ffff           call 0x445cd0
// 0044646e  8bc8                 mov ecx, eax
// 00446470  e89bfdffff           call 0x446210
// 00446475  84c0                 test al, al
// 00446477  741f                 je 0x446498
// 00446479  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0044647c  8d542410             lea edx, [esp + 0x10]
// 00446480  52                   push edx
// 00446481  8b542410             mov edx, dword ptr [esp + 0x10]
// 00446485  897c2414             mov dword ptr [esp + 0x14], edi
// 00446489  8b01                 mov eax, dword ptr [ecx]
// 0044648b  8b4008               mov eax, dword ptr [eax + 8]
// 0044648e  52                   push edx
// 0044648f  ffd0                 call eax
// 00446491  5f                   pop edi
// 00446492  b001                 mov al, 1
// 00446494  5e                   pop esi
// 00446495  c20800               ret 8
// 00446498  5f                   pop edi
// 00446499  32c0                 xor al, al
// 0044649b  5e                   pop esi
// 0044649c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
