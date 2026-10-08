// roc 2007-03 006035d0  unit: seg_00600000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006035d0
//
// 006035d0  64a100000000         mov eax, dword ptr fs:[0]
// 006035d6  6aff                 push -1
// 006035d8  68a08b7500           push 0x758ba0
// 006035dd  50                   push eax
// 006035de  64892500000000       mov dword ptr fs:[0], esp
// 006035e5  8b442428             mov eax, dword ptr [esp + 0x28]
// 006035e9  8b542420             mov edx, dword ptr [esp + 0x20]
// 006035ed  56                   push esi
// 006035ee  50                   push eax
// 006035ef  8b442424             mov eax, dword ptr [esp + 0x24]
// 006035f3  8bf1                 mov esi, ecx
// 006035f5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006035f9  51                   push ecx
// 006035fa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006035fe  52                   push edx
// 006035ff  50                   push eax
// 00603600  51                   push ecx
// 00603601  8d542440             lea edx, [esp + 0x40]
// 00603605  52                   push edx
// 00603606  e895f6ffff           call 0x602ca0
// 0060360b  8b10                 mov edx, dword ptr [eax]
// 0060360d  83c410               add esp, 0x10
// 00603610  8bcc                 mov ecx, esp
// 00603612  c70000000000         mov dword ptr [eax], 0
// 00603618  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00603620  8964242c             mov dword ptr [esp + 0x2c], esp
// 00603624  8911                 mov dword ptr [ecx], edx
// 00603626  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060362a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060362e  52                   push edx
// 0060362f  50                   push eax
// 00603630  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00603635  e876feffff           call 0x6034b0
// 0060363a  50                   push eax
// 0060363b  8bce                 mov ecx, esi
// 0060363d  c644242000           mov byte ptr [esp + 0x20], 0
// 00603642  e87912e4ff           call 0x4448c0
// 00603647  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0060364b  51                   push ecx
// 0060364c  e89faa0100           call 0x61e0f0
// 00603651  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00603655  83c404               add esp, 4
// 00603658  c706c00c7c00         mov dword ptr [esi], 0x7c0cc0
// 0060365e  8bc6                 mov eax, esi
// 00603660  64890d00000000       mov dword ptr fs:[0], ecx
// 00603667  5e                   pop esi
// 00603668  83c40c               add esp, 0xc
// 0060366b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
