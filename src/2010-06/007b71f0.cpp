// roc 2010-06 007b71f0  unit: CPatchedControlComboBox  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b71f0
//
// 007b71f0  8b542404             mov edx, dword ptr [esp + 4]
// 007b71f4  56                   push esi
// 007b71f5  8bf1                 mov esi, ecx
// 007b71f7  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 007b71fd  744e                 je 0x7b724d
// 007b71ff  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007b7205  89969c000000         mov dword ptr [esi + 0x9c], edx
// 007b720b  85c0                 test eax, eax
// 007b720d  7435                 je 0x7b7244
// 007b720f  83782000             cmp dword ptr [eax + 0x20], 0
// 007b7213  742f                 je 0x7b7244
// 007b7215  83faff               cmp edx, -1
// 007b7218  7511                 jne 0x7b722b
// 007b721a  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007b7220  85c9                 test ecx, ecx
// 007b7222  7407                 je 0x7b722b
// 007b7224  e86734ffff           call 0x7aa690
// 007b7229  eb02                 jmp 0x7b722d
// 007b722b  8bc2                 mov eax, edx
// 007b722d  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007b7233  50                   push eax
// 007b7234  e8e50dffff           call 0x7a801e
// 007b7239  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007b723f  e8bceeffff           call 0x7b6100
// 007b7244  6a01                 push 1
// 007b7246  8bce                 mov ecx, esi
// 007b7248  e85335ffff           call 0x7aa7a0
// 007b724d  5e                   pop esi
// 007b724e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetEnabled@CXTPControlComboBox@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
