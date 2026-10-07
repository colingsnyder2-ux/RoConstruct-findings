// roc 2008-06 0059f900  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f900
//
// 0059f900  6aff                 push -1
// 0059f902  6840137d00           push 0x7d1340
// 0059f907  64a100000000         mov eax, dword ptr fs:[0]
// 0059f90d  50                   push eax
// 0059f90e  64892500000000       mov dword ptr fs:[0], esp
// 0059f915  51                   push ecx
// 0059f916  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059f91a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059f91e  56                   push esi
// 0059f91f  50                   push eax
// 0059f920  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059f924  8bf1                 mov esi, ecx
// 0059f926  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059f92a  51                   push ecx
// 0059f92b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059f92f  52                   push edx
// 0059f930  50                   push eax
// 0059f931  51                   push ecx
// 0059f932  8d542444             lea edx, [esp + 0x44]
// 0059f936  52                   push edx
// 0059f937  e8b4f7ffff           call 0x59f0f0
// 0059f93c  8b08                 mov ecx, dword ptr [eax]
// 0059f93e  83c410               add esp, 0x10
// 0059f941  c70000000000         mov dword ptr [eax], 0
// 0059f947  8bc4                 mov eax, esp
// 0059f949  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059f951  8964240c             mov dword ptr [esp + 0xc], esp
// 0059f955  8908                 mov dword ptr [eax], ecx
// 0059f957  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059f95b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059f95f  50                   push eax
// 0059f960  51                   push ecx
// 0059f961  c644242001           mov byte ptr [esp + 0x20], 1
// 0059f966  e875feffff           call 0x59f7e0
// 0059f96b  50                   push eax
// 0059f96c  8bce                 mov ecx, esi
// 0059f96e  c644242400           mov byte ptr [esp + 0x24], 0
// 0059f973  e8d8f4ffff           call 0x59ee50
// 0059f978  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059f97c  85c0                 test eax, eax
// 0059f97e  7409                 je 0x59f989
// 0059f980  50                   push eax
// 0059f981  e8f40c1000           call 0x6a067a
// 0059f986  83c404               add esp, 4
// 0059f989  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059f98d  c706d8338300         mov dword ptr [esi], 0x8333d8
// 0059f993  8bc6                 mov eax, esi
// 0059f995  64890d00000000       mov dword ptr fs:[0], ecx
// 0059f99c  5e                   pop esi
// 0059f99d  83c410               add esp, 0x10
// 0059f9a0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
