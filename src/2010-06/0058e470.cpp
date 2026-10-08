// roc 2010-06 0058e470  unit: seg_00580000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e470
//
// 0058e470  51                   push ecx
// 0058e471  6a18                 push 0x18
// 0058e473  c744240400000000     mov dword ptr [esp + 4], 0
// 0058e47b  e820952100           call 0x7a79a0
// 0058e480  83c404               add esp, 4
// 0058e483  85c0                 test eax, eax
// 0058e485  7424                 je 0x58e4ab
// 0058e487  c700208ba200         mov dword ptr [eax], 0xa28b20
// 0058e48d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058e491  894808               mov dword ptr [eax + 8], ecx
// 0058e494  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058e498  89500c               mov dword ptr [eax + 0xc], edx
// 0058e49b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058e49f  894810               mov dword ptr [eax + 0x10], ecx
// 0058e4a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058e4a6  895014               mov dword ptr [eax + 0x14], edx
// 0058e4a9  eb02                 jmp 0x58e4ad
// 0058e4ab  33c0                 xor eax, eax
// 0058e4ad  56                   push esi
// 0058e4ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058e4b2  6a00                 push 0
// 0058e4b4  8906                 mov dword ptr [esi], eax
// 0058e4b6  e8df942100           call 0x7a799a
// 0058e4bb  83c404               add esp, 4
// 0058e4be  8bc6                 mov eax, esi
// 0058e4c0  5e                   pop esi
// 0058e4c1  59                   pop ecx
// 0058e4c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
