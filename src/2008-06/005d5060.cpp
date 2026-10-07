// roc 2008-06 005d5060  unit: RBX::VClothing::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5060
//
// 005d5060  6aff                 push -1
// 005d5062  6840137d00           push 0x7d1340
// 005d5067  64a100000000         mov eax, dword ptr fs:[0]
// 005d506d  50                   push eax
// 005d506e  64892500000000       mov dword ptr fs:[0], esp
// 005d5075  51                   push ecx
// 005d5076  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d507a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005d507e  56                   push esi
// 005d507f  50                   push eax
// 005d5080  8b442428             mov eax, dword ptr [esp + 0x28]
// 005d5084  8bf1                 mov esi, ecx
// 005d5086  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d508a  51                   push ecx
// 005d508b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d508f  52                   push edx
// 005d5090  50                   push eax
// 005d5091  51                   push ecx
// 005d5092  8d542444             lea edx, [esp + 0x44]
// 005d5096  52                   push edx
// 005d5097  e844efffff           call 0x5d3fe0
// 005d509c  8b08                 mov ecx, dword ptr [eax]
// 005d509e  83c410               add esp, 0x10
// 005d50a1  c70000000000         mov dword ptr [eax], 0
// 005d50a7  8bc4                 mov eax, esp
// 005d50a9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d50b1  8964240c             mov dword ptr [esp + 0xc], esp
// 005d50b5  8908                 mov dword ptr [eax], ecx
// 005d50b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005d50bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d50bf  50                   push eax
// 005d50c0  51                   push ecx
// 005d50c1  c644242001           mov byte ptr [esp + 0x20], 1
// 005d50c6  e8e5ceebff           call 0x491fb0
// 005d50cb  50                   push eax
// 005d50cc  8bce                 mov ecx, esi
// 005d50ce  c644242400           mov byte ptr [esp + 0x24], 0
// 005d50d3  e8c827fcff           call 0x5978a0
// 005d50d8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005d50dc  85c0                 test eax, eax
// 005d50de  7409                 je 0x5d50e9
// 005d50e0  50                   push eax
// 005d50e1  e894b50c00           call 0x6a067a
// 005d50e6  83c404               add esp, 4
// 005d50e9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d50ed  c70654c58300         mov dword ptr [esi], 0x83c554
// 005d50f3  8bc6                 mov eax, esi
// 005d50f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005d50fc  5e                   pop esi
// 005d50fd  83c410               add esp, 0x10
// 005d5100  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
