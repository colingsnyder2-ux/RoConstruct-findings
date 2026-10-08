// roc 2009-06 00644380  unit: RBX::Soundscape::SoundChannel  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00644380
//
// 00644380  51                   push ecx
// 00644381  6a18                 push 0x18
// 00644383  c744240400000000     mov dword ptr [esp + 4], 0
// 0064438b  e8a8460d00           call 0x718a38
// 00644390  83c404               add esp, 4
// 00644393  85c0                 test eax, eax
// 00644395  7424                 je 0x6443bb
// 00644397  c70088e48d00         mov dword ptr [eax], 0x8de488
// 0064439d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006443a1  894808               mov dword ptr [eax + 8], ecx
// 006443a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006443a8  89500c               mov dword ptr [eax + 0xc], edx
// 006443ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006443af  894810               mov dword ptr [eax + 0x10], ecx
// 006443b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006443b6  895014               mov dword ptr [eax + 0x14], edx
// 006443b9  eb02                 jmp 0x6443bd
// 006443bb  33c0                 xor eax, eax
// 006443bd  56                   push esi
// 006443be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006443c2  6a00                 push 0
// 006443c4  8906                 mov dword ptr [esi], eax
// 006443c6  e867460d00           call 0x718a32
// 006443cb  83c404               add esp, 4
// 006443ce  8bc6                 mov eax, esi
// 006443d0  5e                   pop esi
// 006443d1  59                   pop ecx
// 006443d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
