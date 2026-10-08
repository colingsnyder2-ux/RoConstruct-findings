// roc 2007-08 005dd590  unit: RBX::VInstance::?$NonFactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd590
//
// 005dd590  6aff                 push -1
// 005dd592  6838a77500           push 0x75a738
// 005dd597  64a100000000         mov eax, dword ptr fs:[0]
// 005dd59d  50                   push eax
// 005dd59e  64892500000000       mov dword ptr fs:[0], esp
// 005dd5a5  51                   push ecx
// 005dd5a6  56                   push esi
// 005dd5a7  8bf1                 mov esi, ecx
// 005dd5a9  57                   push edi
// 005dd5aa  89742408             mov dword ptr [esp + 8], esi
// 005dd5ae  e84db9fdff           call 0x5b8f00
// 005dd5b3  8bf8                 mov edi, eax
// 005dd5b5  e87610fbff           call 0x58e630
// 005dd5ba  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005dd5be  8b542420             mov edx, dword ptr [esp + 0x20]
// 005dd5c2  51                   push ecx
// 005dd5c3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dd5c7  52                   push edx
// 005dd5c8  51                   push ecx
// 005dd5c9  57                   push edi
// 005dd5ca  50                   push eax
// 005dd5cb  8bce                 mov ecx, esi
// 005dd5cd  e80e9efaff           call 0x5873e0
// 005dd5d2  897e18               mov dword ptr [esi + 0x18], edi
// 005dd5d5  8b542430             mov edx, dword ptr [esp + 0x30]
// 005dd5d9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dd5dd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005dd5e1  52                   push edx
// 005dd5e2  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dd5e6  50                   push eax
// 005dd5e7  51                   push ecx
// 005dd5e8  52                   push edx
// 005dd5e9  8d442444             lea eax, [esp + 0x44]
// 005dd5ed  50                   push eax
// 005dd5ee  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005dd5f6  c70614c97b00         mov dword ptr [esi], 0x7bc914
// 005dd5fc  e82fd6ffff           call 0x5dac30
// 005dd601  8b08                 mov ecx, dword ptr [eax]
// 005dd603  c70000000000         mov dword ptr [eax], 0
// 005dd609  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005dd60c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005dd610  51                   push ecx
// 005dd611  e84c260500           call 0x62fc62
// 005dd616  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005dd61a  83c418               add esp, 0x18
// 005dd61d  5f                   pop edi
// 005dd61e  8bc6                 mov eax, esi
// 005dd620  5e                   pop esi
// 005dd621  64890d00000000       mov dword ptr fs:[0], ecx
// 005dd628  83c410               add esp, 0x10
// 005dd62b  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
