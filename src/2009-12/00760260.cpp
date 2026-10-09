// roc 2009-12 00760260  unit: RBX::P8BillboardGui::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00760260
//
// 00760260  51                   push ecx
// 00760261  6a10                 push 0x10
// 00760263  c744240400000000     mov dword ptr [esp + 4], 0
// 0076026b  e8f0350900           call 0x7f3860
// 00760270  83c404               add esp, 4
// 00760273  85c0                 test eax, eax
// 00760275  7416                 je 0x76028d
// 00760277  c700f4769e00         mov dword ptr [eax], 0x9e76f4
// 0076027d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00760281  894808               mov dword ptr [eax + 8], ecx
// 00760284  8b542410             mov edx, dword ptr [esp + 0x10]
// 00760288  89500c               mov dword ptr [eax + 0xc], edx
// 0076028b  eb02                 jmp 0x76028f
// 0076028d  33c0                 xor eax, eax
// 0076028f  56                   push esi
// 00760290  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00760294  6a00                 push 0
// 00760296  8906                 mov dword ptr [esi], eax
// 00760298  e8bd350900           call 0x7f385a
// 0076029d  83c404               add esp, 4
// 007602a0  8bc6                 mov eax, esi
// 007602a2  5e                   pop esi
// 007602a3  59                   pop ecx
// 007602a4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
