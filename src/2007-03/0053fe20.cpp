// roc 2007-03 0053fe20  unit: seg_00530000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053fe20
//
// 0053fe20  51                   push ecx
// 0053fe21  6a18                 push 0x18
// 0053fe23  c744240400000000     mov dword ptr [esp + 4], 0
// 0053fe2b  e8d8e20d00           call 0x61e108
// 0053fe30  83c404               add esp, 4
// 0053fe33  85c0                 test eax, eax
// 0053fe35  7424                 je 0x53fe5b
// 0053fe37  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053fe3b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053fe3f  894808               mov dword ptr [eax + 8], ecx
// 0053fe42  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053fe46  89500c               mov dword ptr [eax + 0xc], edx
// 0053fe49  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053fe4d  c700c0657a00         mov dword ptr [eax], 0x7a65c0
// 0053fe53  894810               mov dword ptr [eax + 0x10], ecx
// 0053fe56  895014               mov dword ptr [eax + 0x14], edx
// 0053fe59  eb02                 jmp 0x53fe5d
// 0053fe5b  33c0                 xor eax, eax
// 0053fe5d  56                   push esi
// 0053fe5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053fe62  6a00                 push 0
// 0053fe64  c744240800000000     mov dword ptr [esp + 8], 0
// 0053fe6c  8906                 mov dword ptr [esi], eax
// 0053fe6e  e87de20d00           call 0x61e0f0
// 0053fe73  83c404               add esp, 4
// 0053fe76  8bc6                 mov eax, esi
// 0053fe78  5e                   pop esi
// 0053fe79  59                   pop ecx
// 0053fe7a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
