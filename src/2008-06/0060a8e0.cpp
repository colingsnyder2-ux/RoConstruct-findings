// roc 2008-06 0060a8e0  unit: RBX::VHole::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060a8e0
//
// 0060a8e0  51                   push ecx
// 0060a8e1  6a18                 push 0x18
// 0060a8e3  c744240400000000     mov dword ptr [esp + 4], 0
// 0060a8eb  e830600900           call 0x6a0920
// 0060a8f0  83c404               add esp, 4
// 0060a8f3  85c0                 test eax, eax
// 0060a8f5  742c                 je 0x60a923
// 0060a8f7  c700682b8400         mov dword ptr [eax], 0x842b68
// 0060a8fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060a901  894808               mov dword ptr [eax + 8], ecx
// 0060a904  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060a908  89500c               mov dword ptr [eax + 0xc], edx
// 0060a90b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060a90f  894810               mov dword ptr [eax + 0x10], ecx
// 0060a912  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060a916  8b542418             mov edx, dword ptr [esp + 0x18]
// 0060a91a  895014               mov dword ptr [eax + 0x14], edx
// 0060a91d  8901                 mov dword ptr [ecx], eax
// 0060a91f  8bc1                 mov eax, ecx
// 0060a921  59                   pop ecx
// 0060a922  c3                   ret 
// 0060a923  8b442408             mov eax, dword ptr [esp + 8]
// 0060a927  33c9                 xor ecx, ecx
// 0060a929  8908                 mov dword ptr [eax], ecx
// 0060a92b  59                   pop ecx
// 0060a92c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
