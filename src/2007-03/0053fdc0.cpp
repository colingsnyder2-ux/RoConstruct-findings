// roc 2007-03 0053fdc0  unit: seg_00530000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053fdc0
//
// 0053fdc0  51                   push ecx
// 0053fdc1  6a18                 push 0x18
// 0053fdc3  c744240400000000     mov dword ptr [esp + 4], 0
// 0053fdcb  e838e30d00           call 0x61e108
// 0053fdd0  83c404               add esp, 4
// 0053fdd3  85c0                 test eax, eax
// 0053fdd5  7424                 je 0x53fdfb
// 0053fdd7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053fddb  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053fddf  894808               mov dword ptr [eax + 8], ecx
// 0053fde2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053fde6  89500c               mov dword ptr [eax + 0xc], edx
// 0053fde9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053fded  c700b0657a00         mov dword ptr [eax], 0x7a65b0
// 0053fdf3  894810               mov dword ptr [eax + 0x10], ecx
// 0053fdf6  895014               mov dword ptr [eax + 0x14], edx
// 0053fdf9  eb02                 jmp 0x53fdfd
// 0053fdfb  33c0                 xor eax, eax
// 0053fdfd  56                   push esi
// 0053fdfe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053fe02  6a00                 push 0
// 0053fe04  c744240800000000     mov dword ptr [esp + 8], 0
// 0053fe0c  8906                 mov dword ptr [esi], eax
// 0053fe0e  e8dde20d00           call 0x61e0f0
// 0053fe13  83c404               add esp, 4
// 0053fe16  8bc6                 mov eax, esi
// 0053fe18  5e                   pop esi
// 0053fe19  59                   pop ecx
// 0053fe1a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
