// roc 2012-06 0051e7a0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0051e7a0
//
// 0051e7a0  51                   push ecx
// 0051e7a1  6a10                 push 0x10
// 0051e7a3  c744240400000000     mov dword ptr [esp + 4], 0
// 0051e7ab  e86a394600           call 0x98211a
// 0051e7b0  83c404               add esp, 4
// 0051e7b3  85c0                 test eax, eax
// 0051e7b5  7416                 je 0x51e7cd
// 0051e7b7  c700c8f8b600         mov dword ptr [eax], 0xb6f8c8
// 0051e7bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051e7c1  894808               mov dword ptr [eax + 8], ecx
// 0051e7c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051e7c8  89500c               mov dword ptr [eax + 0xc], edx
// 0051e7cb  eb02                 jmp 0x51e7cf
// 0051e7cd  33c0                 xor eax, eax
// 0051e7cf  56                   push esi
// 0051e7d0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051e7d4  6a00                 push 0
// 0051e7d6  8906                 mov dword ptr [esi], eax
// 0051e7d8  e837394600           call 0x982114
// 0051e7dd  83c404               add esp, 4
// 0051e7e0  8bc6                 mov eax, esi
// 0051e7e2  5e                   pop esi
// 0051e7e3  59                   pop ecx
// 0051e7e4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
