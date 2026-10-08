// roc 2007-08 005dc370  unit: VCRenderSettings::?$EnumPropDescriptor  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc370
//
// 005dc370  6aff                 push -1
// 005dc372  6838a77500           push 0x75a738
// 005dc377  64a100000000         mov eax, dword ptr fs:[0]
// 005dc37d  50                   push eax
// 005dc37e  64892500000000       mov dword ptr fs:[0], esp
// 005dc385  51                   push ecx
// 005dc386  56                   push esi
// 005dc387  8bf1                 mov esi, ecx
// 005dc389  57                   push edi
// 005dc38a  89742408             mov dword ptr [esp + 8], esi
// 005dc38e  e83dfdffff           call 0x5dc0d0
// 005dc393  8bf8                 mov edi, eax
// 005dc395  e89622fbff           call 0x58e630
// 005dc39a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005dc39e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005dc3a2  51                   push ecx
// 005dc3a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dc3a7  52                   push edx
// 005dc3a8  51                   push ecx
// 005dc3a9  57                   push edi
// 005dc3aa  50                   push eax
// 005dc3ab  8bce                 mov ecx, esi
// 005dc3ad  e82eb0faff           call 0x5873e0
// 005dc3b2  897e18               mov dword ptr [esi + 0x18], edi
// 005dc3b5  8b542430             mov edx, dword ptr [esp + 0x30]
// 005dc3b9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dc3bd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005dc3c1  52                   push edx
// 005dc3c2  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dc3c6  50                   push eax
// 005dc3c7  51                   push ecx
// 005dc3c8  52                   push edx
// 005dc3c9  8d442444             lea eax, [esp + 0x44]
// 005dc3cd  50                   push eax
// 005dc3ce  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005dc3d6  c70658c57b00         mov dword ptr [esi], 0x7bc558
// 005dc3dc  e86fe9ffff           call 0x5dad50
// 005dc3e1  8b08                 mov ecx, dword ptr [eax]
// 005dc3e3  c70000000000         mov dword ptr [eax], 0
// 005dc3e9  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005dc3ec  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005dc3f0  51                   push ecx
// 005dc3f1  e86c380500           call 0x62fc62
// 005dc3f6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005dc3fa  83c418               add esp, 0x18
// 005dc3fd  5f                   pop edi
// 005dc3fe  8bc6                 mov eax, esi
// 005dc400  5e                   pop esi
// 005dc401  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc408  83c410               add esp, 0x10
// 005dc40b  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
