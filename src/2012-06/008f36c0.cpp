// roc 2012-06 008f36c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f36c0
//
// 008f36c0  51                   push ecx
// 008f36c1  6a18                 push 0x18
// 008f36c3  c744240400000000     mov dword ptr [esp + 4], 0
// 008f36cb  e84aea0800           call 0x98211a
// 008f36d0  83c404               add esp, 4
// 008f36d3  85c0                 test eax, eax
// 008f36d5  7424                 je 0x8f36fb
// 008f36d7  c700b0f8be00         mov dword ptr [eax], 0xbef8b0
// 008f36dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f36e1  894808               mov dword ptr [eax + 8], ecx
// 008f36e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f36e8  89500c               mov dword ptr [eax + 0xc], edx
// 008f36eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f36ef  894810               mov dword ptr [eax + 0x10], ecx
// 008f36f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f36f6  895014               mov dword ptr [eax + 0x14], edx
// 008f36f9  eb02                 jmp 0x8f36fd
// 008f36fb  33c0                 xor eax, eax
// 008f36fd  56                   push esi
// 008f36fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008f3702  6a00                 push 0
// 008f3704  8906                 mov dword ptr [esi], eax
// 008f3706  e809ea0800           call 0x982114
// 008f370b  83c404               add esp, 4
// 008f370e  8bc6                 mov eax, esi
// 008f3710  5e                   pop esi
// 008f3711  59                   pop ecx
// 008f3712  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
