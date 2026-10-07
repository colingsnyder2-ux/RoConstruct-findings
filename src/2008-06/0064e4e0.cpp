// roc 2008-06 0064e4e0  unit: RBX::P8Camera::?$GetSetImpl  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064e4e0
//
// 0064e4e0  6aff                 push -1
// 0064e4e2  6840137d00           push 0x7d1340
// 0064e4e7  64a100000000         mov eax, dword ptr fs:[0]
// 0064e4ed  50                   push eax
// 0064e4ee  64892500000000       mov dword ptr fs:[0], esp
// 0064e4f5  51                   push ecx
// 0064e4f6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0064e4fa  8b542424             mov edx, dword ptr [esp + 0x24]
// 0064e4fe  56                   push esi
// 0064e4ff  50                   push eax
// 0064e500  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064e504  8bf1                 mov esi, ecx
// 0064e506  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064e50a  51                   push ecx
// 0064e50b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064e50f  52                   push edx
// 0064e510  50                   push eax
// 0064e511  51                   push ecx
// 0064e512  8d542444             lea edx, [esp + 0x44]
// 0064e516  52                   push edx
// 0064e517  e884fdffff           call 0x64e2a0
// 0064e51c  8b08                 mov ecx, dword ptr [eax]
// 0064e51e  83c410               add esp, 0x10
// 0064e521  c70000000000         mov dword ptr [eax], 0
// 0064e527  8bc4                 mov eax, esp
// 0064e529  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0064e531  8964240c             mov dword ptr [esp + 0xc], esp
// 0064e535  8908                 mov dword ptr [eax], ecx
// 0064e537  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064e53b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0064e53f  50                   push eax
// 0064e540  51                   push ecx
// 0064e541  c644242001           mov byte ptr [esp + 0x20], 1
// 0064e546  e8a502fbff           call 0x5fe7f0
// 0064e54b  50                   push eax
// 0064e54c  8bce                 mov ecx, esi
// 0064e54e  c644242400           mov byte ptr [esp + 0x24], 0
// 0064e553  e84893f4ff           call 0x5978a0
// 0064e558  8b442430             mov eax, dword ptr [esp + 0x30]
// 0064e55c  85c0                 test eax, eax
// 0064e55e  7409                 je 0x64e569
// 0064e560  50                   push eax
// 0064e561  e814210500           call 0x6a067a
// 0064e566  83c404               add esp, 4
// 0064e569  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064e56d  c70668b38400         mov dword ptr [esi], 0x84b368
// 0064e573  8bc6                 mov eax, esi
// 0064e575  64890d00000000       mov dword ptr fs:[0], ecx
// 0064e57c  5e                   pop esi
// 0064e57d  83c410               add esp, 0x10
// 0064e580  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
