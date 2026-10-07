// roc 2008-06 005bbac0  unit: RBX::Soundscape::SoundService  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bbac0
//
// 005bbac0  6aff                 push -1
// 005bbac2  6840137d00           push 0x7d1340
// 005bbac7  64a100000000         mov eax, dword ptr fs:[0]
// 005bbacd  50                   push eax
// 005bbace  64892500000000       mov dword ptr fs:[0], esp
// 005bbad5  51                   push ecx
// 005bbad6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005bbada  8b542424             mov edx, dword ptr [esp + 0x24]
// 005bbade  56                   push esi
// 005bbadf  50                   push eax
// 005bbae0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005bbae4  8bf1                 mov esi, ecx
// 005bbae6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005bbaea  51                   push ecx
// 005bbaeb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005bbaef  52                   push edx
// 005bbaf0  50                   push eax
// 005bbaf1  51                   push ecx
// 005bbaf2  8d542444             lea edx, [esp + 0x44]
// 005bbaf6  52                   push edx
// 005bbaf7  e824b8ffff           call 0x5b7320
// 005bbafc  8b08                 mov ecx, dword ptr [eax]
// 005bbafe  83c410               add esp, 0x10
// 005bbb01  c70000000000         mov dword ptr [eax], 0
// 005bbb07  8bc4                 mov eax, esp
// 005bbb09  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005bbb11  8964240c             mov dword ptr [esp + 0xc], esp
// 005bbb15  8908                 mov dword ptr [eax], ecx
// 005bbb17  8b442424             mov eax, dword ptr [esp + 0x24]
// 005bbb1b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bbb1f  50                   push eax
// 005bbb20  51                   push ecx
// 005bbb21  c644242001           mov byte ptr [esp + 0x20], 1
// 005bbb26  e835fdffff           call 0x5bb860
// 005bbb2b  50                   push eax
// 005bbb2c  8bce                 mov ecx, esi
// 005bbb2e  c644242400           mov byte ptr [esp + 0x24], 0
// 005bbb33  e8d89ae8ff           call 0x445610
// 005bbb38  8b442430             mov eax, dword ptr [esp + 0x30]
// 005bbb3c  85c0                 test eax, eax
// 005bbb3e  7409                 je 0x5bbb49
// 005bbb40  50                   push eax
// 005bbb41  e8344b0e00           call 0x6a067a
// 005bbb46  83c404               add esp, 4
// 005bbb49  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bbb4d  c706687c8300         mov dword ptr [esi], 0x837c68
// 005bbb53  8bc6                 mov eax, esi
// 005bbb55  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbb5c  5e                   pop esi
// 005bbb5d  83c410               add esp, 0x10
// 005bbb60  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
