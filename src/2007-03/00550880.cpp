// roc 2007-03 00550880  unit: seg_00550000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00550880
//
// 00550880  64a100000000         mov eax, dword ptr fs:[0]
// 00550886  6aff                 push -1
// 00550888  68a08b7500           push 0x758ba0
// 0055088d  50                   push eax
// 0055088e  64892500000000       mov dword ptr fs:[0], esp
// 00550895  8b442428             mov eax, dword ptr [esp + 0x28]
// 00550899  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055089d  56                   push esi
// 0055089e  50                   push eax
// 0055089f  8b442424             mov eax, dword ptr [esp + 0x24]
// 005508a3  8bf1                 mov esi, ecx
// 005508a5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005508a9  51                   push ecx
// 005508aa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005508ae  52                   push edx
// 005508af  50                   push eax
// 005508b0  51                   push ecx
// 005508b1  8d542440             lea edx, [esp + 0x40]
// 005508b5  52                   push edx
// 005508b6  e8f5fdffff           call 0x5506b0
// 005508bb  8b10                 mov edx, dword ptr [eax]
// 005508bd  83c410               add esp, 0x10
// 005508c0  8bcc                 mov ecx, esp
// 005508c2  c70000000000         mov dword ptr [eax], 0
// 005508c8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005508d0  8964242c             mov dword ptr [esp + 0x2c], esp
// 005508d4  8911                 mov dword ptr [ecx], edx
// 005508d6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005508da  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005508de  52                   push edx
// 005508df  50                   push eax
// 005508e0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005508e5  e826ffffff           call 0x550810
// 005508ea  50                   push eax
// 005508eb  8bce                 mov ecx, esi
// 005508ed  c644242000           mov byte ptr [esp + 0x20], 0
// 005508f2  e8a920efff           call 0x4429a0
// 005508f7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005508fb  51                   push ecx
// 005508fc  e8efd70c00           call 0x61e0f0
// 00550901  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00550905  83c404               add esp, 4
// 00550908  c70660807a00         mov dword ptr [esi], 0x7a8060
// 0055090e  8bc6                 mov eax, esi
// 00550910  64890d00000000       mov dword ptr fs:[0], ecx
// 00550917  5e                   pop esi
// 00550918  83c40c               add esp, 0xc
// 0055091b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
