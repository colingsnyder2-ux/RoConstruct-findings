// roc 2007-08 005b8ba0  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8ba0
//
// 005b8ba0  56                   push esi
// 005b8ba1  57                   push edi
// 005b8ba2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005b8ba6  57                   push edi
// 005b8ba7  8bf1                 mov esi, ecx
// 005b8ba9  e832f3ffff           call 0x5b7ee0
// 005b8bae  8bc8                 mov ecx, eax
// 005b8bb0  e80be1e8ff           call 0x446cc0
// 005b8bb5  84c0                 test al, al
// 005b8bb7  741f                 je 0x5b8bd8
// 005b8bb9  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b8bbc  8d542410             lea edx, [esp + 0x10]
// 005b8bc0  52                   push edx
// 005b8bc1  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b8bc5  897c2414             mov dword ptr [esp + 0x14], edi
// 005b8bc9  8b01                 mov eax, dword ptr [ecx]
// 005b8bcb  8b4008               mov eax, dword ptr [eax + 8]
// 005b8bce  52                   push edx
// 005b8bcf  ffd0                 call eax
// 005b8bd1  5f                   pop edi
// 005b8bd2  b001                 mov al, 1
// 005b8bd4  5e                   pop esi
// 005b8bd5  c20800               ret 8
// 005b8bd8  5f                   pop edi
// 005b8bd9  32c0                 xor al, al
// 005b8bdb  5e                   pop esi
// 005b8bdc  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
