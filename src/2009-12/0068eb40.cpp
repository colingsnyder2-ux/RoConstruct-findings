// roc 2009-12 0068eb40  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068eb40
//
// 0068eb40  51                   push ecx
// 0068eb41  6a18                 push 0x18
// 0068eb43  c744240400000000     mov dword ptr [esp + 4], 0
// 0068eb4b  e8104d1600           call 0x7f3860
// 0068eb50  83c404               add esp, 4
// 0068eb53  85c0                 test eax, eax
// 0068eb55  7424                 je 0x68eb7b
// 0068eb57  c700c8139d00         mov dword ptr [eax], 0x9d13c8
// 0068eb5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068eb61  894808               mov dword ptr [eax + 8], ecx
// 0068eb64  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068eb68  89500c               mov dword ptr [eax + 0xc], edx
// 0068eb6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068eb6f  894810               mov dword ptr [eax + 0x10], ecx
// 0068eb72  8b542418             mov edx, dword ptr [esp + 0x18]
// 0068eb76  895014               mov dword ptr [eax + 0x14], edx
// 0068eb79  eb02                 jmp 0x68eb7d
// 0068eb7b  33c0                 xor eax, eax
// 0068eb7d  56                   push esi
// 0068eb7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068eb82  6a00                 push 0
// 0068eb84  8906                 mov dword ptr [esi], eax
// 0068eb86  e8cf4c1600           call 0x7f385a
// 0068eb8b  83c404               add esp, 4
// 0068eb8e  8bc6                 mov eax, esi
// 0068eb90  5e                   pop esi
// 0068eb91  59                   pop ecx
// 0068eb92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
