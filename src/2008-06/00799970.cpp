// roc 2008-06 00799970  unit: CXTPRibbonControlTab  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799970
//
// 00799970  51                   push ecx
// 00799971  56                   push esi
// 00799972  8bf1                 mov esi, ecx
// 00799974  8b06                 mov eax, dword ptr [esi]
// 00799976  8b5074               mov edx, dword ptr [eax + 0x74]
// 00799979  ffd2                 call edx
// 0079997b  85c0                 test eax, eax
// 0079997d  7505                 jne 0x799984
// 0079997f  5e                   pop esi
// 00799980  59                   pop ecx
// 00799981  c20800               ret 8
// 00799984  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0079998a  53                   push ebx
// 0079998b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0079998f  8d442408             lea eax, [esp + 8]
// 00799993  50                   push eax
// 00799994  51                   push ecx
// 00799995  895c2410             mov dword ptr [esp + 0x10], ebx
// 00799999  e822f0f5ff           call 0x6f89c0
// 0079999e  8b442410             mov eax, dword ptr [esp + 0x10]
// 007999a2  83c408               add esp, 8
// 007999a5  83f826               cmp eax, 0x26
// 007999a8  740f                 je 0x7999b9
// 007999aa  83f828               cmp eax, 0x28
// 007999ad  740a                 je 0x7999b9
// 007999af  83f825               cmp eax, 0x25
// 007999b2  7405                 je 0x7999b9
// 007999b4  83f827               cmp eax, 0x27
// 007999b7  750f                 jne 0x7999c8
// 007999b9  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007999bf  e85cc1f1ff           call 0x6b5b20
// 007999c4  8b442408             mov eax, dword ptr [esp + 8]
// 007999c8  57                   push edi
// 007999c9  83f825               cmp eax, 0x25
// 007999cc  753f                 jne 0x799a0d
// 007999ce  8dbe84010000         lea edi, [esi + 0x184]
// 007999d4  6aff                 push -1
// 007999d6  8bcf                 mov ecx, edi
// 007999d8  e84316feff           call 0x77b020
// 007999dd  50                   push eax
// 007999de  8bcf                 mov ecx, edi
// 007999e0  e82b2bfeff           call 0x77c510
// 007999e5  85c0                 test eax, eax
// 007999e7  7420                 je 0x799a09
// 007999e9  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007999ef  85c0                 test eax, eax
// 007999f1  7403                 je 0x7999f6
// 007999f3  8b4020               mov eax, dword ptr [eax + 0x20]
// 007999f6  8b17                 mov edx, dword ptr [edi]
// 007999f8  53                   push ebx
// 007999f9  50                   push eax
// 007999fa  8b4254               mov eax, dword ptr [edx + 0x54]
// 007999fd  8bcf                 mov ecx, edi
// 007999ff  ffd0                 call eax
// 00799a01  85c0                 test eax, eax
// 00799a03  0f858f000000         jne 0x799a98
// 00799a09  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00799a0d  83f827               cmp eax, 0x27
// 00799a10  753b                 jne 0x799a4d
// 00799a12  8dbe84010000         lea edi, [esi + 0x184]
// 00799a18  6a01                 push 1
// 00799a1a  8bcf                 mov ecx, edi
// 00799a1c  e8ff15feff           call 0x77b020
// 00799a21  50                   push eax
// 00799a22  8bcf                 mov ecx, edi
// 00799a24  e8e72afeff           call 0x77c510
// 00799a29  85c0                 test eax, eax
// 00799a2b  741c                 je 0x799a49
// 00799a2d  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00799a33  85c0                 test eax, eax
// 00799a35  7403                 je 0x799a3a
// 00799a37  8b4020               mov eax, dword ptr [eax + 0x20]
// 00799a3a  8b17                 mov edx, dword ptr [edi]
// 00799a3c  53                   push ebx
// 00799a3d  50                   push eax
// 00799a3e  8b4254               mov eax, dword ptr [edx + 0x54]
// 00799a41  8bcf                 mov ecx, edi
// 00799a43  ffd0                 call eax
// 00799a45  85c0                 test eax, eax
// 00799a47  754f                 jne 0x799a98
// 00799a49  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00799a4d  83f826               cmp eax, 0x26
// 00799a50  750e                 jne 0x799a60
// 00799a52  6a03                 push 3
// 00799a54  6a01                 push 1
// 00799a56  6a00                 push 0
// 00799a58  6a01                 push 1
// 00799a5a  6a01                 push 1
// 00799a5c  6aff                 push -1
// 00799a5e  eb16                 jmp 0x799a76
// 00799a60  83f828               cmp eax, 0x28
// 00799a63  753f                 jne 0x799aa4
// 00799a65  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00799a6b  6a02                 push 2
// 00799a6d  6a01                 push 1
// 00799a6f  6a00                 push 0
// 00799a71  6a01                 push 1
// 00799a73  6a01                 push 1
// 00799a75  50                   push eax
// 00799a76  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00799a7c  8b39                 mov edi, dword ptr [ecx]
// 00799a7e  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00799a84  e82783f5ff           call 0x6f1db0
// 00799a89  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00799a8f  8b9750010000         mov edx, dword ptr [edi + 0x150]
// 00799a95  50                   push eax
// 00799a96  ffd2                 call edx
// 00799a98  5f                   pop edi
// 00799a99  5b                   pop ebx
// 00799a9a  b801000000           mov eax, 1
// 00799a9f  5e                   pop esi
// 00799aa0  59                   pop ecx
// 00799aa1  c20800               ret 8
// 00799aa4  5f                   pop edi
// 00799aa5  5b                   pop ebx
// 00799aa6  33c0                 xor eax, eax
// 00799aa8  5e                   pop esi
// 00799aa9  59                   pop ecx
// 00799aaa  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonControlTab.cpp (function ?OnHookKeyDown@CXTPRibbonControlTab@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp
