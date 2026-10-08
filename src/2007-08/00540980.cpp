// roc 2007-08 00540980  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540980
//
// 00540980  6aff                 push -1
// 00540982  6838a77500           push 0x75a738
// 00540987  64a100000000         mov eax, dword ptr fs:[0]
// 0054098d  50                   push eax
// 0054098e  64892500000000       mov dword ptr fs:[0], esp
// 00540995  51                   push ecx
// 00540996  56                   push esi
// 00540997  8bf1                 mov esi, ecx
// 00540999  57                   push edi
// 0054099a  89742408             mov dword ptr [esp + 8], esi
// 0054099e  e88ddbffff           call 0x53e530
// 005409a3  8bf8                 mov edi, eax
// 005409a5  e8e67cedff           call 0x418690
// 005409aa  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005409ae  8b542420             mov edx, dword ptr [esp + 0x20]
// 005409b2  51                   push ecx
// 005409b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005409b7  52                   push edx
// 005409b8  51                   push ecx
// 005409b9  57                   push edi
// 005409ba  50                   push eax
// 005409bb  8bce                 mov ecx, esi
// 005409bd  e81e6a0400           call 0x5873e0
// 005409c2  8b542430             mov edx, dword ptr [esp + 0x30]
// 005409c6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005409ca  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005409ce  52                   push edx
// 005409cf  8b542428             mov edx, dword ptr [esp + 0x28]
// 005409d3  50                   push eax
// 005409d4  51                   push ecx
// 005409d5  52                   push edx
// 005409d6  8d442444             lea eax, [esp + 0x44]
// 005409da  c74618dcad7900       mov dword ptr [esi + 0x18], 0x79addc
// 005409e1  50                   push eax
// 005409e2  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005409ea  c70624667a00         mov dword ptr [esi], 0x7a6624
// 005409f0  c746181c667a00       mov dword ptr [esi + 0x18], 0x7a661c
// 005409f7  e814e5ffff           call 0x53ef10
// 005409fc  8b08                 mov ecx, dword ptr [eax]
// 005409fe  c70000000000         mov dword ptr [eax], 0
// 00540a04  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00540a07  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00540a0b  51                   push ecx
// 00540a0c  e851f20e00           call 0x62fc62
// 00540a11  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00540a15  83c418               add esp, 0x18
// 00540a18  5f                   pop edi
// 00540a19  8bc6                 mov eax, esi
// 00540a1b  5e                   pop esi
// 00540a1c  64890d00000000       mov dword ptr fs:[0], ecx
// 00540a23  83c410               add esp, 0x10
// 00540a26  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
