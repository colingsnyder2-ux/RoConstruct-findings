// roc 2012-06 0089ff90  unit: RBX::P8Mouse::?$GetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0089ff90
//
// 0089ff90  51                   push ecx
// 0089ff91  6a10                 push 0x10
// 0089ff93  c744240400000000     mov dword ptr [esp + 4], 0
// 0089ff9b  e87a210e00           call 0x98211a
// 0089ffa0  83c404               add esp, 4
// 0089ffa3  85c0                 test eax, eax
// 0089ffa5  7416                 je 0x89ffbd
// 0089ffa7  c70018debd00         mov dword ptr [eax], 0xbdde18
// 0089ffad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089ffb1  894808               mov dword ptr [eax + 8], ecx
// 0089ffb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0089ffb8  89500c               mov dword ptr [eax + 0xc], edx
// 0089ffbb  eb02                 jmp 0x89ffbf
// 0089ffbd  33c0                 xor eax, eax
// 0089ffbf  56                   push esi
// 0089ffc0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0089ffc4  6a00                 push 0
// 0089ffc6  8906                 mov dword ptr [esi], eax
// 0089ffc8  e847210e00           call 0x982114
// 0089ffcd  83c404               add esp, 4
// 0089ffd0  8bc6                 mov eax, esi
// 0089ffd2  5e                   pop esi
// 0089ffd3  59                   pop ecx
// 0089ffd4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
