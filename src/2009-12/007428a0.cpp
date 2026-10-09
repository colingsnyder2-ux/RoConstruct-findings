// roc 2009-12 007428a0  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007428a0
//
// 007428a0  51                   push ecx
// 007428a1  6a18                 push 0x18
// 007428a3  c744240400000000     mov dword ptr [esp + 4], 0
// 007428ab  e8b00f0b00           call 0x7f3860
// 007428b0  83c404               add esp, 4
// 007428b3  85c0                 test eax, eax
// 007428b5  7424                 je 0x7428db
// 007428b7  c700442b9e00         mov dword ptr [eax], 0x9e2b44
// 007428bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007428c1  894808               mov dword ptr [eax + 8], ecx
// 007428c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007428c8  89500c               mov dword ptr [eax + 0xc], edx
// 007428cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007428cf  894810               mov dword ptr [eax + 0x10], ecx
// 007428d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007428d6  895014               mov dword ptr [eax + 0x14], edx
// 007428d9  eb02                 jmp 0x7428dd
// 007428db  33c0                 xor eax, eax
// 007428dd  56                   push esi
// 007428de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007428e2  6a00                 push 0
// 007428e4  8906                 mov dword ptr [esi], eax
// 007428e6  e86f0f0b00           call 0x7f385a
// 007428eb  83c404               add esp, 4
// 007428ee  8bc6                 mov eax, esi
// 007428f0  5e                   pop esi
// 007428f1  59                   pop ecx
// 007428f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
