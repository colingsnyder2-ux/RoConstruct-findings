// roc 2009-12 0042a3c0  unit: VCMDIFrameWnd::?$CXTPCommandBarsSiteBase  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042a3c0
//
// 0042a3c0  53                   push ebx
// 0042a3c1  56                   push esi
// 0042a3c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042a3c6  8b4604               mov eax, dword ptr [esi + 4]
// 0042a3c9  57                   push edi
// 0042a3ca  8bd9                 mov ebx, ecx
// 0042a3cc  3d00010000           cmp eax, 0x100
// 0042a3d1  723c                 jb 0x42a40f
// 0042a3d3  3d09010000           cmp eax, 0x109
// 0042a3d8  7735                 ja 0x42a40f
// 0042a3da  8b4608               mov eax, dword ptr [esi + 8]
// 0042a3dd  83f80d               cmp eax, 0xd
// 0042a3e0  742d                 je 0x42a40f
// 0042a3e2  83f809               cmp eax, 9
// 0042a3e5  7428                 je 0x42a40f
// 0042a3e7  83f81b               cmp eax, 0x1b
// 0042a3ea  7423                 je 0x42a40f
// 0042a3ec  ff15eccb9800         call dword ptr [0x98cbec]
// 0042a3f2  50                   push eax
// 0042a3f3  e832973c00           call 0x7f3b2a
// 0042a3f8  8bf8                 mov edi, eax
// 0042a3fa  85ff                 test edi, edi
// 0042a3fc  7411                 je 0x42a40f
// 0042a3fe  e80deb3c00           call 0x7f8f10
// 0042a403  50                   push eax
// 0042a404  8bcf                 mov ecx, edi
// 0042a406  e8dd993c00           call 0x7f3de8
// 0042a40b  85c0                 test eax, eax
// 0042a40d  752b                 jne 0x42a43a
// 0042a40f  56                   push esi
// 0042a410  8bcb                 mov ecx, ebx
// 0042a412  e8b79e3c00           call 0x7f42ce
// 0042a417  85c0                 test eax, eax
// 0042a419  740b                 je 0x42a426
// 0042a41b  5f                   pop edi
// 0042a41c  5e                   pop esi
// 0042a41d  b801000000           mov eax, 1
// 0042a422  5b                   pop ebx
// 0042a423  c20400               ret 4
// 0042a426  8b8bec000000         mov ecx, dword ptr [ebx + 0xec]
// 0042a42c  85c9                 test ecx, ecx
// 0042a42e  740a                 je 0x42a43a
// 0042a430  56                   push esi
// 0042a431  e83abc3e00           call 0x816070
// 0042a436  85c0                 test eax, eax
// 0042a438  75e1                 jne 0x42a41b
// 0042a43a  5f                   pop edi
// 0042a43b  5e                   pop esi
// 0042a43c  33c0                 xor eax, eax
// 0042a43e  5b                   pop ebx
// 0042a43f  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@?$CXTPCommandBarsSiteBase@VCMDIFrameWnd@@@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPFrameWnd.cpp