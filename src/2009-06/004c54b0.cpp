// roc 2009-06 004c54b0  unit: RBX::Network::Players::Plugin  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c54b0
//
// 004c54b0  51                   push ecx
// 004c54b1  6a18                 push 0x18
// 004c54b3  c744240400000000     mov dword ptr [esp + 4], 0
// 004c54bb  e878352500           call 0x718a38
// 004c54c0  83c404               add esp, 4
// 004c54c3  85c0                 test eax, eax
// 004c54c5  7424                 je 0x4c54eb
// 004c54c7  c70040508c00         mov dword ptr [eax], 0x8c5040
// 004c54cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c54d1  894808               mov dword ptr [eax + 8], ecx
// 004c54d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c54d8  89500c               mov dword ptr [eax + 0xc], edx
// 004c54db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c54df  894810               mov dword ptr [eax + 0x10], ecx
// 004c54e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004c54e6  895014               mov dword ptr [eax + 0x14], edx
// 004c54e9  eb02                 jmp 0x4c54ed
// 004c54eb  33c0                 xor eax, eax
// 004c54ed  56                   push esi
// 004c54ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c54f2  6a00                 push 0
// 004c54f4  8906                 mov dword ptr [esi], eax
// 004c54f6  e837352500           call 0x718a32
// 004c54fb  83c404               add esp, 4
// 004c54fe  8bc6                 mov eax, esi
// 004c5500  5e                   pop esi
// 004c5501  59                   pop ecx
// 004c5502  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
