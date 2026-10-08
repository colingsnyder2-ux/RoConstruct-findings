// roc 2009-06 004d5510  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d5510
//
// 004d5510  6aff                 push -1
// 004d5512  6800928500           push 0x859200
// 004d5517  64a100000000         mov eax, dword ptr fs:[0]
// 004d551d  50                   push eax
// 004d551e  64892500000000       mov dword ptr fs:[0], esp
// 004d5525  51                   push ecx
// 004d5526  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004d552a  8b542424             mov edx, dword ptr [esp + 0x24]
// 004d552e  56                   push esi
// 004d552f  50                   push eax
// 004d5530  8b442428             mov eax, dword ptr [esp + 0x28]
// 004d5534  8bf1                 mov esi, ecx
// 004d5536  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004d553a  51                   push ecx
// 004d553b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d553f  52                   push edx
// 004d5540  50                   push eax
// 004d5541  51                   push ecx
// 004d5542  8d542444             lea edx, [esp + 0x44]
// 004d5546  52                   push edx
// 004d5547  e8d4f9ffff           call 0x4d4f20
// 004d554c  8b08                 mov ecx, dword ptr [eax]
// 004d554e  83c410               add esp, 0x10
// 004d5551  c70000000000         mov dword ptr [eax], 0
// 004d5557  8bc4                 mov eax, esp
// 004d5559  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004d5561  8964240c             mov dword ptr [esp + 0xc], esp
// 004d5565  8908                 mov dword ptr [eax], ecx
// 004d5567  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d556b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d556f  50                   push eax
// 004d5570  51                   push ecx
// 004d5571  c644242001           mov byte ptr [esp + 0x20], 1
// 004d5576  e875a7ffff           call 0x4cfcf0
// 004d557b  50                   push eax
// 004d557c  8bce                 mov ecx, esi
// 004d557e  c644242400           mov byte ptr [esp + 0x24], 0
// 004d5583  e888faffff           call 0x4d5010
// 004d5588  8b542430             mov edx, dword ptr [esp + 0x30]
// 004d558c  52                   push edx
// 004d558d  e8a0342400           call 0x718a32
// 004d5592  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d5596  83c404               add esp, 4
// 004d5599  c706545b8c00         mov dword ptr [esi], 0x8c5b54
// 004d559f  8bc6                 mov eax, esi
// 004d55a1  64890d00000000       mov dword ptr fs:[0], ecx
// 004d55a8  5e                   pop esi
// 004d55a9  83c410               add esp, 0x10
// 004d55ac  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
