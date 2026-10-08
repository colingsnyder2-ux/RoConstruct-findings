// roc 2007-03 005a9930  unit: seg_005a0000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a9930
//
// 005a9930  6aff                 push -1
// 005a9932  68c89e7500           push 0x759ec8
// 005a9937  64a100000000         mov eax, dword ptr fs:[0]
// 005a993d  50                   push eax
// 005a993e  64892500000000       mov dword ptr fs:[0], esp
// 005a9945  51                   push ecx
// 005a9946  56                   push esi
// 005a9947  8bf1                 mov esi, ecx
// 005a9949  57                   push edi
// 005a994a  89742408             mov dword ptr [esp + 8], esi
// 005a994e  e87daaf8ff           call 0x5343d0
// 005a9953  8bf8                 mov edi, eax
// 005a9955  e826f0fdff           call 0x588980
// 005a995a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a995e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a9962  51                   push ecx
// 005a9963  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a9967  52                   push edx
// 005a9968  51                   push ecx
// 005a9969  57                   push edi
// 005a996a  50                   push eax
// 005a996b  8bce                 mov ecx, esi
// 005a996d  e85ea0fdff           call 0x5839d0
// 005a9972  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a9976  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a997a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a997e  52                   push edx
// 005a997f  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a9983  50                   push eax
// 005a9984  51                   push ecx
// 005a9985  52                   push edx
// 005a9986  8d442444             lea eax, [esp + 0x44]
// 005a998a  c74618389f7900       mov dword ptr [esi + 0x18], 0x799f38
// 005a9991  50                   push eax
// 005a9992  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005a999a  c70658667b00         mov dword ptr [esi], 0x7b6658
// 005a99a0  c7461850667b00       mov dword ptr [esi + 0x18], 0x7b6650
// 005a99a7  e864f5ffff           call 0x5a8f10
// 005a99ac  8b08                 mov ecx, dword ptr [eax]
// 005a99ae  c70000000000         mov dword ptr [eax], 0
// 005a99b4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005a99b7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005a99bb  51                   push ecx
// 005a99bc  e82f470700           call 0x61e0f0
// 005a99c1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a99c5  83c418               add esp, 0x18
// 005a99c8  5f                   pop edi
// 005a99c9  8bc6                 mov eax, esi
// 005a99cb  5e                   pop esi
// 005a99cc  64890d00000000       mov dword ptr fs:[0], ecx
// 005a99d3  83c410               add esp, 0x10
// 005a99d6  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
