// roc 2008-06 00598100  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598100
//
// 00598100  6aff                 push -1
// 00598102  6840137d00           push 0x7d1340
// 00598107  64a100000000         mov eax, dword ptr fs:[0]
// 0059810d  50                   push eax
// 0059810e  64892500000000       mov dword ptr fs:[0], esp
// 00598115  51                   push ecx
// 00598116  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059811a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059811e  56                   push esi
// 0059811f  50                   push eax
// 00598120  8b442428             mov eax, dword ptr [esp + 0x28]
// 00598124  8bf1                 mov esi, ecx
// 00598126  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059812a  51                   push ecx
// 0059812b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059812f  52                   push edx
// 00598130  50                   push eax
// 00598131  51                   push ecx
// 00598132  8d542444             lea edx, [esp + 0x44]
// 00598136  52                   push edx
// 00598137  e8d4f7ffff           call 0x597910
// 0059813c  8b08                 mov ecx, dword ptr [eax]
// 0059813e  83c410               add esp, 0x10
// 00598141  c70000000000         mov dword ptr [eax], 0
// 00598147  8bc4                 mov eax, esp
// 00598149  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00598151  8964240c             mov dword ptr [esp + 0xc], esp
// 00598155  8908                 mov dword ptr [eax], ecx
// 00598157  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059815b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059815f  50                   push eax
// 00598160  51                   push ecx
// 00598161  c644242001           mov byte ptr [esp + 0x20], 1
// 00598166  e8b5feffff           call 0x598020
// 0059816b  50                   push eax
// 0059816c  8bce                 mov ecx, esi
// 0059816e  c644242400           mov byte ptr [esp + 0x24], 0
// 00598173  e828f7ffff           call 0x5978a0
// 00598178  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059817c  85c0                 test eax, eax
// 0059817e  7409                 je 0x598189
// 00598180  50                   push eax
// 00598181  e8f4841000           call 0x6a067a
// 00598186  83c404               add esp, 4
// 00598189  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059818d  c706a0258300         mov dword ptr [esi], 0x8325a0
// 00598193  8bc6                 mov eax, esi
// 00598195  64890d00000000       mov dword ptr fs:[0], ecx
// 0059819c  5e                   pop esi
// 0059819d  83c410               add esp, 0x10
// 005981a0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
