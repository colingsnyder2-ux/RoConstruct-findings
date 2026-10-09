// roc 2009-12 006f4fd0  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f4fd0
//
// 006f4fd0  51                   push ecx
// 006f4fd1  6a18                 push 0x18
// 006f4fd3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f4fdb  e880e80f00           call 0x7f3860
// 006f4fe0  83c404               add esp, 4
// 006f4fe3  85c0                 test eax, eax
// 006f4fe5  7424                 je 0x6f500b
// 006f4fe7  c70014c99d00         mov dword ptr [eax], 0x9dc914
// 006f4fed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f4ff1  894808               mov dword ptr [eax + 8], ecx
// 006f4ff4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f4ff8  89500c               mov dword ptr [eax + 0xc], edx
// 006f4ffb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f4fff  894810               mov dword ptr [eax + 0x10], ecx
// 006f5002  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f5006  895014               mov dword ptr [eax + 0x14], edx
// 006f5009  eb02                 jmp 0x6f500d
// 006f500b  33c0                 xor eax, eax
// 006f500d  56                   push esi
// 006f500e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f5012  6a00                 push 0
// 006f5014  8906                 mov dword ptr [esi], eax
// 006f5016  e83fe80f00           call 0x7f385a
// 006f501b  83c404               add esp, 4
// 006f501e  8bc6                 mov eax, esi
// 006f5020  5e                   pop esi
// 006f5021  59                   pop ecx
// 006f5022  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
