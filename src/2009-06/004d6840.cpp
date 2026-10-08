// roc 2009-06 004d6840  unit: RBX::Network::Server  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d6840
//
// 004d6840  51                   push ecx
// 004d6841  6a10                 push 0x10
// 004d6843  c744240400000000     mov dword ptr [esp + 4], 0
// 004d684b  e8e8212400           call 0x718a38
// 004d6850  83c404               add esp, 4
// 004d6853  85c0                 test eax, eax
// 004d6855  7416                 je 0x4d686d
// 004d6857  c70028608c00         mov dword ptr [eax], 0x8c6028
// 004d685d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d6861  894808               mov dword ptr [eax + 8], ecx
// 004d6864  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d6868  89500c               mov dword ptr [eax + 0xc], edx
// 004d686b  eb02                 jmp 0x4d686f
// 004d686d  33c0                 xor eax, eax
// 004d686f  56                   push esi
// 004d6870  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d6874  6a00                 push 0
// 004d6876  8906                 mov dword ptr [esi], eax
// 004d6878  e8b5212400           call 0x718a32
// 004d687d  83c404               add esp, 4
// 004d6880  8bc6                 mov eax, esi
// 004d6882  5e                   pop esi
// 004d6883  59                   pop ecx
// 004d6884  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
