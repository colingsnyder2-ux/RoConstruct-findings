// roc 2009-12 0074b980  unit: RBX::GroundStage  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0074b980
//
// 0074b980  51                   push ecx
// 0074b981  6a18                 push 0x18
// 0074b983  c744240400000000     mov dword ptr [esp + 4], 0
// 0074b98b  e8d07e0a00           call 0x7f3860
// 0074b990  83c404               add esp, 4
// 0074b993  85c0                 test eax, eax
// 0074b995  7424                 je 0x74b9bb
// 0074b997  c700343f9e00         mov dword ptr [eax], 0x9e3f34
// 0074b99d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0074b9a1  894808               mov dword ptr [eax + 8], ecx
// 0074b9a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0074b9a8  89500c               mov dword ptr [eax + 0xc], edx
// 0074b9ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074b9af  894810               mov dword ptr [eax + 0x10], ecx
// 0074b9b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0074b9b6  895014               mov dword ptr [eax + 0x14], edx
// 0074b9b9  eb02                 jmp 0x74b9bd
// 0074b9bb  33c0                 xor eax, eax
// 0074b9bd  56                   push esi
// 0074b9be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0074b9c2  6a00                 push 0
// 0074b9c4  8906                 mov dword ptr [esi], eax
// 0074b9c6  e88f7e0a00           call 0x7f385a
// 0074b9cb  83c404               add esp, 4
// 0074b9ce  8bc6                 mov eax, esi
// 0074b9d0  5e                   pop esi
// 0074b9d1  59                   pop ecx
// 0074b9d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
