// roc 2007-08 00577880  unit: RBX::Part::W4PartType::?$EnumDesc  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577880
//
// 00577880  6aff                 push -1
// 00577882  6838a77500           push 0x75a738
// 00577887  64a100000000         mov eax, dword ptr fs:[0]
// 0057788d  50                   push eax
// 0057788e  64892500000000       mov dword ptr fs:[0], esp
// 00577895  51                   push ecx
// 00577896  56                   push esi
// 00577897  8bf1                 mov esi, ecx
// 00577899  57                   push edi
// 0057789a  89742408             mov dword ptr [esp + 8], esi
// 0057789e  e8fdf7ffff           call 0x5770a0
// 005778a3  8bf8                 mov edi, eax
// 005778a5  e856f8ffff           call 0x577100
// 005778aa  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005778ae  8b542420             mov edx, dword ptr [esp + 0x20]
// 005778b2  51                   push ecx
// 005778b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005778b7  52                   push edx
// 005778b8  51                   push ecx
// 005778b9  57                   push edi
// 005778ba  50                   push eax
// 005778bb  8bce                 mov ecx, esi
// 005778bd  e81efb0000           call 0x5873e0
// 005778c2  897e18               mov dword ptr [esi + 0x18], edi
// 005778c5  8b542430             mov edx, dword ptr [esp + 0x30]
// 005778c9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005778cd  83ec0c               sub esp, 0xc
// 005778d0  8bc4                 mov eax, esp
// 005778d2  8910                 mov dword ptr [eax], edx
// 005778d4  8b542444             mov edx, dword ptr [esp + 0x44]
// 005778d8  894804               mov dword ptr [eax + 4], ecx
// 005778db  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005778df  895008               mov dword ptr [eax + 8], edx
// 005778e2  8b542434             mov edx, dword ptr [esp + 0x34]
// 005778e6  83ec0c               sub esp, 0xc
// 005778e9  8bc4                 mov eax, esp
// 005778eb  8908                 mov dword ptr [eax], ecx
// 005778ed  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005778f1  895004               mov dword ptr [eax + 4], edx
// 005778f4  8d542454             lea edx, [esp + 0x54]
// 005778f8  52                   push edx
// 005778f9  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00577901  c70644ad7a00         mov dword ptr [esi], 0x7aad44
// 00577907  894808               mov dword ptr [eax + 8], ecx
// 0057790a  e8a1daffff           call 0x5753b0
// 0057790f  8b08                 mov ecx, dword ptr [eax]
// 00577911  c70000000000         mov dword ptr [eax], 0
// 00577917  8b442458             mov eax, dword ptr [esp + 0x58]
// 0057791b  50                   push eax
// 0057791c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0057791f  e83e830b00           call 0x62fc62
// 00577924  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00577928  83c420               add esp, 0x20
// 0057792b  5f                   pop edi
// 0057792c  8bc6                 mov eax, esi
// 0057792e  64890d00000000       mov dword ptr fs:[0], ecx
// 00577935  5e                   pop esi
// 00577936  83c410               add esp, 0x10
// 00577939  c22400               ret 0x24
// library rbxgs/v8datamodel\PVInstance.cpp (function ??$?0P8PVInstance@RBX@@BE?AW4ControllerType@Controller@1@XZP801@AEXW4231@@Z@?$EnumPropDescriptor@VPVInstance@RBX@@W4ControllerType@Controller@2@@Reflection@RBX@@QAE@PBD0P8PVInstance@2@BE?AW4ControllerType@Controller@2@XZP832@AEXW4452@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
