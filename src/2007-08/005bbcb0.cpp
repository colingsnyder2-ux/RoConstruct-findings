// roc 2007-08 005bbcb0  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bbcb0
//
// 005bbcb0  6aff                 push -1
// 005bbcb2  6838a77500           push 0x75a738
// 005bbcb7  64a100000000         mov eax, dword ptr fs:[0]
// 005bbcbd  50                   push eax
// 005bbcbe  64892500000000       mov dword ptr fs:[0], esp
// 005bbcc5  51                   push ecx
// 005bbcc6  56                   push esi
// 005bbcc7  8bf1                 mov esi, ecx
// 005bbcc9  57                   push edi
// 005bbcca  89742408             mov dword ptr [esp + 8], esi
// 005bbcce  e87dffffff           call 0x5bbc50
// 005bbcd3  8bf8                 mov edi, eax
// 005bbcd5  e85659f7ff           call 0x531630
// 005bbcda  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005bbcde  8b542420             mov edx, dword ptr [esp + 0x20]
// 005bbce2  51                   push ecx
// 005bbce3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bbce7  52                   push edx
// 005bbce8  51                   push ecx
// 005bbce9  57                   push edi
// 005bbcea  50                   push eax
// 005bbceb  8bce                 mov ecx, esi
// 005bbced  e8eeb6fcff           call 0x5873e0
// 005bbcf2  897e18               mov dword ptr [esi + 0x18], edi
// 005bbcf5  8b542430             mov edx, dword ptr [esp + 0x30]
// 005bbcf9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005bbcfd  83ec0c               sub esp, 0xc
// 005bbd00  8bc4                 mov eax, esp
// 005bbd02  8910                 mov dword ptr [eax], edx
// 005bbd04  8b542444             mov edx, dword ptr [esp + 0x44]
// 005bbd08  894804               mov dword ptr [eax + 4], ecx
// 005bbd0b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005bbd0f  895008               mov dword ptr [eax + 8], edx
// 005bbd12  8b542434             mov edx, dword ptr [esp + 0x34]
// 005bbd16  83ec0c               sub esp, 0xc
// 005bbd19  8bc4                 mov eax, esp
// 005bbd1b  8908                 mov dword ptr [eax], ecx
// 005bbd1d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005bbd21  895004               mov dword ptr [eax + 4], edx
// 005bbd24  8d542454             lea edx, [esp + 0x54]
// 005bbd28  52                   push edx
// 005bbd29  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005bbd31  c706d48f7b00         mov dword ptr [esi], 0x7b8fd4
// 005bbd37  894808               mov dword ptr [eax + 8], ecx
// 005bbd3a  e8e1f6ffff           call 0x5bb420
// 005bbd3f  8b08                 mov ecx, dword ptr [eax]
// 005bbd41  c70000000000         mov dword ptr [eax], 0
// 005bbd47  8b442458             mov eax, dword ptr [esp + 0x58]
// 005bbd4b  50                   push eax
// 005bbd4c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005bbd4f  e80e3f0700           call 0x62fc62
// 005bbd54  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005bbd58  83c420               add esp, 0x20
// 005bbd5b  5f                   pop edi
// 005bbd5c  8bc6                 mov eax, esi
// 005bbd5e  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbd65  5e                   pop esi
// 005bbd66  83c410               add esp, 0x10
// 005bbd69  c22400               ret 0x24
// library rbxgs/v8datamodel\PVInstance.cpp (function ??$?0P8PVInstance@RBX@@BE?AW4ControllerType@Controller@1@XZP801@AEXW4231@@Z@?$EnumPropDescriptor@VPVInstance@RBX@@W4ControllerType@Controller@2@@Reflection@RBX@@QAE@PBD0P8PVInstance@2@BE?AW4ControllerType@Controller@2@XZP832@AEXW4452@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
