// roc 2009-06 00677990  unit: RBX::Hint  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00677990
//
// 00677990  6aff                 push -1
// 00677992  6800928500           push 0x859200
// 00677997  64a100000000         mov eax, dword ptr fs:[0]
// 0067799d  50                   push eax
// 0067799e  64892500000000       mov dword ptr fs:[0], esp
// 006779a5  51                   push ecx
// 006779a6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006779aa  8b542424             mov edx, dword ptr [esp + 0x24]
// 006779ae  56                   push esi
// 006779af  50                   push eax
// 006779b0  8b442428             mov eax, dword ptr [esp + 0x28]
// 006779b4  8bf1                 mov esi, ecx
// 006779b6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006779ba  51                   push ecx
// 006779bb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006779bf  52                   push edx
// 006779c0  50                   push eax
// 006779c1  51                   push ecx
// 006779c2  8d542444             lea edx, [esp + 0x44]
// 006779c6  52                   push edx
// 006779c7  e8f4feffff           call 0x6778c0
// 006779cc  8b08                 mov ecx, dword ptr [eax]
// 006779ce  83c410               add esp, 0x10
// 006779d1  c70000000000         mov dword ptr [eax], 0
// 006779d7  8bc4                 mov eax, esp
// 006779d9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006779e1  8964240c             mov dword ptr [esp + 0xc], esp
// 006779e5  8908                 mov dword ptr [eax], ecx
// 006779e7  8b442424             mov eax, dword ptr [esp + 0x24]
// 006779eb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006779ef  50                   push eax
// 006779f0  51                   push ecx
// 006779f1  c644242001           mov byte ptr [esp + 0x20], 1
// 006779f6  e825fbe5ff           call 0x4d7520
// 006779fb  50                   push eax
// 006779fc  8bce                 mov ecx, esi
// 006779fe  c644242400           mov byte ptr [esp + 0x24], 0
// 00677a03  e86862dcff           call 0x43dc70
// 00677a08  8b542430             mov edx, dword ptr [esp + 0x30]
// 00677a0c  52                   push edx
// 00677a0d  e820100a00           call 0x718a32
// 00677a12  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00677a16  83c404               add esp, 4
// 00677a19  c706f4468e00         mov dword ptr [esi], 0x8e46f4
// 00677a1f  8bc6                 mov eax, esi
// 00677a21  64890d00000000       mov dword ptr fs:[0], ecx
// 00677a28  5e                   pop esi
// 00677a29  83c410               add esp, 0x10
// 00677a2c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
