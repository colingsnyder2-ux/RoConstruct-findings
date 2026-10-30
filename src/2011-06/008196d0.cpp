// roc 2011-06 008196d0  unit: CPatchedControlComboBox  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008196d0
//
// 008196d0  8b542404             mov edx, dword ptr [esp + 4]
// 008196d4  56                   push esi
// 008196d5  8bf1                 mov esi, ecx
// 008196d7  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 008196dd  744e                 je 0x81972d
// 008196df  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008196e5  89969c000000         mov dword ptr [esi + 0x9c], edx
// 008196eb  85c0                 test eax, eax
// 008196ed  7435                 je 0x819724
// 008196ef  83782000             cmp dword ptr [eax + 0x20], 0
// 008196f3  742f                 je 0x819724
// 008196f5  83faff               cmp edx, -1
// 008196f8  7511                 jne 0x81970b
// 008196fa  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00819700  85c9                 test ecx, ecx
// 00819702  7407                 je 0x81970b
// 00819704  e85735ffff           call 0x80cc60
// 00819709  eb02                 jmp 0x81970d
// 0081970b  8bc2                 mov eax, edx
// 0081970d  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00819713  50                   push eax
// 00819714  e8c30fffff           call 0x80a6dc
// 00819719  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0081971f  e86ceeffff           call 0x818590
// 00819724  6a01                 push 1
// 00819726  8bce                 mov ecx, esi
// 00819728  e86336ffff           call 0x80cd90
// 0081972d  5e                   pop esi
// 0081972e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetEnabled@CXTPControlComboBox@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
