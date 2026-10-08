// roc 2011-06 006c8040  unit: RBX::P8GuiTextMixin::?$GetSetImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006c8040
//
// 006c8040  51                   push ecx
// 006c8041  6a10                 push 0x10
// 006c8043  c744240400000000     mov dword ptr [esp + 4], 0
// 006c804b  e80e201400           call 0x80a05e
// 006c8050  83c404               add esp, 4
// 006c8053  85c0                 test eax, eax
// 006c8055  741e                 je 0x6c8075
// 006c8057  c7008c4baa00         mov dword ptr [eax], 0xaa4b8c
// 006c805d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c8061  894808               mov dword ptr [eax + 8], ecx
// 006c8064  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c8068  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c806c  89500c               mov dword ptr [eax + 0xc], edx
// 006c806f  8901                 mov dword ptr [ecx], eax
// 006c8071  8bc1                 mov eax, ecx
// 006c8073  59                   pop ecx
// 006c8074  c3                   ret 
// 006c8075  8b442408             mov eax, dword ptr [esp + 8]
// 006c8079  33c9                 xor ecx, ecx
// 006c807b  8908                 mov dword ptr [eax], ecx
// 006c807d  59                   pop ecx
// 006c807e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
