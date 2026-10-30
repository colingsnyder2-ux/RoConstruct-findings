// roc 2009-12 007fab40  unit: CPatchedControlComboBox  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fab40
//
// 007fab40  56                   push esi
// 007fab41  8bf1                 mov esi, ecx
// 007fab43  e8d8feffff           call 0x7faa20
// 007fab48  83f8ff               cmp eax, -1
// 007fab4b  7427                 je 0x7fab74
// 007fab4d  8bce                 mov ecx, esi
// 007fab4f  e87c23f7ff           call 0x76ced0
// 007fab54  85c0                 test eax, eax
// 007fab56  7513                 jne 0x7fab6b
// 007fab58  398684010000         cmp dword ptr [esi + 0x184], eax
// 007fab5e  7514                 jne 0x7fab74
// 007fab60  8b06                 mov eax, dword ptr [esi]
// 007fab62  8b5074               mov edx, dword ptr [eax + 0x74]
// 007fab65  ffd2                 call edx
// 007fab67  85c0                 test eax, eax
// 007fab69  7409                 je 0x7fab74
// 007fab6b  6a09                 push 9
// 007fab6d  8bce                 mov ecx, esi
// 007fab6f  e81cdaffff           call 0x7f8590
// 007fab74  8bce                 mov ecx, esi
// 007fab76  c786c001000001000000 mov dword ptr [esi + 0x1c0], 1
// 007fab80  e89bfeffff           call 0x7faa20
// 007fab85  898690010000         mov dword ptr [esi + 0x190], eax
// 007fab8b  8bce                 mov ecx, esi
// 007fab8d  5e                   pop esi
// 007fab8e  e96ddaffff           jmp 0x7f8600
// copied from an identical function in another client (function ?OnExecute@CXTPControlComboBox@@UAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp