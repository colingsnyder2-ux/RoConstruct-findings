// roc 2007-03 004317c0  unit: seg_00430000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004317c0
//
// 004317c0  53                   push ebx
// 004317c1  56                   push esi
// 004317c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004317c6  8b4604               mov eax, dword ptr [esi + 4]
// 004317c9  3d00010000           cmp eax, 0x100
// 004317ce  57                   push edi
// 004317cf  8bd9                 mov ebx, ecx
// 004317d1  723c                 jb 0x43180f
// 004317d3  3d09010000           cmp eax, 0x109
// 004317d8  7735                 ja 0x43180f
// 004317da  8b4608               mov eax, dword ptr [esi + 8]
// 004317dd  83f80d               cmp eax, 0xd
// 004317e0  742d                 je 0x43180f
// 004317e2  83f809               cmp eax, 9
// 004317e5  7428                 je 0x43180f
// 004317e7  83f81b               cmp eax, 0x1b
// 004317ea  7423                 je 0x43180f
// 004317ec  ff154cee7700         call dword ptr [0x77ee4c]
// 004317f2  50                   push eax
// 004317f3  e856ce1e00           call 0x61e64e
// 004317f8  8bf8                 mov edi, eax
// 004317fa  85ff                 test edi, edi
// 004317fc  7411                 je 0x43180f
// 004317fe  e84de81e00           call 0x620050
// 00431803  50                   push eax
// 00431804  8bcf                 mov ecx, edi
// 00431806  e873ce1e00           call 0x61e67e
// 0043180b  85c0                 test eax, eax
// 0043180d  752b                 jne 0x43183a
// 0043180f  56                   push esi
// 00431810  8bcb                 mov ecx, ebx
// 00431812  e80fd21e00           call 0x61ea26
// 00431817  85c0                 test eax, eax
// 00431819  740b                 je 0x431826
// 0043181b  5f                   pop edi
// 0043181c  5e                   pop esi
// 0043181d  b801000000           mov eax, 1
// 00431822  5b                   pop ebx
// 00431823  c20400               ret 4
// 00431826  8b8bd8000000         mov ecx, dword ptr [ebx + 0xd8]
// 0043182c  85c9                 test ecx, ecx
// 0043182e  740a                 je 0x43183a
// 00431830  56                   push esi
// 00431831  e87abd1f00           call 0x62d5b0
// 00431836  85c0                 test eax, eax
// 00431838  75e1                 jne 0x43181b
// 0043183a  5f                   pop edi
// 0043183b  5e                   pop esi
// 0043183c  33c0                 xor eax, eax
// 0043183e  5b                   pop ebx
// 0043183f  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@?$CXTPCommandBarsSiteBase@VCMDIFrameWnd@@@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPFrameWnd.cpp