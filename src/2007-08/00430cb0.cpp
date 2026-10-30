// roc 2007-08 00430cb0  unit: VCMDIFrameWnd::?$CXTPCommandBarsSiteBase  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430cb0
//
// 00430cb0  53                   push ebx
// 00430cb1  56                   push esi
// 00430cb2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00430cb6  8b4604               mov eax, dword ptr [esi + 4]
// 00430cb9  3d00010000           cmp eax, 0x100
// 00430cbe  57                   push edi
// 00430cbf  8bd9                 mov ebx, ecx
// 00430cc1  723c                 jb 0x430cff
// 00430cc3  3d09010000           cmp eax, 0x109
// 00430cc8  7735                 ja 0x430cff
// 00430cca  8b4608               mov eax, dword ptr [esi + 8]
// 00430ccd  83f80d               cmp eax, 0xd
// 00430cd0  742d                 je 0x430cff
// 00430cd2  83f809               cmp eax, 9
// 00430cd5  7428                 je 0x430cff
// 00430cd7  83f81b               cmp eax, 0x1b
// 00430cda  7423                 je 0x430cff
// 00430cdc  ff15d4ec7700         call dword ptr [0x77ecd4]
// 00430ce2  50                   push eax
// 00430ce3  e8d8f41f00           call 0x6301c0
// 00430ce8  8bf8                 mov edi, eax
// 00430cea  85ff                 test edi, edi
// 00430cec  7411                 je 0x430cff
// 00430cee  e86d4d2000           call 0x635a60
// 00430cf3  50                   push eax
// 00430cf4  8bcf                 mov ecx, edi
// 00430cf6  e8f5f41f00           call 0x6301f0
// 00430cfb  85c0                 test eax, eax
// 00430cfd  752b                 jne 0x430d2a
// 00430cff  56                   push esi
// 00430d00  8bcb                 mov ecx, ebx
// 00430d02  e885f81f00           call 0x63058c
// 00430d07  85c0                 test eax, eax
// 00430d09  740b                 je 0x430d16
// 00430d0b  5f                   pop edi
// 00430d0c  5e                   pop esi
// 00430d0d  b801000000           mov eax, 1
// 00430d12  5b                   pop ebx
// 00430d13  c20400               ret 4
// 00430d16  8b8bd8000000         mov ecx, dword ptr [ebx + 0xd8]
// 00430d1c  85c9                 test ecx, ecx
// 00430d1e  740a                 je 0x430d2a
// 00430d20  56                   push esi
// 00430d21  e8da302000           call 0x633e00
// 00430d26  85c0                 test eax, eax
// 00430d28  75e1                 jne 0x430d0b
// 00430d2a  5f                   pop edi
// 00430d2b  5e                   pop esi
// 00430d2c  33c0                 xor eax, eax
// 00430d2e  5b                   pop ebx
// 00430d2f  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@?$CXTPCommandBarsSiteBase@VCMDIFrameWnd@@@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPFrameWnd.cpp