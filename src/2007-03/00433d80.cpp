// roc 2007-03 00433d80  unit: seg_00430000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00433d80
//
// 00433d80  53                   push ebx
// 00433d81  56                   push esi
// 00433d82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00433d86  8b4604               mov eax, dword ptr [esi + 4]
// 00433d89  3d00010000           cmp eax, 0x100
// 00433d8e  57                   push edi
// 00433d8f  8bd9                 mov ebx, ecx
// 00433d91  723c                 jb 0x433dcf
// 00433d93  3d09010000           cmp eax, 0x109
// 00433d98  7735                 ja 0x433dcf
// 00433d9a  8b4608               mov eax, dword ptr [esi + 8]
// 00433d9d  83f80d               cmp eax, 0xd
// 00433da0  742d                 je 0x433dcf
// 00433da2  83f809               cmp eax, 9
// 00433da5  7428                 je 0x433dcf
// 00433da7  83f81b               cmp eax, 0x1b
// 00433daa  7423                 je 0x433dcf
// 00433dac  ff154cee7700         call dword ptr [0x77ee4c]
// 00433db2  50                   push eax
// 00433db3  e896a81e00           call 0x61e64e
// 00433db8  8bf8                 mov edi, eax
// 00433dba  85ff                 test edi, edi
// 00433dbc  7411                 je 0x433dcf
// 00433dbe  e88dc21e00           call 0x620050
// 00433dc3  50                   push eax
// 00433dc4  8bcf                 mov ecx, edi
// 00433dc6  e8b3a81e00           call 0x61e67e
// 00433dcb  85c0                 test eax, eax
// 00433dcd  752b                 jne 0x433dfa
// 00433dcf  56                   push esi
// 00433dd0  8bcb                 mov ecx, ebx
// 00433dd2  e8d3ac1e00           call 0x61eaaa
// 00433dd7  85c0                 test eax, eax
// 00433dd9  740b                 je 0x433de6
// 00433ddb  5f                   pop edi
// 00433ddc  5e                   pop esi
// 00433ddd  b801000000           mov eax, 1
// 00433de2  5b                   pop ebx
// 00433de3  c20400               ret 4
// 00433de6  8b8bd4000000         mov ecx, dword ptr [ebx + 0xd4]
// 00433dec  85c9                 test ecx, ecx
// 00433dee  740a                 je 0x433dfa
// 00433df0  56                   push esi
// 00433df1  e8ba971f00           call 0x62d5b0
// 00433df6  85c0                 test eax, eax
// 00433df8  75e1                 jne 0x433ddb
// 00433dfa  5f                   pop edi
// 00433dfb  5e                   pop esi
// 00433dfc  33c0                 xor eax, eax
// 00433dfe  5b                   pop ebx
// 00433dff  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@?$CXTPCommandBarsSiteBase@VCFrameWnd@@@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPFrameWnd.cpp