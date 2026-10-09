// roc 2009-06 005cf3a0  unit: VAuthoringSettings::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cf3a0
//
// 005cf3a0  6aff                 push -1
// 005cf3a2  68f8a28500           push 0x85a2f8
// 005cf3a7  64a100000000         mov eax, dword ptr fs:[0]
// 005cf3ad  50                   push eax
// 005cf3ae  64892500000000       mov dword ptr fs:[0], esp
// 005cf3b5  51                   push ecx
// 005cf3b6  56                   push esi
// 005cf3b7  8bf1                 mov esi, ecx
// 005cf3b9  57                   push edi
// 005cf3ba  89742408             mov dword ptr [esp + 8], esi
// 005cf3be  e85dedffff           call 0x5ce120
// 005cf3c3  8bf8                 mov edi, eax
// 005cf3c5  e826b1e3ff           call 0x40a4f0
// 005cf3ca  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005cf3ce  8b542420             mov edx, dword ptr [esp + 0x20]
// 005cf3d2  51                   push ecx
// 005cf3d3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005cf3d7  52                   push edx
// 005cf3d8  51                   push ecx
// 005cf3d9  57                   push edi
// 005cf3da  50                   push eax
// 005cf3db  8bce                 mov ecx, esi
// 005cf3dd  e84e940200           call 0x5f8830
// 005cf3e2  8b542430             mov edx, dword ptr [esp + 0x30]
// 005cf3e6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005cf3ea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cf3ee  52                   push edx
// 005cf3ef  8b542428             mov edx, dword ptr [esp + 0x28]
// 005cf3f3  50                   push eax
// 005cf3f4  51                   push ecx
// 005cf3f5  52                   push edx
// 005cf3f6  8d442444             lea eax, [esp + 0x44]
// 005cf3fa  50                   push eax
// 005cf3fb  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005cf403  c706084f8d00         mov dword ptr [esi], 0x8d4f08
// 005cf409  c74618004f8d00       mov dword ptr [esi + 0x18], 0x8d4f00
// 005cf410  e83befffff           call 0x5ce350
// 005cf415  8b08                 mov ecx, dword ptr [eax]
// 005cf417  c70000000000         mov dword ptr [eax], 0
// 005cf41d  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005cf420  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005cf424  51                   push ecx
// 005cf425  e808961400           call 0x718a32
// 005cf42a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005cf42e  83c418               add esp, 0x18
// 005cf431  5f                   pop edi
// 005cf432  8bc6                 mov eax, esi
// 005cf434  5e                   pop esi
// 005cf435  64890d00000000       mov dword ptr fs:[0], ecx
// 005cf43c  83c410               add esp, 0x10
// 005cf43f  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
