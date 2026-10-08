// roc 2009-06 006461a0  unit: RBX::Soundscape::SoundService  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006461a0
//
// 006461a0  6aff                 push -1
// 006461a2  6800928500           push 0x859200
// 006461a7  64a100000000         mov eax, dword ptr fs:[0]
// 006461ad  50                   push eax
// 006461ae  64892500000000       mov dword ptr fs:[0], esp
// 006461b5  51                   push ecx
// 006461b6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006461ba  8b542424             mov edx, dword ptr [esp + 0x24]
// 006461be  56                   push esi
// 006461bf  50                   push eax
// 006461c0  8b442428             mov eax, dword ptr [esp + 0x28]
// 006461c4  8bf1                 mov esi, ecx
// 006461c6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006461ca  51                   push ecx
// 006461cb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006461cf  52                   push edx
// 006461d0  50                   push eax
// 006461d1  51                   push ecx
// 006461d2  8d542444             lea edx, [esp + 0x44]
// 006461d6  52                   push edx
// 006461d7  e804e2ffff           call 0x6443e0
// 006461dc  8b08                 mov ecx, dword ptr [eax]
// 006461de  83c410               add esp, 0x10
// 006461e1  c70000000000         mov dword ptr [eax], 0
// 006461e7  8bc4                 mov eax, esp
// 006461e9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006461f1  8964240c             mov dword ptr [esp + 0xc], esp
// 006461f5  8908                 mov dword ptr [eax], ecx
// 006461f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 006461fb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006461ff  50                   push eax
// 00646200  51                   push ecx
// 00646201  c644242001           mov byte ptr [esp + 0x20], 1
// 00646206  e805fdffff           call 0x645f10
// 0064620b  50                   push eax
// 0064620c  8bce                 mov ecx, esi
// 0064620e  c644242400           mov byte ptr [esp + 0x24], 0
// 00646213  e8d87adfff           call 0x43dcf0
// 00646218  8b542430             mov edx, dword ptr [esp + 0x30]
// 0064621c  52                   push edx
// 0064621d  e810280d00           call 0x718a32
// 00646222  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00646226  83c404               add esp, 4
// 00646229  c7068ce68d00         mov dword ptr [esi], 0x8de68c
// 0064622f  8bc6                 mov eax, esi
// 00646231  64890d00000000       mov dword ptr fs:[0], ecx
// 00646238  5e                   pop esi
// 00646239  83c410               add esp, 0x10
// 0064623c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
