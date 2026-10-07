// roc 2008-06 005d5110  unit: RBX::VClothing::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5110
//
// 005d5110  6aff                 push -1
// 005d5112  6840137d00           push 0x7d1340
// 005d5117  64a100000000         mov eax, dword ptr fs:[0]
// 005d511d  50                   push eax
// 005d511e  64892500000000       mov dword ptr fs:[0], esp
// 005d5125  51                   push ecx
// 005d5126  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d512a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005d512e  56                   push esi
// 005d512f  50                   push eax
// 005d5130  8b442428             mov eax, dword ptr [esp + 0x28]
// 005d5134  8bf1                 mov esi, ecx
// 005d5136  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d513a  51                   push ecx
// 005d513b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d513f  52                   push edx
// 005d5140  50                   push eax
// 005d5141  51                   push ecx
// 005d5142  8d542444             lea edx, [esp + 0x44]
// 005d5146  52                   push edx
// 005d5147  e8e4eeffff           call 0x5d4030
// 005d514c  8b08                 mov ecx, dword ptr [eax]
// 005d514e  83c410               add esp, 0x10
// 005d5151  c70000000000         mov dword ptr [eax], 0
// 005d5157  8bc4                 mov eax, esp
// 005d5159  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d5161  8964240c             mov dword ptr [esp + 0xc], esp
// 005d5165  8908                 mov dword ptr [eax], ecx
// 005d5167  8b442424             mov eax, dword ptr [esp + 0x24]
// 005d516b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d516f  50                   push eax
// 005d5170  51                   push ecx
// 005d5171  c644242001           mov byte ptr [esp + 0x20], 1
// 005d5176  e8c5cdebff           call 0x491f40
// 005d517b  50                   push eax
// 005d517c  8bce                 mov ecx, esi
// 005d517e  c644242400           mov byte ptr [esp + 0x24], 0
// 005d5183  e81827fcff           call 0x5978a0
// 005d5188  8b442430             mov eax, dword ptr [esp + 0x30]
// 005d518c  85c0                 test eax, eax
// 005d518e  7409                 je 0x5d5199
// 005d5190  50                   push eax
// 005d5191  e8e4b40c00           call 0x6a067a
// 005d5196  83c404               add esp, 4
// 005d5199  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d519d  c70688c58300         mov dword ptr [esi], 0x83c588
// 005d51a3  8bc6                 mov eax, esi
// 005d51a5  64890d00000000       mov dword ptr fs:[0], ecx
// 005d51ac  5e                   pop esi
// 005d51ad  83c410               add esp, 0x10
// 005d51b0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
