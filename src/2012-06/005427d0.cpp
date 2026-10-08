// roc 2012-06 005427d0  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005427d0
//
// 005427d0  51                   push ecx
// 005427d1  6a10                 push 0x10
// 005427d3  c744240400000000     mov dword ptr [esp + 4], 0
// 005427db  e83af94300           call 0x98211a
// 005427e0  83c404               add esp, 4
// 005427e3  85c0                 test eax, eax
// 005427e5  7416                 je 0x5427fd
// 005427e7  c7001020b700         mov dword ptr [eax], 0xb72010
// 005427ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005427f1  894808               mov dword ptr [eax + 8], ecx
// 005427f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005427f8  89500c               mov dword ptr [eax + 0xc], edx
// 005427fb  eb02                 jmp 0x5427ff
// 005427fd  33c0                 xor eax, eax
// 005427ff  56                   push esi
// 00542800  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00542804  6a00                 push 0
// 00542806  8906                 mov dword ptr [esi], eax
// 00542808  e807f94300           call 0x982114
// 0054280d  83c404               add esp, 4
// 00542810  8bc6                 mov eax, esi
// 00542812  5e                   pop esi
// 00542813  59                   pop ecx
// 00542814  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
