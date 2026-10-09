// roc 2009-06 00692f70  unit: RBX::VRocket::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00692f70
//
// 00692f70  6aff                 push -1
// 00692f72  68f8a28500           push 0x85a2f8
// 00692f77  64a100000000         mov eax, dword ptr fs:[0]
// 00692f7d  50                   push eax
// 00692f7e  64892500000000       mov dword ptr fs:[0], esp
// 00692f85  51                   push ecx
// 00692f86  56                   push esi
// 00692f87  8bf1                 mov esi, ecx
// 00692f89  57                   push edi
// 00692f8a  89742408             mov dword ptr [esp + 8], esi
// 00692f8e  e83de6f7ff           call 0x6115d0
// 00692f93  8bf8                 mov edi, eax
// 00692f95  e8868cf5ff           call 0x5ebc20
// 00692f9a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00692f9e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00692fa2  51                   push ecx
// 00692fa3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00692fa7  52                   push edx
// 00692fa8  51                   push ecx
// 00692fa9  57                   push edi
// 00692faa  50                   push eax
// 00692fab  8bce                 mov ecx, esi
// 00692fad  e87e58f6ff           call 0x5f8830
// 00692fb2  8b542430             mov edx, dword ptr [esp + 0x30]
// 00692fb6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00692fba  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00692fbe  52                   push edx
// 00692fbf  8b542428             mov edx, dword ptr [esp + 0x28]
// 00692fc3  50                   push eax
// 00692fc4  51                   push ecx
// 00692fc5  52                   push edx
// 00692fc6  8d442444             lea eax, [esp + 0x44]
// 00692fca  50                   push eax
// 00692fcb  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00692fd3  c706a8708e00         mov dword ptr [esi], 0x8e70a8
// 00692fd9  c74618a0708e00       mov dword ptr [esi + 0x18], 0x8e70a0
// 00692fe0  e8ebe2ffff           call 0x6912d0
// 00692fe5  8b08                 mov ecx, dword ptr [eax]
// 00692fe7  c70000000000         mov dword ptr [eax], 0
// 00692fed  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00692ff0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00692ff4  51                   push ecx
// 00692ff5  e8385a0800           call 0x718a32
// 00692ffa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00692ffe  83c418               add esp, 0x18
// 00693001  5f                   pop edi
// 00693002  8bc6                 mov eax, esi
// 00693004  5e                   pop esi
// 00693005  64890d00000000       mov dword ptr fs:[0], ecx
// 0069300c  83c410               add esp, 0x10
// 0069300f  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
