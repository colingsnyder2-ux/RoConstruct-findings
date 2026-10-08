// roc 2009-06 0064a970  unit: RBX::VTexture::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064a970
//
// 0064a970  6aff                 push -1
// 0064a972  6800928500           push 0x859200
// 0064a977  64a100000000         mov eax, dword ptr fs:[0]
// 0064a97d  50                   push eax
// 0064a97e  64892500000000       mov dword ptr fs:[0], esp
// 0064a985  51                   push ecx
// 0064a986  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0064a98a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0064a98e  56                   push esi
// 0064a98f  50                   push eax
// 0064a990  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064a994  8bf1                 mov esi, ecx
// 0064a996  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064a99a  51                   push ecx
// 0064a99b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064a99f  52                   push edx
// 0064a9a0  50                   push eax
// 0064a9a1  51                   push ecx
// 0064a9a2  8d542444             lea edx, [esp + 0x44]
// 0064a9a6  52                   push edx
// 0064a9a7  e844faffff           call 0x64a3f0
// 0064a9ac  8b08                 mov ecx, dword ptr [eax]
// 0064a9ae  83c410               add esp, 0x10
// 0064a9b1  c70000000000         mov dword ptr [eax], 0
// 0064a9b7  8bc4                 mov eax, esp
// 0064a9b9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0064a9c1  8964240c             mov dword ptr [esp + 0xc], esp
// 0064a9c5  8908                 mov dword ptr [eax], ecx
// 0064a9c7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064a9cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0064a9cf  50                   push eax
// 0064a9d0  51                   push ecx
// 0064a9d1  c644242001           mov byte ptr [esp + 0x20], 1
// 0064a9d6  e84504faff           call 0x5eae20
// 0064a9db  50                   push eax
// 0064a9dc  8bce                 mov ecx, esi
// 0064a9de  c644242400           mov byte ptr [esp + 0x24], 0
// 0064a9e3  e8e8a1fdff           call 0x624bd0
// 0064a9e8  8b542430             mov edx, dword ptr [esp + 0x30]
// 0064a9ec  52                   push edx
// 0064a9ed  e840e00c00           call 0x718a32
// 0064a9f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064a9f6  83c404               add esp, 4
// 0064a9f9  c706dcee8d00         mov dword ptr [esi], 0x8deedc
// 0064a9ff  8bc6                 mov eax, esi
// 0064aa01  64890d00000000       mov dword ptr fs:[0], ecx
// 0064aa08  5e                   pop esi
// 0064aa09  83c410               add esp, 0x10
// 0064aa0c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
