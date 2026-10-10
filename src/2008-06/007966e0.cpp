// roc 2008-06 007966e0  unit: CXTPRibbonTabPopupToolBar  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007966e0
//
// 007966e0  53                   push ebx
// 007966e1  56                   push esi
// 007966e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007966e6  8b4660               mov eax, dword ptr [esi + 0x60]
// 007966e9  57                   push edi
// 007966ea  50                   push eax
// 007966eb  8bd9                 mov ebx, ecx
// 007966ed  e8be4af1ff           call 0x6ab1b0
// 007966f2  50                   push eax
// 007966f3  e82ea5f0ff           call 0x6a0c26
// 007966f8  8bf8                 mov edi, eax
// 007966fa  83c408               add esp, 8
// 007966fd  85ff                 test edi, edi
// 007966ff  0f84b7000000         je 0x7967bc
// 00796705  837e7000             cmp dword ptr [esi + 0x70], 0
// 00796709  0f858f000000         jne 0x79679e
// 0079670f  83bfd000000002       cmp dword ptr [edi + 0xd0], 2
// 00796716  0f8582000000         jne 0x79679e
// 0079671c  8bb758010000         mov esi, dword ptr [edi + 0x158]
// 00796722  85f6                 test esi, esi
// 00796724  0f8492000000         je 0x7967bc
// 0079672a  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0079672d  85c0                 test eax, eax
// 0079672f  0f8487000000         je 0x7967bc
// 00796735  8b13                 mov edx, dword ptr [ebx]
// 00796737  50                   push eax
// 00796738  8b82b4010000         mov eax, dword ptr [edx + 0x1b4]
// 0079673e  8bcb                 mov ecx, ebx
// 00796740  ffd0                 call eax
// 00796742  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00796745  8b11                 mov edx, dword ptr [ecx]
// 00796747  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 0079674d  ffd0                 call eax
// 0079674f  57                   push edi
// 00796750  8bce                 mov ecx, esi
// 00796752  e8f91e0000           call 0x798650
// 00796757  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0079675a  8b11                 mov edx, dword ptr [ecx]
// 0079675c  8bf8                 mov edi, eax
// 0079675e  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 00796764  ffd0                 call eax
// 00796766  8bf0                 mov esi, eax
// 00796768  85f6                 test esi, esi
// 0079676a  7450                 je 0x7967bc
// 0079676c  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 00796773  7447                 je 0x7967bc
// 00796775  85ff                 test edi, edi
// 00796777  7c43                 jl 0x7967bc
// 00796779  8bce                 mov ecx, esi
// 0079677b  e820f4f1ff           call 0x6b5ba0
// 00796780  3bf8                 cmp edi, eax
// 00796782  7d38                 jge 0x7967bc
// 00796784  57                   push edi
// 00796785  8bce                 mov ecx, esi
// 00796787  e824f4f1ff           call 0x6b5bb0
// 0079678c  8b10                 mov edx, dword ptr [eax]
// 0079678e  8bc8                 mov ecx, eax
// 00796790  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 00796796  ffd0                 call eax
// 00796798  5f                   pop edi
// 00796799  5e                   pop esi
// 0079679a  5b                   pop ebx
// 0079679b  c20400               ret 4
// 0079679e  8b17                 mov edx, dword ptr [edi]
// 007967a0  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007967a6  6a00                 push 0
// 007967a8  8bcf                 mov ecx, edi
// 007967aa  ffd0                 call eax
// 007967ac  85c0                 test eax, eax
// 007967ae  740c                 je 0x7967bc
// 007967b0  8b17                 mov edx, dword ptr [edi]
// 007967b2  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 007967b8  8bcf                 mov ecx, edi
// 007967ba  ffd0                 call eax
// 007967bc  5f                   pop edi
// 007967bd  5e                   pop esi
// 007967be  5b                   pop ebx
// 007967bf  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnKeyboardTip@CXTPRibbonTabPopupToolBar@@UAEXPAVCXTPCommandBarKeyboardTip@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
