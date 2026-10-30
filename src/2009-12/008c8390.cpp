// roc 2009-12 008c8390  unit: VCEdit::?$CXTMaskEditT  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c8390
//
// 008c8390  8b442404             mov eax, dword ptr [esp + 4]
// 008c8394  56                   push esi
// 008c8395  50                   push eax
// 008c8396  8bf1                 mov esi, ecx
// 008c8398  e8f1c2f2ff           call 0x7f468e
// 008c839d  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008c83a1  7470                 je 0x8c8413
// 008c83a3  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c83a7  746a                 je 0x8c8413
// 008c83a9  8bce                 mov ecx, esi
// 008c83ab  e8c2e00500           call 0x926472
// 008c83b0  a900080000           test eax, 0x800
// 008c83b5  755c                 jne 0x8c8413
// 008c83b7  8d4e70               lea ecx, [esi + 0x70]
// 008c83ba  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008c83c0  84c0                 test al, al
// 008c83c2  754f                 jne 0x8c8413
// 008c83c4  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c83c7  53                   push ebx
// 008c83c8  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 008c83ce  57                   push edi
// 008c83cf  85c0                 test eax, eax
// 008c83d1  7410                 je 0x8c83e3
// 008c83d3  8d4e58               lea ecx, [esi + 0x58]
// 008c83d6  51                   push ecx
// 008c83d7  8d5654               lea edx, [esi + 0x54]
// 008c83da  52                   push edx
// 008c83db  68b0000000           push 0xb0
// 008c83e0  50                   push eax
// 008c83e1  ffd3                 call ebx
// 008c83e3  6a01                 push 1
// 008c83e5  8d7e54               lea edi, [esi + 0x54]
// 008c83e8  57                   push edi
// 008c83e9  8bce                 mov ecx, esi
// 008c83eb  e810faffff           call 0x8c7e00
// 008c83f0  8b07                 mov eax, dword ptr [edi]
// 008c83f2  50                   push eax
// 008c83f3  50                   push eax
// 008c83f4  894658               mov dword ptr [esi + 0x58], eax
// 008c83f7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c83fa  68b1000000           push 0xb1
// 008c83ff  50                   push eax
// 008c8400  ffd3                 call ebx
// 008c8402  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c8405  6a00                 push 0
// 008c8407  6a00                 push 0
// 008c8409  68b7000000           push 0xb7
// 008c840e  51                   push ecx
// 008c840f  ffd3                 call ebx
// 008c8411  5f                   pop edi
// 008c8412  5b                   pop ebx
// 008c8413  5e                   pop esi
// 008c8414  c20400               ret 4
// copied from an identical function in another client (function ?OnSetFocus@?$CXTMaskEditT@VCEdit@@@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp