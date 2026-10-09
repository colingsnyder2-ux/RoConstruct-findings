// roc 2009-06 0067bc50  unit: RBX::VMotor::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067bc50
//
// 0067bc50  6aff                 push -1
// 0067bc52  68f8a28500           push 0x85a2f8
// 0067bc57  64a100000000         mov eax, dword ptr fs:[0]
// 0067bc5d  50                   push eax
// 0067bc5e  64892500000000       mov dword ptr fs:[0], esp
// 0067bc65  51                   push ecx
// 0067bc66  56                   push esi
// 0067bc67  8bf1                 mov esi, ecx
// 0067bc69  57                   push edi
// 0067bc6a  89742408             mov dword ptr [esp + 8], esi
// 0067bc6e  e85d59f9ff           call 0x6115d0
// 0067bc73  8bf8                 mov edi, eax
// 0067bc75  e8d6f3f6ff           call 0x5eb050
// 0067bc7a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0067bc7e  8b542420             mov edx, dword ptr [esp + 0x20]
// 0067bc82  51                   push ecx
// 0067bc83  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0067bc87  52                   push edx
// 0067bc88  51                   push ecx
// 0067bc89  57                   push edi
// 0067bc8a  50                   push eax
// 0067bc8b  8bce                 mov ecx, esi
// 0067bc8d  e89ecbf7ff           call 0x5f8830
// 0067bc92  8b542430             mov edx, dword ptr [esp + 0x30]
// 0067bc96  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0067bc9a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0067bc9e  52                   push edx
// 0067bc9f  8b542428             mov edx, dword ptr [esp + 0x28]
// 0067bca3  50                   push eax
// 0067bca4  51                   push ecx
// 0067bca5  52                   push edx
// 0067bca6  8d442444             lea eax, [esp + 0x44]
// 0067bcaa  50                   push eax
// 0067bcab  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0067bcb3  c7067c528e00         mov dword ptr [esi], 0x8e527c
// 0067bcb9  c7461874528e00       mov dword ptr [esi + 0x18], 0x8e5274
// 0067bcc0  e83bf9ffff           call 0x67b600
// 0067bcc5  8b08                 mov ecx, dword ptr [eax]
// 0067bcc7  c70000000000         mov dword ptr [eax], 0
// 0067bccd  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0067bcd0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0067bcd4  51                   push ecx
// 0067bcd5  e858cd0900           call 0x718a32
// 0067bcda  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0067bcde  83c418               add esp, 0x18
// 0067bce1  5f                   pop edi
// 0067bce2  8bc6                 mov eax, esi
// 0067bce4  5e                   pop esi
// 0067bce5  64890d00000000       mov dword ptr fs:[0], ecx
// 0067bcec  83c410               add esp, 0x10
// 0067bcef  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
