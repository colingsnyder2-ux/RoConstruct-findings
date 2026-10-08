// roc 2007-08 005dcfc0  unit: RBX::VVelocityMotor::?$RefPropDescriptor  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dcfc0
//
// 005dcfc0  64a100000000         mov eax, dword ptr fs:[0]
// 005dcfc6  6aff                 push -1
// 005dcfc8  6890117500           push 0x751190
// 005dcfcd  50                   push eax
// 005dcfce  64892500000000       mov dword ptr fs:[0], esp
// 005dcfd5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005dcfd9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005dcfdd  56                   push esi
// 005dcfde  50                   push eax
// 005dcfdf  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dcfe3  8bf1                 mov esi, ecx
// 005dcfe5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dcfe9  51                   push ecx
// 005dcfea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005dcfee  52                   push edx
// 005dcfef  50                   push eax
// 005dcff0  51                   push ecx
// 005dcff1  8d542440             lea edx, [esp + 0x40]
// 005dcff5  52                   push edx
// 005dcff6  e8d5dbffff           call 0x5dabd0
// 005dcffb  8b10                 mov edx, dword ptr [eax]
// 005dcffd  83c410               add esp, 0x10
// 005dd000  8bcc                 mov ecx, esp
// 005dd002  c70000000000         mov dword ptr [eax], 0
// 005dd008  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005dd010  8964242c             mov dword ptr [esp + 0x2c], esp
// 005dd014  8911                 mov dword ptr [ecx], edx
// 005dd016  8b542420             mov edx, dword ptr [esp + 0x20]
// 005dd01a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005dd01e  52                   push edx
// 005dd01f  50                   push eax
// 005dd020  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005dd025  e8e6f3ffff           call 0x5dc410
// 005dd02a  50                   push eax
// 005dd02b  8bce                 mov ecx, esi
// 005dd02d  c644242000           mov byte ptr [esp + 0x20], 0
// 005dd032  e8a982e6ff           call 0x4452e0
// 005dd037  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dd03b  51                   push ecx
// 005dd03c  e8212c0500           call 0x62fc62
// 005dd041  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dd045  83c404               add esp, 4
// 005dd048  c70654c77b00         mov dword ptr [esi], 0x7bc754
// 005dd04e  8bc6                 mov eax, esi
// 005dd050  64890d00000000       mov dword ptr fs:[0], ecx
// 005dd057  5e                   pop esi
// 005dd058  83c40c               add esp, 0xc
// 005dd05b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
