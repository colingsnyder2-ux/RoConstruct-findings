// roc 2007-03 004a0e90  unit: seg_004a0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a0e90
//
// 004a0e90  83ec10               sub esp, 0x10
// 004a0e93  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a0e97  53                   push ebx
// 004a0e98  55                   push ebp
// 004a0e99  56                   push esi
// 004a0e9a  57                   push edi
// 004a0e9b  8bf1                 mov esi, ecx
// 004a0e9d  50                   push eax
// 004a0e9e  8d4c2414             lea ecx, [esp + 0x14]
// 004a0ea2  51                   push ecx
// 004a0ea3  8bce                 mov ecx, esi
// 004a0ea5  e866f6ffff           call 0x4a0510
// 004a0eaa  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004a0eae  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004a0eb2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004a0eb6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a0eba  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004a0ec2  8b542424             mov edx, dword ptr [esp + 0x24]
// 004a0ec6  52                   push edx
// 004a0ec7  8d442428             lea eax, [esp + 0x28]
// 004a0ecb  50                   push eax
// 004a0ecc  57                   push edi
// 004a0ecd  53                   push ebx
// 004a0ece  55                   push ebp
// 004a0ecf  51                   push ecx
// 004a0ed0  e83b36f6ff           call 0x404510
// 004a0ed5  8b542428             mov edx, dword ptr [esp + 0x28]
// 004a0ed9  83c418               add esp, 0x18
// 004a0edc  57                   push edi
// 004a0edd  53                   push ebx
// 004a0ede  55                   push ebp
// 004a0edf  52                   push edx
// 004a0ee0  8d442420             lea eax, [esp + 0x20]
// 004a0ee4  50                   push eax
// 004a0ee5  8bce                 mov ecx, esi
// 004a0ee7  e854f5ffff           call 0x4a0440
// 004a0eec  8b442424             mov eax, dword ptr [esp + 0x24]
// 004a0ef0  5f                   pop edi
// 004a0ef1  5e                   pop esi
// 004a0ef2  5d                   pop ebp
// 004a0ef3  5b                   pop ebx
// 004a0ef4  83c410               add esp, 0x10
// 004a0ef7  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@QAEIABQAVClump@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
