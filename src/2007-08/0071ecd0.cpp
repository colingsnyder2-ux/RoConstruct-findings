// from server: 100% by auto
// roc 2007-08 0071ecd0  unit: CXTPDialogBar  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071ecd0
//
// 0071ecd0  53                   push ebx
// 0071ecd1  56                   push esi
// 0071ecd2  57                   push edi
// 0071ecd3  8bf9                 mov edi, ecx
// 0071ecd5  ff15d4ec7700         call dword ptr [0x77ecd4]
// 0071ecdb  50                   push eax
// 0071ecdc  e8df14f1ff           call 0x6301c0
// 0071ece1  8bf0                 mov esi, eax
// 0071ece3  85f6                 test esi, esi
// 0071ece5  7463                 je 0x71ed4a
// 0071ece7  8b4620               mov eax, dword ptr [esi + 0x20]
// 0071ecea  85c0                 test eax, eax
// 0071ecec  745c                 je 0x71ed4a
// 0071ecee  3bf7                 cmp esi, edi
// 0071ecf0  7451                 je 0x71ed43
// 0071ecf2  50                   push eax
// 0071ecf3  8b4720               mov eax, dword ptr [edi + 0x20]
// 0071ecf6  50                   push eax
// 0071ecf7  ff1574ee7700         call dword ptr [0x77ee74]
// 0071ecfd  85c0                 test eax, eax
// 0071ecff  7542                 jne 0x71ed43
// 0071ed01  8b4638               mov eax, dword ptr [esi + 0x38]
// 0071ed04  85c0                 test eax, eax
// 0071ed06  8b1df8eb7700         mov ebx, dword ptr [0x77ebf8]
// 0071ed0c  7506                 jne 0x71ed14
// 0071ed0e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0071ed11  51                   push ecx
// 0071ed12  ffd3                 call ebx
// 0071ed14  50                   push eax
// 0071ed15  e8a614f1ff           call 0x6301c0
// 0071ed1a  85c0                 test eax, eax
// 0071ed1c  742c                 je 0x71ed4a
// 0071ed1e  83782000             cmp dword ptr [eax + 0x20], 0
// 0071ed22  7426                 je 0x71ed4a
// 0071ed24  8b4638               mov eax, dword ptr [esi + 0x38]
// 0071ed27  85c0                 test eax, eax
// 0071ed29  7506                 jne 0x71ed31
// 0071ed2b  8b5620               mov edx, dword ptr [esi + 0x20]
// 0071ed2e  52                   push edx
// 0071ed2f  ffd3                 call ebx
// 0071ed31  50                   push eax
// 0071ed32  e88914f1ff           call 0x6301c0
// 0071ed37  50                   push eax
// 0071ed38  8bcf                 mov ecx, edi
// 0071ed3a  e871b5f6ff           call 0x68a2b0
// 0071ed3f  85c0                 test eax, eax
// 0071ed41  7407                 je 0x71ed4a
// 0071ed43  b801000000           mov eax, 1
// 0071ed48  eb02                 jmp 0x71ed4c
// 0071ed4a  33c0                 xor eax, eax
// 0071ed4c  3b87ec010000         cmp eax, dword ptr [edi + 0x1ec]
// 0071ed52  7416                 je 0x71ed6a
// 0071ed54  8987ec010000         mov dword ptr [edi + 0x1ec], eax
// 0071ed5a  8b07                 mov eax, dword ptr [edi]
// 0071ed5c  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 0071ed62  6a01                 push 1
// 0071ed64  6a00                 push 0
// 0071ed66  8bcf                 mov ecx, edi
// 0071ed68  ffd2                 call edx
// 0071ed6a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071ed6e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071ed72  50                   push eax
// 0071ed73  51                   push ecx
// 0071ed74  8bcf                 mov ecx, edi
// 0071ed76  e82587f2ff           call 0x6474a0
// 0071ed7b  5f                   pop edi
// 0071ed7c  5e                   pop esi
// 0071ed7d  5b                   pop ebx
// 0071ed7e  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDialogBar.cpp (function ?OnIdleUpdateCmdUI@CXTPDialogBar@@MAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDialogBar.cpp
