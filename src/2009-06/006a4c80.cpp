// roc 2009-06 006a4c80  unit: RBX::P8BackpackItem::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a4c80
//
// 006a4c80  51                   push ecx
// 006a4c81  6a18                 push 0x18
// 006a4c83  c744240400000000     mov dword ptr [esp + 4], 0
// 006a4c8b  e8a83d0700           call 0x718a38
// 006a4c90  83c404               add esp, 4
// 006a4c93  85c0                 test eax, eax
// 006a4c95  7424                 je 0x6a4cbb
// 006a4c97  c700b09c8e00         mov dword ptr [eax], 0x8e9cb0
// 006a4c9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a4ca1  894808               mov dword ptr [eax + 8], ecx
// 006a4ca4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a4ca8  89500c               mov dword ptr [eax + 0xc], edx
// 006a4cab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a4caf  894810               mov dword ptr [eax + 0x10], ecx
// 006a4cb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006a4cb6  895014               mov dword ptr [eax + 0x14], edx
// 006a4cb9  eb02                 jmp 0x6a4cbd
// 006a4cbb  33c0                 xor eax, eax
// 006a4cbd  56                   push esi
// 006a4cbe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a4cc2  6a00                 push 0
// 006a4cc4  8906                 mov dword ptr [esi], eax
// 006a4cc6  e8673d0700           call 0x718a32
// 006a4ccb  83c404               add esp, 4
// 006a4cce  8bc6                 mov eax, esi
// 006a4cd0  5e                   pop esi
// 006a4cd1  59                   pop ecx
// 006a4cd2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
