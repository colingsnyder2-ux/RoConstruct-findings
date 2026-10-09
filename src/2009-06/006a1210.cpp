// roc 2009-06 006a1210  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a1210
//
// 006a1210  6aff                 push -1
// 006a1212  68f8a28500           push 0x85a2f8
// 006a1217  64a100000000         mov eax, dword ptr fs:[0]
// 006a121d  50                   push eax
// 006a121e  64892500000000       mov dword ptr fs:[0], esp
// 006a1225  51                   push ecx
// 006a1226  56                   push esi
// 006a1227  8bf1                 mov esi, ecx
// 006a1229  57                   push edi
// 006a122a  89742408             mov dword ptr [esp + 8], esi
// 006a122e  e89d03f7ff           call 0x6115d0
// 006a1233  8bf8                 mov edi, eax
// 006a1235  e876b0f4ff           call 0x5ec2b0
// 006a123a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006a123e  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a1242  51                   push ecx
// 006a1243  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006a1247  52                   push edx
// 006a1248  51                   push ecx
// 006a1249  57                   push edi
// 006a124a  50                   push eax
// 006a124b  8bce                 mov ecx, esi
// 006a124d  e8de75f5ff           call 0x5f8830
// 006a1252  8b542430             mov edx, dword ptr [esp + 0x30]
// 006a1256  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006a125a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006a125e  52                   push edx
// 006a125f  8b542428             mov edx, dword ptr [esp + 0x28]
// 006a1263  50                   push eax
// 006a1264  51                   push ecx
// 006a1265  52                   push edx
// 006a1266  8d442444             lea eax, [esp + 0x44]
// 006a126a  50                   push eax
// 006a126b  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006a1273  c706cc948e00         mov dword ptr [esi], 0x8e94cc
// 006a1279  c74618c4948e00       mov dword ptr [esi + 0x18], 0x8e94c4
// 006a1280  e8cbfdffff           call 0x6a1050
// 006a1285  8b08                 mov ecx, dword ptr [eax]
// 006a1287  c70000000000         mov dword ptr [eax], 0
// 006a128d  894e1c               mov dword ptr [esi + 0x1c], ecx
// 006a1290  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006a1294  51                   push ecx
// 006a1295  e898770700           call 0x718a32
// 006a129a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a129e  83c418               add esp, 0x18
// 006a12a1  5f                   pop edi
// 006a12a2  8bc6                 mov eax, esi
// 006a12a4  5e                   pop esi
// 006a12a5  64890d00000000       mov dword ptr fs:[0], ecx
// 006a12ac  83c410               add esp, 0x10
// 006a12af  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
