// roc 2009-06 0066ec30  unit: RBX::VMeshId::?$TypedPropertyDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066ec30
//
// 0066ec30  6aff                 push -1
// 0066ec32  6800928500           push 0x859200
// 0066ec37  64a100000000         mov eax, dword ptr fs:[0]
// 0066ec3d  50                   push eax
// 0066ec3e  64892500000000       mov dword ptr fs:[0], esp
// 0066ec45  51                   push ecx
// 0066ec46  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0066ec4a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0066ec4e  56                   push esi
// 0066ec4f  50                   push eax
// 0066ec50  8b442428             mov eax, dword ptr [esp + 0x28]
// 0066ec54  8bf1                 mov esi, ecx
// 0066ec56  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0066ec5a  51                   push ecx
// 0066ec5b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0066ec5f  52                   push edx
// 0066ec60  50                   push eax
// 0066ec61  51                   push ecx
// 0066ec62  8d542444             lea edx, [esp + 0x44]
// 0066ec66  52                   push edx
// 0066ec67  e854fcffff           call 0x66e8c0
// 0066ec6c  8b08                 mov ecx, dword ptr [eax]
// 0066ec6e  83c410               add esp, 0x10
// 0066ec71  c70000000000         mov dword ptr [eax], 0
// 0066ec77  8bc4                 mov eax, esp
// 0066ec79  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0066ec81  8964240c             mov dword ptr [esp + 0xc], esp
// 0066ec85  8908                 mov dword ptr [eax], ecx
// 0066ec87  8b442424             mov eax, dword ptr [esp + 0x24]
// 0066ec8b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066ec8f  50                   push eax
// 0066ec90  51                   push ecx
// 0066ec91  c644242001           mov byte ptr [esp + 0x20], 1
// 0066ec96  e865c9f7ff           call 0x5eb600
// 0066ec9b  50                   push eax
// 0066ec9c  8bce                 mov ecx, esi
// 0066ec9e  c644242400           mov byte ptr [esp + 0x24], 0
// 0066eca3  e8285ffbff           call 0x624bd0
// 0066eca8  8b542430             mov edx, dword ptr [esp + 0x30]
// 0066ecac  52                   push edx
// 0066ecad  e8809d0a00           call 0x718a32
// 0066ecb2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066ecb6  83c404               add esp, 4
// 0066ecb9  c70640348e00         mov dword ptr [esi], 0x8e3440
// 0066ecbf  8bc6                 mov eax, esi
// 0066ecc1  64890d00000000       mov dword ptr fs:[0], ecx
// 0066ecc8  5e                   pop esi
// 0066ecc9  83c410               add esp, 0x10
// 0066eccc  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
