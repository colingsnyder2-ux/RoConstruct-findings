// roc 2007-03 00424090  unit: seg_00420000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00424090
//
// 00424090  83ec10               sub esp, 0x10
// 00424093  8b442414             mov eax, dword ptr [esp + 0x14]
// 00424097  53                   push ebx
// 00424098  55                   push ebp
// 00424099  56                   push esi
// 0042409a  57                   push edi
// 0042409b  8bf1                 mov esi, ecx
// 0042409d  50                   push eax
// 0042409e  8d4c2414             lea ecx, [esp + 0x14]
// 004240a2  51                   push ecx
// 004240a3  8bce                 mov ecx, esi
// 004240a5  e866c40700           call 0x4a0510
// 004240aa  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004240ae  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004240b2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004240b6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004240ba  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004240c2  8b542424             mov edx, dword ptr [esp + 0x24]
// 004240c6  52                   push edx
// 004240c7  8d442428             lea eax, [esp + 0x28]
// 004240cb  50                   push eax
// 004240cc  57                   push edi
// 004240cd  53                   push ebx
// 004240ce  55                   push ebp
// 004240cf  51                   push ecx
// 004240d0  e83b04feff           call 0x404510
// 004240d5  8b542428             mov edx, dword ptr [esp + 0x28]
// 004240d9  83c418               add esp, 0x18
// 004240dc  57                   push edi
// 004240dd  53                   push ebx
// 004240de  55                   push ebp
// 004240df  52                   push edx
// 004240e0  8d442420             lea eax, [esp + 0x20]
// 004240e4  50                   push eax
// 004240e5  8bce                 mov ecx, esi
// 004240e7  e844fdffff           call 0x423e30
// 004240ec  8b442424             mov eax, dword ptr [esp + 0x24]
// 004240f0  5f                   pop edi
// 004240f1  5e                   pop esi
// 004240f2  5d                   pop ebp
// 004240f3  5b                   pop ebx
// 004240f4  83c410               add esp, 0x10
// 004240f7  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@QAEIABQAVClump@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
