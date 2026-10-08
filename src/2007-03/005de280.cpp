// roc 2007-03 005de280  unit: seg_005d0000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005de280
//
// 005de280  64a100000000         mov eax, dword ptr fs:[0]
// 005de286  6aff                 push -1
// 005de288  68a08b7500           push 0x758ba0
// 005de28d  50                   push eax
// 005de28e  64892500000000       mov dword ptr fs:[0], esp
// 005de295  8b442428             mov eax, dword ptr [esp + 0x28]
// 005de299  8b542420             mov edx, dword ptr [esp + 0x20]
// 005de29d  56                   push esi
// 005de29e  50                   push eax
// 005de29f  8b442424             mov eax, dword ptr [esp + 0x24]
// 005de2a3  8bf1                 mov esi, ecx
// 005de2a5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005de2a9  51                   push ecx
// 005de2aa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005de2ae  52                   push edx
// 005de2af  50                   push eax
// 005de2b0  51                   push ecx
// 005de2b1  8d542440             lea edx, [esp + 0x40]
// 005de2b5  52                   push edx
// 005de2b6  e895feffff           call 0x5de150
// 005de2bb  8b10                 mov edx, dword ptr [eax]
// 005de2bd  83c410               add esp, 0x10
// 005de2c0  8bcc                 mov ecx, esp
// 005de2c2  c70000000000         mov dword ptr [eax], 0
// 005de2c8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005de2d0  8964242c             mov dword ptr [esp + 0x2c], esp
// 005de2d4  8911                 mov dword ptr [ecx], edx
// 005de2d6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005de2da  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005de2de  52                   push edx
// 005de2df  50                   push eax
// 005de2e0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005de2e5  e856a1faff           call 0x588440
// 005de2ea  50                   push eax
// 005de2eb  8bce                 mov ecx, esi
// 005de2ed  c644242000           mov byte ptr [esp + 0x20], 0
// 005de2f2  e82946e6ff           call 0x442920
// 005de2f7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005de2fb  51                   push ecx
// 005de2fc  e8effd0300           call 0x61e0f0
// 005de301  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005de305  83c404               add esp, 4
// 005de308  c706c0db7b00         mov dword ptr [esi], 0x7bdbc0
// 005de30e  8bc6                 mov eax, esi
// 005de310  64890d00000000       mov dword ptr fs:[0], ecx
// 005de317  5e                   pop esi
// 005de318  83c40c               add esp, 0xc
// 005de31b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
