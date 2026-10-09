// roc 2009-06 00699b80  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00699b80
//
// 00699b80  6aff                 push -1
// 00699b82  68f8a28500           push 0x85a2f8
// 00699b87  64a100000000         mov eax, dword ptr fs:[0]
// 00699b8d  50                   push eax
// 00699b8e  64892500000000       mov dword ptr fs:[0], esp
// 00699b95  51                   push ecx
// 00699b96  56                   push esi
// 00699b97  8bf1                 mov esi, ecx
// 00699b99  57                   push edi
// 00699b9a  89742408             mov dword ptr [esp + 8], esi
// 00699b9e  e88df2ffff           call 0x698e30
// 00699ba3  8bf8                 mov edi, eax
// 00699ba5  e8e619f5ff           call 0x5eb590
// 00699baa  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00699bae  8b542420             mov edx, dword ptr [esp + 0x20]
// 00699bb2  51                   push ecx
// 00699bb3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00699bb7  52                   push edx
// 00699bb8  51                   push ecx
// 00699bb9  57                   push edi
// 00699bba  50                   push eax
// 00699bbb  8bce                 mov ecx, esi
// 00699bbd  e86eecf5ff           call 0x5f8830
// 00699bc2  8b542430             mov edx, dword ptr [esp + 0x30]
// 00699bc6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00699bca  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00699bce  52                   push edx
// 00699bcf  8b542428             mov edx, dword ptr [esp + 0x28]
// 00699bd3  50                   push eax
// 00699bd4  51                   push ecx
// 00699bd5  52                   push edx
// 00699bd6  8d442444             lea eax, [esp + 0x44]
// 00699bda  50                   push eax
// 00699bdb  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00699be3  c70630838e00         mov dword ptr [esi], 0x8e8330
// 00699be9  c7461828838e00       mov dword ptr [esi + 0x18], 0x8e8328
// 00699bf0  e8abf2ffff           call 0x698ea0
// 00699bf5  8b08                 mov ecx, dword ptr [eax]
// 00699bf7  c70000000000         mov dword ptr [eax], 0
// 00699bfd  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00699c00  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00699c04  51                   push ecx
// 00699c05  e828ee0700           call 0x718a32
// 00699c0a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00699c0e  83c418               add esp, 0x18
// 00699c11  5f                   pop edi
// 00699c12  8bc6                 mov eax, esi
// 00699c14  5e                   pop esi
// 00699c15  64890d00000000       mov dword ptr fs:[0], ecx
// 00699c1c  83c410               add esp, 0x10
// 00699c1f  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
