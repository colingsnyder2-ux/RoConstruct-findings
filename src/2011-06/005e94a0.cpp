// roc 2011-06 005e94a0  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e94a0
//
// 005e94a0  51                   push ecx
// 005e94a1  6a10                 push 0x10
// 005e94a3  c744240400000000     mov dword ptr [esp + 4], 0
// 005e94ab  e8ae0b2200           call 0x80a05e
// 005e94b0  83c404               add esp, 4
// 005e94b3  85c0                 test eax, eax
// 005e94b5  741e                 je 0x5e94d5
// 005e94b7  c700d810a900         mov dword ptr [eax], 0xa910d8
// 005e94bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e94c1  894808               mov dword ptr [eax + 8], ecx
// 005e94c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e94c8  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e94cc  89500c               mov dword ptr [eax + 0xc], edx
// 005e94cf  8901                 mov dword ptr [ecx], eax
// 005e94d1  8bc1                 mov eax, ecx
// 005e94d3  59                   pop ecx
// 005e94d4  c3                   ret 
// 005e94d5  8b442408             mov eax, dword ptr [esp + 8]
// 005e94d9  33c9                 xor ecx, ecx
// 005e94db  8908                 mov dword ptr [eax], ecx
// 005e94dd  59                   pop ecx
// 005e94de  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
