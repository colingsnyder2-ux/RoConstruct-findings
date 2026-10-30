// roc 2009-12 00843e40  unit: CXTPPopupBar  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00843e40
//
// 00843e40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00843e44  53                   push ebx
// 00843e45  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00843e49  56                   push esi
// 00843e4a  8bf1                 mov esi, ecx
// 00843e4c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00843e50  50                   push eax
// 00843e51  51                   push ecx
// 00843e52  53                   push ebx
// 00843e53  8bce                 mov ecx, esi
// 00843e55  e8263bfcff           call 0x807980
// 00843e5a  85c0                 test eax, eax
// 00843e5c  7505                 jne 0x843e63
// 00843e5e  5e                   pop esi
// 00843e5f  5b                   pop ebx
// 00843e60  c20c00               ret 0xc
// 00843e63  57                   push edi
// 00843e64  8bce                 mov ecx, esi
// 00843e66  e82532fcff           call 0x807090
// 00843e6b  8b5620               mov edx, dword ptr [esi + 0x20]
// 00843e6e  6a00                 push 0
// 00843e70  6afd                 push -3
// 00843e72  85db                 test ebx, ebx
// 00843e74  8b1d84cc9800         mov ebx, dword ptr [0x98cc84]
// 00843e7a  8bf8                 mov edi, eax
// 00843e7c  8d4e5c               lea ecx, [esi + 0x5c]
// 00843e7f  52                   push edx
// 00843e80  755f                 jne 0x843ee1
// 00843e82  6a07                 push 7
// 00843e84  e8077bffff           call 0x83b990
// 00843e89  8b06                 mov eax, dword ptr [esi]
// 00843e8b  8b5068               mov edx, dword ptr [eax + 0x68]
// 00843e8e  8bce                 mov ecx, esi
// 00843e90  ffd2                 call edx
// 00843e92  8b06                 mov eax, dword ptr [esi]
// 00843e94  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00843e9a  8bce                 mov ecx, esi
// 00843e9c  ffd2                 call edx
// 00843e9e  85c0                 test eax, eax
// 00843ea0  740b                 je 0x843ead
// 00843ea2  6a00                 push 0
// 00843ea4  6aff                 push -1
// 00843ea6  8bc8                 mov ecx, eax
// 00843ea8  e8f326fcff           call 0x8065a0
// 00843ead  85ff                 test edi, edi
// 00843eaf  741c                 je 0x843ecd
// 00843eb1  8b4720               mov eax, dword ptr [edi + 0x20]
// 00843eb4  50                   push eax
// 00843eb5  ffd3                 call ebx
// 00843eb7  85c0                 test eax, eax
// 00843eb9  7412                 je 0x843ecd
// 00843ebb  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00843ebe  56                   push esi
// 00843ebf  6a00                 push 0
// 00843ec1  685d280000           push 0x285d
// 00843ec6  51                   push ecx
// 00843ec7  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00843ecd  6a01                 push 1
// 00843ecf  ff15ecb29800         call dword ptr [0x98b2ec]
// 00843ed5  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 00843edf  eb07                 jmp 0x843ee8
// 00843ee1  6a06                 push 6
// 00843ee3  e8a87affff           call 0x83b990
// 00843ee8  85ff                 test edi, edi
// 00843eea  7414                 je 0x843f00
// 00843eec  8b4720               mov eax, dword ptr [edi + 0x20]
// 00843eef  50                   push eax
// 00843ef0  ffd3                 call ebx
// 00843ef2  85c0                 test eax, eax
// 00843ef4  740a                 je 0x843f00
// 00843ef6  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00843ef9  51                   push ecx
// 00843efa  ff15a4ca9800         call dword ptr [0x98caa4]
// 00843f00  5f                   pop edi
// 00843f01  5e                   pop esi
// 00843f02  b801000000           mov eax, 1
// 00843f07  5b                   pop ebx
// 00843f08  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetTrackingMode@CXTPPopupBar@@MAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp