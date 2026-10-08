// roc 2007-03 00541430  unit: seg_00540000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00541430
//
// 00541430  6aff                 push -1
// 00541432  68c89e7500           push 0x759ec8
// 00541437  64a100000000         mov eax, dword ptr fs:[0]
// 0054143d  50                   push eax
// 0054143e  64892500000000       mov dword ptr fs:[0], esp
// 00541445  51                   push ecx
// 00541446  56                   push esi
// 00541447  8bf1                 mov esi, ecx
// 00541449  57                   push edi
// 0054144a  89742408             mov dword ptr [esp + 8], esi
// 0054144e  e87de2ffff           call 0x53f6d0
// 00541453  8bf8                 mov edi, eax
// 00541455  e80687edff           call 0x419b60
// 0054145a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0054145e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00541462  51                   push ecx
// 00541463  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00541467  52                   push edx
// 00541468  51                   push ecx
// 00541469  57                   push edi
// 0054146a  50                   push eax
// 0054146b  8bce                 mov ecx, esi
// 0054146d  e85e250400           call 0x5839d0
// 00541472  8b542430             mov edx, dword ptr [esp + 0x30]
// 00541476  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0054147a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0054147e  52                   push edx
// 0054147f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00541483  50                   push eax
// 00541484  51                   push ecx
// 00541485  52                   push edx
// 00541486  8d442444             lea eax, [esp + 0x44]
// 0054148a  c74618389f7900       mov dword ptr [esi + 0x18], 0x799f38
// 00541491  50                   push eax
// 00541492  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0054149a  c70628677a00         mov dword ptr [esi], 0x7a6728
// 005414a0  c7461820677a00       mov dword ptr [esi + 0x18], 0x7a6720
// 005414a7  e874e9ffff           call 0x53fe20
// 005414ac  8b08                 mov ecx, dword ptr [eax]
// 005414ae  c70000000000         mov dword ptr [eax], 0
// 005414b4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005414b7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005414bb  51                   push ecx
// 005414bc  e82fcc0d00           call 0x61e0f0
// 005414c1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005414c5  83c418               add esp, 0x18
// 005414c8  5f                   pop edi
// 005414c9  8bc6                 mov eax, esi
// 005414cb  5e                   pop esi
// 005414cc  64890d00000000       mov dword ptr fs:[0], ecx
// 005414d3  83c410               add esp, 0x10
// 005414d6  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
