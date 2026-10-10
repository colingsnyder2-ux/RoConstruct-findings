// roc 2008-06 0079fa80  unit: CXTPDialogBar  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079fa80
//
// 0079fa80  53                   push ebx
// 0079fa81  56                   push esi
// 0079fa82  57                   push edi
// 0079fa83  8bf9                 mov edi, ecx
// 0079fa85  ff15102e8000         call dword ptr [0x802e10]
// 0079fa8b  50                   push eax
// 0079fa8c  e84d11f0ff           call 0x6a0bde
// 0079fa91  8bf0                 mov esi, eax
// 0079fa93  85f6                 test esi, esi
// 0079fa95  7463                 je 0x79fafa
// 0079fa97  8b4620               mov eax, dword ptr [esi + 0x20]
// 0079fa9a  85c0                 test eax, eax
// 0079fa9c  745c                 je 0x79fafa
// 0079fa9e  3bf7                 cmp esi, edi
// 0079faa0  7451                 je 0x79faf3
// 0079faa2  50                   push eax
// 0079faa3  8b4720               mov eax, dword ptr [edi + 0x20]
// 0079faa6  50                   push eax
// 0079faa7  ff15742b8000         call dword ptr [0x802b74]
// 0079faad  85c0                 test eax, eax
// 0079faaf  7542                 jne 0x79faf3
// 0079fab1  8b4638               mov eax, dword ptr [esi + 0x38]
// 0079fab4  8b1df82d8000         mov ebx, dword ptr [0x802df8]
// 0079faba  85c0                 test eax, eax
// 0079fabc  7506                 jne 0x79fac4
// 0079fabe  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0079fac1  51                   push ecx
// 0079fac2  ffd3                 call ebx
// 0079fac4  50                   push eax
// 0079fac5  e81411f0ff           call 0x6a0bde
// 0079faca  85c0                 test eax, eax
// 0079facc  742c                 je 0x79fafa
// 0079face  83782000             cmp dword ptr [eax + 0x20], 0
// 0079fad2  7426                 je 0x79fafa
// 0079fad4  8b4638               mov eax, dword ptr [esi + 0x38]
// 0079fad7  85c0                 test eax, eax
// 0079fad9  7506                 jne 0x79fae1
// 0079fadb  8b5620               mov edx, dword ptr [esi + 0x20]
// 0079fade  52                   push edx
// 0079fadf  ffd3                 call ebx
// 0079fae1  50                   push eax
// 0079fae2  e8f710f0ff           call 0x6a0bde
// 0079fae7  50                   push eax
// 0079fae8  8bcf                 mov ecx, edi
// 0079faea  e82123f6ff           call 0x701e10
// 0079faef  85c0                 test eax, eax
// 0079faf1  7407                 je 0x79fafa
// 0079faf3  b801000000           mov eax, 1
// 0079faf8  eb02                 jmp 0x79fafc
// 0079fafa  33c0                 xor eax, eax
// 0079fafc  3b87ec010000         cmp eax, dword ptr [edi + 0x1ec]
// 0079fb02  7416                 je 0x79fb1a
// 0079fb04  8987ec010000         mov dword ptr [edi + 0x1ec], eax
// 0079fb0a  8b07                 mov eax, dword ptr [edi]
// 0079fb0c  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 0079fb12  6a01                 push 1
// 0079fb14  6a00                 push 0
// 0079fb16  8bcf                 mov ecx, edi
// 0079fb18  ffd2                 call edx
// 0079fb1a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079fb1e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079fb22  50                   push eax
// 0079fb23  51                   push ecx
// 0079fb24  8bcf                 mov ecx, edi
// 0079fb26  e8058ef1ff           call 0x6b8930
// 0079fb2b  5f                   pop edi
// 0079fb2c  5e                   pop esi
// 0079fb2d  5b                   pop ebx
// 0079fb2e  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDialogBar.cpp (function ?OnIdleUpdateCmdUI@CXTPDialogBar@@MAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDialogBar.cpp
