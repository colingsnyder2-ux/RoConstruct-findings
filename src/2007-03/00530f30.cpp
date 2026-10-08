// roc 2007-03 00530f30  unit: seg_00530000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00530f30
//
// 00530f30  83ec10               sub esp, 0x10
// 00530f33  8b442414             mov eax, dword ptr [esp + 0x14]
// 00530f37  53                   push ebx
// 00530f38  55                   push ebp
// 00530f39  56                   push esi
// 00530f3a  57                   push edi
// 00530f3b  8bf1                 mov esi, ecx
// 00530f3d  50                   push eax
// 00530f3e  8d4c2414             lea ecx, [esp + 0x14]
// 00530f42  51                   push ecx
// 00530f43  8bce                 mov ecx, esi
// 00530f45  e8364e0300           call 0x565d80
// 00530f4a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00530f4e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00530f52  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00530f56  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00530f5a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00530f62  8b542424             mov edx, dword ptr [esp + 0x24]
// 00530f66  52                   push edx
// 00530f67  8d442428             lea eax, [esp + 0x28]
// 00530f6b  50                   push eax
// 00530f6c  57                   push edi
// 00530f6d  53                   push ebx
// 00530f6e  55                   push ebp
// 00530f6f  51                   push ecx
// 00530f70  e89b35edff           call 0x404510
// 00530f75  8b542428             mov edx, dword ptr [esp + 0x28]
// 00530f79  83c418               add esp, 0x18
// 00530f7c  57                   push edi
// 00530f7d  53                   push ebx
// 00530f7e  55                   push ebp
// 00530f7f  52                   push edx
// 00530f80  8d442420             lea eax, [esp + 0x20]
// 00530f84  50                   push eax
// 00530f85  8bce                 mov ecx, esi
// 00530f87  e824fdffff           call 0x530cb0
// 00530f8c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00530f90  5f                   pop edi
// 00530f91  5e                   pop esi
// 00530f92  5d                   pop ebp
// 00530f93  5b                   pop ebx
// 00530f94  83c410               add esp, 0x10
// 00530f97  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@QAEIABQAVClump@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
