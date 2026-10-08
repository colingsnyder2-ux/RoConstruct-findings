// roc 2007-08 0053d6a0  unit: RBX::VLocalScript::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d6a0
//
// 0053d6a0  51                   push ecx
// 0053d6a1  6a18                 push 0x18
// 0053d6a3  c744240400000000     mov dword ptr [esp + 4], 0
// 0053d6ab  e846280f00           call 0x62fef6
// 0053d6b0  83c404               add esp, 4
// 0053d6b3  85c0                 test eax, eax
// 0053d6b5  7424                 je 0x53d6db
// 0053d6b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053d6bb  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053d6bf  894808               mov dword ptr [eax + 8], ecx
// 0053d6c2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053d6c6  89500c               mov dword ptr [eax + 0xc], edx
// 0053d6c9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053d6cd  c700705e7a00         mov dword ptr [eax], 0x7a5e70
// 0053d6d3  894810               mov dword ptr [eax + 0x10], ecx
// 0053d6d6  895014               mov dword ptr [eax + 0x14], edx
// 0053d6d9  eb02                 jmp 0x53d6dd
// 0053d6db  33c0                 xor eax, eax
// 0053d6dd  56                   push esi
// 0053d6de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053d6e2  6a00                 push 0
// 0053d6e4  c744240800000000     mov dword ptr [esp + 8], 0
// 0053d6ec  8906                 mov dword ptr [esi], eax
// 0053d6ee  e86f250f00           call 0x62fc62
// 0053d6f3  83c404               add esp, 4
// 0053d6f6  8bc6                 mov eax, esi
// 0053d6f8  5e                   pop esi
// 0053d6f9  59                   pop ecx
// 0053d6fa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
