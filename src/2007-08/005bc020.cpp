// roc 2007-08 005bc020  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bc020
//
// 005bc020  56                   push esi
// 005bc021  57                   push edi
// 005bc022  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005bc026  57                   push edi
// 005bc027  8bf1                 mov esi, ecx
// 005bc029  e822fcffff           call 0x5bbc50
// 005bc02e  8bc8                 mov ecx, eax
// 005bc030  e88bace8ff           call 0x446cc0
// 005bc035  84c0                 test al, al
// 005bc037  741f                 je 0x5bc058
// 005bc039  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005bc03c  8d542410             lea edx, [esp + 0x10]
// 005bc040  52                   push edx
// 005bc041  8b542410             mov edx, dword ptr [esp + 0x10]
// 005bc045  897c2414             mov dword ptr [esp + 0x14], edi
// 005bc049  8b01                 mov eax, dword ptr [ecx]
// 005bc04b  8b4008               mov eax, dword ptr [eax + 8]
// 005bc04e  52                   push edx
// 005bc04f  ffd0                 call eax
// 005bc051  5f                   pop edi
// 005bc052  b001                 mov al, 1
// 005bc054  5e                   pop esi
// 005bc055  c20800               ret 8
// 005bc058  5f                   pop edi
// 005bc059  32c0                 xor al, al
// 005bc05b  5e                   pop esi
// 005bc05c  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
