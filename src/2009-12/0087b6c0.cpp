// roc 2009-12 0087b6c0  unit: CXTPControlGallery  size: 584 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087b6c0
//
// 0087b6c0  56                   push esi
// 0087b6c1  8bf1                 mov esi, ecx
// 0087b6c3  8b06                 mov eax, dword ptr [esi]
// 0087b6c5  8b5074               mov edx, dword ptr [eax + 0x74]
// 0087b6c8  ffd2                 call edx
// 0087b6ca  85c0                 test eax, eax
// 0087b6cc  0f84e2010000         je 0x87b8b4
// 0087b6d2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0087b6d8  8d442408             lea eax, [esp + 8]
// 0087b6dc  50                   push eax
// 0087b6dd  51                   push ecx
// 0087b6de  e87d0afdff           call 0x84c160
// 0087b6e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087b6e7  83c0f7               add eax, -9
// 0087b6ea  83c408               add esp, 8
// 0087b6ed  83f81f               cmp eax, 0x1f
// 0087b6f0  0f87be010000         ja 0x87b8b4
// 0087b6f6  0fb690e8b88700       movzx edx, byte ptr [eax + 0x87b8e8]
// 0087b6fd  ff2495bcb88700       jmp dword ptr [edx*4 + 0x87b8bc]
// 0087b704  6a01                 push 1
// 0087b706  6aff                 push -1
// 0087b708  8bce                 mov ecx, esi
// 0087b70a  e8c1ceffff           call 0x8785d0
// 0087b70f  50                   push eax
// 0087b710  8bce                 mov ecx, esi
// 0087b712  e879fbffff           call 0x87b290
// 0087b717  b801000000           mov eax, 1
// 0087b71c  5e                   pop esi
// 0087b71d  c20800               ret 8
// 0087b720  6aff                 push -1
// 0087b722  ebe2                 jmp 0x87b706
// 0087b724  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 0087b72a  6aff                 push -1
// 0087b72c  50                   push eax
// 0087b72d  8bce                 mov ecx, esi
// 0087b72f  e8bcf6ffff           call 0x87adf0
// 0087b734  50                   push eax
// 0087b735  8bce                 mov ecx, esi
// 0087b737  e854fbffff           call 0x87b290
// 0087b73c  b801000000           mov eax, 1
// 0087b741  5e                   pop esi
// 0087b742  c20800               ret 8
// 0087b745  8b8ef8010000         mov ecx, dword ptr [esi + 0x1f8]
// 0087b74b  6a01                 push 1
// 0087b74d  51                   push ecx
// 0087b74e  8bce                 mov ecx, esi
// 0087b750  e89bf6ffff           call 0x87adf0
// 0087b755  50                   push eax
// 0087b756  8bce                 mov ecx, esi
// 0087b758  e833fbffff           call 0x87b290
// 0087b75d  b801000000           mov eax, 1
// 0087b762  5e                   pop esi
// 0087b763  c20800               ret 8
// 0087b766  8b96f8010000         mov edx, dword ptr [esi + 0x1f8]
// 0087b76c  6aff                 push -1
// 0087b76e  52                   push edx
// 0087b76f  8bce                 mov ecx, esi
// 0087b771  e8daf9ffff           call 0x87b150
// 0087b776  83f8ff               cmp eax, -1
// 0087b779  7594                 jne 0x87b70f
// 0087b77b  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0087b781  6a01                 push 1
// 0087b783  6a00                 push 0
// 0087b785  6a01                 push 1
// 0087b787  50                   push eax
// 0087b788  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0087b78e  50                   push eax
// 0087b78f  e83c9dfcff           call 0x8454d0
// 0087b794  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 0087b79a  0f8514010000         jne 0x87b8b4
// 0087b7a0  6aff                 push -1
// 0087b7a2  6aff                 push -1
// 0087b7a4  8bce                 mov ecx, esi
// 0087b7a6  e825ceffff           call 0x8785d0
// 0087b7ab  83f8ff               cmp eax, -1
// 0087b7ae  0f8400010000         je 0x87b8b4
// 0087b7b4  50                   push eax
// 0087b7b5  8bce                 mov ecx, esi
// 0087b7b7  e8d4faffff           call 0x87b290
// 0087b7bc  b801000000           mov eax, 1
// 0087b7c1  5e                   pop esi
// 0087b7c2  c20800               ret 8
// 0087b7c5  8b8ef8010000         mov ecx, dword ptr [esi + 0x1f8]
// 0087b7cb  6aff                 push -1
// 0087b7cd  51                   push ecx
// 0087b7ce  8bce                 mov ecx, esi
// 0087b7d0  e8dbf7ffff           call 0x87afb0
// 0087b7d5  50                   push eax
// 0087b7d6  8bce                 mov ecx, esi
// 0087b7d8  e8b3faffff           call 0x87b290
// 0087b7dd  b801000000           mov eax, 1
// 0087b7e2  5e                   pop esi
// 0087b7e3  c20800               ret 8
// 0087b7e6  8b96f8010000         mov edx, dword ptr [esi + 0x1f8]
// 0087b7ec  6a01                 push 1
// 0087b7ee  52                   push edx
// 0087b7ef  8bce                 mov ecx, esi
// 0087b7f1  e8baf7ffff           call 0x87afb0
// 0087b7f6  50                   push eax
// 0087b7f7  8bce                 mov ecx, esi
// 0087b7f9  e892faffff           call 0x87b290
// 0087b7fe  b801000000           mov eax, 1
// 0087b803  5e                   pop esi
// 0087b804  c20800               ret 8
// 0087b807  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 0087b80d  6a01                 push 1
// 0087b80f  50                   push eax
// 0087b810  8bce                 mov ecx, esi
// 0087b812  e839f9ffff           call 0x87b150
// 0087b817  83f8ff               cmp eax, -1
// 0087b81a  0f85effeffff         jne 0x87b70f
// 0087b820  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0087b826  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0087b82c  6a01                 push 1
// 0087b82e  6a00                 push 0
// 0087b830  6a01                 push 1
// 0087b832  6a01                 push 1
// 0087b834  52                   push edx
// 0087b835  e8969cfcff           call 0x8454d0
// 0087b83a  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 0087b840  7572                 jne 0x87b8b4
// 0087b842  6a01                 push 1
// 0087b844  e959ffffff           jmp 0x87b7a2
// 0087b849  6a10                 push 0x10
// 0087b84b  ff1530cc9800         call dword ptr [0x98cc30]
// 0087b851  6685c0               test ax, ax
// 0087b854  7c29                 jl 0x87b87f
// 0087b856  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 0087b85c  6a01                 push 1
// 0087b85e  50                   push eax
// 0087b85f  8bce                 mov ecx, esi
// 0087b861  e86acdffff           call 0x8785d0
// 0087b866  3b86f8010000         cmp eax, dword ptr [esi + 0x1f8]
// 0087b86c  7e46                 jle 0x87b8b4
// 0087b86e  50                   push eax
// 0087b86f  8bce                 mov ecx, esi
// 0087b871  e81afaffff           call 0x87b290
// 0087b876  b801000000           mov eax, 1
// 0087b87b  5e                   pop esi
// 0087b87c  c20800               ret 8
// 0087b87f  8b8ef8010000         mov ecx, dword ptr [esi + 0x1f8]
// 0087b885  6aff                 push -1
// 0087b887  51                   push ecx
// 0087b888  8bce                 mov ecx, esi
// 0087b88a  e841cdffff           call 0x8785d0
// 0087b88f  3b86f8010000         cmp eax, dword ptr [esi + 0x1f8]
// 0087b895  7d1d                 jge 0x87b8b4
// 0087b897  50                   push eax
// 0087b898  8bce                 mov ecx, esi
// 0087b89a  e8f1f9ffff           call 0x87b290
// 0087b89f  b801000000           mov eax, 1
// 0087b8a4  5e                   pop esi
// 0087b8a5  c20800               ret 8
// 0087b8a8  8b16                 mov edx, dword ptr [esi]
// 0087b8aa  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 0087b8b0  8bce                 mov ecx, esi
// 0087b8b2  ffd0                 call eax
// 0087b8b4  33c0                 xor eax, eax
// 0087b8b6  5e                   pop esi
// 0087b8b7  c20800               ret 8
// 0087b8ba  8bff                 mov edi, edi
// 0087b8bc  49                   dec ecx
// 0087b8bd  b88700a8b8           mov eax, 0xb8a80087
// 0087b8c2  8700                 xchg dword ptr [eax], eax
// 0087b8c4  c5b78700e6b7         lds esi, ptr [edi - 0x4819ff79]
// 0087b8ca  8700                 xchg dword ptr [eax], eax
// 0087b8cc  20b7870004b7         and byte ptr [edi - 0x48fbff79], dh
// 0087b8d2  8700                 xchg dword ptr [eax], eax
// 0087b8d4  24b7                 and al, 0xb7
// 0087b8d6  8700                 xchg dword ptr [eax], eax
// 0087b8d8  66b787               mov bh, 0x87
// 0087b8db  0045b7               add byte ptr [ebp - 0x49], al
// 0087b8de  8700                 xchg dword ptr [eax], eax
// 0087b8e0  07                   pop es
// 0087b8e1  b88700b4b8           mov eax, 0xb8b40087
// 0087b8e6  8700                 xchg dword ptr [eax], eax
// 0087b8e8  000a                 add byte ptr [edx], cl
// 0087b8ea  0a0a                 or cl, byte ptr [edx]
// 0087b8ec  010a                 add dword ptr [edx], ecx
// 0087b8ee  0a0a                 or cl, byte ptr [edx]
// 0087b8f0  0a0a                 or cl, byte ptr [edx]
// 0087b8f2  0a0a                 or cl, byte ptr [edx]
// 0087b8f4  0a0a                 or cl, byte ptr [edx]
// 0087b8f6  0a0a                 or cl, byte ptr [edx]
// 0087b8f8  0a0a                 or cl, byte ptr [edx]
// 0087b8fa  0a0a                 or cl, byte ptr [edx]
// 0087b8fc  0a0a                 or cl, byte ptr [edx]
// 0087b8fe  0a0a                 or cl, byte ptr [edx]
// 0087b900  0203                 add al, byte ptr [ebx]
// 0087b902  0405                 add al, 5
// 0087b904  06                   push es
// 0087b905  07                   pop es
// 0087b906  0809                 or byte ptr [ecx], cl
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPControlGallery@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp