// roc 2008-06 00559870  unit: RBX::VInstance::?$SignalDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559870
//
// 00559870  6aff                 push -1
// 00559872  6840137d00           push 0x7d1340
// 00559877  64a100000000         mov eax, dword ptr fs:[0]
// 0055987d  50                   push eax
// 0055987e  64892500000000       mov dword ptr fs:[0], esp
// 00559885  51                   push ecx
// 00559886  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055988a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0055988e  56                   push esi
// 0055988f  50                   push eax
// 00559890  8b442428             mov eax, dword ptr [esp + 0x28]
// 00559894  8bf1                 mov esi, ecx
// 00559896  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055989a  51                   push ecx
// 0055989b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055989f  52                   push edx
// 005598a0  50                   push eax
// 005598a1  51                   push ecx
// 005598a2  8d542444             lea edx, [esp + 0x44]
// 005598a6  52                   push edx
// 005598a7  e8e4e6ffff           call 0x557f90
// 005598ac  8b08                 mov ecx, dword ptr [eax]
// 005598ae  83c410               add esp, 0x10
// 005598b1  c70000000000         mov dword ptr [eax], 0
// 005598b7  8bc4                 mov eax, esp
// 005598b9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005598c1  8964240c             mov dword ptr [esp + 0xc], esp
// 005598c5  8908                 mov dword ptr [eax], ecx
// 005598c7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005598cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005598cf  50                   push eax
// 005598d0  51                   push ecx
// 005598d1  c644242001           mov byte ptr [esp + 0x20], 1
// 005598d6  e8a514ebff           call 0x40ad80
// 005598db  50                   push eax
// 005598dc  8bce                 mov ecx, esi
// 005598de  c644242400           mov byte ptr [esp + 0x24], 0
// 005598e3  e84899eeff           call 0x443230
// 005598e8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005598ec  85c0                 test eax, eax
// 005598ee  7409                 je 0x5598f9
// 005598f0  50                   push eax
// 005598f1  e8846d1400           call 0x6a067a
// 005598f6  83c404               add esp, 4
// 005598f9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005598fd  c7062cd78200         mov dword ptr [esi], 0x82d72c
// 00559903  8bc6                 mov eax, esi
// 00559905  64890d00000000       mov dword ptr fs:[0], ecx
// 0055990c  5e                   pop esi
// 0055990d  83c410               add esp, 0x10
// 00559910  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
