// roc 2009-12 006f5030  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f5030
//
// 006f5030  51                   push ecx
// 006f5031  6a18                 push 0x18
// 006f5033  c744240400000000     mov dword ptr [esp + 4], 0
// 006f503b  e820e80f00           call 0x7f3860
// 006f5040  83c404               add esp, 4
// 006f5043  85c0                 test eax, eax
// 006f5045  7424                 je 0x6f506b
// 006f5047  c7002cc99d00         mov dword ptr [eax], 0x9dc92c
// 006f504d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f5051  894808               mov dword ptr [eax + 8], ecx
// 006f5054  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f5058  89500c               mov dword ptr [eax + 0xc], edx
// 006f505b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f505f  894810               mov dword ptr [eax + 0x10], ecx
// 006f5062  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f5066  895014               mov dword ptr [eax + 0x14], edx
// 006f5069  eb02                 jmp 0x6f506d
// 006f506b  33c0                 xor eax, eax
// 006f506d  56                   push esi
// 006f506e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f5072  6a00                 push 0
// 006f5074  8906                 mov dword ptr [esi], eax
// 006f5076  e8dfe70f00           call 0x7f385a
// 006f507b  83c404               add esp, 4
// 006f507e  8bc6                 mov eax, esi
// 006f5080  5e                   pop esi
// 006f5081  59                   pop ecx
// 006f5082  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
