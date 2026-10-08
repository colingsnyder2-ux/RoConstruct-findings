// roc 2007-03 005781f0  unit: seg_00570000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005781f0
//
// 005781f0  51                   push ecx
// 005781f1  6a18                 push 0x18
// 005781f3  c744240400000000     mov dword ptr [esp + 4], 0
// 005781fb  e8085f0a00           call 0x61e108
// 00578200  83c404               add esp, 4
// 00578203  85c0                 test eax, eax
// 00578205  7424                 je 0x57822b
// 00578207  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057820b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057820f  894808               mov dword ptr [eax + 8], ecx
// 00578212  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00578216  89500c               mov dword ptr [eax + 0xc], edx
// 00578219  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057821d  c70040c87a00         mov dword ptr [eax], 0x7ac840
// 00578223  894810               mov dword ptr [eax + 0x10], ecx
// 00578226  895014               mov dword ptr [eax + 0x14], edx
// 00578229  eb02                 jmp 0x57822d
// 0057822b  33c0                 xor eax, eax
// 0057822d  56                   push esi
// 0057822e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00578232  6a00                 push 0
// 00578234  c744240800000000     mov dword ptr [esp + 8], 0
// 0057823c  8906                 mov dword ptr [esi], eax
// 0057823e  e8ad5e0a00           call 0x61e0f0
// 00578243  83c404               add esp, 4
// 00578246  8bc6                 mov eax, esi
// 00578248  5e                   pop esi
// 00578249  59                   pop ecx
// 0057824a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
