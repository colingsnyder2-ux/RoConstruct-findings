// roc 2009-06 004bac50  unit: RBX::Network::Player  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bac50
//
// 004bac50  6aff                 push -1
// 004bac52  68f8a28500           push 0x85a2f8
// 004bac57  64a100000000         mov eax, dword ptr fs:[0]
// 004bac5d  50                   push eax
// 004bac5e  64892500000000       mov dword ptr fs:[0], esp
// 004bac65  51                   push ecx
// 004bac66  56                   push esi
// 004bac67  8bf1                 mov esi, ecx
// 004bac69  57                   push edi
// 004bac6a  89742408             mov dword ptr [esp + 8], esi
// 004bac6e  e89da7ffff           call 0x4b5410
// 004bac73  8bf8                 mov edi, eax
// 004bac75  e866ffffff           call 0x4babe0
// 004bac7a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004bac7e  8b542420             mov edx, dword ptr [esp + 0x20]
// 004bac82  51                   push ecx
// 004bac83  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004bac87  52                   push edx
// 004bac88  51                   push ecx
// 004bac89  57                   push edi
// 004bac8a  50                   push eax
// 004bac8b  8bce                 mov ecx, esi
// 004bac8d  e89edb1300           call 0x5f8830
// 004bac92  8b542430             mov edx, dword ptr [esp + 0x30]
// 004bac96  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004bac9a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004bac9e  52                   push edx
// 004bac9f  8b542428             mov edx, dword ptr [esp + 0x28]
// 004baca3  50                   push eax
// 004baca4  51                   push ecx
// 004baca5  52                   push edx
// 004baca6  8d442444             lea eax, [esp + 0x44]
// 004bacaa  50                   push eax
// 004bacab  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004bacb3  c706f8458c00         mov dword ptr [esi], 0x8c45f8
// 004bacb9  c74618f0458c00       mov dword ptr [esi + 0x18], 0x8c45f0
// 004bacc0  e8ababffff           call 0x4b5870
// 004bacc5  8b08                 mov ecx, dword ptr [eax]
// 004bacc7  c70000000000         mov dword ptr [eax], 0
// 004baccd  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004bacd0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004bacd4  51                   push ecx
// 004bacd5  e858dd2500           call 0x718a32
// 004bacda  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004bacde  83c418               add esp, 0x18
// 004bace1  5f                   pop edi
// 004bace2  8bc6                 mov eax, esi
// 004bace4  5e                   pop esi
// 004bace5  64890d00000000       mov dword ptr fs:[0], ecx
// 004bacec  83c410               add esp, 0x10
// 004bacef  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
