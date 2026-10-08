// roc 2007-03 005716a0  unit: seg_00570000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005716a0
//
// 005716a0  64a100000000         mov eax, dword ptr fs:[0]
// 005716a6  6aff                 push -1
// 005716a8  68a08b7500           push 0x758ba0
// 005716ad  50                   push eax
// 005716ae  64892500000000       mov dword ptr fs:[0], esp
// 005716b5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005716b9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005716bd  56                   push esi
// 005716be  50                   push eax
// 005716bf  8b442424             mov eax, dword ptr [esp + 0x24]
// 005716c3  8bf1                 mov esi, ecx
// 005716c5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005716c9  51                   push ecx
// 005716ca  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005716ce  52                   push edx
// 005716cf  50                   push eax
// 005716d0  51                   push ecx
// 005716d1  8d542440             lea edx, [esp + 0x40]
// 005716d5  52                   push edx
// 005716d6  e8f5faffff           call 0x5711d0
// 005716db  8b10                 mov edx, dword ptr [eax]
// 005716dd  83c410               add esp, 0x10
// 005716e0  8bcc                 mov ecx, esp
// 005716e2  c70000000000         mov dword ptr [eax], 0
// 005716e8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005716f0  8964242c             mov dword ptr [esp + 0x2c], esp
// 005716f4  8911                 mov dword ptr [ecx], edx
// 005716f6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005716fa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005716fe  52                   push edx
// 005716ff  50                   push eax
// 00571700  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00571705  e8b6feffff           call 0x5715c0
// 0057170a  50                   push eax
// 0057170b  8bce                 mov ecx, esi
// 0057170d  c644242000           mov byte ptr [esp + 0x20], 0
// 00571712  e849faffff           call 0x571160
// 00571717  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057171b  51                   push ecx
// 0057171c  e8cfc90a00           call 0x61e0f0
// 00571721  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00571725  83c404               add esp, 4
// 00571728  c70618ba7a00         mov dword ptr [esi], 0x7aba18
// 0057172e  8bc6                 mov eax, esi
// 00571730  64890d00000000       mov dword ptr fs:[0], ecx
// 00571737  5e                   pop esi
// 00571738  83c40c               add esp, 0xc
// 0057173b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
