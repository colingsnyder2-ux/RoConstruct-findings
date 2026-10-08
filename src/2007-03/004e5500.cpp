// roc 2007-03 004e5500  unit: seg_004e0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e5500
//
// 004e5500  83ec10               sub esp, 0x10
// 004e5503  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e5507  53                   push ebx
// 004e5508  55                   push ebp
// 004e5509  56                   push esi
// 004e550a  57                   push edi
// 004e550b  8bf1                 mov esi, ecx
// 004e550d  50                   push eax
// 004e550e  8d4c2414             lea ecx, [esp + 0x14]
// 004e5512  51                   push ecx
// 004e5513  8bce                 mov ecx, esi
// 004e5515  e8f6affbff           call 0x4a0510
// 004e551a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004e551e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004e5522  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004e5526  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e552a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004e5532  8b542424             mov edx, dword ptr [esp + 0x24]
// 004e5536  52                   push edx
// 004e5537  8d442428             lea eax, [esp + 0x28]
// 004e553b  50                   push eax
// 004e553c  57                   push edi
// 004e553d  53                   push ebx
// 004e553e  55                   push ebp
// 004e553f  51                   push ecx
// 004e5540  e8cbeff1ff           call 0x404510
// 004e5545  8b542428             mov edx, dword ptr [esp + 0x28]
// 004e5549  83c418               add esp, 0x18
// 004e554c  57                   push edi
// 004e554d  53                   push ebx
// 004e554e  55                   push ebp
// 004e554f  52                   push edx
// 004e5550  8d442420             lea eax, [esp + 0x20]
// 004e5554  50                   push eax
// 004e5555  8bce                 mov ecx, esi
// 004e5557  e8a4f7ffff           call 0x4e4d00
// 004e555c  8b442424             mov eax, dword ptr [esp + 0x24]
// 004e5560  5f                   pop edi
// 004e5561  5e                   pop esi
// 004e5562  5d                   pop ebp
// 004e5563  5b                   pop ebx
// 004e5564  83c410               add esp, 0x10
// 004e5567  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@QAEIABQAVClump@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
