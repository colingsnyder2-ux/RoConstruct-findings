// roc 2012-06 00693ac0  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00693ac0
//
// 00693ac0  51                   push ecx
// 00693ac1  6a18                 push 0x18
// 00693ac3  c744240400000000     mov dword ptr [esp + 4], 0
// 00693acb  e84ae62e00           call 0x98211a
// 00693ad0  83c404               add esp, 4
// 00693ad3  85c0                 test eax, eax
// 00693ad5  7424                 je 0x693afb
// 00693ad7  c700e429b900         mov dword ptr [eax], 0xb929e4
// 00693add  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00693ae1  894808               mov dword ptr [eax + 8], ecx
// 00693ae4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00693ae8  89500c               mov dword ptr [eax + 0xc], edx
// 00693aeb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00693aef  894810               mov dword ptr [eax + 0x10], ecx
// 00693af2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00693af6  895014               mov dword ptr [eax + 0x14], edx
// 00693af9  eb02                 jmp 0x693afd
// 00693afb  33c0                 xor eax, eax
// 00693afd  56                   push esi
// 00693afe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00693b02  6a00                 push 0
// 00693b04  8906                 mov dword ptr [esi], eax
// 00693b06  e809e62e00           call 0x982114
// 00693b0b  83c404               add esp, 4
// 00693b0e  8bc6                 mov eax, esi
// 00693b10  5e                   pop esi
// 00693b11  59                   pop ecx
// 00693b12  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
