// roc 2012-06 007e5810  unit: RBX::Assembly  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e5810
//
// 007e5810  51                   push ecx
// 007e5811  6a18                 push 0x18
// 007e5813  c744240400000000     mov dword ptr [esp + 4], 0
// 007e581b  e8fac81900           call 0x98211a
// 007e5820  83c404               add esp, 4
// 007e5823  85c0                 test eax, eax
// 007e5825  7424                 je 0x7e584b
// 007e5827  c7001421bc00         mov dword ptr [eax], 0xbc2114
// 007e582d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e5831  894808               mov dword ptr [eax + 8], ecx
// 007e5834  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e5838  89500c               mov dword ptr [eax + 0xc], edx
// 007e583b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e583f  894810               mov dword ptr [eax + 0x10], ecx
// 007e5842  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e5846  895014               mov dword ptr [eax + 0x14], edx
// 007e5849  eb02                 jmp 0x7e584d
// 007e584b  33c0                 xor eax, eax
// 007e584d  56                   push esi
// 007e584e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e5852  6a00                 push 0
// 007e5854  8906                 mov dword ptr [esi], eax
// 007e5856  e8b9c81900           call 0x982114
// 007e585b  83c404               add esp, 4
// 007e585e  8bc6                 mov eax, esi
// 007e5860  5e                   pop esi
// 007e5861  59                   pop ecx
// 007e5862  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
