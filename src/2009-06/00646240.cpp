// roc 2009-06 00646240  unit: RBX::Soundscape::SoundService  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00646240
//
// 00646240  6aff                 push -1
// 00646242  6800928500           push 0x859200
// 00646247  64a100000000         mov eax, dword ptr fs:[0]
// 0064624d  50                   push eax
// 0064624e  64892500000000       mov dword ptr fs:[0], esp
// 00646255  51                   push ecx
// 00646256  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0064625a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0064625e  56                   push esi
// 0064625f  50                   push eax
// 00646260  8b442428             mov eax, dword ptr [esp + 0x28]
// 00646264  8bf1                 mov esi, ecx
// 00646266  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064626a  51                   push ecx
// 0064626b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064626f  52                   push edx
// 00646270  50                   push eax
// 00646271  51                   push ecx
// 00646272  8d542444             lea edx, [esp + 0x44]
// 00646276  52                   push edx
// 00646277  e8c4e1ffff           call 0x644440
// 0064627c  8b08                 mov ecx, dword ptr [eax]
// 0064627e  83c410               add esp, 0x10
// 00646281  c70000000000         mov dword ptr [eax], 0
// 00646287  8bc4                 mov eax, esp
// 00646289  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00646291  8964240c             mov dword ptr [esp + 0xc], esp
// 00646295  8908                 mov dword ptr [eax], ecx
// 00646297  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064629b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0064629f  50                   push eax
// 006462a0  51                   push ecx
// 006462a1  c644242001           mov byte ptr [esp + 0x20], 1
// 006462a6  e865fcffff           call 0x645f10
// 006462ab  50                   push eax
// 006462ac  8bce                 mov ecx, esi
// 006462ae  c644242400           mov byte ptr [esp + 0x24], 0
// 006462b3  e88834dcff           call 0x409740
// 006462b8  8b542430             mov edx, dword ptr [esp + 0x30]
// 006462bc  52                   push edx
// 006462bd  e870270d00           call 0x718a32
// 006462c2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006462c6  83c404               add esp, 4
// 006462c9  c706c0e68d00         mov dword ptr [esi], 0x8de6c0
// 006462cf  8bc6                 mov eax, esi
// 006462d1  64890d00000000       mov dword ptr fs:[0], ecx
// 006462d8  5e                   pop esi
// 006462d9  83c410               add esp, 0x10
// 006462dc  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
