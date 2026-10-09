// roc 2009-12 0076db30  unit: RBX::VFrame::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076db30
//
// 0076db30  51                   push ecx
// 0076db31  6a18                 push 0x18
// 0076db33  c744240400000000     mov dword ptr [esp + 4], 0
// 0076db3b  e8205d0800           call 0x7f3860
// 0076db40  83c404               add esp, 4
// 0076db43  85c0                 test eax, eax
// 0076db45  7424                 je 0x76db6b
// 0076db47  c7006c829e00         mov dword ptr [eax], 0x9e826c
// 0076db4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076db51  894808               mov dword ptr [eax + 8], ecx
// 0076db54  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076db58  89500c               mov dword ptr [eax + 0xc], edx
// 0076db5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076db5f  894810               mov dword ptr [eax + 0x10], ecx
// 0076db62  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076db66  895014               mov dword ptr [eax + 0x14], edx
// 0076db69  eb02                 jmp 0x76db6d
// 0076db6b  33c0                 xor eax, eax
// 0076db6d  56                   push esi
// 0076db6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076db72  6a00                 push 0
// 0076db74  8906                 mov dword ptr [esi], eax
// 0076db76  e8df5c0800           call 0x7f385a
// 0076db7b  83c404               add esp, 4
// 0076db7e  8bc6                 mov eax, esi
// 0076db80  5e                   pop esi
// 0076db81  59                   pop ecx
// 0076db82  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
