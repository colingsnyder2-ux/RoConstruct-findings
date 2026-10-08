// roc 2009-06 0066e8c0  unit: RBX::VMeshId::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066e8c0
//
// 0066e8c0  51                   push ecx
// 0066e8c1  6a18                 push 0x18
// 0066e8c3  c744240400000000     mov dword ptr [esp + 4], 0
// 0066e8cb  e868a10a00           call 0x718a38
// 0066e8d0  83c404               add esp, 4
// 0066e8d3  85c0                 test eax, eax
// 0066e8d5  7424                 je 0x66e8fb
// 0066e8d7  c70050338e00         mov dword ptr [eax], 0x8e3350
// 0066e8dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066e8e1  894808               mov dword ptr [eax + 8], ecx
// 0066e8e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066e8e8  89500c               mov dword ptr [eax + 0xc], edx
// 0066e8eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066e8ef  894810               mov dword ptr [eax + 0x10], ecx
// 0066e8f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066e8f6  895014               mov dword ptr [eax + 0x14], edx
// 0066e8f9  eb02                 jmp 0x66e8fd
// 0066e8fb  33c0                 xor eax, eax
// 0066e8fd  56                   push esi
// 0066e8fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066e902  6a00                 push 0
// 0066e904  8906                 mov dword ptr [esi], eax
// 0066e906  e827a10a00           call 0x718a32
// 0066e90b  83c404               add esp, 4
// 0066e90e  8bc6                 mov eax, esi
// 0066e910  5e                   pop esi
// 0066e911  59                   pop ecx
// 0066e912  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
