// roc 2008-06 0060b8c0  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060b8c0
//
// 0060b8c0  6aff                 push -1
// 0060b8c2  6868e37c00           push 0x7ce368
// 0060b8c7  64a100000000         mov eax, dword ptr fs:[0]
// 0060b8cd  50                   push eax
// 0060b8ce  64892500000000       mov dword ptr fs:[0], esp
// 0060b8d5  51                   push ecx
// 0060b8d6  56                   push esi
// 0060b8d7  8bf1                 mov esi, ecx
// 0060b8d9  57                   push edi
// 0060b8da  89742408             mov dword ptr [esp + 8], esi
// 0060b8de  e87de9ffff           call 0x60a260
// 0060b8e3  8bf8                 mov edi, eax
// 0060b8e5  e816feffff           call 0x60b700
// 0060b8ea  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0060b8ee  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060b8f2  51                   push ecx
// 0060b8f3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060b8f7  52                   push edx
// 0060b8f8  51                   push ecx
// 0060b8f9  57                   push edi
// 0060b8fa  50                   push eax
// 0060b8fb  8bce                 mov ecx, esi
// 0060b8fd  e84e0df6ff           call 0x56c650
// 0060b902  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060b906  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060b90a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060b90e  52                   push edx
// 0060b90f  8b542428             mov edx, dword ptr [esp + 0x28]
// 0060b913  50                   push eax
// 0060b914  51                   push ecx
// 0060b915  52                   push edx
// 0060b916  8d442444             lea eax, [esp + 0x44]
// 0060b91a  50                   push eax
// 0060b91b  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0060b923  c706c02f8400         mov dword ptr [esi], 0x842fc0
// 0060b929  c74618b82f8400       mov dword ptr [esi + 0x18], 0x842fb8
// 0060b930  e8abefffff           call 0x60a8e0
// 0060b935  8b08                 mov ecx, dword ptr [eax]
// 0060b937  c70000000000         mov dword ptr [eax], 0
// 0060b93d  8b442448             mov eax, dword ptr [esp + 0x48]
// 0060b941  83c414               add esp, 0x14
// 0060b944  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0060b947  85c0                 test eax, eax
// 0060b949  7409                 je 0x60b954
// 0060b94b  50                   push eax
// 0060b94c  e8294d0900           call 0x6a067a
// 0060b951  83c404               add esp, 4
// 0060b954  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060b958  5f                   pop edi
// 0060b959  8bc6                 mov eax, esi
// 0060b95b  5e                   pop esi
// 0060b95c  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b963  83c410               add esp, 0x10
// 0060b966  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
