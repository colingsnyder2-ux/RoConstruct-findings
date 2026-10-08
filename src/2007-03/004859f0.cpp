// roc 2007-03 004859f0  unit: seg_00480000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004859f0
//
// 004859f0  51                   push ecx
// 004859f1  6a18                 push 0x18
// 004859f3  c744240400000000     mov dword ptr [esp + 4], 0
// 004859fb  e808871900           call 0x61e108
// 00485a00  83c404               add esp, 4
// 00485a03  85c0                 test eax, eax
// 00485a05  7424                 je 0x485a2b
// 00485a07  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00485a0b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00485a0f  894808               mov dword ptr [eax + 8], ecx
// 00485a12  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00485a16  89500c               mov dword ptr [eax + 0xc], edx
// 00485a19  8b542418             mov edx, dword ptr [esp + 0x18]
// 00485a1d  c700409f7900         mov dword ptr [eax], 0x799f40
// 00485a23  894810               mov dword ptr [eax + 0x10], ecx
// 00485a26  895014               mov dword ptr [eax + 0x14], edx
// 00485a29  eb02                 jmp 0x485a2d
// 00485a2b  33c0                 xor eax, eax
// 00485a2d  56                   push esi
// 00485a2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00485a32  6a00                 push 0
// 00485a34  c744240800000000     mov dword ptr [esp + 8], 0
// 00485a3c  8906                 mov dword ptr [esi], eax
// 00485a3e  e8ad861900           call 0x61e0f0
// 00485a43  83c404               add esp, 4
// 00485a46  8bc6                 mov eax, esi
// 00485a48  5e                   pop esi
// 00485a49  59                   pop ecx
// 00485a4a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
