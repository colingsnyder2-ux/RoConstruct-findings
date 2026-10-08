// roc 2007-08 00572fa0  unit: RBX::VTexture::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572fa0
//
// 00572fa0  64a100000000         mov eax, dword ptr fs:[0]
// 00572fa6  6aff                 push -1
// 00572fa8  6890117500           push 0x751190
// 00572fad  50                   push eax
// 00572fae  64892500000000       mov dword ptr fs:[0], esp
// 00572fb5  8b442428             mov eax, dword ptr [esp + 0x28]
// 00572fb9  8b542420             mov edx, dword ptr [esp + 0x20]
// 00572fbd  56                   push esi
// 00572fbe  50                   push eax
// 00572fbf  8b442424             mov eax, dword ptr [esp + 0x24]
// 00572fc3  8bf1                 mov esi, ecx
// 00572fc5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00572fc9  51                   push ecx
// 00572fca  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00572fce  52                   push edx
// 00572fcf  50                   push eax
// 00572fd0  51                   push ecx
// 00572fd1  8d542440             lea edx, [esp + 0x40]
// 00572fd5  52                   push edx
// 00572fd6  e875f8ffff           call 0x572850
// 00572fdb  8b10                 mov edx, dword ptr [eax]
// 00572fdd  83c410               add esp, 0x10
// 00572fe0  8bcc                 mov ecx, esp
// 00572fe2  c70000000000         mov dword ptr [eax], 0
// 00572fe8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00572ff0  8964242c             mov dword ptr [esp + 0x2c], esp
// 00572ff4  8911                 mov dword ptr [ecx], edx
// 00572ff6  8b542420             mov edx, dword ptr [esp + 0x20]
// 00572ffa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00572ffe  52                   push edx
// 00572fff  50                   push eax
// 00573000  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00573005  e8e6fdffff           call 0x572df0
// 0057300a  50                   push eax
// 0057300b  8bce                 mov ecx, esi
// 0057300d  c644242000           mov byte ptr [esp + 0x20], 0
// 00573012  e8c922edff           call 0x4452e0
// 00573017  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057301b  51                   push ecx
// 0057301c  e841cc0b00           call 0x62fc62
// 00573021  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00573025  83c404               add esp, 4
// 00573028  c706c4a37a00         mov dword ptr [esi], 0x7aa3c4
// 0057302e  8bc6                 mov eax, esi
// 00573030  64890d00000000       mov dword ptr fs:[0], ecx
// 00573037  5e                   pop esi
// 00573038  83c40c               add esp, 0xc
// 0057303b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
