// roc 2007-03 005ac5f0  unit: seg_005a0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ac5f0
//
// 005ac5f0  83ec10               sub esp, 0x10
// 005ac5f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ac5f7  53                   push ebx
// 005ac5f8  55                   push ebp
// 005ac5f9  56                   push esi
// 005ac5fa  57                   push edi
// 005ac5fb  8bf1                 mov esi, ecx
// 005ac5fd  50                   push eax
// 005ac5fe  8d4c2414             lea ecx, [esp + 0x14]
// 005ac602  51                   push ecx
// 005ac603  8bce                 mov ecx, esi
// 005ac605  e8e66a0600           call 0x6130f0
// 005ac60a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005ac60e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005ac612  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005ac616  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ac61a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005ac622  8b542424             mov edx, dword ptr [esp + 0x24]
// 005ac626  52                   push edx
// 005ac627  8d442428             lea eax, [esp + 0x28]
// 005ac62b  50                   push eax
// 005ac62c  57                   push edi
// 005ac62d  53                   push ebx
// 005ac62e  55                   push ebp
// 005ac62f  51                   push ecx
// 005ac630  e81b6d0600           call 0x613350
// 005ac635  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ac639  83c418               add esp, 0x18
// 005ac63c  57                   push edi
// 005ac63d  53                   push ebx
// 005ac63e  55                   push ebp
// 005ac63f  52                   push edx
// 005ac640  8d442420             lea eax, [esp + 0x20]
// 005ac644  50                   push eax
// 005ac645  8bce                 mov ecx, esi
// 005ac647  e874120000           call 0x5ad8c0
// 005ac64c  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ac650  5f                   pop edi
// 005ac651  5e                   pop esi
// 005ac652  5d                   pop ebp
// 005ac653  5b                   pop ebx
// 005ac654  83c410               add esp, 0x10
// 005ac657  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@QAEIABQAVClump@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
