// roc 2009-06 004bb0b0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bb0b0
//
// 004bb0b0  6aff                 push -1
// 004bb0b2  6800928500           push 0x859200
// 004bb0b7  64a100000000         mov eax, dword ptr fs:[0]
// 004bb0bd  50                   push eax
// 004bb0be  64892500000000       mov dword ptr fs:[0], esp
// 004bb0c5  51                   push ecx
// 004bb0c6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004bb0ca  8b542424             mov edx, dword ptr [esp + 0x24]
// 004bb0ce  56                   push esi
// 004bb0cf  50                   push eax
// 004bb0d0  8b442428             mov eax, dword ptr [esp + 0x28]
// 004bb0d4  8bf1                 mov esi, ecx
// 004bb0d6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004bb0da  51                   push ecx
// 004bb0db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004bb0df  52                   push edx
// 004bb0e0  50                   push eax
// 004bb0e1  51                   push ecx
// 004bb0e2  8d542444             lea edx, [esp + 0x44]
// 004bb0e6  52                   push edx
// 004bb0e7  e844a8ffff           call 0x4b5930
// 004bb0ec  8b08                 mov ecx, dword ptr [eax]
// 004bb0ee  83c410               add esp, 0x10
// 004bb0f1  c70000000000         mov dword ptr [eax], 0
// 004bb0f7  8bc4                 mov eax, esp
// 004bb0f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004bb101  8964240c             mov dword ptr [esp + 0xc], esp
// 004bb105  8908                 mov dword ptr [eax], ecx
// 004bb107  8b442424             mov eax, dword ptr [esp + 0x24]
// 004bb10b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004bb10f  50                   push eax
// 004bb110  51                   push ecx
// 004bb111  c644242001           mov byte ptr [esp + 0x20], 1
// 004bb116  e8c5faffff           call 0x4babe0
// 004bb11b  50                   push eax
// 004bb11c  8bce                 mov ecx, esi
// 004bb11e  c644242400           mov byte ptr [esp + 0x24], 0
// 004bb123  e8c82bf8ff           call 0x43dcf0
// 004bb128  8b542430             mov edx, dword ptr [esp + 0x30]
// 004bb12c  52                   push edx
// 004bb12d  e800d92500           call 0x718a32
// 004bb132  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bb136  83c404               add esp, 4
// 004bb139  c70678468c00         mov dword ptr [esi], 0x8c4678
// 004bb13f  8bc6                 mov eax, esi
// 004bb141  64890d00000000       mov dword ptr fs:[0], ecx
// 004bb148  5e                   pop esi
// 004bb149  83c410               add esp, 0x10
// 004bb14c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
