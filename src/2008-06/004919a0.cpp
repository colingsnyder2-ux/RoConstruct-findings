// roc 2008-06 004919a0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004919a0
//
// 004919a0  6aff                 push -1
// 004919a2  6840137d00           push 0x7d1340
// 004919a7  64a100000000         mov eax, dword ptr fs:[0]
// 004919ad  50                   push eax
// 004919ae  64892500000000       mov dword ptr fs:[0], esp
// 004919b5  51                   push ecx
// 004919b6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004919ba  8b542424             mov edx, dword ptr [esp + 0x24]
// 004919be  56                   push esi
// 004919bf  50                   push eax
// 004919c0  8b442428             mov eax, dword ptr [esp + 0x28]
// 004919c4  8bf1                 mov esi, ecx
// 004919c6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004919ca  51                   push ecx
// 004919cb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004919cf  52                   push edx
// 004919d0  50                   push eax
// 004919d1  51                   push ecx
// 004919d2  8d542444             lea edx, [esp + 0x44]
// 004919d6  52                   push edx
// 004919d7  e8649affff           call 0x48b440
// 004919dc  8b08                 mov ecx, dword ptr [eax]
// 004919de  83c410               add esp, 0x10
// 004919e1  c70000000000         mov dword ptr [eax], 0
// 004919e7  8bc4                 mov eax, esp
// 004919e9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004919f1  8964240c             mov dword ptr [esp + 0xc], esp
// 004919f5  8908                 mov dword ptr [eax], ecx
// 004919f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 004919fb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004919ff  50                   push eax
// 00491a00  51                   push ecx
// 00491a01  c644242001           mov byte ptr [esp + 0x20], 1
// 00491a06  e855f9ffff           call 0x491360
// 00491a0b  50                   push eax
// 00491a0c  8bce                 mov ecx, esi
// 00491a0e  c644242400           mov byte ptr [esp + 0x24], 0
// 00491a13  e88818fbff           call 0x4432a0
// 00491a18  8b442430             mov eax, dword ptr [esp + 0x30]
// 00491a1c  85c0                 test eax, eax
// 00491a1e  7409                 je 0x491a29
// 00491a20  50                   push eax
// 00491a21  e854ec2000           call 0x6a067a
// 00491a26  83c404               add esp, 4
// 00491a29  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00491a2d  c706d41b8200         mov dword ptr [esi], 0x821bd4
// 00491a33  8bc6                 mov eax, esi
// 00491a35  64890d00000000       mov dword ptr fs:[0], ecx
// 00491a3c  5e                   pop esi
// 00491a3d  83c410               add esp, 0x10
// 00491a40  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
