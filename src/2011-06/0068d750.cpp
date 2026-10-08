// roc 2011-06 0068d750  unit: RBX::P8GuiTextMixin::?$GetSetImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068d750
//
// 0068d750  51                   push ecx
// 0068d751  6a10                 push 0x10
// 0068d753  c744240400000000     mov dword ptr [esp + 4], 0
// 0068d75b  e8fec81700           call 0x80a05e
// 0068d760  83c404               add esp, 4
// 0068d763  85c0                 test eax, eax
// 0068d765  741e                 je 0x68d785
// 0068d767  c7003cf9a900         mov dword ptr [eax], 0xa9f93c
// 0068d76d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068d771  894808               mov dword ptr [eax + 8], ecx
// 0068d774  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0068d778  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068d77c  89500c               mov dword ptr [eax + 0xc], edx
// 0068d77f  8901                 mov dword ptr [ecx], eax
// 0068d781  8bc1                 mov eax, ecx
// 0068d783  59                   pop ecx
// 0068d784  c3                   ret 
// 0068d785  8b442408             mov eax, dword ptr [esp + 8]
// 0068d789  33c9                 xor ecx, ecx
// 0068d78b  8908                 mov dword ptr [eax], ecx
// 0068d78d  59                   pop ecx
// 0068d78e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
