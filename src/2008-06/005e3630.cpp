// roc 2008-06 005e3630  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3630
//
// 005e3630  6aff                 push -1
// 005e3632  6840137d00           push 0x7d1340
// 005e3637  64a100000000         mov eax, dword ptr fs:[0]
// 005e363d  50                   push eax
// 005e363e  64892500000000       mov dword ptr fs:[0], esp
// 005e3645  51                   push ecx
// 005e3646  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e364a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e364e  56                   push esi
// 005e364f  50                   push eax
// 005e3650  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e3654  8bf1                 mov esi, ecx
// 005e3656  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e365a  51                   push ecx
// 005e365b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e365f  52                   push edx
// 005e3660  50                   push eax
// 005e3661  51                   push ecx
// 005e3662  8d542444             lea edx, [esp + 0x44]
// 005e3666  52                   push edx
// 005e3667  e804f3ffff           call 0x5e2970
// 005e366c  8b08                 mov ecx, dword ptr [eax]
// 005e366e  83c410               add esp, 0x10
// 005e3671  c70000000000         mov dword ptr [eax], 0
// 005e3677  8bc4                 mov eax, esp
// 005e3679  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005e3681  8964240c             mov dword ptr [esp + 0xc], esp
// 005e3685  8908                 mov dword ptr [eax], ecx
// 005e3687  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e368b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e368f  50                   push eax
// 005e3690  51                   push ecx
// 005e3691  c644242001           mov byte ptr [esp + 0x20], 1
// 005e3696  e835d2fdff           call 0x5c08d0
// 005e369b  50                   push eax
// 005e369c  8bce                 mov ecx, esi
// 005e369e  c644242400           mov byte ptr [esp + 0x24], 0
// 005e36a3  e8980dfaff           call 0x584440
// 005e36a8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005e36ac  85c0                 test eax, eax
// 005e36ae  7409                 je 0x5e36b9
// 005e36b0  50                   push eax
// 005e36b1  e8c4cf0b00           call 0x6a067a
// 005e36b6  83c404               add esp, 4
// 005e36b9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e36bd  c706c4e98300         mov dword ptr [esi], 0x83e9c4
// 005e36c3  8bc6                 mov eax, esi
// 005e36c5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e36cc  5e                   pop esi
// 005e36cd  83c410               add esp, 0x10
// 005e36d0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
