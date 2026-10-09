// roc 2009-12 006daab0  unit: RBX::P8PlayerCamera::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006daab0
//
// 006daab0  51                   push ecx
// 006daab1  6a18                 push 0x18
// 006daab3  c744240400000000     mov dword ptr [esp + 4], 0
// 006daabb  e8a08d1100           call 0x7f3860
// 006daac0  83c404               add esp, 4
// 006daac3  85c0                 test eax, eax
// 006daac5  7424                 je 0x6daaeb
// 006daac7  c70094999d00         mov dword ptr [eax], 0x9d9994
// 006daacd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006daad1  894808               mov dword ptr [eax + 8], ecx
// 006daad4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006daad8  89500c               mov dword ptr [eax + 0xc], edx
// 006daadb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006daadf  894810               mov dword ptr [eax + 0x10], ecx
// 006daae2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006daae6  895014               mov dword ptr [eax + 0x14], edx
// 006daae9  eb02                 jmp 0x6daaed
// 006daaeb  33c0                 xor eax, eax
// 006daaed  56                   push esi
// 006daaee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006daaf2  6a00                 push 0
// 006daaf4  8906                 mov dword ptr [esi], eax
// 006daaf6  e85f8d1100           call 0x7f385a
// 006daafb  83c404               add esp, 4
// 006daafe  8bc6                 mov eax, esi
// 006dab00  5e                   pop esi
// 006dab01  59                   pop ecx
// 006dab02  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
