// roc 2007-08 005efde0  unit: RBX::Hint  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005efde0
//
// 005efde0  51                   push ecx
// 005efde1  6a18                 push 0x18
// 005efde3  c744240400000000     mov dword ptr [esp + 4], 0
// 005efdeb  e806010400           call 0x62fef6
// 005efdf0  83c404               add esp, 4
// 005efdf3  85c0                 test eax, eax
// 005efdf5  7424                 je 0x5efe1b
// 005efdf7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005efdfb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005efdff  894808               mov dword ptr [eax + 8], ecx
// 005efe02  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005efe06  89500c               mov dword ptr [eax + 0xc], edx
// 005efe09  8b542418             mov edx, dword ptr [esp + 0x18]
// 005efe0d  c7005cfe7b00         mov dword ptr [eax], 0x7bfe5c
// 005efe13  894810               mov dword ptr [eax + 0x10], ecx
// 005efe16  895014               mov dword ptr [eax + 0x14], edx
// 005efe19  eb02                 jmp 0x5efe1d
// 005efe1b  33c0                 xor eax, eax
// 005efe1d  56                   push esi
// 005efe1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005efe22  6a00                 push 0
// 005efe24  c744240800000000     mov dword ptr [esp + 8], 0
// 005efe2c  8906                 mov dword ptr [esi], eax
// 005efe2e  e82ffe0300           call 0x62fc62
// 005efe33  83c404               add esp, 4
// 005efe36  8bc6                 mov eax, esi
// 005efe38  5e                   pop esi
// 005efe39  59                   pop ecx
// 005efe3a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
