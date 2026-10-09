// roc 2009-12 006dcfa0  unit: RBX::Camera  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dcfa0
//
// 006dcfa0  51                   push ecx
// 006dcfa1  6a18                 push 0x18
// 006dcfa3  c744240400000000     mov dword ptr [esp + 4], 0
// 006dcfab  e8b0681100           call 0x7f3860
// 006dcfb0  83c404               add esp, 4
// 006dcfb3  85c0                 test eax, eax
// 006dcfb5  7424                 je 0x6dcfdb
// 006dcfb7  c700d49c9d00         mov dword ptr [eax], 0x9d9cd4
// 006dcfbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dcfc1  894808               mov dword ptr [eax + 8], ecx
// 006dcfc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006dcfc8  89500c               mov dword ptr [eax + 0xc], edx
// 006dcfcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006dcfcf  894810               mov dword ptr [eax + 0x10], ecx
// 006dcfd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006dcfd6  895014               mov dword ptr [eax + 0x14], edx
// 006dcfd9  eb02                 jmp 0x6dcfdd
// 006dcfdb  33c0                 xor eax, eax
// 006dcfdd  56                   push esi
// 006dcfde  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006dcfe2  6a00                 push 0
// 006dcfe4  8906                 mov dword ptr [esi], eax
// 006dcfe6  e86f681100           call 0x7f385a
// 006dcfeb  83c404               add esp, 4
// 006dcfee  8bc6                 mov eax, esi
// 006dcff0  5e                   pop esi
// 006dcff1  59                   pop ecx
// 006dcff2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
