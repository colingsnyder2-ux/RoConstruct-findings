// roc 2012-06 008120b0  unit: RBX::VGlue::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008120b0
//
// 008120b0  51                   push ecx
// 008120b1  6a18                 push 0x18
// 008120b3  c744240400000000     mov dword ptr [esp + 4], 0
// 008120bb  e85a001700           call 0x98211a
// 008120c0  83c404               add esp, 4
// 008120c3  85c0                 test eax, eax
// 008120c5  7424                 je 0x8120eb
// 008120c7  c700c460bc00         mov dword ptr [eax], 0xbc60c4
// 008120cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008120d1  894808               mov dword ptr [eax + 8], ecx
// 008120d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008120d8  89500c               mov dword ptr [eax + 0xc], edx
// 008120db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008120df  894810               mov dword ptr [eax + 0x10], ecx
// 008120e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008120e6  895014               mov dword ptr [eax + 0x14], edx
// 008120e9  eb02                 jmp 0x8120ed
// 008120eb  33c0                 xor eax, eax
// 008120ed  56                   push esi
// 008120ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008120f2  6a00                 push 0
// 008120f4  8906                 mov dword ptr [esi], eax
// 008120f6  e819001700           call 0x982114
// 008120fb  83c404               add esp, 4
// 008120fe  8bc6                 mov eax, esi
// 00812100  5e                   pop esi
// 00812101  59                   pop ecx
// 00812102  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
