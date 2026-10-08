// roc 2010-06 0058e9d0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e9d0
//
// 0058e9d0  51                   push ecx
// 0058e9d1  6a18                 push 0x18
// 0058e9d3  c744240400000000     mov dword ptr [esp + 4], 0
// 0058e9db  e8c08f2100           call 0x7a79a0
// 0058e9e0  83c404               add esp, 4
// 0058e9e3  85c0                 test eax, eax
// 0058e9e5  7424                 je 0x58ea0b
// 0058e9e7  c700248ca200         mov dword ptr [eax], 0xa28c24
// 0058e9ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058e9f1  894808               mov dword ptr [eax + 8], ecx
// 0058e9f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058e9f8  89500c               mov dword ptr [eax + 0xc], edx
// 0058e9fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058e9ff  894810               mov dword ptr [eax + 0x10], ecx
// 0058ea02  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058ea06  895014               mov dword ptr [eax + 0x14], edx
// 0058ea09  eb02                 jmp 0x58ea0d
// 0058ea0b  33c0                 xor eax, eax
// 0058ea0d  56                   push esi
// 0058ea0e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058ea12  6a00                 push 0
// 0058ea14  8906                 mov dword ptr [esi], eax
// 0058ea16  e87f8f2100           call 0x7a799a
// 0058ea1b  83c404               add esp, 4
// 0058ea1e  8bc6                 mov eax, esi
// 0058ea20  5e                   pop esi
// 0058ea21  59                   pop ecx
// 0058ea22  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
