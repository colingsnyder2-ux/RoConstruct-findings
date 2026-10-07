// roc 2008-06 005bba10  unit: RBX::Soundscape::SoundService  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bba10
//
// 005bba10  6aff                 push -1
// 005bba12  6840137d00           push 0x7d1340
// 005bba17  64a100000000         mov eax, dword ptr fs:[0]
// 005bba1d  50                   push eax
// 005bba1e  64892500000000       mov dword ptr fs:[0], esp
// 005bba25  51                   push ecx
// 005bba26  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005bba2a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005bba2e  56                   push esi
// 005bba2f  50                   push eax
// 005bba30  8b442428             mov eax, dword ptr [esp + 0x28]
// 005bba34  8bf1                 mov esi, ecx
// 005bba36  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005bba3a  51                   push ecx
// 005bba3b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005bba3f  52                   push edx
// 005bba40  50                   push eax
// 005bba41  51                   push ecx
// 005bba42  8d542444             lea edx, [esp + 0x44]
// 005bba46  52                   push edx
// 005bba47  e8b4c3ffff           call 0x5b7e00
// 005bba4c  8b08                 mov ecx, dword ptr [eax]
// 005bba4e  83c410               add esp, 0x10
// 005bba51  c70000000000         mov dword ptr [eax], 0
// 005bba57  8bc4                 mov eax, esp
// 005bba59  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005bba61  8964240c             mov dword ptr [esp + 0xc], esp
// 005bba65  8908                 mov dword ptr [eax], ecx
// 005bba67  8b442424             mov eax, dword ptr [esp + 0x24]
// 005bba6b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bba6f  50                   push eax
// 005bba70  51                   push ecx
// 005bba71  c644242001           mov byte ptr [esp + 0x20], 1
// 005bba76  e8e5fdffff           call 0x5bb860
// 005bba7b  50                   push eax
// 005bba7c  8bce                 mov ecx, esi
// 005bba7e  c644242400           mov byte ptr [esp + 0x24], 0
// 005bba83  e858c1ffff           call 0x5b7be0
// 005bba88  8b442430             mov eax, dword ptr [esp + 0x30]
// 005bba8c  85c0                 test eax, eax
// 005bba8e  7409                 je 0x5bba99
// 005bba90  50                   push eax
// 005bba91  e8e44b0e00           call 0x6a067a
// 005bba96  83c404               add esp, 4
// 005bba99  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bba9d  c706347c8300         mov dword ptr [esi], 0x837c34
// 005bbaa3  8bc6                 mov eax, esi
// 005bbaa5  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbaac  5e                   pop esi
// 005bbaad  83c410               add esp, 0x10
// 005bbab0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
