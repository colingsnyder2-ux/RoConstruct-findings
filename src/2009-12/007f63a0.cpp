// roc 2009-12 007f63a0  unit: CPatchedControlComboBox  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f63a0
//
// 007f63a0  837c240400           cmp dword ptr [esp + 4], 0
// 007f63a5  56                   push esi
// 007f63a6  8bf1                 mov esi, ecx
// 007f63a8  8b06                 mov eax, dword ptr [esi]
// 007f63aa  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 007f63b0  57                   push edi
// 007f63b1  8bbed0000000         mov edi, dword ptr [esi + 0xd0]
// 007f63b7  8bcf                 mov ecx, edi
// 007f63b9  7505                 jne 0x7f63c0
// 007f63bb  83c901               or ecx, 1
// 007f63be  eb03                 jmp 0x7f63c3
// 007f63c0  83e1fe               and ecx, 0xfffffffe
// 007f63c3  51                   push ecx
// 007f63c4  8bce                 mov ecx, esi
// 007f63c6  ffd2                 call edx
// 007f63c8  3bbed0000000         cmp edi, dword ptr [esi + 0xd0]
// 007f63ce  7407                 je 0x7f63d7
// 007f63d0  8bce                 mov ecx, esi
// 007f63d2  e8e9f8ffff           call 0x7f5cc0
// 007f63d7  5f                   pop edi
// 007f63d8  5e                   pop esi
// 007f63d9  c20400               ret 4
// copied from an identical function in another client (function ?SetVisible@CXTPControl@@QAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp