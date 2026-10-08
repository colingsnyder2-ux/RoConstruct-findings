// roc 2010-06 006e62c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e62c0
//
// 006e62c0  51                   push ecx
// 006e62c1  6a18                 push 0x18
// 006e62c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006e62cb  e8d0160c00           call 0x7a79a0
// 006e62d0  83c404               add esp, 4
// 006e62d3  85c0                 test eax, eax
// 006e62d5  7424                 je 0x6e62fb
// 006e62d7  c7009497a400         mov dword ptr [eax], 0xa49794
// 006e62dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e62e1  894808               mov dword ptr [eax + 8], ecx
// 006e62e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e62e8  89500c               mov dword ptr [eax + 0xc], edx
// 006e62eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e62ef  894810               mov dword ptr [eax + 0x10], ecx
// 006e62f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e62f6  895014               mov dword ptr [eax + 0x14], edx
// 006e62f9  eb02                 jmp 0x6e62fd
// 006e62fb  33c0                 xor eax, eax
// 006e62fd  56                   push esi
// 006e62fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e6302  6a00                 push 0
// 006e6304  8906                 mov dword ptr [esi], eax
// 006e6306  e88f160c00           call 0x7a799a
// 006e630b  83c404               add esp, 4
// 006e630e  8bc6                 mov eax, esi
// 006e6310  5e                   pop esi
// 006e6311  59                   pop ecx
// 006e6312  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
