// roc 2008-06 00433030  unit: VCFrameWnd::?$CXTPCommandBarsSiteBase  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433030
//
// 00433030  53                   push ebx
// 00433031  56                   push esi
// 00433032  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00433036  8b4604               mov eax, dword ptr [esi + 4]
// 00433039  57                   push edi
// 0043303a  8bd9                 mov ebx, ecx
// 0043303c  3d00010000           cmp eax, 0x100
// 00433041  723c                 jb 0x43307f
// 00433043  3d09010000           cmp eax, 0x109
// 00433048  7735                 ja 0x43307f
// 0043304a  8b4608               mov eax, dword ptr [esi + 8]
// 0043304d  83f80d               cmp eax, 0xd
// 00433050  742d                 je 0x43307f
// 00433052  83f809               cmp eax, 9
// 00433055  7428                 je 0x43307f
// 00433057  83f81b               cmp eax, 0x1b
// 0043305a  7423                 je 0x43307f
// 0043305c  ff15102e8000         call dword ptr [0x802e10]
// 00433062  50                   push eax
// 00433063  e876db2600           call 0x6a0bde
// 00433068  8bf8                 mov edi, eax
// 0043306a  85ff                 test edi, edi
// 0043306c  7411                 je 0x43307f
// 0043306e  e84d372700           call 0x6a67c0
// 00433073  50                   push eax
// 00433074  8bcf                 mov ecx, edi
// 00433076  e875db2600           call 0x6a0bf0
// 0043307b  85c0                 test eax, eax
// 0043307d  752b                 jne 0x4330aa
// 0043307f  56                   push esi
// 00433080  8bcb                 mov ecx, ebx
// 00433082  e81fe02600           call 0x6a10a6
// 00433087  85c0                 test eax, eax
// 00433089  740b                 je 0x433096
// 0043308b  5f                   pop edi
// 0043308c  5e                   pop esi
// 0043308d  b801000000           mov eax, 1
// 00433092  5b                   pop ebx
// 00433093  c20400               ret 4
// 00433096  8b8be8000000         mov ecx, dword ptr [ebx + 0xe8]
// 0043309c  85c9                 test ecx, ecx
// 0043309e  740a                 je 0x4330aa
// 004330a0  56                   push esi
// 004330a1  e83a1a2700           call 0x6a4ae0
// 004330a6  85c0                 test eax, eax
// 004330a8  75e1                 jne 0x43308b
// 004330aa  5f                   pop edi
// 004330ab  5e                   pop esi
// 004330ac  33c0                 xor eax, eax
// 004330ae  5b                   pop ebx
// 004330af  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPFrameWnd.cpp (function ?PreTranslateMessage@?$CXTPCommandBarsSiteBase@VCFrameWnd@@@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPFrameWnd.cpp
