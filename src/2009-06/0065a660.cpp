// roc 2009-06 0065a660  unit: RBX::VCamera::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065a660
//
// 0065a660  6aff                 push -1
// 0065a662  6800928500           push 0x859200
// 0065a667  64a100000000         mov eax, dword ptr fs:[0]
// 0065a66d  50                   push eax
// 0065a66e  64892500000000       mov dword ptr fs:[0], esp
// 0065a675  51                   push ecx
// 0065a676  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065a67a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0065a67e  56                   push esi
// 0065a67f  50                   push eax
// 0065a680  8b442428             mov eax, dword ptr [esp + 0x28]
// 0065a684  8bf1                 mov esi, ecx
// 0065a686  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065a68a  51                   push ecx
// 0065a68b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0065a68f  52                   push edx
// 0065a690  50                   push eax
// 0065a691  51                   push ecx
// 0065a692  8d542444             lea edx, [esp + 0x44]
// 0065a696  52                   push edx
// 0065a697  e8c4fdffff           call 0x65a460
// 0065a69c  8b08                 mov ecx, dword ptr [eax]
// 0065a69e  83c410               add esp, 0x10
// 0065a6a1  c70000000000         mov dword ptr [eax], 0
// 0065a6a7  8bc4                 mov eax, esp
// 0065a6a9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065a6b1  8964240c             mov dword ptr [esp + 0xc], esp
// 0065a6b5  8908                 mov dword ptr [eax], ecx
// 0065a6b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0065a6bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0065a6bf  50                   push eax
// 0065a6c0  51                   push ecx
// 0065a6c1  c644242001           mov byte ptr [esp + 0x20], 1
// 0065a6c6  e88502f9ff           call 0x5ea950
// 0065a6cb  50                   push eax
// 0065a6cc  8bce                 mov ecx, esi
// 0065a6ce  c644242400           mov byte ptr [esp + 0x24], 0
// 0065a6d3  e8586efbff           call 0x611530
// 0065a6d8  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065a6dc  52                   push edx
// 0065a6dd  e850e30b00           call 0x718a32
// 0065a6e2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065a6e6  83c404               add esp, 4
// 0065a6e9  c70624128e00         mov dword ptr [esi], 0x8e1224
// 0065a6ef  8bc6                 mov eax, esi
// 0065a6f1  64890d00000000       mov dword ptr fs:[0], ecx
// 0065a6f8  5e                   pop esi
// 0065a6f9  83c410               add esp, 0x10
// 0065a6fc  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
