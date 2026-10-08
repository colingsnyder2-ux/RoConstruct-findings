// roc 2009-06 006274d0  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006274d0
//
// 006274d0  51                   push ecx
// 006274d1  6a18                 push 0x18
// 006274d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006274db  e858150f00           call 0x718a38
// 006274e0  83c404               add esp, 4
// 006274e3  85c0                 test eax, eax
// 006274e5  7424                 je 0x62750b
// 006274e7  c70088a48d00         mov dword ptr [eax], 0x8da488
// 006274ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006274f1  894808               mov dword ptr [eax + 8], ecx
// 006274f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006274f8  89500c               mov dword ptr [eax + 0xc], edx
// 006274fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006274ff  894810               mov dword ptr [eax + 0x10], ecx
// 00627502  8b542418             mov edx, dword ptr [esp + 0x18]
// 00627506  895014               mov dword ptr [eax + 0x14], edx
// 00627509  eb02                 jmp 0x62750d
// 0062750b  33c0                 xor eax, eax
// 0062750d  56                   push esi
// 0062750e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00627512  6a00                 push 0
// 00627514  8906                 mov dword ptr [esi], eax
// 00627516  e817150f00           call 0x718a32
// 0062751b  83c404               add esp, 4
// 0062751e  8bc6                 mov eax, esi
// 00627520  5e                   pop esi
// 00627521  59                   pop ecx
// 00627522  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
