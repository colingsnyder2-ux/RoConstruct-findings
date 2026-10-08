// roc 2010-06 005f9db0  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f9db0
//
// 005f9db0  51                   push ecx
// 005f9db1  6a18                 push 0x18
// 005f9db3  c744240400000000     mov dword ptr [esp + 4], 0
// 005f9dbb  e8e0db1a00           call 0x7a79a0
// 005f9dc0  83c404               add esp, 4
// 005f9dc3  85c0                 test eax, eax
// 005f9dc5  7424                 je 0x5f9deb
// 005f9dc7  c700d0ffa200         mov dword ptr [eax], 0xa2ffd0
// 005f9dcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f9dd1  894808               mov dword ptr [eax + 8], ecx
// 005f9dd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f9dd8  89500c               mov dword ptr [eax + 0xc], edx
// 005f9ddb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f9ddf  894810               mov dword ptr [eax + 0x10], ecx
// 005f9de2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005f9de6  895014               mov dword ptr [eax + 0x14], edx
// 005f9de9  eb02                 jmp 0x5f9ded
// 005f9deb  33c0                 xor eax, eax
// 005f9ded  56                   push esi
// 005f9dee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f9df2  6a00                 push 0
// 005f9df4  8906                 mov dword ptr [esi], eax
// 005f9df6  e89fdb1a00           call 0x7a799a
// 005f9dfb  83c404               add esp, 4
// 005f9dfe  8bc6                 mov eax, esi
// 005f9e00  5e                   pop esi
// 005f9e01  59                   pop ecx
// 005f9e02  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
