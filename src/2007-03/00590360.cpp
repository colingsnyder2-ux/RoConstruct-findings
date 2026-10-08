// roc 2007-03 00590360  unit: seg_00590000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00590360
//
// 00590360  6aff                 push -1
// 00590362  68c89e7500           push 0x759ec8
// 00590367  64a100000000         mov eax, dword ptr fs:[0]
// 0059036d  50                   push eax
// 0059036e  64892500000000       mov dword ptr fs:[0], esp
// 00590375  51                   push ecx
// 00590376  56                   push esi
// 00590377  8bf1                 mov esi, ecx
// 00590379  57                   push edi
// 0059037a  89742408             mov dword ptr [esp + 8], esi
// 0059037e  e84df3faff           call 0x53f6d0
// 00590383  8bf8                 mov edi, eax
// 00590385  e816fdffff           call 0x5900a0
// 0059038a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059038e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00590392  51                   push ecx
// 00590393  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00590397  52                   push edx
// 00590398  51                   push ecx
// 00590399  57                   push edi
// 0059039a  50                   push eax
// 0059039b  8bce                 mov ecx, esi
// 0059039d  e82e36ffff           call 0x5839d0
// 005903a2  8b542430             mov edx, dword ptr [esp + 0x30]
// 005903a6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005903aa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005903ae  52                   push edx
// 005903af  8b542428             mov edx, dword ptr [esp + 0x28]
// 005903b3  50                   push eax
// 005903b4  51                   push ecx
// 005903b5  52                   push edx
// 005903b6  8d442444             lea eax, [esp + 0x44]
// 005903ba  c74618389f7900       mov dword ptr [esi + 0x18], 0x799f38
// 005903c1  50                   push eax
// 005903c2  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005903ca  c706e4167b00         mov dword ptr [esi], 0x7b16e4
// 005903d0  c74618dc167b00       mov dword ptr [esi + 0x18], 0x7b16dc
// 005903d7  e854f0ffff           call 0x58f430
// 005903dc  8b08                 mov ecx, dword ptr [eax]
// 005903de  c70000000000         mov dword ptr [eax], 0
// 005903e4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005903e7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005903eb  51                   push ecx
// 005903ec  e8ffdc0800           call 0x61e0f0
// 005903f1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005903f5  83c418               add esp, 0x18
// 005903f8  5f                   pop edi
// 005903f9  8bc6                 mov eax, esi
// 005903fb  5e                   pop esi
// 005903fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00590403  83c410               add esp, 0x10
// 00590406  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
