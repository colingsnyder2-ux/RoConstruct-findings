// roc 2007-03 005e2c30  unit: seg_005e0000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e2c30
//
// 005e2c30  6aff                 push -1
// 005e2c32  68c89e7500           push 0x759ec8
// 005e2c37  64a100000000         mov eax, dword ptr fs:[0]
// 005e2c3d  50                   push eax
// 005e2c3e  64892500000000       mov dword ptr fs:[0], esp
// 005e2c45  51                   push ecx
// 005e2c46  56                   push esi
// 005e2c47  8bf1                 mov esi, ecx
// 005e2c49  57                   push edi
// 005e2c4a  89742408             mov dword ptr [esp + 8], esi
// 005e2c4e  e87dcaf5ff           call 0x53f6d0
// 005e2c53  8bf8                 mov edi, eax
// 005e2c55  e82672faff           call 0x589e80
// 005e2c5a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e2c5e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e2c62  51                   push ecx
// 005e2c63  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e2c67  52                   push edx
// 005e2c68  51                   push ecx
// 005e2c69  57                   push edi
// 005e2c6a  50                   push eax
// 005e2c6b  8bce                 mov ecx, esi
// 005e2c6d  e85e0dfaff           call 0x5839d0
// 005e2c72  8b542430             mov edx, dword ptr [esp + 0x30]
// 005e2c76  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e2c7a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e2c7e  52                   push edx
// 005e2c7f  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e2c83  50                   push eax
// 005e2c84  51                   push ecx
// 005e2c85  52                   push edx
// 005e2c86  8d442444             lea eax, [esp + 0x44]
// 005e2c8a  c74618389f7900       mov dword ptr [esi + 0x18], 0x799f38
// 005e2c91  50                   push eax
// 005e2c92  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005e2c9a  c706a8e57b00         mov dword ptr [esi], 0x7be5a8
// 005e2ca0  c74618a0e57b00       mov dword ptr [esi + 0x18], 0x7be5a0
// 005e2ca7  e8d4c8ffff           call 0x5df580
// 005e2cac  8b08                 mov ecx, dword ptr [eax]
// 005e2cae  c70000000000         mov dword ptr [eax], 0
// 005e2cb4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005e2cb7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005e2cbb  51                   push ecx
// 005e2cbc  e82fb40300           call 0x61e0f0
// 005e2cc1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e2cc5  83c418               add esp, 0x18
// 005e2cc8  5f                   pop edi
// 005e2cc9  8bc6                 mov eax, esi
// 005e2ccb  5e                   pop esi
// 005e2ccc  64890d00000000       mov dword ptr fs:[0], ecx
// 005e2cd3  83c410               add esp, 0x10
// 005e2cd6  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
