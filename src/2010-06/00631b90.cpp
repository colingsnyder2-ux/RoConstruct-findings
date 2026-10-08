// roc 2010-06 00631b90  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631b90
//
// 00631b90  51                   push ecx
// 00631b91  6a18                 push 0x18
// 00631b93  c744240400000000     mov dword ptr [esp + 4], 0
// 00631b9b  e8005e1700           call 0x7a79a0
// 00631ba0  83c404               add esp, 4
// 00631ba3  85c0                 test eax, eax
// 00631ba5  7424                 je 0x631bcb
// 00631ba7  c700445ba300         mov dword ptr [eax], 0xa35b44
// 00631bad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00631bb1  894808               mov dword ptr [eax + 8], ecx
// 00631bb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00631bb8  89500c               mov dword ptr [eax + 0xc], edx
// 00631bbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00631bbf  894810               mov dword ptr [eax + 0x10], ecx
// 00631bc2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00631bc6  895014               mov dword ptr [eax + 0x14], edx
// 00631bc9  eb02                 jmp 0x631bcd
// 00631bcb  33c0                 xor eax, eax
// 00631bcd  56                   push esi
// 00631bce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00631bd2  6a00                 push 0
// 00631bd4  8906                 mov dword ptr [esi], eax
// 00631bd6  e8bf5d1700           call 0x7a799a
// 00631bdb  83c404               add esp, 4
// 00631bde  8bc6                 mov eax, esi
// 00631be0  5e                   pop esi
// 00631be1  59                   pop ecx
// 00631be2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
