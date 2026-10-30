// roc 2009-12 007fc560  unit: CPatchedControlComboBox  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fc560
//
// 007fc560  8b542404             mov edx, dword ptr [esp + 4]
// 007fc564  56                   push esi
// 007fc565  8bf1                 mov esi, ecx
// 007fc567  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 007fc56d  744e                 je 0x7fc5bd
// 007fc56f  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fc575  89969c000000         mov dword ptr [esi + 0x9c], edx
// 007fc57b  85c0                 test eax, eax
// 007fc57d  7435                 je 0x7fc5b4
// 007fc57f  83782000             cmp dword ptr [eax + 0x20], 0
// 007fc583  742f                 je 0x7fc5b4
// 007fc585  83faff               cmp edx, -1
// 007fc588  7511                 jne 0x7fc59b
// 007fc58a  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007fc590  85c9                 test ecx, ecx
// 007fc592  7407                 je 0x7fc59b
// 007fc594  e817a0ffff           call 0x7f65b0
// 007fc599  eb02                 jmp 0x7fc59d
// 007fc59b  8bc2                 mov eax, edx
// 007fc59d  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc5a3  50                   push eax
// 007fc5a4  e83579ffff           call 0x7f3ede
// 007fc5a9  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc5af  e86ceeffff           call 0x7fb420
// 007fc5b4  6a01                 push 1
// 007fc5b6  8bce                 mov ecx, esi
// 007fc5b8  e803a1ffff           call 0x7f66c0
// 007fc5bd  5e                   pop esi
// 007fc5be  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetEnabled@CXTPControlComboBox@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
