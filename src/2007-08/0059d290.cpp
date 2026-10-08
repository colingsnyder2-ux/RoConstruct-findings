// roc 2007-08 0059d290  unit: ChatEnter  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d290
//
// 0059d290  51                   push ecx
// 0059d291  6a18                 push 0x18
// 0059d293  c744240400000000     mov dword ptr [esp + 4], 0
// 0059d29b  e8562c0900           call 0x62fef6
// 0059d2a0  83c404               add esp, 4
// 0059d2a3  85c0                 test eax, eax
// 0059d2a5  7424                 je 0x59d2cb
// 0059d2a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059d2ab  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059d2af  894808               mov dword ptr [eax + 8], ecx
// 0059d2b2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059d2b6  89500c               mov dword ptr [eax + 0xc], edx
// 0059d2b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059d2bd  c700c01c7b00         mov dword ptr [eax], 0x7b1cc0
// 0059d2c3  894810               mov dword ptr [eax + 0x10], ecx
// 0059d2c6  895014               mov dword ptr [eax + 0x14], edx
// 0059d2c9  eb02                 jmp 0x59d2cd
// 0059d2cb  33c0                 xor eax, eax
// 0059d2cd  56                   push esi
// 0059d2ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059d2d2  6a00                 push 0
// 0059d2d4  c744240800000000     mov dword ptr [esp + 8], 0
// 0059d2dc  8906                 mov dword ptr [esi], eax
// 0059d2de  e87f290900           call 0x62fc62
// 0059d2e3  83c404               add esp, 4
// 0059d2e6  8bc6                 mov eax, esi
// 0059d2e8  5e                   pop esi
// 0059d2e9  59                   pop ecx
// 0059d2ea  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
