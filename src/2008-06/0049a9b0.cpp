// roc 2008-06 0049a9b0  unit: RBX::VInstance::V?$shared_ptr::V?$vector::?$sp_counted_impl_p  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a9b0
//
// 0049a9b0  6aff                 push -1
// 0049a9b2  6840137d00           push 0x7d1340
// 0049a9b7  64a100000000         mov eax, dword ptr fs:[0]
// 0049a9bd  50                   push eax
// 0049a9be  64892500000000       mov dword ptr fs:[0], esp
// 0049a9c5  51                   push ecx
// 0049a9c6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0049a9ca  8b542424             mov edx, dword ptr [esp + 0x24]
// 0049a9ce  56                   push esi
// 0049a9cf  50                   push eax
// 0049a9d0  8b442428             mov eax, dword ptr [esp + 0x28]
// 0049a9d4  8bf1                 mov esi, ecx
// 0049a9d6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0049a9da  51                   push ecx
// 0049a9db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049a9df  52                   push edx
// 0049a9e0  50                   push eax
// 0049a9e1  51                   push ecx
// 0049a9e2  8d542444             lea edx, [esp + 0x44]
// 0049a9e6  52                   push edx
// 0049a9e7  e874c9ffff           call 0x497360
// 0049a9ec  8b08                 mov ecx, dword ptr [eax]
// 0049a9ee  83c410               add esp, 0x10
// 0049a9f1  c70000000000         mov dword ptr [eax], 0
// 0049a9f7  8bc4                 mov eax, esp
// 0049a9f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049aa01  8964240c             mov dword ptr [esp + 0xc], esp
// 0049aa05  8908                 mov dword ptr [eax], ecx
// 0049aa07  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049aa0b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049aa0f  50                   push eax
// 0049aa10  51                   push ecx
// 0049aa11  c644242001           mov byte ptr [esp + 0x20], 1
// 0049aa16  e885feffff           call 0x49a8a0
// 0049aa1b  50                   push eax
// 0049aa1c  8bce                 mov ecx, esi
// 0049aa1e  c644242400           mov byte ptr [esp + 0x24], 0
// 0049aa23  e87888faff           call 0x4432a0
// 0049aa28  8b442430             mov eax, dword ptr [esp + 0x30]
// 0049aa2c  85c0                 test eax, eax
// 0049aa2e  7409                 je 0x49aa39
// 0049aa30  50                   push eax
// 0049aa31  e8445c2000           call 0x6a067a
// 0049aa36  83c404               add esp, 4
// 0049aa39  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049aa3d  c70650288200         mov dword ptr [esi], 0x822850
// 0049aa43  8bc6                 mov eax, esi
// 0049aa45  64890d00000000       mov dword ptr fs:[0], ecx
// 0049aa4c  5e                   pop esi
// 0049aa4d  83c410               add esp, 0x10
// 0049aa50  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
