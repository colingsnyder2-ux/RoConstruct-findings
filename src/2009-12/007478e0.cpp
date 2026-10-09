// roc 2009-12 007478e0  unit: RBX::Handles  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007478e0
//
// 007478e0  51                   push ecx
// 007478e1  6a18                 push 0x18
// 007478e3  c744240400000000     mov dword ptr [esp + 4], 0
// 007478eb  e870bf0a00           call 0x7f3860
// 007478f0  83c404               add esp, 4
// 007478f3  85c0                 test eax, eax
// 007478f5  7424                 je 0x74791b
// 007478f7  c700903b9e00         mov dword ptr [eax], 0x9e3b90
// 007478fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00747901  894808               mov dword ptr [eax + 8], ecx
// 00747904  8b542410             mov edx, dword ptr [esp + 0x10]
// 00747908  89500c               mov dword ptr [eax + 0xc], edx
// 0074790b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074790f  894810               mov dword ptr [eax + 0x10], ecx
// 00747912  8b542418             mov edx, dword ptr [esp + 0x18]
// 00747916  895014               mov dword ptr [eax + 0x14], edx
// 00747919  eb02                 jmp 0x74791d
// 0074791b  33c0                 xor eax, eax
// 0074791d  56                   push esi
// 0074791e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00747922  6a00                 push 0
// 00747924  8906                 mov dword ptr [esi], eax
// 00747926  e82fbf0a00           call 0x7f385a
// 0074792b  83c404               add esp, 4
// 0074792e  8bc6                 mov eax, esi
// 00747930  5e                   pop esi
// 00747931  59                   pop ecx
// 00747932  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
