// roc 2012-06 006d35c0  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d35c0
//
// 006d35c0  51                   push ecx
// 006d35c1  6a18                 push 0x18
// 006d35c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006d35cb  e84aeb2a00           call 0x98211a
// 006d35d0  83c404               add esp, 4
// 006d35d3  85c0                 test eax, eax
// 006d35d5  7424                 je 0x6d35fb
// 006d35d7  c7004c8eb900         mov dword ptr [eax], 0xb98e4c
// 006d35dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d35e1  894808               mov dword ptr [eax + 8], ecx
// 006d35e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d35e8  89500c               mov dword ptr [eax + 0xc], edx
// 006d35eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d35ef  894810               mov dword ptr [eax + 0x10], ecx
// 006d35f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d35f6  895014               mov dword ptr [eax + 0x14], edx
// 006d35f9  eb02                 jmp 0x6d35fd
// 006d35fb  33c0                 xor eax, eax
// 006d35fd  56                   push esi
// 006d35fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d3602  6a00                 push 0
// 006d3604  8906                 mov dword ptr [esi], eax
// 006d3606  e809eb2a00           call 0x982114
// 006d360b  83c404               add esp, 4
// 006d360e  8bc6                 mov eax, esi
// 006d3610  5e                   pop esi
// 006d3611  59                   pop ecx
// 006d3612  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
