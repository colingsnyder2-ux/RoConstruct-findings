// roc 2009-12 007fcf50  unit: CPatchedControlComboBox  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fcf50
//
// 007fcf50  56                   push esi
// 007fcf51  8bf1                 mov esi, ecx
// 007fcf53  8b06                 mov eax, dword ptr [esi]
// 007fcf55  8b5074               mov edx, dword ptr [eax + 0x74]
// 007fcf58  ffd2                 call edx
// 007fcf5a  85c0                 test eax, eax
// 007fcf5c  7506                 jne 0x7fcf64
// 007fcf5e  33c0                 xor eax, eax
// 007fcf60  5e                   pop esi
// 007fcf61  c21000               ret 0x10
// 007fcf64  8bce                 mov ecx, esi
// 007fcf66  e865fff6ff           call 0x76ced0
// 007fcf6b  85c0                 test eax, eax
// 007fcf6d  75ef                 jne 0x7fcf5e
// 007fcf6f  3986d0010000         cmp dword ptr [esi + 0x1d0], eax
// 007fcf75  75e7                 jne 0x7fcf5e
// 007fcf77  e8e4f9ffff           call 0x7fc960
// 007fcf7c  85c0                 test eax, eax
// 007fcf7e  74de                 je 0x7fcf5e
// 007fcf80  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 007fcf86  8b01                 mov eax, dword ptr [ecx]
// 007fcf88  8b8028020000         mov eax, dword ptr [eax + 0x228]
// 007fcf8e  33d2                 xor edx, edx
// 007fcf90  663954240c           cmp word ptr [esp + 0xc], dx
// 007fcf95  6a00                 push 0
// 007fcf97  0f9ec2               setle dl
// 007fcf9a  8d541226             lea edx, [edx + edx + 0x26]
// 007fcf9e  52                   push edx
// 007fcf9f  56                   push esi
// 007fcfa0  ffd0                 call eax
// 007fcfa2  b801000000           mov eax, 1
// 007fcfa7  5e                   pop esi
// 007fcfa8  c21000               ret 0x10
// copied from an identical function in another client (function ?OnHookMouseWheel@CXTPControlComboBox@@MAEHIFVCPoint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp