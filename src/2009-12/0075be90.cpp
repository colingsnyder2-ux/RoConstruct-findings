// roc 2009-12 0075be90  unit: RBX::TextBox  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075be90
//
// 0075be90  51                   push ecx
// 0075be91  6a18                 push 0x18
// 0075be93  c744240400000000     mov dword ptr [esp + 4], 0
// 0075be9b  e8c0790900           call 0x7f3860
// 0075bea0  83c404               add esp, 4
// 0075bea3  85c0                 test eax, eax
// 0075bea5  7424                 je 0x75becb
// 0075bea7  c70084689e00         mov dword ptr [eax], 0x9e6884
// 0075bead  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075beb1  894808               mov dword ptr [eax + 8], ecx
// 0075beb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0075beb8  89500c               mov dword ptr [eax + 0xc], edx
// 0075bebb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075bebf  894810               mov dword ptr [eax + 0x10], ecx
// 0075bec2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0075bec6  895014               mov dword ptr [eax + 0x14], edx
// 0075bec9  eb02                 jmp 0x75becd
// 0075becb  33c0                 xor eax, eax
// 0075becd  56                   push esi
// 0075bece  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0075bed2  6a00                 push 0
// 0075bed4  8906                 mov dword ptr [esi], eax
// 0075bed6  e87f790900           call 0x7f385a
// 0075bedb  83c404               add esp, 4
// 0075bede  8bc6                 mov eax, esi
// 0075bee0  5e                   pop esi
// 0075bee1  59                   pop ecx
// 0075bee2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
