// roc 2009-06 0064a4b0  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064a4b0
//
// 0064a4b0  51                   push ecx
// 0064a4b1  6a18                 push 0x18
// 0064a4b3  c744240400000000     mov dword ptr [esp + 4], 0
// 0064a4bb  e878e50c00           call 0x718a38
// 0064a4c0  83c404               add esp, 4
// 0064a4c3  85c0                 test eax, eax
// 0064a4c5  7424                 je 0x64a4eb
// 0064a4c7  c7004cee8d00         mov dword ptr [eax], 0x8dee4c
// 0064a4cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064a4d1  894808               mov dword ptr [eax + 8], ecx
// 0064a4d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064a4d8  89500c               mov dword ptr [eax + 0xc], edx
// 0064a4db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064a4df  894810               mov dword ptr [eax + 0x10], ecx
// 0064a4e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064a4e6  895014               mov dword ptr [eax + 0x14], edx
// 0064a4e9  eb02                 jmp 0x64a4ed
// 0064a4eb  33c0                 xor eax, eax
// 0064a4ed  56                   push esi
// 0064a4ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064a4f2  6a00                 push 0
// 0064a4f4  8906                 mov dword ptr [esi], eax
// 0064a4f6  e837e50c00           call 0x718a32
// 0064a4fb  83c404               add esp, 4
// 0064a4fe  8bc6                 mov eax, esi
// 0064a500  5e                   pop esi
// 0064a501  59                   pop ecx
// 0064a502  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
