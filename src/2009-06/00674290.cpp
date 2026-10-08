// roc 2009-06 00674290  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00674290
//
// 00674290  6aff                 push -1
// 00674292  6800928500           push 0x859200
// 00674297  64a100000000         mov eax, dword ptr fs:[0]
// 0067429d  50                   push eax
// 0067429e  64892500000000       mov dword ptr fs:[0], esp
// 006742a5  51                   push ecx
// 006742a6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006742aa  8b542424             mov edx, dword ptr [esp + 0x24]
// 006742ae  56                   push esi
// 006742af  50                   push eax
// 006742b0  8b442428             mov eax, dword ptr [esp + 0x28]
// 006742b4  8bf1                 mov esi, ecx
// 006742b6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006742ba  51                   push ecx
// 006742bb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006742bf  52                   push edx
// 006742c0  50                   push eax
// 006742c1  51                   push ecx
// 006742c2  8d542444             lea edx, [esp + 0x44]
// 006742c6  52                   push edx
// 006742c7  e854f0ffff           call 0x673320
// 006742cc  8b08                 mov ecx, dword ptr [eax]
// 006742ce  83c410               add esp, 0x10
// 006742d1  c70000000000         mov dword ptr [eax], 0
// 006742d7  8bc4                 mov eax, esp
// 006742d9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006742e1  8964240c             mov dword ptr [esp + 0xc], esp
// 006742e5  8908                 mov dword ptr [eax], ecx
// 006742e7  8b442424             mov eax, dword ptr [esp + 0x24]
// 006742eb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006742ef  50                   push eax
// 006742f0  51                   push ecx
// 006742f1  c644242001           mov byte ptr [esp + 0x20], 1
// 006742f6  e8058ce4ff           call 0x4bcf00
// 006742fb  50                   push eax
// 006742fc  8bce                 mov ecx, esi
// 006742fe  c644242400           mov byte ptr [esp + 0x24], 0
// 00674303  e8c808fbff           call 0x624bd0
// 00674308  8b542430             mov edx, dword ptr [esp + 0x30]
// 0067430c  52                   push edx
// 0067430d  e820470a00           call 0x718a32
// 00674312  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00674316  83c404               add esp, 4
// 00674319  c70680408e00         mov dword ptr [esi], 0x8e4080
// 0067431f  8bc6                 mov eax, esi
// 00674321  64890d00000000       mov dword ptr fs:[0], ecx
// 00674328  5e                   pop esi
// 00674329  83c410               add esp, 0x10
// 0067432c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
