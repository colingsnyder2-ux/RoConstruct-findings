// roc 2007-08 005f4890  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f4890
//
// 005f4890  6aff                 push -1
// 005f4892  6838a77500           push 0x75a738
// 005f4897  64a100000000         mov eax, dword ptr fs:[0]
// 005f489d  50                   push eax
// 005f489e  64892500000000       mov dword ptr fs:[0], esp
// 005f48a5  51                   push ecx
// 005f48a6  56                   push esi
// 005f48a7  8bf1                 mov esi, ecx
// 005f48a9  57                   push edi
// 005f48aa  89742408             mov dword ptr [esp + 8], esi
// 005f48ae  e87d9cf4ff           call 0x53e530
// 005f48b3  8bf8                 mov edi, eax
// 005f48b5  e856bdf9ff           call 0x590610
// 005f48ba  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f48be  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f48c2  51                   push ecx
// 005f48c3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f48c7  52                   push edx
// 005f48c8  51                   push ecx
// 005f48c9  57                   push edi
// 005f48ca  50                   push eax
// 005f48cb  8bce                 mov ecx, esi
// 005f48cd  e80e2bf9ff           call 0x5873e0
// 005f48d2  8b542430             mov edx, dword ptr [esp + 0x30]
// 005f48d6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f48da  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f48de  52                   push edx
// 005f48df  8b542428             mov edx, dword ptr [esp + 0x28]
// 005f48e3  50                   push eax
// 005f48e4  51                   push ecx
// 005f48e5  52                   push edx
// 005f48e6  8d442444             lea eax, [esp + 0x44]
// 005f48ea  c74618dcad7900       mov dword ptr [esi + 0x18], 0x79addc
// 005f48f1  50                   push eax
// 005f48f2  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005f48fa  c706c4087c00         mov dword ptr [esi], 0x7c08c4
// 005f4900  c74618bc087c00       mov dword ptr [esi + 0x18], 0x7c08bc
// 005f4907  e814c8ffff           call 0x5f1120
// 005f490c  8b08                 mov ecx, dword ptr [eax]
// 005f490e  c70000000000         mov dword ptr [eax], 0
// 005f4914  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005f4917  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f491b  51                   push ecx
// 005f491c  e841b30300           call 0x62fc62
// 005f4921  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f4925  83c418               add esp, 0x18
// 005f4928  5f                   pop edi
// 005f4929  8bc6                 mov eax, esi
// 005f492b  5e                   pop esi
// 005f492c  64890d00000000       mov dword ptr fs:[0], ecx
// 005f4933  83c410               add esp, 0x10
// 005f4936  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
