// roc 2009-06 00646100  unit: RBX::Soundscape::SoundService  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00646100
//
// 00646100  6aff                 push -1
// 00646102  6800928500           push 0x859200
// 00646107  64a100000000         mov eax, dword ptr fs:[0]
// 0064610d  50                   push eax
// 0064610e  64892500000000       mov dword ptr fs:[0], esp
// 00646115  51                   push ecx
// 00646116  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0064611a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0064611e  56                   push esi
// 0064611f  50                   push eax
// 00646120  8b442428             mov eax, dword ptr [esp + 0x28]
// 00646124  8bf1                 mov esi, ecx
// 00646126  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064612a  51                   push ecx
// 0064612b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064612f  52                   push edx
// 00646130  50                   push eax
// 00646131  51                   push ecx
// 00646132  8d542444             lea edx, [esp + 0x44]
// 00646136  52                   push edx
// 00646137  e8e4d9ffff           call 0x643b20
// 0064613c  8b08                 mov ecx, dword ptr [eax]
// 0064613e  83c410               add esp, 0x10
// 00646141  c70000000000         mov dword ptr [eax], 0
// 00646147  8bc4                 mov eax, esp
// 00646149  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00646151  8964240c             mov dword ptr [esp + 0xc], esp
// 00646155  8908                 mov dword ptr [eax], ecx
// 00646157  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064615b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0064615f  50                   push eax
// 00646160  51                   push ecx
// 00646161  c644242001           mov byte ptr [esp + 0x20], 1
// 00646166  e8a5fdffff           call 0x645f10
// 0064616b  50                   push eax
// 0064616c  8bce                 mov ecx, esi
// 0064616e  c644242400           mov byte ptr [esp + 0x24], 0
// 00646173  e8889fdfff           call 0x440100
// 00646178  8b542430             mov edx, dword ptr [esp + 0x30]
// 0064617c  52                   push edx
// 0064617d  e8b0280d00           call 0x718a32
// 00646182  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00646186  83c404               add esp, 4
// 00646189  c70658e68d00         mov dword ptr [esi], 0x8de658
// 0064618f  8bc6                 mov eax, esi
// 00646191  64890d00000000       mov dword ptr fs:[0], ecx
// 00646198  5e                   pop esi
// 00646199  83c410               add esp, 0x10
// 0064619c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
