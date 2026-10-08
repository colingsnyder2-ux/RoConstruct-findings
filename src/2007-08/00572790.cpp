// roc 2007-08 00572790  unit: RBX::VDecal::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572790
//
// 00572790  51                   push ecx
// 00572791  6a18                 push 0x18
// 00572793  c744240400000000     mov dword ptr [esp + 4], 0
// 0057279b  e856d70b00           call 0x62fef6
// 005727a0  83c404               add esp, 4
// 005727a3  85c0                 test eax, eax
// 005727a5  7424                 je 0x5727cb
// 005727a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005727ab  8b542410             mov edx, dword ptr [esp + 0x10]
// 005727af  894808               mov dword ptr [eax + 8], ecx
// 005727b2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005727b6  89500c               mov dword ptr [eax + 0xc], edx
// 005727b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005727bd  c70064a27a00         mov dword ptr [eax], 0x7aa264
// 005727c3  894810               mov dword ptr [eax + 0x10], ecx
// 005727c6  895014               mov dword ptr [eax + 0x14], edx
// 005727c9  eb02                 jmp 0x5727cd
// 005727cb  33c0                 xor eax, eax
// 005727cd  56                   push esi
// 005727ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005727d2  6a00                 push 0
// 005727d4  c744240800000000     mov dword ptr [esp + 8], 0
// 005727dc  8906                 mov dword ptr [esi], eax
// 005727de  e87fd40b00           call 0x62fc62
// 005727e3  83c404               add esp, 4
// 005727e6  8bc6                 mov eax, esi
// 005727e8  5e                   pop esi
// 005727e9  59                   pop ecx
// 005727ea  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
