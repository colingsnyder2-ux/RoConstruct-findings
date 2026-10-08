// roc 2012-06 007619c0  unit: RBX::Explosion  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007619c0
//
// 007619c0  51                   push ecx
// 007619c1  6a18                 push 0x18
// 007619c3  c744240400000000     mov dword ptr [esp + 4], 0
// 007619cb  e84a072200           call 0x98211a
// 007619d0  83c404               add esp, 4
// 007619d3  85c0                 test eax, eax
// 007619d5  7424                 je 0x7619fb
// 007619d7  c700d4eaba00         mov dword ptr [eax], 0xbaead4
// 007619dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007619e1  894808               mov dword ptr [eax + 8], ecx
// 007619e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007619e8  89500c               mov dword ptr [eax + 0xc], edx
// 007619eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007619ef  894810               mov dword ptr [eax + 0x10], ecx
// 007619f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007619f6  895014               mov dword ptr [eax + 0x14], edx
// 007619f9  eb02                 jmp 0x7619fd
// 007619fb  33c0                 xor eax, eax
// 007619fd  56                   push esi
// 007619fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00761a02  6a00                 push 0
// 00761a04  8906                 mov dword ptr [esi], eax
// 00761a06  e809072200           call 0x982114
// 00761a0b  83c404               add esp, 4
// 00761a0e  8bc6                 mov eax, esi
// 00761a10  5e                   pop esi
// 00761a11  59                   pop ecx
// 00761a12  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
