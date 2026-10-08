// roc 2009-06 004b5870  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b5870
//
// 004b5870  51                   push ecx
// 004b5871  6a18                 push 0x18
// 004b5873  c744240400000000     mov dword ptr [esp + 4], 0
// 004b587b  e8b8312600           call 0x718a38
// 004b5880  83c404               add esp, 4
// 004b5883  85c0                 test eax, eax
// 004b5885  7424                 je 0x4b58ab
// 004b5887  c700cc448c00         mov dword ptr [eax], 0x8c44cc
// 004b588d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b5891  894808               mov dword ptr [eax + 8], ecx
// 004b5894  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b5898  89500c               mov dword ptr [eax + 0xc], edx
// 004b589b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b589f  894810               mov dword ptr [eax + 0x10], ecx
// 004b58a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b58a6  895014               mov dword ptr [eax + 0x14], edx
// 004b58a9  eb02                 jmp 0x4b58ad
// 004b58ab  33c0                 xor eax, eax
// 004b58ad  56                   push esi
// 004b58ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b58b2  6a00                 push 0
// 004b58b4  8906                 mov dword ptr [esi], eax
// 004b58b6  e877312600           call 0x718a32
// 004b58bb  83c404               add esp, 4
// 004b58be  8bc6                 mov eax, esi
// 004b58c0  5e                   pop esi
// 004b58c1  59                   pop ecx
// 004b58c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
