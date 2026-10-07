// roc 2008-06 004918f0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004918f0
//
// 004918f0  6aff                 push -1
// 004918f2  6840137d00           push 0x7d1340
// 004918f7  64a100000000         mov eax, dword ptr fs:[0]
// 004918fd  50                   push eax
// 004918fe  64892500000000       mov dword ptr fs:[0], esp
// 00491905  51                   push ecx
// 00491906  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0049190a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0049190e  56                   push esi
// 0049190f  50                   push eax
// 00491910  8b442428             mov eax, dword ptr [esp + 0x28]
// 00491914  8bf1                 mov esi, ecx
// 00491916  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0049191a  51                   push ecx
// 0049191b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049191f  52                   push edx
// 00491920  50                   push eax
// 00491921  51                   push ecx
// 00491922  8d542444             lea edx, [esp + 0x44]
// 00491926  52                   push edx
// 00491927  e8c49affff           call 0x48b3f0
// 0049192c  8b08                 mov ecx, dword ptr [eax]
// 0049192e  83c410               add esp, 0x10
// 00491931  c70000000000         mov dword ptr [eax], 0
// 00491937  8bc4                 mov eax, esp
// 00491939  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00491941  8964240c             mov dword ptr [esp + 0xc], esp
// 00491945  8908                 mov dword ptr [eax], ecx
// 00491947  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049194b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049194f  50                   push eax
// 00491950  51                   push ecx
// 00491951  c644242001           mov byte ptr [esp + 0x20], 1
// 00491956  e805faffff           call 0x491360
// 0049195b  50                   push eax
// 0049195c  8bce                 mov ecx, esi
// 0049195e  c644242400           mov byte ptr [esp + 0x24], 0
// 00491963  e8c818fbff           call 0x443230
// 00491968  8b442430             mov eax, dword ptr [esp + 0x30]
// 0049196c  85c0                 test eax, eax
// 0049196e  7409                 je 0x491979
// 00491970  50                   push eax
// 00491971  e804ed2000           call 0x6a067a
// 00491976  83c404               add esp, 4
// 00491979  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049197d  c706a01b8200         mov dword ptr [esi], 0x821ba0
// 00491983  8bc6                 mov eax, esi
// 00491985  64890d00000000       mov dword ptr fs:[0], ecx
// 0049198c  5e                   pop esi
// 0049198d  83c410               add esp, 0x10
// 00491990  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
