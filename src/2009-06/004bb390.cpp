// roc 2009-06 004bb390  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bb390
//
// 004bb390  6aff                 push -1
// 004bb392  6800928500           push 0x859200
// 004bb397  64a100000000         mov eax, dword ptr fs:[0]
// 004bb39d  50                   push eax
// 004bb39e  64892500000000       mov dword ptr fs:[0], esp
// 004bb3a5  51                   push ecx
// 004bb3a6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004bb3aa  8b542424             mov edx, dword ptr [esp + 0x24]
// 004bb3ae  56                   push esi
// 004bb3af  50                   push eax
// 004bb3b0  8b442428             mov eax, dword ptr [esp + 0x28]
// 004bb3b4  8bf1                 mov esi, ecx
// 004bb3b6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004bb3ba  51                   push ecx
// 004bb3bb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004bb3bf  52                   push edx
// 004bb3c0  50                   push eax
// 004bb3c1  51                   push ecx
// 004bb3c2  8d542444             lea edx, [esp + 0x44]
// 004bb3c6  52                   push edx
// 004bb3c7  e86493ffff           call 0x4b4730
// 004bb3cc  8b08                 mov ecx, dword ptr [eax]
// 004bb3ce  83c410               add esp, 0x10
// 004bb3d1  c70000000000         mov dword ptr [eax], 0
// 004bb3d7  8bc4                 mov eax, esp
// 004bb3d9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004bb3e1  8964240c             mov dword ptr [esp + 0xc], esp
// 004bb3e5  8908                 mov dword ptr [eax], ecx
// 004bb3e7  8b442424             mov eax, dword ptr [esp + 0x24]
// 004bb3eb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004bb3ef  50                   push eax
// 004bb3f0  51                   push ecx
// 004bb3f1  c644242001           mov byte ptr [esp + 0x20], 1
// 004bb3f6  e8e5f7ffff           call 0x4babe0
// 004bb3fb  50                   push eax
// 004bb3fc  8bce                 mov ecx, esi
// 004bb3fe  c644242400           mov byte ptr [esp + 0x24], 0
// 004bb403  e838e3f4ff           call 0x409740
// 004bb408  8b542430             mov edx, dword ptr [esp + 0x30]
// 004bb40c  52                   push edx
// 004bb40d  e820d62500           call 0x718a32
// 004bb412  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bb416  83c404               add esp, 4
// 004bb419  c70614478c00         mov dword ptr [esi], 0x8c4714
// 004bb41f  8bc6                 mov eax, esi
// 004bb421  64890d00000000       mov dword ptr fs:[0], ecx
// 004bb428  5e                   pop esi
// 004bb429  83c410               add esp, 0x10
// 004bb42c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
