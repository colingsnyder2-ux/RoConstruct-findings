// roc 2007-08 00579ff0  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579ff0
//
// 00579ff0  64a100000000         mov eax, dword ptr fs:[0]
// 00579ff6  6aff                 push -1
// 00579ff8  6890117500           push 0x751190
// 00579ffd  50                   push eax
// 00579ffe  64892500000000       mov dword ptr fs:[0], esp
// 0057a005  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057a009  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057a00d  56                   push esi
// 0057a00e  50                   push eax
// 0057a00f  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057a013  8bf1                 mov esi, ecx
// 0057a015  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057a019  51                   push ecx
// 0057a01a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057a01e  52                   push edx
// 0057a01f  50                   push eax
// 0057a020  51                   push ecx
// 0057a021  8d542440             lea edx, [esp + 0x40]
// 0057a025  52                   push edx
// 0057a026  e885f9ffff           call 0x5799b0
// 0057a02b  8b10                 mov edx, dword ptr [eax]
// 0057a02d  83c410               add esp, 0x10
// 0057a030  8bcc                 mov ecx, esp
// 0057a032  c70000000000         mov dword ptr [eax], 0
// 0057a038  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057a040  8964242c             mov dword ptr [esp + 0x2c], esp
// 0057a044  8911                 mov dword ptr [ecx], edx
// 0057a046  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057a04a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057a04e  52                   push edx
// 0057a04f  50                   push eax
// 0057a050  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0057a055  e886feffff           call 0x579ee0
// 0057a05a  50                   push eax
// 0057a05b  8bce                 mov ecx, esi
// 0057a05d  c644242000           mov byte ptr [esp + 0x20], 0
// 0057a062  e859afffff           call 0x574fc0
// 0057a067  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057a06b  51                   push ecx
// 0057a06c  e8f15b0b00           call 0x62fc62
// 0057a071  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057a075  83c404               add esp, 4
// 0057a078  c70684b27a00         mov dword ptr [esi], 0x7ab284
// 0057a07e  8bc6                 mov eax, esi
// 0057a080  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a087  5e                   pop esi
// 0057a088  83c40c               add esp, 0xc
// 0057a08b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
