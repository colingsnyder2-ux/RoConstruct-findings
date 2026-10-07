// roc 2008-06 0060ba00  unit: RBX::VVelocityMotor::?$RefPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060ba00
//
// 0060ba00  6aff                 push -1
// 0060ba02  6840137d00           push 0x7d1340
// 0060ba07  64a100000000         mov eax, dword ptr fs:[0]
// 0060ba0d  50                   push eax
// 0060ba0e  64892500000000       mov dword ptr fs:[0], esp
// 0060ba15  51                   push ecx
// 0060ba16  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060ba1a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0060ba1e  56                   push esi
// 0060ba1f  50                   push eax
// 0060ba20  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060ba24  8bf1                 mov esi, ecx
// 0060ba26  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0060ba2a  51                   push ecx
// 0060ba2b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060ba2f  52                   push edx
// 0060ba30  50                   push eax
// 0060ba31  51                   push ecx
// 0060ba32  8d542444             lea edx, [esp + 0x44]
// 0060ba36  52                   push edx
// 0060ba37  e8f4eeffff           call 0x60a930
// 0060ba3c  8b08                 mov ecx, dword ptr [eax]
// 0060ba3e  83c410               add esp, 0x10
// 0060ba41  c70000000000         mov dword ptr [eax], 0
// 0060ba47  8bc4                 mov eax, esp
// 0060ba49  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0060ba51  8964240c             mov dword ptr [esp + 0xc], esp
// 0060ba55  8908                 mov dword ptr [eax], ecx
// 0060ba57  8b442424             mov eax, dword ptr [esp + 0x24]
// 0060ba5b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060ba5f  50                   push eax
// 0060ba60  51                   push ecx
// 0060ba61  c644242001           mov byte ptr [esp + 0x20], 1
// 0060ba66  e895fcffff           call 0x60b700
// 0060ba6b  50                   push eax
// 0060ba6c  8bce                 mov ecx, esi
// 0060ba6e  c644242400           mov byte ptr [esp + 0x24], 0
// 0060ba73  e8989be3ff           call 0x445610
// 0060ba78  8b442430             mov eax, dword ptr [esp + 0x30]
// 0060ba7c  85c0                 test eax, eax
// 0060ba7e  7409                 je 0x60ba89
// 0060ba80  50                   push eax
// 0060ba81  e8f44b0900           call 0x6a067a
// 0060ba86  83c404               add esp, 4
// 0060ba89  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060ba8d  c706fc2f8400         mov dword ptr [esi], 0x842ffc
// 0060ba93  8bc6                 mov eax, esi
// 0060ba95  64890d00000000       mov dword ptr fs:[0], ecx
// 0060ba9c  5e                   pop esi
// 0060ba9d  83c410               add esp, 0x10
// 0060baa0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
