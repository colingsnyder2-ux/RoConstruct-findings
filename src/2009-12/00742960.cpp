// roc 2009-12 00742960  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00742960
//
// 00742960  51                   push ecx
// 00742961  6a18                 push 0x18
// 00742963  c744240400000000     mov dword ptr [esp + 4], 0
// 0074296b  e8f00e0b00           call 0x7f3860
// 00742970  83c404               add esp, 4
// 00742973  85c0                 test eax, eax
// 00742975  7424                 je 0x74299b
// 00742977  c700742b9e00         mov dword ptr [eax], 0x9e2b74
// 0074297d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00742981  894808               mov dword ptr [eax + 8], ecx
// 00742984  8b542410             mov edx, dword ptr [esp + 0x10]
// 00742988  89500c               mov dword ptr [eax + 0xc], edx
// 0074298b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074298f  894810               mov dword ptr [eax + 0x10], ecx
// 00742992  8b542418             mov edx, dword ptr [esp + 0x18]
// 00742996  895014               mov dword ptr [eax + 0x14], edx
// 00742999  eb02                 jmp 0x74299d
// 0074299b  33c0                 xor eax, eax
// 0074299d  56                   push esi
// 0074299e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007429a2  6a00                 push 0
// 007429a4  8906                 mov dword ptr [esi], eax
// 007429a6  e8af0e0b00           call 0x7f385a
// 007429ab  83c404               add esp, 4
// 007429ae  8bc6                 mov eax, esi
// 007429b0  5e                   pop esi
// 007429b1  59                   pop ecx
// 007429b2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
