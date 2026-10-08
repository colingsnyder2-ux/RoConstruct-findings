// roc 2007-03 005846f0  unit: seg_00580000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005846f0
//
// 005846f0  51                   push ecx
// 005846f1  6a18                 push 0x18
// 005846f3  c744240400000000     mov dword ptr [esp + 4], 0
// 005846fb  e8089a0900           call 0x61e108
// 00584700  83c404               add esp, 4
// 00584703  85c0                 test eax, eax
// 00584705  7424                 je 0x58472b
// 00584707  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058470b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058470f  894808               mov dword ptr [eax + 8], ecx
// 00584712  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00584716  89500c               mov dword ptr [eax + 0xc], edx
// 00584719  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058471d  c70024fb7a00         mov dword ptr [eax], 0x7afb24
// 00584723  894810               mov dword ptr [eax + 0x10], ecx
// 00584726  895014               mov dword ptr [eax + 0x14], edx
// 00584729  eb02                 jmp 0x58472d
// 0058472b  33c0                 xor eax, eax
// 0058472d  56                   push esi
// 0058472e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00584732  6a00                 push 0
// 00584734  c744240800000000     mov dword ptr [esp + 8], 0
// 0058473c  8906                 mov dword ptr [esi], eax
// 0058473e  e8ad990900           call 0x61e0f0
// 00584743  83c404               add esp, 4
// 00584746  8bc6                 mov eax, esi
// 00584748  5e                   pop esi
// 00584749  59                   pop ecx
// 0058474a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
