// roc 2009-06 00681850  unit: RBX::VSky::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00681850
//
// 00681850  6aff                 push -1
// 00681852  6800928500           push 0x859200
// 00681857  64a100000000         mov eax, dword ptr fs:[0]
// 0068185d  50                   push eax
// 0068185e  64892500000000       mov dword ptr fs:[0], esp
// 00681865  51                   push ecx
// 00681866  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0068186a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0068186e  56                   push esi
// 0068186f  50                   push eax
// 00681870  8b442428             mov eax, dword ptr [esp + 0x28]
// 00681874  8bf1                 mov esi, ecx
// 00681876  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0068187a  51                   push ecx
// 0068187b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0068187f  52                   push edx
// 00681880  50                   push eax
// 00681881  51                   push ecx
// 00681882  8d542444             lea edx, [esp + 0x44]
// 00681886  52                   push edx
// 00681887  e874feffff           call 0x681700
// 0068188c  8b08                 mov ecx, dword ptr [eax]
// 0068188e  83c410               add esp, 0x10
// 00681891  c70000000000         mov dword ptr [eax], 0
// 00681897  8bc4                 mov eax, esp
// 00681899  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006818a1  8964240c             mov dword ptr [esp + 0xc], esp
// 006818a5  8908                 mov dword ptr [eax], ecx
// 006818a7  8b442424             mov eax, dword ptr [esp + 0x24]
// 006818ab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006818af  50                   push eax
// 006818b0  51                   push ecx
// 006818b1  c644242001           mov byte ptr [esp + 0x20], 1
// 006818b6  e8e5a6f6ff           call 0x5ebfa0
// 006818bb  50                   push eax
// 006818bc  8bce                 mov ecx, esi
// 006818be  c644242400           mov byte ptr [esp + 0x24], 0
// 006818c3  e828c4dbff           call 0x43dcf0
// 006818c8  8b542430             mov edx, dword ptr [esp + 0x30]
// 006818cc  52                   push edx
// 006818cd  e860710900           call 0x718a32
// 006818d2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006818d6  83c404               add esp, 4
// 006818d9  c706085d8e00         mov dword ptr [esi], 0x8e5d08
// 006818df  8bc6                 mov eax, esi
// 006818e1  64890d00000000       mov dword ptr fs:[0], ecx
// 006818e8  5e                   pop esi
// 006818e9  83c410               add esp, 0x10
// 006818ec  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
