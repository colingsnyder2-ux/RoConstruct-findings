// roc 2008-06 004913d0  unit: RBX::Network::VPlayer::?$PropDescriptor  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004913d0
//
// 004913d0  6aff                 push -1
// 004913d2  6868e37c00           push 0x7ce368
// 004913d7  64a100000000         mov eax, dword ptr fs:[0]
// 004913dd  50                   push eax
// 004913de  64892500000000       mov dword ptr fs:[0], esp
// 004913e5  51                   push ecx
// 004913e6  56                   push esi
// 004913e7  8bf1                 mov esi, ecx
// 004913e9  57                   push edi
// 004913ea  89742408             mov dword ptr [esp + 8], esi
// 004913ee  e81d95ffff           call 0x48a910
// 004913f3  8bf8                 mov edi, eax
// 004913f5  e866ffffff           call 0x491360
// 004913fa  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004913fe  8b542420             mov edx, dword ptr [esp + 0x20]
// 00491402  51                   push ecx
// 00491403  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00491407  52                   push edx
// 00491408  51                   push ecx
// 00491409  57                   push edi
// 0049140a  50                   push eax
// 0049140b  8bce                 mov ecx, esi
// 0049140d  e83eb20d00           call 0x56c650
// 00491412  8b542430             mov edx, dword ptr [esp + 0x30]
// 00491416  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0049141a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049141e  52                   push edx
// 0049141f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00491423  50                   push eax
// 00491424  51                   push ecx
// 00491425  52                   push edx
// 00491426  8d442444             lea eax, [esp + 0x44]
// 0049142a  50                   push eax
// 0049142b  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00491433  c706541b8200         mov dword ptr [esi], 0x821b54
// 00491439  c746184c1b8200       mov dword ptr [esi + 0x18], 0x821b4c
// 00491440  e85b9fffff           call 0x48b3a0
// 00491445  8b08                 mov ecx, dword ptr [eax]
// 00491447  c70000000000         mov dword ptr [eax], 0
// 0049144d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00491451  83c414               add esp, 0x14
// 00491454  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00491457  85c0                 test eax, eax
// 00491459  7409                 je 0x491464
// 0049145b  50                   push eax
// 0049145c  e819f22000           call 0x6a067a
// 00491461  83c404               add esp, 4
// 00491464  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00491468  5f                   pop edi
// 00491469  8bc6                 mov eax, esi
// 0049146b  5e                   pop esi
// 0049146c  64890d00000000       mov dword ptr fs:[0], ecx
// 00491473  83c410               add esp, 0x10
// 00491476  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
