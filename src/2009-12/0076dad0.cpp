// roc 2009-12 0076dad0  unit: RBX::VFrame::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076dad0
//
// 0076dad0  51                   push ecx
// 0076dad1  6a18                 push 0x18
// 0076dad3  c744240400000000     mov dword ptr [esp + 4], 0
// 0076dadb  e8805d0800           call 0x7f3860
// 0076dae0  83c404               add esp, 4
// 0076dae3  85c0                 test eax, eax
// 0076dae5  7424                 je 0x76db0b
// 0076dae7  c70054829e00         mov dword ptr [eax], 0x9e8254
// 0076daed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076daf1  894808               mov dword ptr [eax + 8], ecx
// 0076daf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076daf8  89500c               mov dword ptr [eax + 0xc], edx
// 0076dafb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076daff  894810               mov dword ptr [eax + 0x10], ecx
// 0076db02  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076db06  895014               mov dword ptr [eax + 0x14], edx
// 0076db09  eb02                 jmp 0x76db0d
// 0076db0b  33c0                 xor eax, eax
// 0076db0d  56                   push esi
// 0076db0e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076db12  6a00                 push 0
// 0076db14  8906                 mov dword ptr [esi], eax
// 0076db16  e83f5d0800           call 0x7f385a
// 0076db1b  83c404               add esp, 4
// 0076db1e  8bc6                 mov eax, esi
// 0076db20  5e                   pop esi
// 0076db21  59                   pop ecx
// 0076db22  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
