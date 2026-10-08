// roc 2007-08 005b0bc0  unit: RBX::AutoJoint  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0bc0
//
// 005b0bc0  6aff                 push -1
// 005b0bc2  6838a77500           push 0x75a738
// 005b0bc7  64a100000000         mov eax, dword ptr fs:[0]
// 005b0bcd  50                   push eax
// 005b0bce  64892500000000       mov dword ptr fs:[0], esp
// 005b0bd5  51                   push ecx
// 005b0bd6  56                   push esi
// 005b0bd7  8bf1                 mov esi, ecx
// 005b0bd9  57                   push edi
// 005b0bda  89742408             mov dword ptr [esp + 8], esi
// 005b0bde  e8ddfaf7ff           call 0x5306c0
// 005b0be3  8bf8                 mov edi, eax
// 005b0be5  e80601feff           call 0x590cf0
// 005b0bea  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005b0bee  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b0bf2  51                   push ecx
// 005b0bf3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b0bf7  52                   push edx
// 005b0bf8  51                   push ecx
// 005b0bf9  57                   push edi
// 005b0bfa  50                   push eax
// 005b0bfb  8bce                 mov ecx, esi
// 005b0bfd  e8de67fdff           call 0x5873e0
// 005b0c02  8b542430             mov edx, dword ptr [esp + 0x30]
// 005b0c06  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005b0c0a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b0c0e  52                   push edx
// 005b0c0f  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b0c13  50                   push eax
// 005b0c14  51                   push ecx
// 005b0c15  52                   push edx
// 005b0c16  8d442444             lea eax, [esp + 0x44]
// 005b0c1a  c74618dcad7900       mov dword ptr [esi + 0x18], 0x79addc
// 005b0c21  50                   push eax
// 005b0c22  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005b0c2a  c70604697b00         mov dword ptr [esi], 0x7b6904
// 005b0c30  c74618fc687b00       mov dword ptr [esi + 0x18], 0x7b68fc
// 005b0c37  e814f4ffff           call 0x5b0050
// 005b0c3c  8b08                 mov ecx, dword ptr [eax]
// 005b0c3e  c70000000000         mov dword ptr [eax], 0
// 005b0c44  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005b0c47  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005b0c4b  51                   push ecx
// 005b0c4c  e811f00700           call 0x62fc62
// 005b0c51  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b0c55  83c418               add esp, 0x18
// 005b0c58  5f                   pop edi
// 005b0c59  8bc6                 mov eax, esi
// 005b0c5b  5e                   pop esi
// 005b0c5c  64890d00000000       mov dword ptr fs:[0], ecx
// 005b0c63  83c410               add esp, 0x10
// 005b0c66  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
