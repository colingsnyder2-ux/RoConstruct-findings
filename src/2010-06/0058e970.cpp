// roc 2010-06 0058e970  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e970
//
// 0058e970  51                   push ecx
// 0058e971  6a18                 push 0x18
// 0058e973  c744240400000000     mov dword ptr [esp + 4], 0
// 0058e97b  e820902100           call 0x7a79a0
// 0058e980  83c404               add esp, 4
// 0058e983  85c0                 test eax, eax
// 0058e985  7424                 je 0x58e9ab
// 0058e987  c7000c8ca200         mov dword ptr [eax], 0xa28c0c
// 0058e98d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058e991  894808               mov dword ptr [eax + 8], ecx
// 0058e994  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058e998  89500c               mov dword ptr [eax + 0xc], edx
// 0058e99b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058e99f  894810               mov dword ptr [eax + 0x10], ecx
// 0058e9a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058e9a6  895014               mov dword ptr [eax + 0x14], edx
// 0058e9a9  eb02                 jmp 0x58e9ad
// 0058e9ab  33c0                 xor eax, eax
// 0058e9ad  56                   push esi
// 0058e9ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058e9b2  6a00                 push 0
// 0058e9b4  8906                 mov dword ptr [esi], eax
// 0058e9b6  e8df8f2100           call 0x7a799a
// 0058e9bb  83c404               add esp, 4
// 0058e9be  8bc6                 mov eax, esi
// 0058e9c0  5e                   pop esi
// 0058e9c1  59                   pop ecx
// 0058e9c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
