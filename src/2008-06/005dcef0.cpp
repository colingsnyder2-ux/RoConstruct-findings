// roc 2008-06 005dcef0  unit: RBX::Hint  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dcef0
//
// 005dcef0  51                   push ecx
// 005dcef1  6a18                 push 0x18
// 005dcef3  c744240400000000     mov dword ptr [esp + 4], 0
// 005dcefb  e8203a0c00           call 0x6a0920
// 005dcf00  83c404               add esp, 4
// 005dcf03  85c0                 test eax, eax
// 005dcf05  742c                 je 0x5dcf33
// 005dcf07  c7002cd98300         mov dword ptr [eax], 0x83d92c
// 005dcf0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dcf11  894808               mov dword ptr [eax + 8], ecx
// 005dcf14  8b542410             mov edx, dword ptr [esp + 0x10]
// 005dcf18  89500c               mov dword ptr [eax + 0xc], edx
// 005dcf1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005dcf1f  894810               mov dword ptr [eax + 0x10], ecx
// 005dcf22  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dcf26  8b542418             mov edx, dword ptr [esp + 0x18]
// 005dcf2a  895014               mov dword ptr [eax + 0x14], edx
// 005dcf2d  8901                 mov dword ptr [ecx], eax
// 005dcf2f  8bc1                 mov eax, ecx
// 005dcf31  59                   pop ecx
// 005dcf32  c3                   ret 
// 005dcf33  8b442408             mov eax, dword ptr [esp + 8]
// 005dcf37  33c9                 xor ecx, ecx
// 005dcf39  8908                 mov dword ptr [eax], ecx
// 005dcf3b  59                   pop ecx
// 005dcf3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
