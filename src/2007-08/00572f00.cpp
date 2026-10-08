// roc 2007-08 00572f00  unit: RBX::VTexture::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572f00
//
// 00572f00  64a100000000         mov eax, dword ptr fs:[0]
// 00572f06  6aff                 push -1
// 00572f08  6890117500           push 0x751190
// 00572f0d  50                   push eax
// 00572f0e  64892500000000       mov dword ptr fs:[0], esp
// 00572f15  8b442428             mov eax, dword ptr [esp + 0x28]
// 00572f19  8b542420             mov edx, dword ptr [esp + 0x20]
// 00572f1d  56                   push esi
// 00572f1e  50                   push eax
// 00572f1f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00572f23  8bf1                 mov esi, ecx
// 00572f25  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00572f29  51                   push ecx
// 00572f2a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00572f2e  52                   push edx
// 00572f2f  50                   push eax
// 00572f30  51                   push ecx
// 00572f31  8d542440             lea edx, [esp + 0x40]
// 00572f35  52                   push edx
// 00572f36  e8b5f8ffff           call 0x5727f0
// 00572f3b  8b10                 mov edx, dword ptr [eax]
// 00572f3d  83c410               add esp, 0x10
// 00572f40  8bcc                 mov ecx, esp
// 00572f42  c70000000000         mov dword ptr [eax], 0
// 00572f48  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00572f50  8964242c             mov dword ptr [esp + 0x2c], esp
// 00572f54  8911                 mov dword ptr [ecx], edx
// 00572f56  8b542420             mov edx, dword ptr [esp + 0x20]
// 00572f5a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00572f5e  52                   push edx
// 00572f5f  50                   push eax
// 00572f60  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00572f65  e816feffff           call 0x572d80
// 00572f6a  50                   push eax
// 00572f6b  8bce                 mov ecx, esi
// 00572f6d  c644242000           mov byte ptr [esp + 0x20], 0
// 00572f72  e86923edff           call 0x4452e0
// 00572f77  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00572f7b  51                   push ecx
// 00572f7c  e8e1cc0b00           call 0x62fc62
// 00572f81  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00572f85  83c404               add esp, 4
// 00572f88  c7069ca37a00         mov dword ptr [esi], 0x7aa39c
// 00572f8e  8bc6                 mov eax, esi
// 00572f90  64890d00000000       mov dword ptr fs:[0], ecx
// 00572f97  5e                   pop esi
// 00572f98  83c40c               add esp, 0xc
// 00572f9b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
