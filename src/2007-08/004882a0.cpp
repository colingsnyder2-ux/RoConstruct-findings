// roc 2007-08 004882a0  unit: P8CRenderSettings::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004882a0
//
// 004882a0  51                   push ecx
// 004882a1  6a18                 push 0x18
// 004882a3  c744240400000000     mov dword ptr [esp + 4], 0
// 004882ab  e8467c1a00           call 0x62fef6
// 004882b0  83c404               add esp, 4
// 004882b3  85c0                 test eax, eax
// 004882b5  7424                 je 0x4882db
// 004882b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004882bb  8b542410             mov edx, dword ptr [esp + 0x10]
// 004882bf  894808               mov dword ptr [eax + 8], ecx
// 004882c2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004882c6  89500c               mov dword ptr [eax + 0xc], edx
// 004882c9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004882cd  c700b0ae7900         mov dword ptr [eax], 0x79aeb0
// 004882d3  894810               mov dword ptr [eax + 0x10], ecx
// 004882d6  895014               mov dword ptr [eax + 0x14], edx
// 004882d9  eb02                 jmp 0x4882dd
// 004882db  33c0                 xor eax, eax
// 004882dd  56                   push esi
// 004882de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004882e2  6a00                 push 0
// 004882e4  c744240800000000     mov dword ptr [esp + 8], 0
// 004882ec  8906                 mov dword ptr [esi], eax
// 004882ee  e86f791a00           call 0x62fc62
// 004882f3  83c404               add esp, 4
// 004882f6  8bc6                 mov eax, esi
// 004882f8  5e                   pop esi
// 004882f9  59                   pop ecx
// 004882fa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
