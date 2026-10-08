// roc 2007-08 005dc200  unit: VCRenderSettings::?$EnumPropDescriptor  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc200
//
// 005dc200  6aff                 push -1
// 005dc202  6838a77500           push 0x75a738
// 005dc207  64a100000000         mov eax, dword ptr fs:[0]
// 005dc20d  50                   push eax
// 005dc20e  64892500000000       mov dword ptr fs:[0], esp
// 005dc215  51                   push ecx
// 005dc216  56                   push esi
// 005dc217  8bf1                 mov esi, ecx
// 005dc219  57                   push edi
// 005dc21a  89742408             mov dword ptr [esp + 8], esi
// 005dc21e  e84dfeffff           call 0x5dc070
// 005dc223  8bf8                 mov edi, eax
// 005dc225  e80624fbff           call 0x58e630
// 005dc22a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005dc22e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005dc232  51                   push ecx
// 005dc233  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dc237  52                   push edx
// 005dc238  51                   push ecx
// 005dc239  57                   push edi
// 005dc23a  50                   push eax
// 005dc23b  8bce                 mov ecx, esi
// 005dc23d  e89eb1faff           call 0x5873e0
// 005dc242  897e18               mov dword ptr [esi + 0x18], edi
// 005dc245  8b542430             mov edx, dword ptr [esp + 0x30]
// 005dc249  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dc24d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005dc251  52                   push edx
// 005dc252  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dc256  50                   push eax
// 005dc257  51                   push ecx
// 005dc258  52                   push edx
// 005dc259  8d442444             lea eax, [esp + 0x44]
// 005dc25d  50                   push eax
// 005dc25e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005dc266  c7061cc57b00         mov dword ptr [esi], 0x7bc51c
// 005dc26c  e87feaffff           call 0x5dacf0
// 005dc271  8b08                 mov ecx, dword ptr [eax]
// 005dc273  c70000000000         mov dword ptr [eax], 0
// 005dc279  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005dc27c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005dc280  51                   push ecx
// 005dc281  e8dc390500           call 0x62fc62
// 005dc286  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005dc28a  83c418               add esp, 0x18
// 005dc28d  5f                   pop edi
// 005dc28e  8bc6                 mov eax, esi
// 005dc290  5e                   pop esi
// 005dc291  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc298  83c410               add esp, 0x10
// 005dc29b  c21c00               ret 0x1c
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??$?0P8FaceInstance@RBX@@BE?AW4NormalId@1@XZP801@AEXW421@@Z@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QAE@PBD0P8FaceInstance@2@BE?AW4NormalId@2@XZP832@AEXW442@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
