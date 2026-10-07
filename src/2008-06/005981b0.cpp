// roc 2008-06 005981b0  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005981b0
//
// 005981b0  6aff                 push -1
// 005981b2  6840137d00           push 0x7d1340
// 005981b7  64a100000000         mov eax, dword ptr fs:[0]
// 005981bd  50                   push eax
// 005981be  64892500000000       mov dword ptr fs:[0], esp
// 005981c5  51                   push ecx
// 005981c6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005981ca  8b542424             mov edx, dword ptr [esp + 0x24]
// 005981ce  56                   push esi
// 005981cf  50                   push eax
// 005981d0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005981d4  8bf1                 mov esi, ecx
// 005981d6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005981da  51                   push ecx
// 005981db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005981df  52                   push edx
// 005981e0  50                   push eax
// 005981e1  51                   push ecx
// 005981e2  8d542444             lea edx, [esp + 0x44]
// 005981e6  52                   push edx
// 005981e7  e874f7ffff           call 0x597960
// 005981ec  8b08                 mov ecx, dword ptr [eax]
// 005981ee  83c410               add esp, 0x10
// 005981f1  c70000000000         mov dword ptr [eax], 0
// 005981f7  8bc4                 mov eax, esp
// 005981f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00598201  8964240c             mov dword ptr [esp + 0xc], esp
// 00598205  8908                 mov dword ptr [eax], ecx
// 00598207  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059820b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059820f  50                   push eax
// 00598210  51                   push ecx
// 00598211  c644242001           mov byte ptr [esp + 0x20], 1
// 00598216  e805feffff           call 0x598020
// 0059821b  50                   push eax
// 0059821c  8bce                 mov ecx, esi
// 0059821e  c644242400           mov byte ptr [esp + 0x24], 0
// 00598223  e8e8d3eaff           call 0x445610
// 00598228  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059822c  85c0                 test eax, eax
// 0059822e  7409                 je 0x598239
// 00598230  50                   push eax
// 00598231  e844841000           call 0x6a067a
// 00598236  83c404               add esp, 4
// 00598239  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059823d  c706d4258300         mov dword ptr [esi], 0x8325d4
// 00598243  8bc6                 mov eax, esi
// 00598245  64890d00000000       mov dword ptr fs:[0], ecx
// 0059824c  5e                   pop esi
// 0059824d  83c410               add esp, 0x10
// 00598250  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
