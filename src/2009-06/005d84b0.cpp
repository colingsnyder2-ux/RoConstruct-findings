// roc 2009-06 005d84b0  unit: RBX::Team  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d84b0
//
// 005d84b0  51                   push ecx
// 005d84b1  6a18                 push 0x18
// 005d84b3  c744240400000000     mov dword ptr [esp + 4], 0
// 005d84bb  e878051400           call 0x718a38
// 005d84c0  83c404               add esp, 4
// 005d84c3  85c0                 test eax, eax
// 005d84c5  7424                 je 0x5d84eb
// 005d84c7  c70084558d00         mov dword ptr [eax], 0x8d5584
// 005d84cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d84d1  894808               mov dword ptr [eax + 8], ecx
// 005d84d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d84d8  89500c               mov dword ptr [eax + 0xc], edx
// 005d84db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d84df  894810               mov dword ptr [eax + 0x10], ecx
// 005d84e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d84e6  895014               mov dword ptr [eax + 0x14], edx
// 005d84e9  eb02                 jmp 0x5d84ed
// 005d84eb  33c0                 xor eax, eax
// 005d84ed  56                   push esi
// 005d84ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d84f2  6a00                 push 0
// 005d84f4  8906                 mov dword ptr [esi], eax
// 005d84f6  e837051400           call 0x718a32
// 005d84fb  83c404               add esp, 4
// 005d84fe  8bc6                 mov eax, esi
// 005d8500  5e                   pop esi
// 005d8501  59                   pop ecx
// 005d8502  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
