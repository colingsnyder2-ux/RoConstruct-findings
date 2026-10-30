// roc 2009-12 00894900  unit: CXTPMenuBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894900
//
// 00894900  56                   push esi
// 00894901  8bf1                 mov esi, ecx
// 00894903  8b06                 mov eax, dword ptr [esi]
// 00894905  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 0089490b  ffd2                 call edx
// 0089490d  85c0                 test eax, eax
// 0089490f  7504                 jne 0x894915
// 00894911  33c0                 xor eax, eax
// 00894913  5e                   pop esi
// 00894914  c3                   ret 
// 00894915  8bce                 mov ecx, esi
// 00894917  e844ffffff           call 0x894860
// 0089491c  85c0                 test eax, eax
// 0089491e  7514                 jne 0x894934
// 00894920  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00894926  39413c               cmp dword ptr [ecx + 0x3c], eax
// 00894929  7409                 je 0x894934
// 0089492b  e82022fbff           call 0x846b50
// 00894930  85c0                 test eax, eax
// 00894932  74dd                 je 0x894911
// 00894934  b801000000           mov eax, 1
// 00894939  5e                   pop esi
// 0089493a  c3                   ret 
// copied from an identical function in another client (function ?ShouldSerializeBar@CXTPMenuBar@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp