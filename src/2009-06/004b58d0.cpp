// roc 2009-06 004b58d0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b58d0
//
// 004b58d0  51                   push ecx
// 004b58d1  6a18                 push 0x18
// 004b58d3  c744240400000000     mov dword ptr [esp + 4], 0
// 004b58db  e858312600           call 0x718a38
// 004b58e0  83c404               add esp, 4
// 004b58e3  85c0                 test eax, eax
// 004b58e5  7424                 je 0x4b590b
// 004b58e7  c700e0448c00         mov dword ptr [eax], 0x8c44e0
// 004b58ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b58f1  894808               mov dword ptr [eax + 8], ecx
// 004b58f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b58f8  89500c               mov dword ptr [eax + 0xc], edx
// 004b58fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b58ff  894810               mov dword ptr [eax + 0x10], ecx
// 004b5902  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b5906  895014               mov dword ptr [eax + 0x14], edx
// 004b5909  eb02                 jmp 0x4b590d
// 004b590b  33c0                 xor eax, eax
// 004b590d  56                   push esi
// 004b590e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b5912  6a00                 push 0
// 004b5914  8906                 mov dword ptr [esi], eax
// 004b5916  e817312600           call 0x718a32
// 004b591b  83c404               add esp, 4
// 004b591e  8bc6                 mov eax, esi
// 004b5920  5e                   pop esi
// 004b5921  59                   pop ecx
// 004b5922  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
