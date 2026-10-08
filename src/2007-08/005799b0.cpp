// roc 2007-08 005799b0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005799b0
//
// 005799b0  51                   push ecx
// 005799b1  6a18                 push 0x18
// 005799b3  c744240400000000     mov dword ptr [esp + 4], 0
// 005799bb  e836650b00           call 0x62fef6
// 005799c0  83c404               add esp, 4
// 005799c3  85c0                 test eax, eax
// 005799c5  7424                 je 0x5799eb
// 005799c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005799cb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005799cf  894808               mov dword ptr [eax + 8], ecx
// 005799d2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005799d6  89500c               mov dword ptr [eax + 0xc], edx
// 005799d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005799dd  c700a4b17a00         mov dword ptr [eax], 0x7ab1a4
// 005799e3  894810               mov dword ptr [eax + 0x10], ecx
// 005799e6  895014               mov dword ptr [eax + 0x14], edx
// 005799e9  eb02                 jmp 0x5799ed
// 005799eb  33c0                 xor eax, eax
// 005799ed  56                   push esi
// 005799ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005799f2  6a00                 push 0
// 005799f4  c744240800000000     mov dword ptr [esp + 8], 0
// 005799fc  8906                 mov dword ptr [esi], eax
// 005799fe  e85f620b00           call 0x62fc62
// 00579a03  83c404               add esp, 4
// 00579a06  8bc6                 mov eax, esi
// 00579a08  5e                   pop esi
// 00579a09  59                   pop ecx
// 00579a0a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
