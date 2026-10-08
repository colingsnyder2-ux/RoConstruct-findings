// roc 2011-06 006c8000  unit: RBX::P8GuiTextMixin::?$GetSetImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006c8000
//
// 006c8000  51                   push ecx
// 006c8001  6a10                 push 0x10
// 006c8003  c744240400000000     mov dword ptr [esp + 4], 0
// 006c800b  e84e201400           call 0x80a05e
// 006c8010  83c404               add esp, 4
// 006c8013  85c0                 test eax, eax
// 006c8015  741e                 je 0x6c8035
// 006c8017  c700784baa00         mov dword ptr [eax], 0xaa4b78
// 006c801d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c8021  894808               mov dword ptr [eax + 8], ecx
// 006c8024  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c8028  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c802c  89500c               mov dword ptr [eax + 0xc], edx
// 006c802f  8901                 mov dword ptr [ecx], eax
// 006c8031  8bc1                 mov eax, ecx
// 006c8033  59                   pop ecx
// 006c8034  c3                   ret 
// 006c8035  8b442408             mov eax, dword ptr [esp + 8]
// 006c8039  33c9                 xor ecx, ecx
// 006c803b  8908                 mov dword ptr [eax], ecx
// 006c803d  59                   pop ecx
// 006c803e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
