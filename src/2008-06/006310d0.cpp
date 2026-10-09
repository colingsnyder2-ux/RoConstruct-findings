// roc 2008-06 006310d0  unit: RBX::BodyMover  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006310d0
//
// 006310d0  6aff                 push -1
// 006310d2  6868e37c00           push 0x7ce368
// 006310d7  64a100000000         mov eax, dword ptr fs:[0]
// 006310dd  50                   push eax
// 006310de  64892500000000       mov dword ptr fs:[0], esp
// 006310e5  51                   push ecx
// 006310e6  56                   push esi
// 006310e7  8bf1                 mov esi, ecx
// 006310e9  57                   push edi
// 006310ea  89742408             mov dword ptr [esp + 8], esi
// 006310ee  e84d2ef5ff           call 0x583f40
// 006310f3  8bf8                 mov edi, eax
// 006310f5  e866ffffff           call 0x631060
// 006310fa  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006310fe  8b542420             mov edx, dword ptr [esp + 0x20]
// 00631102  51                   push ecx
// 00631103  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00631107  52                   push edx
// 00631108  51                   push ecx
// 00631109  57                   push edi
// 0063110a  50                   push eax
// 0063110b  8bce                 mov ecx, esi
// 0063110d  e83eb5f3ff           call 0x56c650
// 00631112  8b542430             mov edx, dword ptr [esp + 0x30]
// 00631116  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063111a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0063111e  52                   push edx
// 0063111f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00631123  50                   push eax
// 00631124  51                   push ecx
// 00631125  52                   push edx
// 00631126  8d442444             lea eax, [esp + 0x44]
// 0063112a  50                   push eax
// 0063112b  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00631133  c706e4738400         mov dword ptr [esi], 0x8473e4
// 00631139  c74618dc738400       mov dword ptr [esi + 0x18], 0x8473dc
// 00631140  e85be8ffff           call 0x62f9a0
// 00631145  8b08                 mov ecx, dword ptr [eax]
// 00631147  c70000000000         mov dword ptr [eax], 0
// 0063114d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00631151  83c414               add esp, 0x14
// 00631154  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00631157  85c0                 test eax, eax
// 00631159  7409                 je 0x631164
// 0063115b  50                   push eax
// 0063115c  e819f50600           call 0x6a067a
// 00631161  83c404               add esp, 4
// 00631164  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00631168  5f                   pop edi
// 00631169  8bc6                 mov eax, esi
// 0063116b  5e                   pop esi
// 0063116c  64890d00000000       mov dword ptr fs:[0], ecx
// 00631173  83c410               add esp, 0x10
// 00631176  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
