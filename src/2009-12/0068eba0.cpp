// roc 2009-12 0068eba0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068eba0
//
// 0068eba0  51                   push ecx
// 0068eba1  6a18                 push 0x18
// 0068eba3  c744240400000000     mov dword ptr [esp + 4], 0
// 0068ebab  e8b04c1600           call 0x7f3860
// 0068ebb0  83c404               add esp, 4
// 0068ebb3  85c0                 test eax, eax
// 0068ebb5  7424                 je 0x68ebdb
// 0068ebb7  c700e0139d00         mov dword ptr [eax], 0x9d13e0
// 0068ebbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068ebc1  894808               mov dword ptr [eax + 8], ecx
// 0068ebc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068ebc8  89500c               mov dword ptr [eax + 0xc], edx
// 0068ebcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068ebcf  894810               mov dword ptr [eax + 0x10], ecx
// 0068ebd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0068ebd6  895014               mov dword ptr [eax + 0x14], edx
// 0068ebd9  eb02                 jmp 0x68ebdd
// 0068ebdb  33c0                 xor eax, eax
// 0068ebdd  56                   push esi
// 0068ebde  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068ebe2  6a00                 push 0
// 0068ebe4  8906                 mov dword ptr [esi], eax
// 0068ebe6  e86f4c1600           call 0x7f385a
// 0068ebeb  83c404               add esp, 4
// 0068ebee  8bc6                 mov eax, esi
// 0068ebf0  5e                   pop esi
// 0068ebf1  59                   pop ecx
// 0068ebf2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
