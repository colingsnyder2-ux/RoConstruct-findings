// roc 2009-12 00838a10  unit: CXTPDockingPaneManager  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838a10
//
// 00838a10  53                   push ebx
// 00838a11  e86afcffff           call 0x838680
// 00838a16  8b5804               mov ebx, dword ptr [eax + 4]
// 00838a19  85db                 test ebx, ebx
// 00838a1b  745d                 je 0x838a7a
// 00838a1d  56                   push esi
// 00838a1e  57                   push edi
// 00838a1f  90                   nop 
// 00838a20  8bf3                 mov esi, ebx
// 00838a22  8b4608               mov eax, dword ptr [esi + 8]
// 00838a25  8b7830               mov edi, dword ptr [eax + 0x30]
// 00838a28  8b1b                 mov ebx, dword ptr [ebx]
// 00838a2a  8d4820               lea ecx, [eax + 0x20]
// 00838a2d  8b01                 mov eax, dword ptr [ecx]
// 00838a2f  8b5018               mov edx, dword ptr [eax + 0x18]
// 00838a32  ffd2                 call edx
// 00838a34  85c0                 test eax, eax
// 00838a36  743c                 je 0x838a74
// 00838a38  85ff                 test edi, edi
// 00838a3a  7438                 je 0x838a74
// 00838a3c  8b4710               mov eax, dword ptr [edi + 0x10]
// 00838a3f  85c0                 test eax, eax
// 00838a41  7406                 je 0x838a49
// 00838a43  83781805             cmp dword ptr [eax + 0x18], 5
// 00838a47  742b                 je 0x838a74
// 00838a49  8b4608               mov eax, dword ptr [esi + 8]
// 00838a4c  8d4820               lea ecx, [eax + 0x20]
// 00838a4f  8b01                 mov eax, dword ptr [ecx]
// 00838a51  8b5018               mov edx, dword ptr [eax + 0x18]
// 00838a54  ffd2                 call edx
// 00838a56  50                   push eax
// 00838a57  e8645a0700           call 0x8ae4c0
// 00838a5c  50                   push eax
// 00838a5d  e8dcb1fbff           call 0x7f3c3e
// 00838a62  83c408               add esp, 8
// 00838a65  897e14               mov dword ptr [esi + 0x14], edi
// 00838a68  85c0                 test eax, eax
// 00838a6a  7405                 je 0x838a71
// 00838a6c  897e0c               mov dword ptr [esi + 0xc], edi
// 00838a6f  eb03                 jmp 0x838a74
// 00838a71  897e10               mov dword ptr [esi + 0x10], edi
// 00838a74  85db                 test ebx, ebx
// 00838a76  75a8                 jne 0x838a20
// 00838a78  5f                   pop edi
// 00838a79  5e                   pop esi
// 00838a7a  5b                   pop ebx
// 00838a7b  c3                   ret 
// copied from an identical function in another client (function ?SyncPanesState@CXTPDockingPaneManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp