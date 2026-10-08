// roc 2007-08 00542fc0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00542fc0
//
// 00542fc0  51                   push ecx
// 00542fc1  6a18                 push 0x18
// 00542fc3  c744240400000000     mov dword ptr [esp + 4], 0
// 00542fcb  e826cf0e00           call 0x62fef6
// 00542fd0  83c404               add esp, 4
// 00542fd3  85c0                 test eax, eax
// 00542fd5  7424                 je 0x542ffb
// 00542fd7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00542fdb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00542fdf  894808               mov dword ptr [eax + 8], ecx
// 00542fe2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00542fe6  89500c               mov dword ptr [eax + 0xc], edx
// 00542fe9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00542fed  c7002c687a00         mov dword ptr [eax], 0x7a682c
// 00542ff3  894810               mov dword ptr [eax + 0x10], ecx
// 00542ff6  895014               mov dword ptr [eax + 0x14], edx
// 00542ff9  eb02                 jmp 0x542ffd
// 00542ffb  33c0                 xor eax, eax
// 00542ffd  56                   push esi
// 00542ffe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00543002  6a00                 push 0
// 00543004  c744240800000000     mov dword ptr [esp + 8], 0
// 0054300c  8906                 mov dword ptr [esi], eax
// 0054300e  e84fcc0e00           call 0x62fc62
// 00543013  83c404               add esp, 4
// 00543016  8bc6                 mov eax, esi
// 00543018  5e                   pop esi
// 00543019  59                   pop ecx
// 0054301a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
