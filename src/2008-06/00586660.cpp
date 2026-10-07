// roc 2008-06 00586660  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586660
//
// 00586660  6aff                 push -1
// 00586662  6840137d00           push 0x7d1340
// 00586667  64a100000000         mov eax, dword ptr fs:[0]
// 0058666d  50                   push eax
// 0058666e  64892500000000       mov dword ptr fs:[0], esp
// 00586675  51                   push ecx
// 00586676  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0058667a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0058667e  56                   push esi
// 0058667f  50                   push eax
// 00586680  8b442428             mov eax, dword ptr [esp + 0x28]
// 00586684  8bf1                 mov esi, ecx
// 00586686  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0058668a  51                   push ecx
// 0058668b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0058668f  52                   push edx
// 00586690  50                   push eax
// 00586691  51                   push ecx
// 00586692  8d542444             lea edx, [esp + 0x44]
// 00586696  52                   push edx
// 00586697  e854faffff           call 0x5860f0
// 0058669c  8b08                 mov ecx, dword ptr [eax]
// 0058669e  83c410               add esp, 0x10
// 005866a1  c70000000000         mov dword ptr [eax], 0
// 005866a7  8bc4                 mov eax, esp
// 005866a9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005866b1  8964240c             mov dword ptr [esp + 0xc], esp
// 005866b5  8908                 mov dword ptr [eax], ecx
// 005866b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005866bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005866bf  50                   push eax
// 005866c0  51                   push ecx
// 005866c1  c644242001           mov byte ptr [esp + 0x20], 1
// 005866c6  e875feffff           call 0x586540
// 005866cb  50                   push eax
// 005866cc  8bce                 mov ecx, esi
// 005866ce  c644242400           mov byte ptr [esp + 0x24], 0
// 005866d3  e858f9ffff           call 0x586030
// 005866d8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005866dc  85c0                 test eax, eax
// 005866de  7409                 je 0x5866e9
// 005866e0  50                   push eax
// 005866e1  e8949f1100           call 0x6a067a
// 005866e6  83c404               add esp, 4
// 005866e9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005866ed  c70660138300         mov dword ptr [esi], 0x831360
// 005866f3  8bc6                 mov eax, esi
// 005866f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005866fc  5e                   pop esi
// 005866fd  83c410               add esp, 0x10
// 00586700  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
