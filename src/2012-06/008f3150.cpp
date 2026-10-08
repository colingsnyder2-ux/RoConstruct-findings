// roc 2012-06 008f3150  unit: RBX::P8NetworkSettings::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f3150
//
// 008f3150  51                   push ecx
// 008f3151  6a18                 push 0x18
// 008f3153  c744240400000000     mov dword ptr [esp + 4], 0
// 008f315b  e8baef0800           call 0x98211a
// 008f3160  83c404               add esp, 4
// 008f3163  85c0                 test eax, eax
// 008f3165  7424                 je 0x8f318b
// 008f3167  c70024f7be00         mov dword ptr [eax], 0xbef724
// 008f316d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f3171  894808               mov dword ptr [eax + 8], ecx
// 008f3174  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f3178  89500c               mov dword ptr [eax + 0xc], edx
// 008f317b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f317f  894810               mov dword ptr [eax + 0x10], ecx
// 008f3182  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f3186  895014               mov dword ptr [eax + 0x14], edx
// 008f3189  eb02                 jmp 0x8f318d
// 008f318b  33c0                 xor eax, eax
// 008f318d  56                   push esi
// 008f318e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008f3192  6a00                 push 0
// 008f3194  8906                 mov dword ptr [esi], eax
// 008f3196  e879ef0800           call 0x982114
// 008f319b  83c404               add esp, 4
// 008f319e  8bc6                 mov eax, esi
// 008f31a0  5e                   pop esi
// 008f31a1  59                   pop ecx
// 008f31a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
