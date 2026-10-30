// roc 2007-08 00433dc0  unit: VCFrameWnd::?$CXTPCommandBarsSiteBase  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433dc0
//
// 00433dc0  53                   push ebx
// 00433dc1  56                   push esi
// 00433dc2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00433dc6  8b4604               mov eax, dword ptr [esi + 4]
// 00433dc9  3d00010000           cmp eax, 0x100
// 00433dce  57                   push edi
// 00433dcf  8bd9                 mov ebx, ecx
// 00433dd1  723c                 jb 0x433e0f
// 00433dd3  3d09010000           cmp eax, 0x109
// 00433dd8  7735                 ja 0x433e0f
// 00433dda  8b4608               mov eax, dword ptr [esi + 8]
// 00433ddd  83f80d               cmp eax, 0xd
// 00433de0  742d                 je 0x433e0f
// 00433de2  83f809               cmp eax, 9
// 00433de5  7428                 je 0x433e0f
// 00433de7  83f81b               cmp eax, 0x1b
// 00433dea  7423                 je 0x433e0f
// 00433dec  ff15d4ec7700         call dword ptr [0x77ecd4]
// 00433df2  50                   push eax
// 00433df3  e8c8c31f00           call 0x6301c0
// 00433df8  8bf8                 mov edi, eax
// 00433dfa  85ff                 test edi, edi
// 00433dfc  7411                 je 0x433e0f
// 00433dfe  e85d1c2000           call 0x635a60
// 00433e03  50                   push eax
// 00433e04  8bcf                 mov ecx, edi
// 00433e06  e8e5c31f00           call 0x6301f0
// 00433e0b  85c0                 test eax, eax
// 00433e0d  752b                 jne 0x433e3a
// 00433e0f  56                   push esi
// 00433e10  8bcb                 mov ecx, ebx
// 00433e12  e8f3c71f00           call 0x63060a
// 00433e17  85c0                 test eax, eax
// 00433e19  740b                 je 0x433e26
// 00433e1b  5f                   pop edi
// 00433e1c  5e                   pop esi
// 00433e1d  b801000000           mov eax, 1
// 00433e22  5b                   pop ebx
// 00433e23  c20400               ret 4
// 00433e26  8b8bd4000000         mov ecx, dword ptr [ebx + 0xd4]
// 00433e2c  85c9                 test ecx, ecx
// 00433e2e  740a                 je 0x433e3a
// 00433e30  56                   push esi
// 00433e31  e8caff1f00           call 0x633e00
// 00433e36  85c0                 test eax, eax
// 00433e38  75e1                 jne 0x433e1b
// 00433e3a  5f                   pop edi
// 00433e3b  5e                   pop esi
// 00433e3c  33c0                 xor eax, eax
// 00433e3e  5b                   pop ebx
// 00433e3f  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@?$CXTPCommandBarsSiteBase@VCFrameWnd@@@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPFrameWnd.cpp