// roc 2012-06 008f62a0  unit: RBX::Scale9Frame  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f62a0
//
// 008f62a0  51                   push ecx
// 008f62a1  6a18                 push 0x18
// 008f62a3  c744240400000000     mov dword ptr [esp + 4], 0
// 008f62ab  e86abe0800           call 0x98211a
// 008f62b0  83c404               add esp, 4
// 008f62b3  85c0                 test eax, eax
// 008f62b5  7424                 je 0x8f62db
// 008f62b7  c700a400bf00         mov dword ptr [eax], 0xbf00a4
// 008f62bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f62c1  894808               mov dword ptr [eax + 8], ecx
// 008f62c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f62c8  89500c               mov dword ptr [eax + 0xc], edx
// 008f62cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f62cf  894810               mov dword ptr [eax + 0x10], ecx
// 008f62d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f62d6  895014               mov dword ptr [eax + 0x14], edx
// 008f62d9  eb02                 jmp 0x8f62dd
// 008f62db  33c0                 xor eax, eax
// 008f62dd  56                   push esi
// 008f62de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008f62e2  6a00                 push 0
// 008f62e4  8906                 mov dword ptr [esi], eax
// 008f62e6  e829be0800           call 0x982114
// 008f62eb  83c404               add esp, 4
// 008f62ee  8bc6                 mov eax, esi
// 008f62f0  5e                   pop esi
// 008f62f1  59                   pop ecx
// 008f62f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
