// roc 2009-12 006daa50  unit: RBX::P8PlayerCamera::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006daa50
//
// 006daa50  51                   push ecx
// 006daa51  6a18                 push 0x18
// 006daa53  c744240400000000     mov dword ptr [esp + 4], 0
// 006daa5b  e8008e1100           call 0x7f3860
// 006daa60  83c404               add esp, 4
// 006daa63  85c0                 test eax, eax
// 006daa65  7424                 je 0x6daa8b
// 006daa67  c7007c999d00         mov dword ptr [eax], 0x9d997c
// 006daa6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006daa71  894808               mov dword ptr [eax + 8], ecx
// 006daa74  8b542410             mov edx, dword ptr [esp + 0x10]
// 006daa78  89500c               mov dword ptr [eax + 0xc], edx
// 006daa7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006daa7f  894810               mov dword ptr [eax + 0x10], ecx
// 006daa82  8b542418             mov edx, dword ptr [esp + 0x18]
// 006daa86  895014               mov dword ptr [eax + 0x14], edx
// 006daa89  eb02                 jmp 0x6daa8d
// 006daa8b  33c0                 xor eax, eax
// 006daa8d  56                   push esi
// 006daa8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006daa92  6a00                 push 0
// 006daa94  8906                 mov dword ptr [esi], eax
// 006daa96  e8bf8d1100           call 0x7f385a
// 006daa9b  83c404               add esp, 4
// 006daa9e  8bc6                 mov eax, esi
// 006daaa0  5e                   pop esi
// 006daaa1  59                   pop ecx
// 006daaa2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
