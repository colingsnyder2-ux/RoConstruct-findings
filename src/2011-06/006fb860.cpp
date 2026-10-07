// roc 2011-06 006fb860  unit: RBX::Fire  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fb860
//
// 006fb860  51                   push ecx
// 006fb861  6a18                 push 0x18
// 006fb863  c744240400000000     mov dword ptr [esp + 4], 0
// 006fb86b  e8eee71000           call 0x80a05e
// 006fb870  83c404               add esp, 4
// 006fb873  85c0                 test eax, eax
// 006fb875  742c                 je 0x6fb8a3
// 006fb877  c70014b1aa00         mov dword ptr [eax], 0xaab114
// 006fb87d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fb881  894808               mov dword ptr [eax + 8], ecx
// 006fb884  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fb888  89500c               mov dword ptr [eax + 0xc], edx
// 006fb88b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fb88f  894810               mov dword ptr [eax + 0x10], ecx
// 006fb892  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fb896  8b542418             mov edx, dword ptr [esp + 0x18]
// 006fb89a  895014               mov dword ptr [eax + 0x14], edx
// 006fb89d  8901                 mov dword ptr [ecx], eax
// 006fb89f  8bc1                 mov eax, ecx
// 006fb8a1  59                   pop ecx
// 006fb8a2  c3                   ret 
// 006fb8a3  8b442408             mov eax, dword ptr [esp + 8]
// 006fb8a7  33c9                 xor ecx, ecx
// 006fb8a9  8908                 mov dword ptr [eax], ecx
// 006fb8ab  59                   pop ecx
// 006fb8ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
