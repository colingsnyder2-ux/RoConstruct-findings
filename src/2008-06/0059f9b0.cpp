// roc 2008-06 0059f9b0  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f9b0
//
// 0059f9b0  6aff                 push -1
// 0059f9b2  6840137d00           push 0x7d1340
// 0059f9b7  64a100000000         mov eax, dword ptr fs:[0]
// 0059f9bd  50                   push eax
// 0059f9be  64892500000000       mov dword ptr fs:[0], esp
// 0059f9c5  51                   push ecx
// 0059f9c6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059f9ca  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059f9ce  56                   push esi
// 0059f9cf  50                   push eax
// 0059f9d0  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059f9d4  8bf1                 mov esi, ecx
// 0059f9d6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059f9da  51                   push ecx
// 0059f9db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059f9df  52                   push edx
// 0059f9e0  50                   push eax
// 0059f9e1  51                   push ecx
// 0059f9e2  8d542444             lea edx, [esp + 0x44]
// 0059f9e6  52                   push edx
// 0059f9e7  e854f7ffff           call 0x59f140
// 0059f9ec  8b08                 mov ecx, dword ptr [eax]
// 0059f9ee  83c410               add esp, 0x10
// 0059f9f1  c70000000000         mov dword ptr [eax], 0
// 0059f9f7  8bc4                 mov eax, esp
// 0059f9f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059fa01  8964240c             mov dword ptr [esp + 0xc], esp
// 0059fa05  8908                 mov dword ptr [eax], ecx
// 0059fa07  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059fa0b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059fa0f  50                   push eax
// 0059fa10  51                   push ecx
// 0059fa11  c644242001           mov byte ptr [esp + 0x20], 1
// 0059fa16  e8c5fdffff           call 0x59f7e0
// 0059fa1b  50                   push eax
// 0059fa1c  8bce                 mov ecx, esi
// 0059fa1e  c644242400           mov byte ptr [esp + 0x24], 0
// 0059fa23  e8787effff           call 0x5978a0
// 0059fa28  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059fa2c  85c0                 test eax, eax
// 0059fa2e  7409                 je 0x59fa39
// 0059fa30  50                   push eax
// 0059fa31  e8440c1000           call 0x6a067a
// 0059fa36  83c404               add esp, 4
// 0059fa39  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059fa3d  c7060c348300         mov dword ptr [esi], 0x83340c
// 0059fa43  8bc6                 mov eax, esi
// 0059fa45  64890d00000000       mov dword ptr fs:[0], ecx
// 0059fa4c  5e                   pop esi
// 0059fa4d  83c410               add esp, 0x10
// 0059fa50  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
