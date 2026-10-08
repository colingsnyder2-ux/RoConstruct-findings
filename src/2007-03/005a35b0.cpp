// roc 2007-03 005a35b0  unit: seg_005a0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a35b0
//
// 005a35b0  51                   push ecx
// 005a35b1  6a18                 push 0x18
// 005a35b3  c744240400000000     mov dword ptr [esp + 4], 0
// 005a35bb  e848ab0700           call 0x61e108
// 005a35c0  83c404               add esp, 4
// 005a35c3  85c0                 test eax, eax
// 005a35c5  7424                 je 0x5a35eb
// 005a35c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a35cb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a35cf  894808               mov dword ptr [eax + 8], ecx
// 005a35d2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a35d6  89500c               mov dword ptr [eax + 0xc], edx
// 005a35d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a35dd  c70078547b00         mov dword ptr [eax], 0x7b5478
// 005a35e3  894810               mov dword ptr [eax + 0x10], ecx
// 005a35e6  895014               mov dword ptr [eax + 0x14], edx
// 005a35e9  eb02                 jmp 0x5a35ed
// 005a35eb  33c0                 xor eax, eax
// 005a35ed  56                   push esi
// 005a35ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a35f2  6a00                 push 0
// 005a35f4  c744240800000000     mov dword ptr [esp + 8], 0
// 005a35fc  8906                 mov dword ptr [esi], eax
// 005a35fe  e8edaa0700           call 0x61e0f0
// 005a3603  83c404               add esp, 4
// 005a3606  8bc6                 mov eax, esi
// 005a3608  5e                   pop esi
// 005a3609  59                   pop ecx
// 005a360a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
