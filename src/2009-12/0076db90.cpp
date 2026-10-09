// roc 2009-12 0076db90  unit: RBX::VFrame::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076db90
//
// 0076db90  51                   push ecx
// 0076db91  6a18                 push 0x18
// 0076db93  c744240400000000     mov dword ptr [esp + 4], 0
// 0076db9b  e8c05c0800           call 0x7f3860
// 0076dba0  83c404               add esp, 4
// 0076dba3  85c0                 test eax, eax
// 0076dba5  7424                 je 0x76dbcb
// 0076dba7  c70084829e00         mov dword ptr [eax], 0x9e8284
// 0076dbad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076dbb1  894808               mov dword ptr [eax + 8], ecx
// 0076dbb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076dbb8  89500c               mov dword ptr [eax + 0xc], edx
// 0076dbbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076dbbf  894810               mov dword ptr [eax + 0x10], ecx
// 0076dbc2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076dbc6  895014               mov dword ptr [eax + 0x14], edx
// 0076dbc9  eb02                 jmp 0x76dbcd
// 0076dbcb  33c0                 xor eax, eax
// 0076dbcd  56                   push esi
// 0076dbce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076dbd2  6a00                 push 0
// 0076dbd4  8906                 mov dword ptr [esi], eax
// 0076dbd6  e87f5c0800           call 0x7f385a
// 0076dbdb  83c404               add esp, 4
// 0076dbde  8bc6                 mov eax, esi
// 0076dbe0  5e                   pop esi
// 0076dbe1  59                   pop ecx
// 0076dbe2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
