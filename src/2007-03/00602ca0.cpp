// roc 2007-03 00602ca0  unit: seg_00600000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00602ca0
//
// 00602ca0  51                   push ecx
// 00602ca1  6a18                 push 0x18
// 00602ca3  c744240400000000     mov dword ptr [esp + 4], 0
// 00602cab  e858b40100           call 0x61e108
// 00602cb0  83c404               add esp, 4
// 00602cb3  85c0                 test eax, eax
// 00602cb5  7424                 je 0x602cdb
// 00602cb7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00602cbb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00602cbf  894808               mov dword ptr [eax + 8], ecx
// 00602cc2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00602cc6  89500c               mov dword ptr [eax + 0xc], edx
// 00602cc9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00602ccd  c700b80b7c00         mov dword ptr [eax], 0x7c0bb8
// 00602cd3  894810               mov dword ptr [eax + 0x10], ecx
// 00602cd6  895014               mov dword ptr [eax + 0x14], edx
// 00602cd9  eb02                 jmp 0x602cdd
// 00602cdb  33c0                 xor eax, eax
// 00602cdd  56                   push esi
// 00602cde  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00602ce2  6a00                 push 0
// 00602ce4  c744240800000000     mov dword ptr [esp + 8], 0
// 00602cec  8906                 mov dword ptr [esi], eax
// 00602cee  e8fdb30100           call 0x61e0f0
// 00602cf3  83c404               add esp, 4
// 00602cf6  8bc6                 mov eax, esi
// 00602cf8  5e                   pop esi
// 00602cf9  59                   pop ecx
// 00602cfa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
