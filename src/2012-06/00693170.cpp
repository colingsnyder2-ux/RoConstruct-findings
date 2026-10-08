// roc 2012-06 00693170  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00693170
//
// 00693170  51                   push ecx
// 00693171  6a18                 push 0x18
// 00693173  c744240400000000     mov dword ptr [esp + 4], 0
// 0069317b  e89aef2e00           call 0x98211a
// 00693180  83c404               add esp, 4
// 00693183  85c0                 test eax, eax
// 00693185  7424                 je 0x6931ab
// 00693187  c700d029b900         mov dword ptr [eax], 0xb929d0
// 0069318d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00693191  894808               mov dword ptr [eax + 8], ecx
// 00693194  8b542410             mov edx, dword ptr [esp + 0x10]
// 00693198  89500c               mov dword ptr [eax + 0xc], edx
// 0069319b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069319f  894810               mov dword ptr [eax + 0x10], ecx
// 006931a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006931a6  895014               mov dword ptr [eax + 0x14], edx
// 006931a9  eb02                 jmp 0x6931ad
// 006931ab  33c0                 xor eax, eax
// 006931ad  56                   push esi
// 006931ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006931b2  6a00                 push 0
// 006931b4  8906                 mov dword ptr [esi], eax
// 006931b6  e859ef2e00           call 0x982114
// 006931bb  83c404               add esp, 4
// 006931be  8bc6                 mov eax, esi
// 006931c0  5e                   pop esi
// 006931c1  59                   pop ecx
// 006931c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
