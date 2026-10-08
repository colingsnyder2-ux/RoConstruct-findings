// roc 2007-08 005e8740  unit: RBX::VExplosion::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e8740
//
// 005e8740  64a100000000         mov eax, dword ptr fs:[0]
// 005e8746  6aff                 push -1
// 005e8748  6890117500           push 0x751190
// 005e874d  50                   push eax
// 005e874e  64892500000000       mov dword ptr fs:[0], esp
// 005e8755  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e8759  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e875d  56                   push esi
// 005e875e  50                   push eax
// 005e875f  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e8763  8bf1                 mov esi, ecx
// 005e8765  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e8769  51                   push ecx
// 005e876a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e876e  52                   push edx
// 005e876f  50                   push eax
// 005e8770  51                   push ecx
// 005e8771  8d542440             lea edx, [esp + 0x40]
// 005e8775  52                   push edx
// 005e8776  e835f8ffff           call 0x5e7fb0
// 005e877b  8b10                 mov edx, dword ptr [eax]
// 005e877d  83c410               add esp, 0x10
// 005e8780  8bcc                 mov ecx, esp
// 005e8782  c70000000000         mov dword ptr [eax], 0
// 005e8788  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005e8790  8964242c             mov dword ptr [esp + 0x2c], esp
// 005e8794  8911                 mov dword ptr [ecx], edx
// 005e8796  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e879a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e879e  52                   push edx
// 005e879f  50                   push eax
// 005e87a0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005e87a5  e8d658faff           call 0x58e080
// 005e87aa  50                   push eax
// 005e87ab  8bce                 mov ecx, esi
// 005e87ad  c644242000           mov byte ptr [esp + 0x20], 0
// 005e87b2  e829cbe5ff           call 0x4452e0
// 005e87b7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e87bb  51                   push ecx
// 005e87bc  e8a1740400           call 0x62fc62
// 005e87c1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e87c5  83c404               add esp, 4
// 005e87c8  c7063cda7b00         mov dword ptr [esi], 0x7bda3c
// 005e87ce  8bc6                 mov eax, esi
// 005e87d0  64890d00000000       mov dword ptr fs:[0], ecx
// 005e87d7  5e                   pop esi
// 005e87d8  83c40c               add esp, 0xc
// 005e87db  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
