// roc 2009-06 006979b0  unit: RBX::VDebrisService::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006979b0
//
// 006979b0  6aff                 push -1
// 006979b2  6800928500           push 0x859200
// 006979b7  64a100000000         mov eax, dword ptr fs:[0]
// 006979bd  50                   push eax
// 006979be  64892500000000       mov dword ptr fs:[0], esp
// 006979c5  51                   push ecx
// 006979c6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006979ca  8b542424             mov edx, dword ptr [esp + 0x24]
// 006979ce  56                   push esi
// 006979cf  50                   push eax
// 006979d0  8b442428             mov eax, dword ptr [esp + 0x28]
// 006979d4  8bf1                 mov esi, ecx
// 006979d6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006979da  51                   push ecx
// 006979db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006979df  52                   push edx
// 006979e0  50                   push eax
// 006979e1  51                   push ecx
// 006979e2  8d542444             lea edx, [esp + 0x44]
// 006979e6  52                   push edx
// 006979e7  e804f8ffff           call 0x6971f0
// 006979ec  8b08                 mov ecx, dword ptr [eax]
// 006979ee  83c410               add esp, 0x10
// 006979f1  c70000000000         mov dword ptr [eax], 0
// 006979f7  8bc4                 mov eax, esp
// 006979f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00697a01  8964240c             mov dword ptr [esp + 0xc], esp
// 00697a05  8908                 mov dword ptr [eax], ecx
// 00697a07  8b442424             mov eax, dword ptr [esp + 0x24]
// 00697a0b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00697a0f  50                   push eax
// 00697a10  51                   push ecx
// 00697a11  c644242001           mov byte ptr [esp + 0x20], 1
// 00697a16  e82533f5ff           call 0x5ead40
// 00697a1b  50                   push eax
// 00697a1c  8bce                 mov ecx, esi
// 00697a1e  c644242400           mov byte ptr [esp + 0x24], 0
// 00697a23  e8c862daff           call 0x43dcf0
// 00697a28  8b542430             mov edx, dword ptr [esp + 0x30]
// 00697a2c  52                   push edx
// 00697a2d  e800100800           call 0x718a32
// 00697a32  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00697a36  83c404               add esp, 4
// 00697a39  c706487e8e00         mov dword ptr [esi], 0x8e7e48
// 00697a3f  8bc6                 mov eax, esi
// 00697a41  64890d00000000       mov dword ptr fs:[0], ecx
// 00697a48  5e                   pop esi
// 00697a49  83c410               add esp, 0x10
// 00697a4c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
