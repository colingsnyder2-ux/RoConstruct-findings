// roc 2012-06 0051e590  unit: RBX::Network::P8Player::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0051e590
//
// 0051e590  51                   push ecx
// 0051e591  6a10                 push 0x10
// 0051e593  c744240400000000     mov dword ptr [esp + 4], 0
// 0051e59b  e87a3b4600           call 0x98211a
// 0051e5a0  83c404               add esp, 4
// 0051e5a3  85c0                 test eax, eax
// 0051e5a5  7416                 je 0x51e5bd
// 0051e5a7  c70054f8b600         mov dword ptr [eax], 0xb6f854
// 0051e5ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051e5b1  894808               mov dword ptr [eax + 8], ecx
// 0051e5b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051e5b8  89500c               mov dword ptr [eax + 0xc], edx
// 0051e5bb  eb02                 jmp 0x51e5bf
// 0051e5bd  33c0                 xor eax, eax
// 0051e5bf  56                   push esi
// 0051e5c0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051e5c4  6a00                 push 0
// 0051e5c6  8906                 mov dword ptr [esi], eax
// 0051e5c8  e8473b4600           call 0x982114
// 0051e5cd  83c404               add esp, 4
// 0051e5d0  8bc6                 mov eax, esi
// 0051e5d2  5e                   pop esi
// 0051e5d3  59                   pop ecx
// 0051e5d4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
