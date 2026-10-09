// roc 2008-06 00637950  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637950
//
// 00637950  6aff                 push -1
// 00637952  6868e37c00           push 0x7ce368
// 00637957  64a100000000         mov eax, dword ptr fs:[0]
// 0063795d  50                   push eax
// 0063795e  64892500000000       mov dword ptr fs:[0], esp
// 00637965  51                   push ecx
// 00637966  56                   push esi
// 00637967  8bf1                 mov esi, ecx
// 00637969  57                   push edi
// 0063796a  89742408             mov dword ptr [esp + 8], esi
// 0063796e  e88dfdf1ff           call 0x557700
// 00637973  8bf8                 mov edi, eax
// 00637975  e8e6b2f8ff           call 0x5c2c60
// 0063797a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0063797e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00637982  51                   push ecx
// 00637983  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00637987  52                   push edx
// 00637988  51                   push ecx
// 00637989  57                   push edi
// 0063798a  50                   push eax
// 0063798b  8bce                 mov ecx, esi
// 0063798d  e8be4cf3ff           call 0x56c650
// 00637992  8b542430             mov edx, dword ptr [esp + 0x30]
// 00637996  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063799a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0063799e  52                   push edx
// 0063799f  8b542428             mov edx, dword ptr [esp + 0x28]
// 006379a3  50                   push eax
// 006379a4  51                   push ecx
// 006379a5  52                   push edx
// 006379a6  8d442444             lea eax, [esp + 0x44]
// 006379aa  50                   push eax
// 006379ab  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006379b3  c706248c8400         mov dword ptr [esi], 0x848c24
// 006379b9  c746181c8c8400       mov dword ptr [esi + 0x18], 0x848c1c
// 006379c0  e8ebbcffff           call 0x6336b0
// 006379c5  8b08                 mov ecx, dword ptr [eax]
// 006379c7  c70000000000         mov dword ptr [eax], 0
// 006379cd  8b442448             mov eax, dword ptr [esp + 0x48]
// 006379d1  83c414               add esp, 0x14
// 006379d4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 006379d7  85c0                 test eax, eax
// 006379d9  7409                 je 0x6379e4
// 006379db  50                   push eax
// 006379dc  e8998c0600           call 0x6a067a
// 006379e1  83c404               add esp, 4
// 006379e4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006379e8  5f                   pop edi
// 006379e9  8bc6                 mov eax, esi
// 006379eb  5e                   pop esi
// 006379ec  64890d00000000       mov dword ptr fs:[0], ecx
// 006379f3  83c410               add esp, 0x10
// 006379f6  c21c00               ret 0x1c
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BEPAV01@XZP801@AEXPAV01@@Z@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@QAE@PBD0P8Instance@2@BEPAV32@XZP832@AEXPAV32@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
