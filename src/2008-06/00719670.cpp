// roc 2008-06 00719670  unit: CSelectionCaption  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00719670
//
// 00719670  83ec10               sub esp, 0x10
// 00719673  56                   push esi
// 00719674  57                   push edi
// 00719675  8bf1                 mov esi, ecx
// 00719677  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0071967a  8d442408             lea eax, [esp + 8]
// 0071967e  50                   push eax
// 0071967f  51                   push ecx
// 00719680  ff15842d8000         call dword ptr [0x802d84]
// 00719686  8b5620               mov edx, dword ptr [esi + 0x20]
// 00719689  52                   push edx
// 0071968a  ff15cc2c8000         call dword ptr [0x802ccc]
// 00719690  50                   push eax
// 00719691  e892290a00           call 0x7bc028
// 00719696  8bf8                 mov edi, eax
// 00719698  8b06                 mov eax, dword ptr [esi]
// 0071969a  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 007196a0  8d4c2408             lea ecx, [esp + 8]
// 007196a4  51                   push ecx
// 007196a5  57                   push edi
// 007196a6  8bce                 mov ecx, esi
// 007196a8  ffd2                 call edx
// 007196aa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007196ae  85c0                 test eax, eax
// 007196b0  741a                 je 0x7196cc
// 007196b2  50                   push eax
// 007196b3  8d8ed0000000         lea ecx, [esi + 0xd0]
// 007196b9  ff15b83e8000         call dword ptr [0x803eb8]
// 007196bf  8b06                 mov eax, dword ptr [esi]
// 007196c1  8b9078010000         mov edx, dword ptr [eax + 0x178]
// 007196c7  57                   push edi
// 007196c8  8bce                 mov ecx, esi
// 007196ca  ffd2                 call edx
// 007196cc  8b442420             mov eax, dword ptr [esp + 0x20]
// 007196d0  85c0                 test eax, eax
// 007196d2  7418                 je 0x7196ec
// 007196d4  8d4c2408             lea ecx, [esp + 8]
// 007196d8  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 007196de  8b06                 mov eax, dword ptr [esi]
// 007196e0  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 007196e6  51                   push ecx
// 007196e7  57                   push edi
// 007196e8  8bce                 mov ecx, esi
// 007196ea  ffd2                 call edx
// 007196ec  8b4704               mov eax, dword ptr [edi + 4]
// 007196ef  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007196f2  50                   push eax
// 007196f3  51                   push ecx
// 007196f4  ff15c02c8000         call dword ptr [0x802cc0]
// 007196fa  5f                   pop edi
// 007196fb  5e                   pop esi
// 007196fc  83c410               add esp, 0x10
// 007196ff  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaption.cpp (function ?UpdateCaption@CXTCaption@@UAEXPBDPAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
