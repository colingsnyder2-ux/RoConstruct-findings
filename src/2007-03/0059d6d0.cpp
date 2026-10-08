// roc 2007-03 0059d6d0  unit: seg_00590000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059d6d0
//
// 0059d6d0  51                   push ecx
// 0059d6d1  6a18                 push 0x18
// 0059d6d3  c744240400000000     mov dword ptr [esp + 4], 0
// 0059d6db  e8280a0800           call 0x61e108
// 0059d6e0  83c404               add esp, 4
// 0059d6e3  85c0                 test eax, eax
// 0059d6e5  7424                 je 0x59d70b
// 0059d6e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059d6eb  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059d6ef  894808               mov dword ptr [eax + 8], ecx
// 0059d6f2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059d6f6  89500c               mov dword ptr [eax + 0xc], edx
// 0059d6f9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059d6fd  c70070237b00         mov dword ptr [eax], 0x7b2370
// 0059d703  894810               mov dword ptr [eax + 0x10], ecx
// 0059d706  895014               mov dword ptr [eax + 0x14], edx
// 0059d709  eb02                 jmp 0x59d70d
// 0059d70b  33c0                 xor eax, eax
// 0059d70d  56                   push esi
// 0059d70e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059d712  6a00                 push 0
// 0059d714  c744240800000000     mov dword ptr [esp + 8], 0
// 0059d71c  8906                 mov dword ptr [esi], eax
// 0059d71e  e8cd090800           call 0x61e0f0
// 0059d723  83c404               add esp, 4
// 0059d726  8bc6                 mov eax, esi
// 0059d728  5e                   pop esi
// 0059d729  59                   pop ecx
// 0059d72a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
