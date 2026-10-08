// roc 2007-08 0059b260  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b260
//
// 0059b260  6aff                 push -1
// 0059b262  6838a77500           push 0x75a738
// 0059b267  64a100000000         mov eax, dword ptr fs:[0]
// 0059b26d  50                   push eax
// 0059b26e  64892500000000       mov dword ptr fs:[0], esp
// 0059b275  51                   push ecx
// 0059b276  56                   push esi
// 0059b277  8bf1                 mov esi, ecx
// 0059b279  57                   push edi
// 0059b27a  89742408             mov dword ptr [esp + 8], esi
// 0059b27e  e8ad32faff           call 0x53e530
// 0059b283  8bf8                 mov edi, eax
// 0059b285  e816fdffff           call 0x59afa0
// 0059b28a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059b28e  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059b292  51                   push ecx
// 0059b293  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059b297  52                   push edx
// 0059b298  51                   push ecx
// 0059b299  57                   push edi
// 0059b29a  50                   push eax
// 0059b29b  8bce                 mov ecx, esi
// 0059b29d  e83ec1feff           call 0x5873e0
// 0059b2a2  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059b2a6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059b2aa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059b2ae  52                   push edx
// 0059b2af  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059b2b3  50                   push eax
// 0059b2b4  51                   push ecx
// 0059b2b5  52                   push edx
// 0059b2b6  8d442444             lea eax, [esp + 0x44]
// 0059b2ba  c74618dcad7900       mov dword ptr [esi + 0x18], 0x79addc
// 0059b2c1  50                   push eax
// 0059b2c2  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0059b2ca  c70610177b00         mov dword ptr [esi], 0x7b1710
// 0059b2d0  c7461808177b00       mov dword ptr [esi + 0x18], 0x7b1708
// 0059b2d7  e854f2ffff           call 0x59a530
// 0059b2dc  8b08                 mov ecx, dword ptr [eax]
// 0059b2de  c70000000000         mov dword ptr [eax], 0
// 0059b2e4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0059b2e7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0059b2eb  51                   push ecx
// 0059b2ec  e871490900           call 0x62fc62
// 0059b2f1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059b2f5  83c418               add esp, 0x18
// 0059b2f8  5f                   pop edi
// 0059b2f9  8bc6                 mov eax, esi
// 0059b2fb  5e                   pop esi
// 0059b2fc  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b303  83c410               add esp, 0x10
// 0059b306  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
