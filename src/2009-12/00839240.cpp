// roc 2009-12 00839240  unit: CXTPDockingPaneManager  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839240
//
// 00839240  837c240400           cmp dword ptr [esp + 4], 0
// 00839245  56                   push esi
// 00839246  57                   push edi
// 00839247  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0083924b  8bf1                 mov esi, ecx
// 0083924d  7452                 je 0x8392a1
// 0083924f  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00839255  3bc7                 cmp eax, edi
// 00839257  7471                 je 0x8392ca
// 00839259  85c0                 test eax, eax
// 0083925b  7417                 je 0x839274
// 0083925d  6a00                 push 0
// 0083925f  6a00                 push 0
// 00839261  50                   push eax
// 00839262  6a0f                 push 0xf
// 00839264  e8b7f2ffff           call 0x838520
// 00839269  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 0083926f  e868abfbff           call 0x7f3ddc
// 00839274  89bed8000000         mov dword ptr [esi + 0xd8], edi
// 0083927a  85ff                 test edi, edi
// 0083927c  744c                 je 0x8392ca
// 0083927e  83c704               add edi, 4
// 00839281  57                   push edi
// 00839282  ff150cb29800         call dword ptr [0x98b20c]
// 00839288  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0083928e  6a00                 push 0
// 00839290  6a00                 push 0
// 00839292  50                   push eax
// 00839293  6a0e                 push 0xe
// 00839295  8bce                 mov ecx, esi
// 00839297  e884f2ffff           call 0x838520
// 0083929c  5f                   pop edi
// 0083929d  5e                   pop esi
// 0083929e  c20800               ret 8
// 008392a1  85ff                 test edi, edi
// 008392a3  7425                 je 0x8392ca
// 008392a5  39bed8000000         cmp dword ptr [esi + 0xd8], edi
// 008392ab  751d                 jne 0x8392ca
// 008392ad  6a00                 push 0
// 008392af  6a00                 push 0
// 008392b1  57                   push edi
// 008392b2  6a0f                 push 0xf
// 008392b4  c786d800000000000000 mov dword ptr [esi + 0xd8], 0
// 008392be  e85df2ffff           call 0x838520
// 008392c3  8bcf                 mov ecx, edi
// 008392c5  e812abfbff           call 0x7f3ddc
// 008392ca  5f                   pop edi
// 008392cb  5e                   pop esi
// 008392cc  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnActivatePane@CXTPDockingPaneManager@@MAEXHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
