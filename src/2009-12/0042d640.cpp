// roc 2009-12 0042d640  unit: VCFrameWnd::?$CXTPCommandBarsSiteBase  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042d640
//
// 0042d640  53                   push ebx
// 0042d641  56                   push esi
// 0042d642  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042d646  8b4604               mov eax, dword ptr [esi + 4]
// 0042d649  57                   push edi
// 0042d64a  8bd9                 mov ebx, ecx
// 0042d64c  3d00010000           cmp eax, 0x100
// 0042d651  723c                 jb 0x42d68f
// 0042d653  3d09010000           cmp eax, 0x109
// 0042d658  7735                 ja 0x42d68f
// 0042d65a  8b4608               mov eax, dword ptr [esi + 8]
// 0042d65d  83f80d               cmp eax, 0xd
// 0042d660  742d                 je 0x42d68f
// 0042d662  83f809               cmp eax, 9
// 0042d665  7428                 je 0x42d68f
// 0042d667  83f81b               cmp eax, 0x1b
// 0042d66a  7423                 je 0x42d68f
// 0042d66c  ff15eccb9800         call dword ptr [0x98cbec]
// 0042d672  50                   push eax
// 0042d673  e8b2643c00           call 0x7f3b2a
// 0042d678  8bf8                 mov edi, eax
// 0042d67a  85ff                 test edi, edi
// 0042d67c  7411                 je 0x42d68f
// 0042d67e  e88db83c00           call 0x7f8f10
// 0042d683  50                   push eax
// 0042d684  8bcf                 mov ecx, edi
// 0042d686  e85d673c00           call 0x7f3de8
// 0042d68b  85c0                 test eax, eax
// 0042d68d  752b                 jne 0x42d6ba
// 0042d68f  56                   push esi
// 0042d690  8bcb                 mov ecx, ebx
// 0042d692  e8af6c3c00           call 0x7f4346
// 0042d697  85c0                 test eax, eax
// 0042d699  740b                 je 0x42d6a6
// 0042d69b  5f                   pop edi
// 0042d69c  5e                   pop esi
// 0042d69d  b801000000           mov eax, 1
// 0042d6a2  5b                   pop ebx
// 0042d6a3  c20400               ret 4
// 0042d6a6  8b8be8000000         mov ecx, dword ptr [ebx + 0xe8]
// 0042d6ac  85c9                 test ecx, ecx
// 0042d6ae  740a                 je 0x42d6ba
// 0042d6b0  56                   push esi
// 0042d6b1  e8ba893e00           call 0x816070
// 0042d6b6  85c0                 test eax, eax
// 0042d6b8  75e1                 jne 0x42d69b
// 0042d6ba  5f                   pop edi
// 0042d6bb  5e                   pop esi
// 0042d6bc  33c0                 xor eax, eax
// 0042d6be  5b                   pop ebx
// 0042d6bf  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@?$CXTPCommandBarsSiteBase@VCFrameWnd@@@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPFrameWnd.cpp