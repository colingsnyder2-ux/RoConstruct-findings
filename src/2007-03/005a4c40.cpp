// roc 2007-03 005a4c40  unit: seg_005a0000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a4c40
//
// 005a4c40  6aff                 push -1
// 005a4c42  68c89e7500           push 0x759ec8
// 005a4c47  64a100000000         mov eax, dword ptr fs:[0]
// 005a4c4d  50                   push eax
// 005a4c4e  64892500000000       mov dword ptr fs:[0], esp
// 005a4c55  51                   push ecx
// 005a4c56  56                   push esi
// 005a4c57  8bf1                 mov esi, ecx
// 005a4c59  57                   push edi
// 005a4c5a  89742408             mov dword ptr [esp + 8], esi
// 005a4c5e  e86df7f8ff           call 0x5343d0
// 005a4c63  8bf8                 mov edi, eax
// 005a4c65  e86637feff           call 0x5883d0
// 005a4c6a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a4c6e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a4c72  51                   push ecx
// 005a4c73  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a4c77  52                   push edx
// 005a4c78  51                   push ecx
// 005a4c79  57                   push edi
// 005a4c7a  50                   push eax
// 005a4c7b  8bce                 mov ecx, esi
// 005a4c7d  e84eedfdff           call 0x5839d0
// 005a4c82  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a4c86  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a4c8a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a4c8e  52                   push edx
// 005a4c8f  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a4c93  50                   push eax
// 005a4c94  51                   push ecx
// 005a4c95  52                   push edx
// 005a4c96  8d442444             lea eax, [esp + 0x44]
// 005a4c9a  c74618389f7900       mov dword ptr [esi + 0x18], 0x799f38
// 005a4ca1  50                   push eax
// 005a4ca2  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005a4caa  c70608577b00         mov dword ptr [esi], 0x7b5708
// 005a4cb0  c7461800577b00       mov dword ptr [esi + 0x18], 0x7b5700
// 005a4cb7  e834e8ffff           call 0x5a34f0
// 005a4cbc  8b08                 mov ecx, dword ptr [eax]
// 005a4cbe  c70000000000         mov dword ptr [eax], 0
// 005a4cc4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005a4cc7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005a4ccb  51                   push ecx
// 005a4ccc  e81f940700           call 0x61e0f0
// 005a4cd1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a4cd5  83c418               add esp, 0x18
// 005a4cd8  5f                   pop edi
// 005a4cd9  8bc6                 mov eax, esi
// 005a4cdb  5e                   pop esi
// 005a4cdc  64890d00000000       mov dword ptr fs:[0], ecx
// 005a4ce3  83c410               add esp, 0x10
// 005a4ce6  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
