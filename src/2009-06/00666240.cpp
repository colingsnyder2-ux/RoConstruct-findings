// roc 2009-06 00666240  unit: RBX::VDecal::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666240
//
// 00666240  51                   push ecx
// 00666241  6a18                 push 0x18
// 00666243  c744240400000000     mov dword ptr [esp + 4], 0
// 0066624b  e8e8270b00           call 0x718a38
// 00666250  83c404               add esp, 4
// 00666253  85c0                 test eax, eax
// 00666255  7424                 je 0x66627b
// 00666257  c7007c2b8e00         mov dword ptr [eax], 0x8e2b7c
// 0066625d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00666261  894808               mov dword ptr [eax + 8], ecx
// 00666264  8b542410             mov edx, dword ptr [esp + 0x10]
// 00666268  89500c               mov dword ptr [eax + 0xc], edx
// 0066626b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066626f  894810               mov dword ptr [eax + 0x10], ecx
// 00666272  8b542418             mov edx, dword ptr [esp + 0x18]
// 00666276  895014               mov dword ptr [eax + 0x14], edx
// 00666279  eb02                 jmp 0x66627d
// 0066627b  33c0                 xor eax, eax
// 0066627d  56                   push esi
// 0066627e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00666282  6a00                 push 0
// 00666284  8906                 mov dword ptr [esi], eax
// 00666286  e8a7270b00           call 0x718a32
// 0066628b  83c404               add esp, 4
// 0066628e  8bc6                 mov eax, esi
// 00666290  5e                   pop esi
// 00666291  59                   pop ecx
// 00666292  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
