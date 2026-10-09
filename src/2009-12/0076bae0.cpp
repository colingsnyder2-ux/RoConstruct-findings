// roc 2009-12 0076bae0  unit: RBX::P8PlayerMouse::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076bae0
//
// 0076bae0  51                   push ecx
// 0076bae1  6a18                 push 0x18
// 0076bae3  c744240400000000     mov dword ptr [esp + 4], 0
// 0076baeb  e8707d0800           call 0x7f3860
// 0076baf0  83c404               add esp, 4
// 0076baf3  85c0                 test eax, eax
// 0076baf5  7424                 je 0x76bb1b
// 0076baf7  c7006c7f9e00         mov dword ptr [eax], 0x9e7f6c
// 0076bafd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076bb01  894808               mov dword ptr [eax + 8], ecx
// 0076bb04  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076bb08  89500c               mov dword ptr [eax + 0xc], edx
// 0076bb0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076bb0f  894810               mov dword ptr [eax + 0x10], ecx
// 0076bb12  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076bb16  895014               mov dword ptr [eax + 0x14], edx
// 0076bb19  eb02                 jmp 0x76bb1d
// 0076bb1b  33c0                 xor eax, eax
// 0076bb1d  56                   push esi
// 0076bb1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076bb22  6a00                 push 0
// 0076bb24  8906                 mov dword ptr [esi], eax
// 0076bb26  e82f7d0800           call 0x7f385a
// 0076bb2b  83c404               add esp, 4
// 0076bb2e  8bc6                 mov eax, esi
// 0076bb30  5e                   pop esi
// 0076bb31  59                   pop ecx
// 0076bb32  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
