// roc 2007-03 00543a70  unit: seg_00540000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543a70
//
// 00543a70  64a100000000         mov eax, dword ptr fs:[0]
// 00543a76  6aff                 push -1
// 00543a78  68a08b7500           push 0x758ba0
// 00543a7d  50                   push eax
// 00543a7e  64892500000000       mov dword ptr fs:[0], esp
// 00543a85  8b442428             mov eax, dword ptr [esp + 0x28]
// 00543a89  8b542420             mov edx, dword ptr [esp + 0x20]
// 00543a8d  56                   push esi
// 00543a8e  50                   push eax
// 00543a8f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00543a93  8bf1                 mov esi, ecx
// 00543a95  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00543a99  51                   push ecx
// 00543a9a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00543a9e  52                   push edx
// 00543a9f  50                   push eax
// 00543aa0  51                   push ecx
// 00543aa1  8d542440             lea edx, [esp + 0x40]
// 00543aa5  52                   push edx
// 00543aa6  e865f3ffff           call 0x542e10
// 00543aab  8b10                 mov edx, dword ptr [eax]
// 00543aad  83c410               add esp, 0x10
// 00543ab0  8bcc                 mov ecx, esp
// 00543ab2  c70000000000         mov dword ptr [eax], 0
// 00543ab8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00543ac0  8964242c             mov dword ptr [esp + 0x2c], esp
// 00543ac4  8911                 mov dword ptr [ecx], edx
// 00543ac6  8b542420             mov edx, dword ptr [esp + 0x20]
// 00543aca  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00543ace  52                   push edx
// 00543acf  50                   push eax
// 00543ad0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00543ad5  e876fcffff           call 0x543750
// 00543ada  50                   push eax
// 00543adb  8bce                 mov ecx, esi
// 00543add  c644242000           mov byte ptr [esp + 0x20], 0
// 00543ae2  e8a9edefff           call 0x442890
// 00543ae7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00543aeb  51                   push ecx
// 00543aec  e8ffa50d00           call 0x61e0f0
// 00543af1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00543af5  83c404               add esp, 4
// 00543af8  c706f46a7a00         mov dword ptr [esi], 0x7a6af4
// 00543afe  8bc6                 mov eax, esi
// 00543b00  64890d00000000       mov dword ptr fs:[0], ecx
// 00543b07  5e                   pop esi
// 00543b08  83c40c               add esp, 0xc
// 00543b0b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
