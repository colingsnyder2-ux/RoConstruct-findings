// roc 2011-06 008e7a40  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e7a40
//
// 008e7a40  6aff                 push -1
// 008e7a42  6840dfa000           push 0xa0df40
// 008e7a47  64a100000000         mov eax, dword ptr fs:[0]
// 008e7a4d  50                   push eax
// 008e7a4e  83ec54               sub esp, 0x54
// 008e7a51  56                   push esi
// 008e7a52  a12058c900           mov eax, dword ptr [0xc95820]
// 008e7a57  33c4                 xor eax, esp
// 008e7a59  50                   push eax
// 008e7a5a  8d44245c             lea eax, [esp + 0x5c]
// 008e7a5e  64a300000000         mov dword ptr fs:[0], eax
// 008e7a64  8bf1                 mov esi, ecx
// 008e7a66  8b442470             mov eax, dword ptr [esp + 0x70]
// 008e7a6a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008e7a6e  50                   push eax
// 008e7a6f  51                   push ecx
// 008e7a70  8bce                 mov ecx, esi
// 008e7a72  e819fcffff           call 0x8e7690
// 008e7a77  83f8ff               cmp eax, -1
// 008e7a7a  0f84c9000000         je 0x8e7b49
// 008e7a80  394670               cmp dword ptr [esi + 0x70], eax
// 008e7a83  0f84c0000000         je 0x8e7b49
// 008e7a89  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e7a8c  52                   push edx
// 008e7a8d  894670               mov dword ptr [esi + 0x70], eax
// 008e7a90  ff15b819a400         call dword ptr [0xa419b8]
// 008e7a96  50                   push eax
// 008e7a97  e88c28f2ff           call 0x80a328
// 008e7a9c  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 008e7a9f  8b4020               mov eax, dword ptr [eax + 0x20]
// 008e7aa2  6a00                 push 0
// 008e7aa4  51                   push ecx
// 008e7aa5  6842270000           push 0x2742
// 008e7aaa  50                   push eax
// 008e7aab  ff15c019a400         call dword ptr [0xa419c0]
// 008e7ab1  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e7ab4  8d4c2408             lea ecx, [esp + 8]
// 008e7ab8  51                   push ecx
// 008e7ab9  52                   push edx
// 008e7aba  ff157c1ca400         call dword ptr [0xa41c7c]
// 008e7ac0  56                   push esi
// 008e7ac1  8d4c241c             lea ecx, [esp + 0x1c]
// 008e7ac5  e85e34f2ff           call 0x80af28
// 008e7aca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e7ace  8d442408             lea eax, [esp + 8]
// 008e7ad2  50                   push eax
// 008e7ad3  51                   push ecx
// 008e7ad4  8d4c2434             lea ecx, [esp + 0x34]
// 008e7ad8  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 008e7ae0  e80b53f7ff           call 0x85cdf0
// 008e7ae5  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e7ae9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e7aed  2b44240c             sub eax, dword ptr [esp + 0xc]
// 008e7af1  2b4c2408             sub ecx, dword ptr [esp + 8]
// 008e7af5  8d5654               lea edx, [esi + 0x54]
// 008e7af8  c644246401           mov byte ptr [esp + 0x64], 1
// 008e7afd  85d2                 test edx, edx
// 008e7aff  7403                 je 0x8e7b04
// 008e7b01  8b5204               mov edx, dword ptr [edx + 4]
// 008e7b04  6a04                 push 4
// 008e7b06  50                   push eax
// 008e7b07  51                   push ecx
// 008e7b08  6a00                 push 0
// 008e7b0a  6a00                 push 0
// 008e7b0c  6a00                 push 0
// 008e7b0e  52                   push edx
// 008e7b0f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008e7b13  6a00                 push 0
// 008e7b15  6a00                 push 0
// 008e7b17  52                   push edx
// 008e7b18  ff15e41aa400         call dword ptr [0xa41ae4]
// 008e7b1e  8d44242c             lea eax, [esp + 0x2c]
// 008e7b22  50                   push eax
// 008e7b23  8bce                 mov ecx, esi
// 008e7b25  e806feffff           call 0x8e7930
// 008e7b2a  8d4c242c             lea ecx, [esp + 0x2c]
// 008e7b2e  c644246400           mov byte ptr [esp + 0x64], 0
// 008e7b33  e8c854f7ff           call 0x85d000
// 008e7b38  8d4c2418             lea ecx, [esp + 0x18]
// 008e7b3c  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008e7b44  e8d933f2ff           call 0x80af22
// 008e7b49  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008e7b4d  64890d00000000       mov dword ptr fs:[0], ecx
// 008e7b54  59                   pop ecx
// 008e7b55  5e                   pop esi
// 008e7b56  83c460               add esp, 0x60
// 008e7b59  c20800               ret 8
// copied from an identical function in another client (function ?UpdateSelection@CXTColorHex@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp