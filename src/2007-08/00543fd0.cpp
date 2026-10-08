// roc 2007-08 00543fd0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543fd0
//
// 00543fd0  64a100000000         mov eax, dword ptr fs:[0]
// 00543fd6  6aff                 push -1
// 00543fd8  6890117500           push 0x751190
// 00543fdd  50                   push eax
// 00543fde  64892500000000       mov dword ptr fs:[0], esp
// 00543fe5  8b442428             mov eax, dword ptr [esp + 0x28]
// 00543fe9  8b542420             mov edx, dword ptr [esp + 0x20]
// 00543fed  56                   push esi
// 00543fee  50                   push eax
// 00543fef  8b442424             mov eax, dword ptr [esp + 0x24]
// 00543ff3  8bf1                 mov esi, ecx
// 00543ff5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00543ff9  51                   push ecx
// 00543ffa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00543ffe  52                   push edx
// 00543fff  50                   push eax
// 00544000  51                   push ecx
// 00544001  8d542440             lea edx, [esp + 0x40]
// 00544005  52                   push edx
// 00544006  e8a5ecffff           call 0x542cb0
// 0054400b  8b10                 mov edx, dword ptr [eax]
// 0054400d  83c410               add esp, 0x10
// 00544010  8bcc                 mov ecx, esp
// 00544012  c70000000000         mov dword ptr [eax], 0
// 00544018  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00544020  8964242c             mov dword ptr [esp + 0x2c], esp
// 00544024  8911                 mov dword ptr [ecx], edx
// 00544026  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054402a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054402e  52                   push edx
// 0054402f  50                   push eax
// 00544030  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00544035  e846fcffff           call 0x543c80
// 0054403a  50                   push eax
// 0054403b  8bce                 mov ecx, esi
// 0054403d  c644242000           mov byte ptr [esp + 0x20], 0
// 00544042  e819edefff           call 0x442d60
// 00544047  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0054404b  51                   push ecx
// 0054404c  e811bc0e00           call 0x62fc62
// 00544051  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00544055  83c404               add esp, 4
// 00544058  c706d8697a00         mov dword ptr [esi], 0x7a69d8
// 0054405e  8bc6                 mov eax, esi
// 00544060  64890d00000000       mov dword ptr fs:[0], ecx
// 00544067  5e                   pop esi
// 00544068  83c40c               add esp, 0xc
// 0054406b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
