// roc 2009-06 0071e420  unit: CPatchedControlComboBox  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071e420
//
// 0071e420  8b542404             mov edx, dword ptr [esp + 4]
// 0071e424  56                   push esi
// 0071e425  8bf1                 mov esi, ecx
// 0071e427  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 0071e42d  744e                 je 0x71e47d
// 0071e42f  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0071e435  89969c000000         mov dword ptr [esi + 0x9c], edx
// 0071e43b  85c0                 test eax, eax
// 0071e43d  7435                 je 0x71e474
// 0071e43f  83782000             cmp dword ptr [eax + 0x20], 0
// 0071e443  742f                 je 0x71e474
// 0071e445  83faff               cmp edx, -1
// 0071e448  7511                 jne 0x71e45b
// 0071e44a  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0071e450  85c9                 test ecx, ecx
// 0071e452  7407                 je 0x71e45b
// 0071e454  e8471a0000           call 0x71fea0
// 0071e459  eb02                 jmp 0x71e45d
// 0071e45b  8bc2                 mov eax, edx
// 0071e45d  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0071e463  50                   push eax
// 0071e464  e84dacffff           call 0x7190b6
// 0071e469  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0071e46f  e8fcedffff           call 0x71d270
// 0071e474  6a01                 push 1
// 0071e476  8bce                 mov ecx, esi
// 0071e478  e8331b0000           call 0x71ffb0
// 0071e47d  5e                   pop esi
// 0071e47e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetEnabled@CXTPControlComboBox@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
