// roc 2009-06 006a4f80  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a4f80
//
// 006a4f80  6aff                 push -1
// 006a4f82  6800928500           push 0x859200
// 006a4f87  64a100000000         mov eax, dword ptr fs:[0]
// 006a4f8d  50                   push eax
// 006a4f8e  64892500000000       mov dword ptr fs:[0], esp
// 006a4f95  51                   push ecx
// 006a4f96  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006a4f9a  8b542424             mov edx, dword ptr [esp + 0x24]
// 006a4f9e  56                   push esi
// 006a4f9f  50                   push eax
// 006a4fa0  8b442428             mov eax, dword ptr [esp + 0x28]
// 006a4fa4  8bf1                 mov esi, ecx
// 006a4fa6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006a4faa  51                   push ecx
// 006a4fab  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006a4faf  52                   push edx
// 006a4fb0  50                   push eax
// 006a4fb1  51                   push ecx
// 006a4fb2  8d542444             lea edx, [esp + 0x44]
// 006a4fb6  52                   push edx
// 006a4fb7  e8c4fcffff           call 0x6a4c80
// 006a4fbc  8b08                 mov ecx, dword ptr [eax]
// 006a4fbe  83c410               add esp, 0x10
// 006a4fc1  c70000000000         mov dword ptr [eax], 0
// 006a4fc7  8bc4                 mov eax, esp
// 006a4fc9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a4fd1  8964240c             mov dword ptr [esp + 0xc], esp
// 006a4fd5  8908                 mov dword ptr [eax], ecx
// 006a4fd7  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a4fdb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006a4fdf  50                   push eax
// 006a4fe0  51                   push ecx
// 006a4fe1  c644242001           mov byte ptr [esp + 0x20], 1
// 006a4fe6  e8656ef4ff           call 0x5ebe50
// 006a4feb  50                   push eax
// 006a4fec  8bce                 mov ecx, esi
// 006a4fee  c644242400           mov byte ptr [esp + 0x24], 0
// 006a4ff3  e8d8fbf7ff           call 0x624bd0
// 006a4ff8  8b542430             mov edx, dword ptr [esp + 0x30]
// 006a4ffc  52                   push edx
// 006a4ffd  e8303a0700           call 0x718a32
// 006a5002  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a5006  83c404               add esp, 4
// 006a5009  c706709d8e00         mov dword ptr [esi], 0x8e9d70
// 006a500f  8bc6                 mov eax, esi
// 006a5011  64890d00000000       mov dword ptr fs:[0], ecx
// 006a5018  5e                   pop esi
// 006a5019  83c410               add esp, 0x10
// 006a501c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
