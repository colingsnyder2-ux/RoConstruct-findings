// roc 2007-03 005509c0  unit: seg_00550000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005509c0
//
// 005509c0  64a100000000         mov eax, dword ptr fs:[0]
// 005509c6  6aff                 push -1
// 005509c8  68a08b7500           push 0x758ba0
// 005509cd  50                   push eax
// 005509ce  64892500000000       mov dword ptr fs:[0], esp
// 005509d5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005509d9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005509dd  56                   push esi
// 005509de  50                   push eax
// 005509df  8b442424             mov eax, dword ptr [esp + 0x24]
// 005509e3  8bf1                 mov esi, ecx
// 005509e5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005509e9  51                   push ecx
// 005509ea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005509ee  52                   push edx
// 005509ef  50                   push eax
// 005509f0  51                   push ecx
// 005509f1  8d542440             lea edx, [esp + 0x40]
// 005509f5  52                   push edx
// 005509f6  e875fdffff           call 0x550770
// 005509fb  8b10                 mov edx, dword ptr [eax]
// 005509fd  83c410               add esp, 0x10
// 00550a00  8bcc                 mov ecx, esp
// 00550a02  c70000000000         mov dword ptr [eax], 0
// 00550a08  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00550a10  8964242c             mov dword ptr [esp + 0x2c], esp
// 00550a14  8911                 mov dword ptr [ecx], edx
// 00550a16  8b542420             mov edx, dword ptr [esp + 0x20]
// 00550a1a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00550a1e  52                   push edx
// 00550a1f  50                   push eax
// 00550a20  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00550a25  e8e6fdffff           call 0x550810
// 00550a2a  50                   push eax
// 00550a2b  8bce                 mov ecx, esi
// 00550a2d  c644242000           mov byte ptr [esp + 0x20], 0
// 00550a32  e8591eefff           call 0x442890
// 00550a37  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00550a3b  51                   push ecx
// 00550a3c  e8afd60c00           call 0x61e0f0
// 00550a41  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00550a45  83c404               add esp, 4
// 00550a48  c706b0807a00         mov dword ptr [esi], 0x7a80b0
// 00550a4e  8bc6                 mov eax, esi
// 00550a50  64890d00000000       mov dword ptr fs:[0], ecx
// 00550a57  5e                   pop esi
// 00550a58  83c40c               add esp, 0xc
// 00550a5b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
