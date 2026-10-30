// roc 2011-06 00848770  unit: CXTTreeBase  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848770
//
// 00848770  53                   push ebx
// 00848771  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00848775  817b0400010000       cmp dword ptr [ebx + 4], 0x100
// 0084877c  56                   push esi
// 0084877d  57                   push edi
// 0084877e  8bf1                 mov esi, ecx
// 00848780  7571                 jne 0x8487f3
// 00848782  e8a9eaffff           call 0x847230
// 00848787  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 0084878d  84c0                 test al, al
// 0084878f  7435                 je 0x8487c6
// 00848791  8b4634               mov eax, dword ptr [esi + 0x34]
// 00848794  8b4020               mov eax, dword ptr [eax + 0x20]
// 00848797  6a00                 push 0
// 00848799  6a00                 push 0
// 0084879b  680f110000           push 0x110f
// 008487a0  50                   push eax
// 008487a1  ffd7                 call edi
// 008487a3  50                   push eax
// 008487a4  e87f1bfcff           call 0x80a328
// 008487a9  85c0                 test eax, eax
// 008487ab  7419                 je 0x8487c6
// 008487ad  53                   push ebx
// 008487ae  ff15781ba400         call dword ptr [0xa41b78]
// 008487b4  53                   push ebx
// 008487b5  ff150c1aa400         call dword ptr [0xa41a0c]
// 008487bb  5f                   pop edi
// 008487bc  5e                   pop esi
// 008487bd  b801000000           mov eax, 1
// 008487c2  5b                   pop ebx
// 008487c3  c20400               ret 4
// 008487c6  837b080d             cmp dword ptr [ebx + 8], 0xd
// 008487ca  7527                 jne 0x8487f3
// 008487cc  8b4634               mov eax, dword ptr [esi + 0x34]
// 008487cf  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008487d2  6a00                 push 0
// 008487d4  6a09                 push 9
// 008487d6  680a110000           push 0x110a
// 008487db  51                   push ecx
// 008487dc  ffd7                 call edi
// 008487de  85c0                 test eax, eax
// 008487e0  7411                 je 0x8487f3
// 008487e2  8b5634               mov edx, dword ptr [esi + 0x34]
// 008487e5  50                   push eax
// 008487e6  8b4220               mov eax, dword ptr [edx + 0x20]
// 008487e9  6a03                 push 3
// 008487eb  6802110000           push 0x1102
// 008487f0  50                   push eax
// 008487f1  ffd7                 call edi
// 008487f3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008487f6  53                   push ebx
// 008487f7  e8621efcff           call 0x80a65e
// 008487fc  5f                   pop edi
// 008487fd  5e                   pop esi
// 008487fe  5b                   pop ebx
// 008487ff  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@CXTTreeBase@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp