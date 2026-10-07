// roc 2008-06 0059f850  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f850
//
// 0059f850  6aff                 push -1
// 0059f852  6840137d00           push 0x7d1340
// 0059f857  64a100000000         mov eax, dword ptr fs:[0]
// 0059f85d  50                   push eax
// 0059f85e  64892500000000       mov dword ptr fs:[0], esp
// 0059f865  51                   push ecx
// 0059f866  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059f86a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059f86e  56                   push esi
// 0059f86f  50                   push eax
// 0059f870  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059f874  8bf1                 mov esi, ecx
// 0059f876  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059f87a  51                   push ecx
// 0059f87b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059f87f  52                   push edx
// 0059f880  50                   push eax
// 0059f881  51                   push ecx
// 0059f882  8d542444             lea edx, [esp + 0x44]
// 0059f886  52                   push edx
// 0059f887  e814f8ffff           call 0x59f0a0
// 0059f88c  8b08                 mov ecx, dword ptr [eax]
// 0059f88e  83c410               add esp, 0x10
// 0059f891  c70000000000         mov dword ptr [eax], 0
// 0059f897  8bc4                 mov eax, esp
// 0059f899  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059f8a1  8964240c             mov dword ptr [esp + 0xc], esp
// 0059f8a5  8908                 mov dword ptr [eax], ecx
// 0059f8a7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059f8ab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059f8af  50                   push eax
// 0059f8b0  51                   push ecx
// 0059f8b1  c644242001           mov byte ptr [esp + 0x20], 1
// 0059f8b6  e825ffffff           call 0x59f7e0
// 0059f8bb  50                   push eax
// 0059f8bc  8bce                 mov ecx, esi
// 0059f8be  c644242400           mov byte ptr [esp + 0x24], 0
// 0059f8c3  e8e8abffff           call 0x59a4b0
// 0059f8c8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059f8cc  85c0                 test eax, eax
// 0059f8ce  7409                 je 0x59f8d9
// 0059f8d0  50                   push eax
// 0059f8d1  e8a40d1000           call 0x6a067a
// 0059f8d6  83c404               add esp, 4
// 0059f8d9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059f8dd  c706a4338300         mov dword ptr [esi], 0x8333a4
// 0059f8e3  8bc6                 mov eax, esi
// 0059f8e5  64890d00000000       mov dword ptr fs:[0], ecx
// 0059f8ec  5e                   pop esi
// 0059f8ed  83c410               add esp, 0x10
// 0059f8f0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
