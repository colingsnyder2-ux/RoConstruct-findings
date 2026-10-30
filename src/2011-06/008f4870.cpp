// roc 2011-06 008f4870  unit: CXTPTabPaintManager::CColorSetWinXP  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f4870
//
// 008f4870  83ec10               sub esp, 0x10
// 008f4873  56                   push esi
// 008f4874  8bf1                 mov esi, ecx
// 008f4876  57                   push edi
// 008f4877  8d8e08020000         lea ecx, [esi + 0x208]
// 008f487d  e84e8af8ff           call 0x87d2d0
// 008f4882  85c0                 test eax, eax
// 008f4884  0f84b9000000         je 0x8f4943
// 008f488a  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 008f4890  8b742430             mov esi, dword ptr [esp + 0x30]
// 008f4894  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008f489a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008f489e  8b11                 mov edx, dword ptr [ecx]
// 008f48a0  8b520c               mov edx, dword ptr [edx + 0xc]
// 008f48a3  56                   push esi
// 008f48a4  83ec10               sub esp, 0x10
// 008f48a7  8bc4                 mov eax, esp
// 008f48a9  8938                 mov dword ptr [eax], edi
// 008f48ab  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008f48af  897804               mov dword ptr [eax + 4], edi
// 008f48b2  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008f48b6  897808               mov dword ptr [eax + 8], edi
// 008f48b9  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 008f48bd  89780c               mov dword ptr [eax + 0xc], edi
// 008f48c0  8d44241c             lea eax, [esp + 0x1c]
// 008f48c4  50                   push eax
// 008f48c5  ffd2                 call edx
// 008f48c7  8b06                 mov eax, dword ptr [esi]
// 008f48c9  8b5048               mov edx, dword ptr [eax + 0x48]
// 008f48cc  8bce                 mov ecx, esi
// 008f48ce  ffd2                 call edx
// 008f48d0  83f803               cmp eax, 3
// 008f48d3  776e                 ja 0x8f4943
// 008f48d5  ff24854c498f00       jmp dword ptr [eax*4 + 0x8f494c]
// 008f48dc  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f48e0  8d48ff               lea ecx, [eax - 1]
// 008f48e3  51                   push ecx
// 008f48e4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f48e8  8d5101               lea edx, [ecx + 1]
// 008f48eb  52                   push edx
// 008f48ec  83c0fe               add eax, -2
// 008f48ef  50                   push eax
// 008f48f0  51                   push ecx
// 008f48f1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f48f5  e836800d00           call 0x9cc930
// 008f48fa  5f                   pop edi
// 008f48fb  5e                   pop esi
// 008f48fc  83c410               add esp, 0x10
// 008f48ff  c21800               ret 0x18
// 008f4902  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f4906  8d4801               lea ecx, [eax + 1]
// 008f4909  51                   push ecx
// 008f490a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f490e  8d5101               lea edx, [ecx + 1]
// 008f4911  52                   push edx
// 008f4912  50                   push eax
// 008f4913  51                   push ecx
// 008f4914  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f4918  e813800d00           call 0x9cc930
// 008f491d  5f                   pop edi
// 008f491e  5e                   pop esi
// 008f491f  83c410               add esp, 0x10
// 008f4922  c21800               ret 0x18
// 008f4925  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f4929  8d4801               lea ecx, [eax + 1]
// 008f492c  51                   push ecx
// 008f492d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f4931  8d51ff               lea edx, [ecx - 1]
// 008f4934  52                   push edx
// 008f4935  83c1fe               add ecx, -2
// 008f4938  50                   push eax
// 008f4939  51                   push ecx
// 008f493a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f493e  e8ed7f0d00           call 0x9cc930
// 008f4943  5f                   pop edi
// 008f4944  5e                   pop esi
// 008f4945  83c410               add esp, 0x10
// 008f4948  c21800               ret 0x18
// 008f494b  90                   nop 
// 008f494c  02498f               add cl, byte ptr [ecx - 0x71]
// 008f494f  0002                 add byte ptr [edx], al
// 008f4951  49                   dec ecx
// 008f4952  8f00                 pop dword ptr [eax]
// 008f4954  dc488f               fmul qword ptr [eax - 0x71]
// copied from an identical function in another client (function ?SelectClipRgn@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp