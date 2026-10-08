// roc 2007-08 005dce40  unit: RBX::VInstance::?$NonFactoryProduct  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dce40
//
// 005dce40  6aff                 push -1
// 005dce42  6838a77500           push 0x75a738
// 005dce47  64a100000000         mov eax, dword ptr fs:[0]
// 005dce4d  50                   push eax
// 005dce4e  64892500000000       mov dword ptr fs:[0], esp
// 005dce55  51                   push ecx
// 005dce56  56                   push esi
// 005dce57  8bf1                 mov esi, ecx
// 005dce59  57                   push edi
// 005dce5a  89742408             mov dword ptr [esp + 8], esi
// 005dce5e  e8bdd6ffff           call 0x5da520
// 005dce63  8bf8                 mov edi, eax
// 005dce65  e8a6f5ffff           call 0x5dc410
// 005dce6a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005dce6e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005dce72  51                   push ecx
// 005dce73  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dce77  52                   push edx
// 005dce78  51                   push ecx
// 005dce79  57                   push edi
// 005dce7a  50                   push eax
// 005dce7b  8bce                 mov ecx, esi
// 005dce7d  e85ea5faff           call 0x5873e0
// 005dce82  8b542430             mov edx, dword ptr [esp + 0x30]
// 005dce86  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dce8a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005dce8e  52                   push edx
// 005dce8f  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dce93  50                   push eax
// 005dce94  51                   push ecx
// 005dce95  52                   push edx
// 005dce96  8d442444             lea eax, [esp + 0x44]
// 005dce9a  c74618dcad7900       mov dword ptr [esi + 0x18], 0x79addc
// 005dcea1  50                   push eax
// 005dcea2  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005dceaa  c70624c77b00         mov dword ptr [esi], 0x7bc724
// 005dceb0  c746181cc77b00       mov dword ptr [esi + 0x18], 0x7bc71c
// 005dceb7  e8b4dcffff           call 0x5dab70
// 005dcebc  8b08                 mov ecx, dword ptr [eax]
// 005dcebe  c70000000000         mov dword ptr [eax], 0
// 005dcec4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005dcec7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005dcecb  51                   push ecx
// 005dcecc  e8912d0500           call 0x62fc62
// 005dced1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005dced5  83c418               add esp, 0x18
// 005dced8  5f                   pop edi
// 005dced9  8bc6                 mov eax, esi
// 005dcedb  5e                   pop esi
// 005dcedc  64890d00000000       mov dword ptr fs:[0], ecx
// 005dcee3  83c410               add esp, 0x10
// 005dcee6  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
