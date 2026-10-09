// roc 2008-06 00559920  unit: RBX::VInstance::?$SignalDesc  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559920
//
// 00559920  6aff                 push -1
// 00559922  6868e37c00           push 0x7ce368
// 00559927  64a100000000         mov eax, dword ptr fs:[0]
// 0055992d  50                   push eax
// 0055992e  64892500000000       mov dword ptr fs:[0], esp
// 00559935  51                   push ecx
// 00559936  56                   push esi
// 00559937  8bf1                 mov esi, ecx
// 00559939  57                   push edi
// 0055993a  89742408             mov dword ptr [esp + 8], esi
// 0055993e  e8bdddffff           call 0x557700
// 00559943  8bf8                 mov edi, eax
// 00559945  e83614ebff           call 0x40ad80
// 0055994a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0055994e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00559952  51                   push ecx
// 00559953  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00559957  52                   push edx
// 00559958  51                   push ecx
// 00559959  57                   push edi
// 0055995a  50                   push eax
// 0055995b  8bce                 mov ecx, esi
// 0055995d  e8ee2c0100           call 0x56c650
// 00559962  8b542430             mov edx, dword ptr [esp + 0x30]
// 00559966  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055996a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055996e  52                   push edx
// 0055996f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00559973  50                   push eax
// 00559974  51                   push ecx
// 00559975  52                   push edx
// 00559976  8d442444             lea eax, [esp + 0x44]
// 0055997a  50                   push eax
// 0055997b  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00559983  c70668d78200         mov dword ptr [esi], 0x82d768
// 00559989  c7461860d78200       mov dword ptr [esi + 0x18], 0x82d760
// 00559990  e84be6ffff           call 0x557fe0
// 00559995  8b08                 mov ecx, dword ptr [eax]
// 00559997  c70000000000         mov dword ptr [eax], 0
// 0055999d  8b442448             mov eax, dword ptr [esp + 0x48]
// 005599a1  83c414               add esp, 0x14
// 005599a4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005599a7  85c0                 test eax, eax
// 005599a9  7409                 je 0x5599b4
// 005599ab  50                   push eax
// 005599ac  e8c96c1400           call 0x6a067a
// 005599b1  83c404               add esp, 4
// 005599b4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005599b8  5f                   pop edi
// 005599b9  8bc6                 mov eax, esi
// 005599bb  5e                   pop esi
// 005599bc  64890d00000000       mov dword ptr fs:[0], ecx
// 005599c3  83c410               add esp, 0x10
// 005599c6  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
