// roc 2007-08 00579f50  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579f50
//
// 00579f50  6aff                 push -1
// 00579f52  6838a77500           push 0x75a738
// 00579f57  64a100000000         mov eax, dword ptr fs:[0]
// 00579f5d  50                   push eax
// 00579f5e  64892500000000       mov dword ptr fs:[0], esp
// 00579f65  51                   push ecx
// 00579f66  56                   push esi
// 00579f67  8bf1                 mov esi, ecx
// 00579f69  57                   push edi
// 00579f6a  89742408             mov dword ptr [esp + 8], esi
// 00579f6e  e80dffffff           call 0x579e80
// 00579f73  8bf8                 mov edi, eax
// 00579f75  e866ffffff           call 0x579ee0
// 00579f7a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00579f7e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00579f82  51                   push ecx
// 00579f83  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00579f87  52                   push edx
// 00579f88  51                   push ecx
// 00579f89  57                   push edi
// 00579f8a  50                   push eax
// 00579f8b  8bce                 mov ecx, esi
// 00579f8d  e84ed40000           call 0x5873e0
// 00579f92  897e18               mov dword ptr [esi + 0x18], edi
// 00579f95  8b542430             mov edx, dword ptr [esp + 0x30]
// 00579f99  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00579f9d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00579fa1  52                   push edx
// 00579fa2  8b542428             mov edx, dword ptr [esp + 0x28]
// 00579fa6  50                   push eax
// 00579fa7  51                   push ecx
// 00579fa8  52                   push edx
// 00579fa9  8d442444             lea eax, [esp + 0x44]
// 00579fad  50                   push eax
// 00579fae  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00579fb6  c70648b27a00         mov dword ptr [esi], 0x7ab248
// 00579fbc  e88ff9ffff           call 0x579950
// 00579fc1  8b08                 mov ecx, dword ptr [eax]
// 00579fc3  c70000000000         mov dword ptr [eax], 0
// 00579fc9  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00579fcc  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00579fd0  51                   push ecx
// 00579fd1  e88c5c0b00           call 0x62fc62
// 00579fd6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00579fda  83c418               add esp, 0x18
// 00579fdd  5f                   pop edi
// 00579fde  8bc6                 mov eax, esi
// 00579fe0  5e                   pop esi
// 00579fe1  64890d00000000       mov dword ptr fs:[0], ecx
// 00579fe8  83c410               add esp, 0x10
// 00579feb  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
