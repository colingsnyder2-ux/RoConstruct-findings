// roc 2009-12 006b4980  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b4980
//
// 006b4980  51                   push ecx
// 006b4981  6a18                 push 0x18
// 006b4983  c744240400000000     mov dword ptr [esp + 4], 0
// 006b498b  e8d0ee1300           call 0x7f3860
// 006b4990  83c404               add esp, 4
// 006b4993  85c0                 test eax, eax
// 006b4995  7424                 je 0x6b49bb
// 006b4997  c700005d9d00         mov dword ptr [eax], 0x9d5d00
// 006b499d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b49a1  894808               mov dword ptr [eax + 8], ecx
// 006b49a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006b49a8  89500c               mov dword ptr [eax + 0xc], edx
// 006b49ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b49af  894810               mov dword ptr [eax + 0x10], ecx
// 006b49b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006b49b6  895014               mov dword ptr [eax + 0x14], edx
// 006b49b9  eb02                 jmp 0x6b49bd
// 006b49bb  33c0                 xor eax, eax
// 006b49bd  56                   push esi
// 006b49be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006b49c2  6a00                 push 0
// 006b49c4  8906                 mov dword ptr [esi], eax
// 006b49c6  e88fee1300           call 0x7f385a
// 006b49cb  83c404               add esp, 4
// 006b49ce  8bc6                 mov eax, esi
// 006b49d0  5e                   pop esi
// 006b49d1  59                   pop ecx
// 006b49d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
