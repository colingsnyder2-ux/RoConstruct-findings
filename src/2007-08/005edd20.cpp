// roc 2007-08 005edd20  unit: RBX::VBodyThrust::?$FactoryProduct  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005edd20
//
// 005edd20  6aff                 push -1
// 005edd22  6838a77500           push 0x75a738
// 005edd27  64a100000000         mov eax, dword ptr fs:[0]
// 005edd2d  50                   push eax
// 005edd2e  64892500000000       mov dword ptr fs:[0], esp
// 005edd35  51                   push ecx
// 005edd36  56                   push esi
// 005edd37  8bf1                 mov esi, ecx
// 005edd39  57                   push edi
// 005edd3a  89742408             mov dword ptr [esp + 8], esi
// 005edd3e  e87d29f4ff           call 0x5306c0
// 005edd43  8bf8                 mov edi, eax
// 005edd45  e866ffffff           call 0x5edcb0
// 005edd4a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005edd4e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005edd52  51                   push ecx
// 005edd53  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005edd57  52                   push edx
// 005edd58  51                   push ecx
// 005edd59  57                   push edi
// 005edd5a  50                   push eax
// 005edd5b  8bce                 mov ecx, esi
// 005edd5d  e87e96f9ff           call 0x5873e0
// 005edd62  8b542430             mov edx, dword ptr [esp + 0x30]
// 005edd66  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005edd6a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005edd6e  52                   push edx
// 005edd6f  8b542428             mov edx, dword ptr [esp + 0x28]
// 005edd73  50                   push eax
// 005edd74  51                   push ecx
// 005edd75  52                   push edx
// 005edd76  8d442444             lea eax, [esp + 0x44]
// 005edd7a  c74618dcad7900       mov dword ptr [esi + 0x18], 0x79addc
// 005edd81  50                   push eax
// 005edd82  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005edd8a  c70638f17b00         mov dword ptr [esi], 0x7bf138
// 005edd90  c7461830f17b00       mov dword ptr [esi + 0x18], 0x7bf130
// 005edd97  e894f3ffff           call 0x5ed130
// 005edd9c  8b08                 mov ecx, dword ptr [eax]
// 005edd9e  c70000000000         mov dword ptr [eax], 0
// 005edda4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005edda7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005eddab  51                   push ecx
// 005eddac  e8b11e0400           call 0x62fc62
// 005eddb1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005eddb5  83c418               add esp, 0x18
// 005eddb8  5f                   pop edi
// 005eddb9  8bc6                 mov eax, esi
// 005eddbb  5e                   pop esi
// 005eddbc  64890d00000000       mov dword ptr fs:[0], ecx
// 005eddc3  83c410               add esp, 0x10
// 005eddc6  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
