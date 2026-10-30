// roc 2009-12 00844a50  unit: CXTPPopupBar  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00844a50
//
// 00844a50  8b442404             mov eax, dword ptr [esp + 4]
// 00844a54  83ec08               sub esp, 8
// 00844a57  56                   push esi
// 00844a58  8bf1                 mov esi, ecx
// 00844a5a  898680010000         mov dword ptr [esi + 0x180], eax
// 00844a60  e82bd5ffff           call 0x841f90
// 00844a65  85c0                 test eax, eax
// 00844a67  0f84d5000000         je 0x844b42
// 00844a6d  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00844a73  85c9                 test ecx, ecx
// 00844a75  7405                 je 0x844a7c
// 00844a77  e8e4d20100           call 0x861d60
// 00844a7c  ff8660010000         inc dword ptr [esi + 0x160]
// 00844a82  8bce                 mov ecx, esi
// 00844a84  e86726fcff           call 0x8070f0
// 00844a89  85c0                 test eax, eax
// 00844a8b  7412                 je 0x844a9f
// 00844a8d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00844a90  56                   push esi
// 00844a91  6a00                 push 0
// 00844a93  685b280000           push 0x285b
// 00844a98  51                   push ecx
// 00844a99  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00844a9f  8bce                 mov ecx, esi
// 00844aa1  c786d801000000000000 mov dword ptr [esi + 0x1d8], 0
// 00844aab  c786a401000000000000 mov dword ptr [esi + 0x1a4], 0
// 00844ab5  e846fafbff           call 0x804500
// 00844aba  85c0                 test eax, eax
// 00844abc  7522                 jne 0x844ae0
// 00844abe  68b0647f00           push 0x7f64b0
// 00844ac3  b9d0bab900           mov ecx, 0xb9bad0
// 00844ac8  e86f190e00           call 0x92643c
// 00844acd  85c0                 test eax, eax
// 00844acf  7505                 jne 0x844ad6
// 00844ad1  e836f0faff           call 0x7f3b0c
// 00844ad6  83782800             cmp dword ptr [eax + 0x28], 0
// 00844ada  7504                 jne 0x844ae0
// 00844adc  33c0                 xor eax, eax
// 00844ade  eb05                 jmp 0x844ae5
// 00844ae0  b801000000           mov eax, 1
// 00844ae5  8b16                 mov edx, dword ptr [esi]
// 00844ae7  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 00844aed  8b8208020000         mov eax, dword ptr [edx + 0x208]
// 00844af3  8bce                 mov ecx, esi
// 00844af5  ffd0                 call eax
// 00844af7  8b16                 mov edx, dword ptr [esi]
// 00844af9  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 00844aff  6a00                 push 0
// 00844b01  6a00                 push 0
// 00844b03  8d44240c             lea eax, [esp + 0xc]
// 00844b07  50                   push eax
// 00844b08  8bce                 mov ecx, esi
// 00844b0a  ffd2                 call edx
// 00844b0c  8b4804               mov ecx, dword ptr [eax + 4]
// 00844b0f  8b10                 mov edx, dword ptr [eax]
// 00844b11  51                   push ecx
// 00844b12  52                   push edx
// 00844b13  8bce                 mov ecx, esi
// 00844b15  e8a6dfffff           call 0x842ac0
// 00844b1a  837e2000             cmp dword ptr [esi + 0x20], 0
// 00844b1e  752b                 jne 0x844b4b
// 00844b20  838660010000ff       add dword ptr [esi + 0x160], -1
// 00844b27  7519                 jne 0x844b42
// 00844b29  f686e800000002       test byte ptr [esi + 0xe8], 2
// 00844b30  7410                 je 0x844b42
// 00844b32  8b06                 mov eax, dword ptr [esi]
// 00844b34  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00844b3a  6a01                 push 1
// 00844b3c  6a00                 push 0
// 00844b3e  8bce                 mov ecx, esi
// 00844b40  ffd2                 call edx
// 00844b42  33c0                 xor eax, eax
// 00844b44  5e                   pop esi
// 00844b45  83c408               add esp, 8
// 00844b48  c20800               ret 8
// 00844b4b  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00844b51  85c0                 test eax, eax
// 00844b53  7429                 je 0x844b7e
// 00844b55  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00844b5b  85c0                 test eax, eax
// 00844b5d  7406                 je 0x844b65
// 00844b5f  83782000             cmp dword ptr [eax + 0x20], 0
// 00844b63  7519                 jne 0x844b7e
// 00844b65  8bce                 mov ecx, esi
// 00844b67  e874cdffff           call 0x8418e0
// 00844b6c  8b06                 mov eax, dword ptr [esi]
// 00844b6e  8b5068               mov edx, dword ptr [eax + 0x68]
// 00844b71  8bce                 mov ecx, esi
// 00844b73  ffd2                 call edx
// 00844b75  33c0                 xor eax, eax
// 00844b77  5e                   pop esi
// 00844b78  83c408               add esp, 8
// 00844b7b  c20800               ret 8
// 00844b7e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00844b82  8b16                 mov edx, dword ptr [esi]
// 00844b84  50                   push eax
// 00844b85  50                   push eax
// 00844b86  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00844b8c  6a01                 push 1
// 00844b8e  8bce                 mov ecx, esi
// 00844b90  ffd0                 call eax
// 00844b92  8b16                 mov edx, dword ptr [esi]
// 00844b94  8b82f4010000         mov eax, dword ptr [edx + 0x1f4]
// 00844b9a  83a6e8000000fe       and dword ptr [esi + 0xe8], 0xfffffffe
// 00844ba1  6a00                 push 0
// 00844ba3  6a01                 push 1
// 00844ba5  8bce                 mov ecx, esi
// 00844ba7  ffd0                 call eax
// 00844ba9  837e2000             cmp dword ptr [esi + 0x20], 0
// 00844bad  752b                 jne 0x844bda
// 00844baf  838660010000ff       add dword ptr [esi + 0x160], -1
// 00844bb6  7519                 jne 0x844bd1
// 00844bb8  f686e800000002       test byte ptr [esi + 0xe8], 2
// 00844bbf  7410                 je 0x844bd1
// 00844bc1  8b16                 mov edx, dword ptr [esi]
// 00844bc3  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00844bc9  6a01                 push 1
// 00844bcb  6a00                 push 0
// 00844bcd  8bce                 mov ecx, esi
// 00844bcf  ffd0                 call eax
// 00844bd1  33c0                 xor eax, eax
// 00844bd3  5e                   pop esi
// 00844bd4  83c408               add esp, 8
// 00844bd7  c20800               ret 8
// 00844bda  8bce                 mov ecx, esi
// 00844bdc  e80fe7ffff           call 0x8432f0
// 00844be1  6a02                 push 2
// 00844be3  e8a8b70200           call 0x870390
// 00844be8  8bc8                 mov ecx, eax
// 00844bea  e891b80200           call 0x870480
// 00844bef  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 00844bf6  752a                 jne 0x844c22
// 00844bf8  83befc01000000       cmp dword ptr [esi + 0x1fc], 0
// 00844bff  7421                 je 0x844c22
// 00844c01  56                   push esi
// 00844c02  e8a9b80700           call 0x8c04b0
// 00844c07  8bc8                 mov ecx, eax
// 00844c09  e852b80700           call 0x8c0460
// 00844c0e  8d8e8c010000         lea ecx, [esi + 0x18c]
// 00844c14  51                   push ecx
// 00844c15  56                   push esi
// 00844c16  e895b80700           call 0x8c04b0
// 00844c1b  8bc8                 mov ecx, eax
// 00844c1d  e88ec20700           call 0x8c0eb0
// 00844c22  838ee800000001       or dword ptr [esi + 0xe8], 1
// 00844c29  838660010000ff       add dword ptr [esi + 0x160], -1
// 00844c30  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00844c36  7514                 jne 0x844c4c
// 00844c38  a802                 test al, 2
// 00844c3a  7410                 je 0x844c4c
// 00844c3c  8b16                 mov edx, dword ptr [esi]
// 00844c3e  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00844c44  6a01                 push 1
// 00844c46  6a00                 push 0
// 00844c48  8bce                 mov ecx, esi
// 00844c4a  ffd0                 call eax
// 00844c4c  b801000000           mov eax, 1
// 00844c51  5e                   pop esi
// 00844c52  83c408               add esp, 8
// 00844c55  c20800               ret 8
// copied from an identical function in another client (function ?Popup@CXTPPopupBar@@UAEHPAVCXTPControlPopup@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp