// roc 2011-06 008f0900  unit: PAVCXTShadowWnd::?$CList  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0900
//
// 008f0900  6aff                 push -1
// 008f0902  6829e9a000           push 0xa0e929
// 008f0907  64a100000000         mov eax, dword ptr fs:[0]
// 008f090d  50                   push eax
// 008f090e  83ec24               sub esp, 0x24
// 008f0911  53                   push ebx
// 008f0912  56                   push esi
// 008f0913  57                   push edi
// 008f0914  a12058c900           mov eax, dword ptr [0xc95820]
// 008f0919  33c4                 xor eax, esp
// 008f091b  50                   push eax
// 008f091c  8d442434             lea eax, [esp + 0x34]
// 008f0920  64a300000000         mov dword ptr fs:[0], eax
// 008f0926  8bf1                 mov esi, ecx
// 008f0928  e813feffff           call 0x8f0740
// 008f092d  8bc8                 mov ecx, eax
// 008f092f  e8dcf3ffff           call 0x8efd10
// 008f0934  894660               mov dword ptr [esi + 0x60], eax
// 008f0937  e804feffff           call 0x8f0740
// 008f093c  8bc8                 mov ecx, eax
// 008f093e  e8ddf3ffff           call 0x8efd20
// 008f0943  837e2000             cmp dword ptr [esi + 0x20], 0
// 008f0947  894664               mov dword ptr [esi + 0x64], eax
// 008f094a  0f85b7000000         jne 0x8f0a07
// 008f0950  33ff                 xor edi, edi
// 008f0952  397e60               cmp dword ptr [esi + 0x60], edi
// 008f0955  7405                 je 0x8f095c
// 008f0957  bf00000800           mov edi, 0x80000
// 008f095c  e8bb99f1ff           call 0x80a31c
// 008f0961  68007f0000           push 0x7f00
// 008f0966  6a00                 push 0
// 008f0968  ff15081aa400         call dword ptr [0xa41a08]
// 008f096e  6a00                 push 0
// 008f0970  6a00                 push 0
// 008f0972  50                   push eax
// 008f0973  6a00                 push 0
// 008f0975  e8b0a0f1ff           call 0x80aa2a
// 008f097a  50                   push eax
// 008f097b  8d4c2414             lea ecx, [esp + 0x14]
// 008f097f  ff15002ea400         call dword ptr [0xa42e00]
// 008f0985  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008f098d  e8829ef1ff           call 0x80a814
// 008f0992  85c0                 test eax, eax
// 008f0994  740b                 je 0x8f09a1
// 008f0996  8b10                 mov edx, dword ptr [eax]
// 008f0998  8bc8                 mov ecx, eax
// 008f099a  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008f099d  ffd0                 call eax
// 008f099f  eb02                 jmp 0x8f09a3
// 008f09a1  33c0                 xor eax, eax
// 008f09a3  8b1e                 mov ebx, dword ptr [esi]
// 008f09a5  6a00                 push 0
// 008f09a7  6a00                 push 0
// 008f09a9  50                   push eax
// 008f09aa  8d4c2430             lea ecx, [esp + 0x30]
// 008f09ae  e83dc3f6ff           call 0x85ccf0
// 008f09b3  50                   push eax
// 008f09b4  6800000080           push 0x80000000
// 008f09b9  6a00                 push 0
// 008f09bb  8d4c2428             lea ecx, [esp + 0x28]
// 008f09bf  ff15c82da400         call dword ptr [0xa42dc8]
// 008f09c5  8b5360               mov edx, dword ptr [ebx + 0x60]
// 008f09c8  50                   push eax
// 008f09c9  81cf80000000         or edi, 0x80
// 008f09cf  57                   push edi
// 008f09d0  8bce                 mov ecx, esi
// 008f09d2  ffd2                 call edx
// 008f09d4  8d4c2410             lea ecx, [esp + 0x10]
// 008f09d8  85c0                 test eax, eax
// 008f09da  751d                 jne 0x8f09f9
// 008f09dc  ff15082ea400         call dword ptr [0xa42e08]
// 008f09e2  33c0                 xor eax, eax
// 008f09e4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f09e8  64890d00000000       mov dword ptr fs:[0], ecx
// 008f09ef  59                   pop ecx
// 008f09f0  5f                   pop edi
// 008f09f1  5e                   pop esi
// 008f09f2  5b                   pop ebx
// 008f09f3  83c430               add esp, 0x30
// 008f09f6  c21400               ret 0x14
// 008f09f9  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008f0a01  ff15082ea400         call dword ptr [0xa42e08]
// 008f0a07  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f0a0a  6a00                 push 0
// 008f0a0c  6a00                 push 0
// 008f0a0e  50                   push eax
// 008f0a0f  ff15041ca400         call dword ptr [0xa41c04]
// 008f0a15  837e6000             cmp dword ptr [esi + 0x60], 0
// 008f0a19  750b                 jne 0x8f0a26
// 008f0a1b  837e6400             cmp dword ptr [esi + 0x64], 0
// 008f0a1f  b802000000           mov eax, 2
// 008f0a24  7405                 je 0x8f0a2b
// 008f0a26  b804000000           mov eax, 4
// 008f0a2b  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008f0a2f  8d4c2448             lea ecx, [esp + 0x48]
// 008f0a33  51                   push ecx
// 008f0a34  894654               mov dword ptr [esi + 0x54], eax
// 008f0a37  897e5c               mov dword ptr [esi + 0x5c], edi
// 008f0a3a  ff15641ca400         call dword ptr [0xa41c64]
// 008f0a40  85c0                 test eax, eax
// 008f0a42  740d                 je 0x8f0a51
// 008f0a44  8d542414             lea edx, [esp + 0x14]
// 008f0a48  52                   push edx
// 008f0a49  ff15ac19a400         call dword ptr [0xa419ac]
// 008f0a4f  eb41                 jmp 0x8f0a92
// 008f0a51  8b4654               mov eax, dword ptr [esi + 0x54]
// 008f0a54  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008f0a58  85ff                 test edi, edi
// 008f0a5a  741a                 je 0x8f0a76
// 008f0a5c  8d1408               lea edx, [eax + ecx]
// 008f0a5f  52                   push edx
// 008f0a60  8b542454             mov edx, dword ptr [esp + 0x54]
// 008f0a64  03d0                 add edx, eax
// 008f0a66  52                   push edx
// 008f0a67  51                   push ecx
// 008f0a68  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008f0a6c  03c1                 add eax, ecx
// 008f0a6e  50                   push eax
// 008f0a6f  8d542424             lea edx, [esp + 0x24]
// 008f0a73  52                   push edx
// 008f0a74  eb16                 jmp 0x8f0a8c
// 008f0a76  51                   push ecx
// 008f0a77  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008f0a7b  8d1408               lea edx, [eax + ecx]
// 008f0a7e  52                   push edx
// 008f0a7f  8b542454             mov edx, dword ptr [esp + 0x54]
// 008f0a83  03c2                 add eax, edx
// 008f0a85  50                   push eax
// 008f0a86  51                   push ecx
// 008f0a87  8d442424             lea eax, [esp + 0x24]
// 008f0a8b  50                   push eax
// 008f0a8c  ff15c81ba400         call dword ptr [0xa41bc8]
// 008f0a92  8b442418             mov eax, dword ptr [esp + 0x18]
// 008f0a96  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008f0a9a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008f0a9e  6a00                 push 0
// 008f0aa0  2bc8                 sub ecx, eax
// 008f0aa2  51                   push ecx
// 008f0aa3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f0aa7  2bd1                 sub edx, ecx
// 008f0aa9  52                   push edx
// 008f0aaa  50                   push eax
// 008f0aab  51                   push ecx
// 008f0aac  8bce                 mov ecx, esi
// 008f0aae  e87d99f1ff           call 0x80a430
// 008f0ab3  b801000000           mov eax, 1
// 008f0ab8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f0abc  64890d00000000       mov dword ptr fs:[0], ecx
// 008f0ac3  59                   pop ecx
// 008f0ac4  5f                   pop edi
// 008f0ac5  5e                   pop esi
// 008f0ac6  5b                   pop ebx
// 008f0ac7  83c430               add esp, 0x30
// 008f0aca  c21400               ret 0x14
// copied from an identical function in another client (function ?Create@CXTShadowWnd@@IAEHHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp