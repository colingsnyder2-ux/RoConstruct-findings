// roc 2009-06 0065a7a0  unit: RBX::VCamera::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065a7a0
//
// 0065a7a0  6aff                 push -1
// 0065a7a2  68f8a28500           push 0x85a2f8
// 0065a7a7  64a100000000         mov eax, dword ptr fs:[0]
// 0065a7ad  50                   push eax
// 0065a7ae  64892500000000       mov dword ptr fs:[0], esp
// 0065a7b5  51                   push ecx
// 0065a7b6  56                   push esi
// 0065a7b7  8bf1                 mov esi, ecx
// 0065a7b9  57                   push edi
// 0065a7ba  89742408             mov dword ptr [esp + 8], esi
// 0065a7be  e85d39f7ff           call 0x5ce120
// 0065a7c3  8bf8                 mov edi, eax
// 0065a7c5  e88601f9ff           call 0x5ea950
// 0065a7ca  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0065a7ce  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065a7d2  51                   push ecx
// 0065a7d3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0065a7d7  52                   push edx
// 0065a7d8  51                   push ecx
// 0065a7d9  57                   push edi
// 0065a7da  50                   push eax
// 0065a7db  8bce                 mov ecx, esi
// 0065a7dd  e84ee0f9ff           call 0x5f8830
// 0065a7e2  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065a7e6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065a7ea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0065a7ee  52                   push edx
// 0065a7ef  8b542428             mov edx, dword ptr [esp + 0x28]
// 0065a7f3  50                   push eax
// 0065a7f4  51                   push ecx
// 0065a7f5  52                   push edx
// 0065a7f6  8d442444             lea eax, [esp + 0x44]
// 0065a7fa  50                   push eax
// 0065a7fb  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0065a803  c70660128e00         mov dword ptr [esi], 0x8e1260
// 0065a809  c7461858128e00       mov dword ptr [esi + 0x18], 0x8e1258
// 0065a810  e80bfdffff           call 0x65a520
// 0065a815  8b08                 mov ecx, dword ptr [eax]
// 0065a817  c70000000000         mov dword ptr [eax], 0
// 0065a81d  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0065a820  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0065a824  51                   push ecx
// 0065a825  e808e20b00           call 0x718a32
// 0065a82a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065a82e  83c418               add esp, 0x18
// 0065a831  5f                   pop edi
// 0065a832  8bc6                 mov eax, esi
// 0065a834  5e                   pop esi
// 0065a835  64890d00000000       mov dword ptr fs:[0], ecx
// 0065a83c  83c410               add esp, 0x10
// 0065a83f  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
