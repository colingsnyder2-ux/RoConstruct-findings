// roc 2009-12 0063d430  unit: RBX::Network::P8Player::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063d430
//
// 0063d430  51                   push ecx
// 0063d431  6a18                 push 0x18
// 0063d433  c744240400000000     mov dword ptr [esp + 4], 0
// 0063d43b  e820641b00           call 0x7f3860
// 0063d440  83c404               add esp, 4
// 0063d443  85c0                 test eax, eax
// 0063d445  7424                 je 0x63d46b
// 0063d447  c70054c49c00         mov dword ptr [eax], 0x9cc454
// 0063d44d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063d451  894808               mov dword ptr [eax + 8], ecx
// 0063d454  8b542410             mov edx, dword ptr [esp + 0x10]
// 0063d458  89500c               mov dword ptr [eax + 0xc], edx
// 0063d45b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063d45f  894810               mov dword ptr [eax + 0x10], ecx
// 0063d462  8b542418             mov edx, dword ptr [esp + 0x18]
// 0063d466  895014               mov dword ptr [eax + 0x14], edx
// 0063d469  eb02                 jmp 0x63d46d
// 0063d46b  33c0                 xor eax, eax
// 0063d46d  56                   push esi
// 0063d46e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063d472  6a00                 push 0
// 0063d474  8906                 mov dword ptr [esi], eax
// 0063d476  e8df631b00           call 0x7f385a
// 0063d47b  83c404               add esp, 4
// 0063d47e  8bc6                 mov eax, esi
// 0063d480  5e                   pop esi
// 0063d481  59                   pop ecx
// 0063d482  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
