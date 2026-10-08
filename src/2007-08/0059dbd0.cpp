// roc 2007-08 0059dbd0  unit: RBX::HopperBin::W4BinType::?$EnumDesc  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059dbd0
//
// 0059dbd0  64a100000000         mov eax, dword ptr fs:[0]
// 0059dbd6  6aff                 push -1
// 0059dbd8  6890117500           push 0x751190
// 0059dbdd  50                   push eax
// 0059dbde  64892500000000       mov dword ptr fs:[0], esp
// 0059dbe5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059dbe9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059dbed  56                   push esi
// 0059dbee  50                   push eax
// 0059dbef  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059dbf3  8bf1                 mov esi, ecx
// 0059dbf5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059dbf9  51                   push ecx
// 0059dbfa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059dbfe  52                   push edx
// 0059dbff  50                   push eax
// 0059dc00  51                   push ecx
// 0059dc01  8d542440             lea edx, [esp + 0x40]
// 0059dc05  52                   push edx
// 0059dc06  e885f6ffff           call 0x59d290
// 0059dc0b  8b10                 mov edx, dword ptr [eax]
// 0059dc0d  83c410               add esp, 0x10
// 0059dc10  8bcc                 mov ecx, esp
// 0059dc12  c70000000000         mov dword ptr [eax], 0
// 0059dc18  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059dc20  8964242c             mov dword ptr [esp + 0x2c], esp
// 0059dc24  8911                 mov dword ptr [ecx], edx
// 0059dc26  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059dc2a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059dc2e  52                   push edx
// 0059dc2f  50                   push eax
// 0059dc30  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0059dc35  e8660affff           call 0x58e6a0
// 0059dc3a  50                   push eax
// 0059dc3b  8bce                 mov ecx, esi
// 0059dc3d  c644242000           mov byte ptr [esp + 0x20], 0
// 0059dc42  e8d94afdff           call 0x572720
// 0059dc47  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059dc4b  51                   push ecx
// 0059dc4c  e811200900           call 0x62fc62
// 0059dc51  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059dc55  83c404               add esp, 4
// 0059dc58  c70648227b00         mov dword ptr [esi], 0x7b2248
// 0059dc5e  8bc6                 mov eax, esi
// 0059dc60  64890d00000000       mov dword ptr fs:[0], ecx
// 0059dc67  5e                   pop esi
// 0059dc68  83c40c               add esp, 0xc
// 0059dc6b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
