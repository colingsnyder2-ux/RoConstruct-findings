// roc 2012-06 00991950  unit: CPatchedControlComboBox  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00991950
//
// 00991950  8b542404             mov edx, dword ptr [esp + 4]
// 00991954  56                   push esi
// 00991955  8bf1                 mov esi, ecx
// 00991957  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 0099195d  744e                 je 0x9919ad
// 0099195f  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 00991965  89969c000000         mov dword ptr [esi + 0x9c], edx
// 0099196b  85c0                 test eax, eax
// 0099196d  7435                 je 0x9919a4
// 0099196f  83782000             cmp dword ptr [eax + 0x20], 0
// 00991973  742f                 je 0x9919a4
// 00991975  83faff               cmp edx, -1
// 00991978  7511                 jne 0x99198b
// 0099197a  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00991980  85c9                 test ecx, ecx
// 00991982  7407                 je 0x99198b
// 00991984  e89735ffff           call 0x984f20
// 00991989  eb02                 jmp 0x99198d
// 0099198b  8bc2                 mov eax, edx
// 0099198d  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00991993  50                   push eax
// 00991994  e8c30dffff           call 0x98275c
// 00991999  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0099199f  e81ceeffff           call 0x9907c0
// 009919a4  6a01                 push 1
// 009919a6  8bce                 mov ecx, esi
// 009919a8  e88336ffff           call 0x985030
// 009919ad  5e                   pop esi
// 009919ae  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?SetEnabled@CXTPControlComboBox@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
