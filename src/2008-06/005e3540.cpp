// roc 2008-06 005e3540  unit: RBX::VMotor::?$FactoryProduct  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3540
//
// 005e3540  6aff                 push -1
// 005e3542  6868e37c00           push 0x7ce368
// 005e3547  64a100000000         mov eax, dword ptr fs:[0]
// 005e354d  50                   push eax
// 005e354e  64892500000000       mov dword ptr fs:[0], esp
// 005e3555  51                   push ecx
// 005e3556  56                   push esi
// 005e3557  8bf1                 mov esi, ecx
// 005e3559  57                   push edi
// 005e355a  89742408             mov dword ptr [esp + 8], esi
// 005e355e  e8dd09faff           call 0x583f40
// 005e3563  8bf8                 mov edi, eax
// 005e3565  e866d3fdff           call 0x5c08d0
// 005e356a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e356e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e3572  51                   push ecx
// 005e3573  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e3577  52                   push edx
// 005e3578  51                   push ecx
// 005e3579  57                   push edi
// 005e357a  50                   push eax
// 005e357b  8bce                 mov ecx, esi
// 005e357d  e8ce90f8ff           call 0x56c650
// 005e3582  8b542430             mov edx, dword ptr [esp + 0x30]
// 005e3586  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e358a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e358e  52                   push edx
// 005e358f  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e3593  50                   push eax
// 005e3594  51                   push ecx
// 005e3595  52                   push edx
// 005e3596  8d442444             lea eax, [esp + 0x44]
// 005e359a  50                   push eax
// 005e359b  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005e35a3  c70688e98300         mov dword ptr [esi], 0x83e988
// 005e35a9  c7461880e98300       mov dword ptr [esi + 0x18], 0x83e980
// 005e35b0  e86bf3ffff           call 0x5e2920
// 005e35b5  8b08                 mov ecx, dword ptr [eax]
// 005e35b7  c70000000000         mov dword ptr [eax], 0
// 005e35bd  8b442448             mov eax, dword ptr [esp + 0x48]
// 005e35c1  83c414               add esp, 0x14
// 005e35c4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005e35c7  85c0                 test eax, eax
// 005e35c9  7409                 je 0x5e35d4
// 005e35cb  50                   push eax
// 005e35cc  e8a9d00b00           call 0x6a067a
// 005e35d1  83c404               add esp, 4
// 005e35d4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e35d8  5f                   pop edi
// 005e35d9  8bc6                 mov eax, esi
// 005e35db  5e                   pop esi
// 005e35dc  64890d00000000       mov dword ptr fs:[0], ecx
// 005e35e3  83c410               add esp, 0x10
// 005e35e6  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
