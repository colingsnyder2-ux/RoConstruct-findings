// roc 2010-06 00594e00  unit: RBX::Object  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00594e00
//
// 00594e00  51                   push ecx
// 00594e01  6a18                 push 0x18
// 00594e03  c744240400000000     mov dword ptr [esp + 4], 0
// 00594e0b  e8902b2100           call 0x7a79a0
// 00594e10  83c404               add esp, 4
// 00594e13  85c0                 test eax, eax
// 00594e15  7424                 je 0x594e3b
// 00594e17  c700509ba200         mov dword ptr [eax], 0xa29b50
// 00594e1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00594e21  894808               mov dword ptr [eax + 8], ecx
// 00594e24  8b542410             mov edx, dword ptr [esp + 0x10]
// 00594e28  89500c               mov dword ptr [eax + 0xc], edx
// 00594e2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00594e2f  894810               mov dword ptr [eax + 0x10], ecx
// 00594e32  8b542418             mov edx, dword ptr [esp + 0x18]
// 00594e36  895014               mov dword ptr [eax + 0x14], edx
// 00594e39  eb02                 jmp 0x594e3d
// 00594e3b  33c0                 xor eax, eax
// 00594e3d  56                   push esi
// 00594e3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00594e42  6a00                 push 0
// 00594e44  8906                 mov dword ptr [esi], eax
// 00594e46  e84f2b2100           call 0x7a799a
// 00594e4b  83c404               add esp, 4
// 00594e4e  8bc6                 mov eax, esi
// 00594e50  5e                   pop esi
// 00594e51  59                   pop ecx
// 00594e52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
