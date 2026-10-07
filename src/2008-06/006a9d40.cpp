// roc 2008-06 006a9d40  unit: CPatchedControlComboBox  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a9d40
//
// 006a9d40  8b542404             mov edx, dword ptr [esp + 4]
// 006a9d44  56                   push esi
// 006a9d45  8bf1                 mov esi, ecx
// 006a9d47  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 006a9d4d  744e                 je 0x6a9d9d
// 006a9d4f  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 006a9d55  89969c000000         mov dword ptr [esi + 0x9c], edx
// 006a9d5b  85c0                 test eax, eax
// 006a9d5d  7435                 je 0x6a9d94
// 006a9d5f  83782000             cmp dword ptr [eax + 0x20], 0
// 006a9d63  742f                 je 0x6a9d94
// 006a9d65  83faff               cmp edx, -1
// 006a9d68  7511                 jne 0x6a9d7b
// 006a9d6a  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006a9d70  85c9                 test ecx, ecx
// 006a9d72  7407                 je 0x6a9d7b
// 006a9d74  e8471a0000           call 0x6ab7c0
// 006a9d79  eb02                 jmp 0x6a9d7d
// 006a9d7b  8bc2                 mov eax, edx
// 006a9d7d  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006a9d83  50                   push eax
// 006a9d84  e88d6fffff           call 0x6a0d16
// 006a9d89  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006a9d8f  e86ceeffff           call 0x6a8c00
// 006a9d94  6a01                 push 1
// 006a9d96  8bce                 mov ecx, esi
// 006a9d98  e8331b0000           call 0x6ab8d0
// 006a9d9d  5e                   pop esi
// 006a9d9e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetEnabled@CXTPControlComboBox@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
