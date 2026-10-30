// roc 2012-06 009c0bf0  unit: CXTTreeBase  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0bf0
//
// 009c0bf0  53                   push ebx
// 009c0bf1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009c0bf5  817b0400010000       cmp dword ptr [ebx + 4], 0x100
// 009c0bfc  56                   push esi
// 009c0bfd  57                   push edi
// 009c0bfe  8bf1                 mov esi, ecx
// 009c0c00  7571                 jne 0x9c0c73
// 009c0c02  e8a9eaffff           call 0x9bf6b0
// 009c0c07  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 009c0c0d  84c0                 test al, al
// 009c0c0f  7435                 je 0x9c0c46
// 009c0c11  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c0c14  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c0c17  6a00                 push 0
// 009c0c19  6a00                 push 0
// 009c0c1b  680f110000           push 0x110f
// 009c0c20  50                   push eax
// 009c0c21  ffd7                 call edi
// 009c0c23  50                   push eax
// 009c0c24  e83d1afcff           call 0x982666
// 009c0c29  85c0                 test eax, eax
// 009c0c2b  7419                 je 0x9c0c46
// 009c0c2d  53                   push ebx
// 009c0c2e  ff15a83ab200         call dword ptr [0xb23aa8]
// 009c0c34  53                   push ebx
// 009c0c35  ff15a43ab200         call dword ptr [0xb23aa4]
// 009c0c3b  5f                   pop edi
// 009c0c3c  5e                   pop esi
// 009c0c3d  b801000000           mov eax, 1
// 009c0c42  5b                   pop ebx
// 009c0c43  c20400               ret 4
// 009c0c46  837b080d             cmp dword ptr [ebx + 8], 0xd
// 009c0c4a  7527                 jne 0x9c0c73
// 009c0c4c  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c0c4f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c0c52  6a00                 push 0
// 009c0c54  6a09                 push 9
// 009c0c56  680a110000           push 0x110a
// 009c0c5b  51                   push ecx
// 009c0c5c  ffd7                 call edi
// 009c0c5e  85c0                 test eax, eax
// 009c0c60  7411                 je 0x9c0c73
// 009c0c62  8b5634               mov edx, dword ptr [esi + 0x34]
// 009c0c65  50                   push eax
// 009c0c66  8b4220               mov eax, dword ptr [edx + 0x20]
// 009c0c69  6a03                 push 3
// 009c0c6b  6802110000           push 0x1102
// 009c0c70  50                   push eax
// 009c0c71  ffd7                 call edi
// 009c0c73  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0c76  53                   push ebx
// 009c0c77  e8921afcff           call 0x98270e
// 009c0c7c  5f                   pop edi
// 009c0c7d  5e                   pop esi
// 009c0c7e  5b                   pop ebx
// 009c0c7f  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@CXTTreeBase@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp