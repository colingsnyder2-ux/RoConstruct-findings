// roc 2009-06 007cef40  unit: CXTPDockingPaneAutoHidePanel  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cef40
//
// 007cef40  33c0                 xor eax, eax
// 007cef42  56                   push esi
// 007cef43  8b742408             mov esi, dword ptr [esp + 8]
// 007cef47  8906                 mov dword ptr [esi], eax
// 007cef49  894604               mov dword ptr [esi + 4], eax
// 007cef4c  894608               mov dword ptr [esi + 8], eax
// 007cef4f  89460c               mov dword ptr [esi + 0xc], eax
// 007cef52  894610               mov dword ptr [esi + 0x10], eax
// 007cef55  894614               mov dword ptr [esi + 0x14], eax
// 007cef58  894618               mov dword ptr [esi + 0x18], eax
// 007cef5b  89461c               mov dword ptr [esi + 0x1c], eax
// 007cef5e  b8007d0000           mov eax, 0x7d00
// 007cef63  57                   push edi
// 007cef64  8bf9                 mov edi, ecx
// 007cef66  8bc8                 mov ecx, eax
// 007cef68  894620               mov dword ptr [esi + 0x20], eax
// 007cef6b  894e24               mov dword ptr [esi + 0x24], ecx
// 007cef6e  8b87f8000000         mov eax, dword ptr [edi + 0xf8]
// 007cef74  85c0                 test eax, eax
// 007cef76  745a                 je 0x7cefd2
// 007cef78  83b8a401000000       cmp dword ptr [eax + 0x1a4], 0
// 007cef7f  7451                 je 0x7cefd2
// 007cef81  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 007cef87  8b5020               mov edx, dword ptr [eax + 0x20]
// 007cef8a  8d4820               lea ecx, [eax + 0x20]
// 007cef8d  8b4210               mov eax, dword ptr [edx + 0x10]
// 007cef90  56                   push esi
// 007cef91  ffd0                 call eax
// 007cef93  8b8ff8000000         mov ecx, dword ptr [edi + 0xf8]
// 007cef99  6a01                 push 1
// 007cef9b  56                   push esi
// 007cef9c  e8cf820000           call 0x7d7270
// 007cefa1  837c241000           cmp dword ptr [esp + 0x10], 0
// 007cefa6  742a                 je 0x7cefd2
// 007cefa8  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 007cefae  85ff                 test edi, edi
// 007cefb0  7415                 je 0x7cefc7
// 007cefb2  83ff01               cmp edi, 1
// 007cefb5  7410                 je 0x7cefc7
// 007cefb7  b804000000           mov eax, 4
// 007cefbc  01461c               add dword ptr [esi + 0x1c], eax
// 007cefbf  014624               add dword ptr [esi + 0x24], eax
// 007cefc2  5f                   pop edi
// 007cefc3  5e                   pop esi
// 007cefc4  c20800               ret 8
// 007cefc7  b804000000           mov eax, 4
// 007cefcc  014618               add dword ptr [esi + 0x18], eax
// 007cefcf  014620               add dword ptr [esi + 0x20], eax
// 007cefd2  5f                   pop edi
// 007cefd3  5e                   pop esi
// 007cefd4  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetMinMaxInfo@CXTPDockingPaneAutoHideWnd@@ABEXPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
