// roc 2008-06 0063bd00  unit: RBX::P8DebrisService::?$GetSetImpl  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063bd00
//
// 0063bd00  6aff                 push -1
// 0063bd02  6840137d00           push 0x7d1340
// 0063bd07  64a100000000         mov eax, dword ptr fs:[0]
// 0063bd0d  50                   push eax
// 0063bd0e  64892500000000       mov dword ptr fs:[0], esp
// 0063bd15  51                   push ecx
// 0063bd16  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063bd1a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0063bd1e  56                   push esi
// 0063bd1f  50                   push eax
// 0063bd20  8b442428             mov eax, dword ptr [esp + 0x28]
// 0063bd24  8bf1                 mov esi, ecx
// 0063bd26  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0063bd2a  51                   push ecx
// 0063bd2b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0063bd2f  52                   push edx
// 0063bd30  50                   push eax
// 0063bd31  51                   push ecx
// 0063bd32  8d542444             lea edx, [esp + 0x44]
// 0063bd36  52                   push edx
// 0063bd37  e834f8ffff           call 0x63b570
// 0063bd3c  8b08                 mov ecx, dword ptr [eax]
// 0063bd3e  83c410               add esp, 0x10
// 0063bd41  c70000000000         mov dword ptr [eax], 0
// 0063bd47  8bc4                 mov eax, esp
// 0063bd49  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063bd51  8964240c             mov dword ptr [esp + 0xc], esp
// 0063bd55  8908                 mov dword ptr [eax], ecx
// 0063bd57  8b442424             mov eax, dword ptr [esp + 0x24]
// 0063bd5b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0063bd5f  50                   push eax
// 0063bd60  51                   push ecx
// 0063bd61  c644242001           mov byte ptr [esp + 0x20], 1
// 0063bd66  e83549f8ff           call 0x5c06a0
// 0063bd6b  50                   push eax
// 0063bd6c  8bce                 mov ecx, esi
// 0063bd6e  c644242400           mov byte ptr [esp + 0x24], 0
// 0063bd73  e82875e0ff           call 0x4432a0
// 0063bd78  8b442430             mov eax, dword ptr [esp + 0x30]
// 0063bd7c  85c0                 test eax, eax
// 0063bd7e  7409                 je 0x63bd89
// 0063bd80  50                   push eax
// 0063bd81  e8f4480600           call 0x6a067a
// 0063bd86  83c404               add esp, 4
// 0063bd89  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063bd8d  c7067c998400         mov dword ptr [esi], 0x84997c
// 0063bd93  8bc6                 mov eax, esi
// 0063bd95  64890d00000000       mov dword ptr fs:[0], ecx
// 0063bd9c  5e                   pop esi
// 0063bd9d  83c410               add esp, 0x10
// 0063bda0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
