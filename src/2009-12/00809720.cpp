// roc 2009-12 00809720  unit: CXTPCommandBar  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00809720
//
// 00809720  83ec08               sub esp, 8
// 00809723  53                   push ebx
// 00809724  55                   push ebp
// 00809725  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00809729  56                   push esi
// 0080972a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0080972e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00809731  2b4604               sub eax, dword ptr [esi + 4]
// 00809734  57                   push edi
// 00809735  894c2414             mov dword ptr [esp + 0x14], ecx
// 00809739  8b4e08               mov ecx, dword ptr [esi + 8]
// 0080973c  2b0e                 sub ecx, dword ptr [esi]
// 0080973e  33ff                 xor edi, edi
// 00809740  57                   push edi
// 00809741  50                   push eax
// 00809742  51                   push ecx
// 00809743  55                   push ebp
// 00809744  897c2420             mov dword ptr [esp + 0x20], edi
// 00809748  e8f3f3ffff           call 0x808b40
// 0080974d  8bd8                 mov ebx, eax
// 0080974f  83c410               add esp, 0x10
// 00809752  895c2420             mov dword ptr [esp + 0x20], ebx
// 00809756  85db                 test ebx, ebx
// 00809758  0f84b6000000         je 0x809814
// 0080975e  55                   push ebp
// 0080975f  ff1554b19800         call dword ptr [0x98b154]
// 00809765  8bf8                 mov edi, eax
// 00809767  85ff                 test edi, edi
// 00809769  0f8490000000         je 0x8097ff
// 0080976f  53                   push ebx
// 00809770  57                   push edi
// 00809771  ff154cb19800         call dword ptr [0x98b14c]
// 00809777  8b5604               mov edx, dword ptr [esi + 4]
// 0080977a  8b1e                 mov ebx, dword ptr [esi]
// 0080977c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0080977f  682000cc00           push 0xcc0020
// 00809784  52                   push edx
// 00809785  53                   push ebx
// 00809786  89442428             mov dword ptr [esp + 0x28], eax
// 0080978a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0080978d  55                   push ebp
// 0080978e  2bc2                 sub eax, edx
// 00809790  50                   push eax
// 00809791  2bcb                 sub ecx, ebx
// 00809793  8b1d48b19800         mov ebx, dword ptr [0x98b148]
// 00809799  51                   push ecx
// 0080979a  6a00                 push 0
// 0080979c  6a00                 push 0
// 0080979e  57                   push edi
// 0080979f  ffd3                 call ebx
// 008097a1  85c0                 test eax, eax
// 008097a3  743f                 je 0x8097e4
// 008097a5  8b442424             mov eax, dword ptr [esp + 0x24]
// 008097a9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008097ad  50                   push eax
// 008097ae  6aff                 push -1
// 008097b0  6aff                 push -1
// 008097b2  51                   push ecx
// 008097b3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008097b7  e8d4faffff           call 0x809290
// 008097bc  89442410             mov dword ptr [esp + 0x10], eax
// 008097c0  85c0                 test eax, eax
// 008097c2  7420                 je 0x8097e4
// 008097c4  8b4604               mov eax, dword ptr [esi + 4]
// 008097c7  8b560c               mov edx, dword ptr [esi + 0xc]
// 008097ca  8b0e                 mov ecx, dword ptr [esi]
// 008097cc  682000cc00           push 0xcc0020
// 008097d1  6a00                 push 0
// 008097d3  6a00                 push 0
// 008097d5  57                   push edi
// 008097d6  2bd0                 sub edx, eax
// 008097d8  52                   push edx
// 008097d9  8b5608               mov edx, dword ptr [esi + 8]
// 008097dc  2bd1                 sub edx, ecx
// 008097de  52                   push edx
// 008097df  50                   push eax
// 008097e0  51                   push ecx
// 008097e1  55                   push ebp
// 008097e2  ffd3                 call ebx
// 008097e4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008097e8  85c0                 test eax, eax
// 008097ea  7408                 je 0x8097f4
// 008097ec  50                   push eax
// 008097ed  57                   push edi
// 008097ee  ff154cb19800         call dword ptr [0x98b14c]
// 008097f4  57                   push edi
// 008097f5  ff1540b19800         call dword ptr [0x98b140]
// 008097fb  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008097ff  53                   push ebx
// 00809800  ff153cb19800         call dword ptr [0x98b13c]
// 00809806  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080980a  5f                   pop edi
// 0080980b  5e                   pop esi
// 0080980c  5d                   pop ebp
// 0080980d  5b                   pop ebx
// 0080980e  83c408               add esp, 8
// 00809811  c20c00               ret 0xc
// 00809814  8bc7                 mov eax, edi
// 00809816  5f                   pop edi
// 00809817  5e                   pop esi
// 00809818  5d                   pop ebp
// 00809819  5b                   pop ebx
// 0080981a  83c408               add esp, 8
// 0080981d  c20c00               ret 0xc
// copied from an identical function in another client (function ?BlackWhiteBitmap@CXTPImageManager@@QAEHPAUHDC__@@ABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp