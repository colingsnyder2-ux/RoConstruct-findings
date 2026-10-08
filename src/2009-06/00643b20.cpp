// roc 2009-06 00643b20  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00643b20
//
// 00643b20  51                   push ecx
// 00643b21  6a18                 push 0x18
// 00643b23  c744240400000000     mov dword ptr [esp + 4], 0
// 00643b2b  e8084f0d00           call 0x718a38
// 00643b30  83c404               add esp, 4
// 00643b33  85c0                 test eax, eax
// 00643b35  7424                 je 0x643b5b
// 00643b37  c700b4e38d00         mov dword ptr [eax], 0x8de3b4
// 00643b3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00643b41  894808               mov dword ptr [eax + 8], ecx
// 00643b44  8b542410             mov edx, dword ptr [esp + 0x10]
// 00643b48  89500c               mov dword ptr [eax + 0xc], edx
// 00643b4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00643b4f  894810               mov dword ptr [eax + 0x10], ecx
// 00643b52  8b542418             mov edx, dword ptr [esp + 0x18]
// 00643b56  895014               mov dword ptr [eax + 0x14], edx
// 00643b59  eb02                 jmp 0x643b5d
// 00643b5b  33c0                 xor eax, eax
// 00643b5d  56                   push esi
// 00643b5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00643b62  6a00                 push 0
// 00643b64  8906                 mov dword ptr [esi], eax
// 00643b66  e8c74e0d00           call 0x718a32
// 00643b6b  83c404               add esp, 4
// 00643b6e  8bc6                 mov eax, esi
// 00643b70  5e                   pop esi
// 00643b71  59                   pop ecx
// 00643b72  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
