// roc 2009-12 00839670  unit: CXTPDockingPaneManager  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839670
//
// 00839670  56                   push esi
// 00839671  57                   push edi
// 00839672  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00839676  8d44240c             lea eax, [esp + 0xc]
// 0083967a  50                   push eax
// 0083967b  8bf1                 mov esi, ecx
// 0083967d  c70700000000         mov dword ptr [edi], 0
// 00839683  e818230000           call 0x83b9a0
// 00839688  85c0                 test eax, eax
// 0083968a  7e24                 jle 0x8396b0
// 0083968c  8b767c               mov esi, dword ptr [esi + 0x7c]
// 0083968f  3b4634               cmp eax, dword ptr [esi + 0x34]
// 00839692  7f1c                 jg 0x8396b0
// 00839694  48                   dec eax
// 00839695  50                   push eax
// 00839696  8d4e28               lea ecx, [esi + 0x28]
// 00839699  e882f2ffff           call 0x838920
// 0083969e  8b4008               mov eax, dword ptr [eax + 8]
// 008396a1  85c0                 test eax, eax
// 008396a3  740b                 je 0x8396b0
// 008396a5  6a01                 push 1
// 008396a7  8bc8                 mov ecx, eax
// 008396a9  e888cd0e00           call 0x926436
// 008396ae  8907                 mov dword ptr [edi], eax
// 008396b0  5f                   pop edi
// 008396b1  33c0                 xor eax, eax
// 008396b3  5e                   pop esi
// 008396b4  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleChild@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp