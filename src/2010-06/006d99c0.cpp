// roc 2010-06 006d99c0  unit: RBX::Sparkles  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d99c0
//
// 006d99c0  51                   push ecx
// 006d99c1  6a18                 push 0x18
// 006d99c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006d99cb  e8d0df0c00           call 0x7a79a0
// 006d99d0  83c404               add esp, 4
// 006d99d3  85c0                 test eax, eax
// 006d99d5  7424                 je 0x6d99fb
// 006d99d7  c7001c67a400         mov dword ptr [eax], 0xa4671c
// 006d99dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d99e1  894808               mov dword ptr [eax + 8], ecx
// 006d99e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d99e8  89500c               mov dword ptr [eax + 0xc], edx
// 006d99eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d99ef  894810               mov dword ptr [eax + 0x10], ecx
// 006d99f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d99f6  895014               mov dword ptr [eax + 0x14], edx
// 006d99f9  eb02                 jmp 0x6d99fd
// 006d99fb  33c0                 xor eax, eax
// 006d99fd  56                   push esi
// 006d99fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d9a02  6a00                 push 0
// 006d9a04  8906                 mov dword ptr [esi], eax
// 006d9a06  e88fdf0c00           call 0x7a799a
// 006d9a0b  83c404               add esp, 4
// 006d9a0e  8bc6                 mov eax, esi
// 006d9a10  5e                   pop esi
// 006d9a11  59                   pop ecx
// 006d9a12  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
