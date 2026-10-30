// roc 2009-12 008c7a70  unit: CXTPPropertyGridInplaceEdit  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7a70
//
// 008c7a70  56                   push esi
// 008c7a71  8bf1                 mov esi, ecx
// 008c7a73  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008c7a77  741f                 je 0x8c7a98
// 008c7a79  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c7a7d  7419                 je 0x8c7a98
// 008c7a7f  e8eee90500           call 0x926472
// 008c7a84  a900080000           test eax, 0x800
// 008c7a89  750d                 jne 0x8c7a98
// 008c7a8b  8d4e70               lea ecx, [esi + 0x70]
// 008c7a8e  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008c7a94  84c0                 test al, al
// 008c7a96  7417                 je 0x8c7aaf
// 008c7a98  8b06                 mov eax, dword ptr [esi]
// 008c7a9a  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 008c7aa0  6a00                 push 0
// 008c7aa2  6a00                 push 0
// 008c7aa4  68c7000000           push 0xc7
// 008c7aa9  8bce                 mov ecx, esi
// 008c7aab  ffd2                 call edx
// 008c7aad  5e                   pop esi
// 008c7aae  c3                   ret 
// 008c7aaf  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c7ab2  57                   push edi
// 008c7ab3  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008c7ab9  85c0                 test eax, eax
// 008c7abb  7410                 je 0x8c7acd
// 008c7abd  8d4e58               lea ecx, [esi + 0x58]
// 008c7ac0  51                   push ecx
// 008c7ac1  8d5654               lea edx, [esi + 0x54]
// 008c7ac4  52                   push edx
// 008c7ac5  68b0000000           push 0xb0
// 008c7aca  50                   push eax
// 008c7acb  ffd7                 call edi
// 008c7acd  837e6400             cmp dword ptr [esi + 0x64], 0
// 008c7ad1  7405                 je 0x8c7ad8
// 008c7ad3  8d4e7c               lea ecx, [esi + 0x7c]
// 008c7ad6  eb0e                 jmp 0x8c7ae6
// 008c7ad8  8d467c               lea eax, [esi + 0x7c]
// 008c7adb  50                   push eax
// 008c7adc  8bce                 mov ecx, esi
// 008c7ade  e865c3f2ff           call 0x7f3e48
// 008c7ae3  8d4e78               lea ecx, [esi + 0x78]
// 008c7ae6  ff1580de9800         call dword ptr [0x98de80]
// 008c7aec  50                   push eax
// 008c7aed  8bce                 mov ecx, esi
// 008c7aef  e820c1f2ff           call 0x7f3c14
// 008c7af4  8b4654               mov eax, dword ptr [esi + 0x54]
// 008c7af7  8b5620               mov edx, dword ptr [esi + 0x20]
// 008c7afa  33c9                 xor ecx, ecx
// 008c7afc  394e64               cmp dword ptr [esi + 0x64], ecx
// 008c7aff  50                   push eax
// 008c7b00  0f94c1               sete cl
// 008c7b03  50                   push eax
// 008c7b04  68b1000000           push 0xb1
// 008c7b09  52                   push edx
// 008c7b0a  c7466801000000       mov dword ptr [esi + 0x68], 1
// 008c7b11  894658               mov dword ptr [esi + 0x58], eax
// 008c7b14  894e64               mov dword ptr [esi + 0x64], ecx
// 008c7b17  ffd7                 call edi
// 008c7b19  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c7b1c  6a00                 push 0
// 008c7b1e  6a00                 push 0
// 008c7b20  68b7000000           push 0xb7
// 008c7b25  50                   push eax
// 008c7b26  ffd7                 call edi
// 008c7b28  5f                   pop edi
// 008c7b29  b801000000           mov eax, 1
// 008c7b2e  5e                   pop esi
// 008c7b2f  c3                   ret 
// copied from an identical function in another client (function ?MaskUndo@?$CXTMaskEditT@VCEdit@@@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp