// roc 2010-06 006e5cf0  unit: RBX::VLuaDragger::?$BoundFuncDesc  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e5cf0
//
// 006e5cf0  51                   push ecx
// 006e5cf1  6a18                 push 0x18
// 006e5cf3  c744240400000000     mov dword ptr [esp + 4], 0
// 006e5cfb  e8a01c0c00           call 0x7a79a0
// 006e5d00  83c404               add esp, 4
// 006e5d03  85c0                 test eax, eax
// 006e5d05  7424                 je 0x6e5d2b
// 006e5d07  c700f495a400         mov dword ptr [eax], 0xa495f4
// 006e5d0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e5d11  894808               mov dword ptr [eax + 8], ecx
// 006e5d14  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e5d18  89500c               mov dword ptr [eax + 0xc], edx
// 006e5d1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e5d1f  894810               mov dword ptr [eax + 0x10], ecx
// 006e5d22  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e5d26  895014               mov dword ptr [eax + 0x14], edx
// 006e5d29  eb02                 jmp 0x6e5d2d
// 006e5d2b  33c0                 xor eax, eax
// 006e5d2d  56                   push esi
// 006e5d2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e5d32  6a00                 push 0
// 006e5d34  8906                 mov dword ptr [esi], eax
// 006e5d36  e85f1c0c00           call 0x7a799a
// 006e5d3b  83c404               add esp, 4
// 006e5d3e  8bc6                 mov eax, esi
// 006e5d40  5e                   pop esi
// 006e5d41  59                   pop ecx
// 006e5d42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
