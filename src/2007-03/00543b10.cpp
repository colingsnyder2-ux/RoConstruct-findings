// roc 2007-03 00543b10  unit: seg_00540000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543b10
//
// 00543b10  6aff                 push -1
// 00543b12  68c89e7500           push 0x759ec8
// 00543b17  64a100000000         mov eax, dword ptr fs:[0]
// 00543b1d  50                   push eax
// 00543b1e  64892500000000       mov dword ptr fs:[0], esp
// 00543b25  51                   push ecx
// 00543b26  56                   push esi
// 00543b27  8bf1                 mov esi, ecx
// 00543b29  57                   push edi
// 00543b2a  89742408             mov dword ptr [esp + 8], esi
// 00543b2e  e8bdfbffff           call 0x5436f0
// 00543b33  8bf8                 mov edi, eax
// 00543b35  e816fcffff           call 0x543750
// 00543b3a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00543b3e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00543b42  51                   push ecx
// 00543b43  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00543b47  52                   push edx
// 00543b48  51                   push ecx
// 00543b49  57                   push edi
// 00543b4a  50                   push eax
// 00543b4b  8bce                 mov ecx, esi
// 00543b4d  e87efe0300           call 0x5839d0
// 00543b52  897e18               mov dword ptr [esi + 0x18], edi
// 00543b55  8b542430             mov edx, dword ptr [esp + 0x30]
// 00543b59  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00543b5d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00543b61  52                   push edx
// 00543b62  8b542428             mov edx, dword ptr [esp + 0x28]
// 00543b66  50                   push eax
// 00543b67  51                   push ecx
// 00543b68  52                   push edx
// 00543b69  8d442444             lea eax, [esp + 0x44]
// 00543b6d  50                   push eax
// 00543b6e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00543b76  c7061c6b7a00         mov dword ptr [esi], 0x7a6b1c
// 00543b7c  e8eff5ffff           call 0x543170
// 00543b81  8b08                 mov ecx, dword ptr [eax]
// 00543b83  c70000000000         mov dword ptr [eax], 0
// 00543b89  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00543b8c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00543b90  51                   push ecx
// 00543b91  e85aa50d00           call 0x61e0f0
// 00543b96  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00543b9a  83c418               add esp, 0x18
// 00543b9d  5f                   pop edi
// 00543b9e  8bc6                 mov eax, esi
// 00543ba0  5e                   pop esi
// 00543ba1  64890d00000000       mov dword ptr fs:[0], ecx
// 00543ba8  83c410               add esp, 0x10
// 00543bab  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
