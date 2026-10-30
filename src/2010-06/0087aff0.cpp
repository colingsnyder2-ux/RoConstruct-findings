// roc 2010-06 0087aff0  unit: VCEdit::?$CXTMaskEditT  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087aff0
//
// 0087aff0  6aff                 push -1
// 0087aff2  6842a69b00           push 0x9ba642
// 0087aff7  64a100000000         mov eax, dword ptr fs:[0]
// 0087affd  50                   push eax
// 0087affe  83ec1c               sub esp, 0x1c
// 0087b001  53                   push ebx
// 0087b002  55                   push ebp
// 0087b003  56                   push esi
// 0087b004  57                   push edi
// 0087b005  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0087b00a  33c4                 xor eax, esp
// 0087b00c  50                   push eax
// 0087b00d  8d442430             lea eax, [esp + 0x30]
// 0087b011  64a300000000         mov dword ptr fs:[0], eax
// 0087b017  8bf1                 mov esi, ecx
// 0087b019  33ff                 xor edi, edi
// 0087b01b  897c241c             mov dword ptr [esp + 0x1c], edi
// 0087b01f  39bea8000000         cmp dword ptr [esi + 0xa8], edi
// 0087b025  0f84eb010000         je 0x87b216
// 0087b02b  39beb8000000         cmp dword ptr [esi + 0xb8], edi
// 0087b031  0f85df010000         jne 0x87b216
// 0087b037  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0087b03d  3bcf                 cmp ecx, edi
// 0087b03f  0f84b7010000         je 0x87b1fc
// 0087b045  39be9c000000         cmp dword ptr [esi + 0x9c], edi
// 0087b04b  0f84ab010000         je 0x87b1fc
// 0087b051  8b01                 mov eax, dword ptr [ecx]
// 0087b053  8b5058               mov edx, dword ptr [eax + 0x58]
// 0087b056  ffd2                 call edx
// 0087b058  85c0                 test eax, eax
// 0087b05a  0f859c010000         jne 0x87b1fc
// 0087b060  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0087b066  39b8c8000000         cmp dword ptr [eax + 0xc8], edi
// 0087b06c  0f848a010000         je 0x87b1fc
// 0087b072  39787c               cmp dword ptr [eax + 0x7c], edi
// 0087b075  0f8581010000         jne 0x87b1fc
// 0087b07b  39beb4000000         cmp dword ptr [esi + 0xb4], edi
// 0087b081  0f8475010000         je 0x87b1fc
// 0087b087  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 0087b08d  8ba8c4000000         mov ebp, dword ptr [eax + 0xc4]
// 0087b093  397d28               cmp dword ptr [ebp + 0x28], edi
// 0087b096  0f8460010000         je 0x87b1fc
// 0087b09c  8d4c2420             lea ecx, [esp + 0x20]
// 0087b0a0  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 0087b0a6  8d442420             lea eax, [esp + 0x20]
// 0087b0aa  50                   push eax
// 0087b0ab  8bce                 mov ecx, esi
// 0087b0ad  897c243c             mov dword ptr [esp + 0x3c], edi
// 0087b0b1  e8d2cef2ff           call 0x7a7f88
// 0087b0b6  8d4c2420             lea ecx, [esp + 0x20]
// 0087b0ba  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087b0c0  8d4c2424             lea ecx, [esp + 0x24]
// 0087b0c4  51                   push ecx
// 0087b0c5  8d54242c             lea edx, [esp + 0x2c]
// 0087b0c9  52                   push edx
// 0087b0ca  8bce                 mov ecx, esi
// 0087b0cc  8bd8                 mov ebx, eax
// 0087b0ce  897c2430             mov dword ptr [esp + 0x30], edi
// 0087b0d2  897c242c             mov dword ptr [esp + 0x2c], edi
// 0087b0d6  e8c597f3ff           call 0x7b48a0
// 0087b0db  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087b0df  39442428             cmp dword ptr [esp + 0x28], eax
// 0087b0e3  0f8501010000         jne 0x87b1ea
// 0087b0e9  3bd8                 cmp ebx, eax
// 0087b0eb  0f85f9000000         jne 0x87b1ea
// 0087b0f1  3bdf                 cmp ebx, edi
// 0087b0f3  0f8ef1000000         jle 0x87b1ea
// 0087b0f9  397d28               cmp dword ptr [ebp + 0x28], edi
// 0087b0fc  0f8ee6000000         jle 0x87b1e8
// 0087b102  57                   push edi
// 0087b103  8d44241c             lea eax, [esp + 0x1c]
// 0087b107  50                   push eax
// 0087b108  8bcd                 mov ecx, ebp
// 0087b10a  e8f1ebf9ff           call 0x819d00
// 0087b10f  8d4c2418             lea ecx, [esp + 0x18]
// 0087b113  c644243801           mov byte ptr [esp + 0x38], 1
// 0087b118  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087b11e  3bc3                 cmp eax, ebx
// 0087b120  7e31                 jle 0x87b153
// 0087b122  53                   push ebx
// 0087b123  8d4c2430             lea ecx, [esp + 0x30]
// 0087b127  51                   push ecx
// 0087b128  8d4c2420             lea ecx, [esp + 0x20]
// 0087b12c  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 0087b132  834c241c01           or dword ptr [esp + 0x1c], 1
// 0087b137  8bc8                 mov ecx, eax
// 0087b139  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087b13f  50                   push eax
// 0087b140  8d4c2424             lea ecx, [esp + 0x24]
// 0087b144  ff1528c09e00         call dword ptr [0x9ec028]
// 0087b14a  c644241701           mov byte ptr [esp + 0x17], 1
// 0087b14f  85c0                 test eax, eax
// 0087b151  7405                 je 0x87b158
// 0087b153  c644241700           mov byte ptr [esp + 0x17], 0
// 0087b158  f644241c01           test byte ptr [esp + 0x1c], 1
// 0087b15d  740f                 je 0x87b16e
// 0087b15f  8364241cfe           and dword ptr [esp + 0x1c], 0xfffffffe
// 0087b164  8d4c242c             lea ecx, [esp + 0x2c]
// 0087b168  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087b16e  807c241700           cmp byte ptr [esp + 0x17], 0
// 0087b173  8d4c2418             lea ecx, [esp + 0x18]
// 0087b177  7517                 jne 0x87b190
// 0087b179  c644243800           mov byte ptr [esp + 0x38], 0
// 0087b17e  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087b184  47                   inc edi
// 0087b185  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 0087b188  0f8c74ffffff         jl 0x87b102
// 0087b18e  eb58                 jmp 0x87b1e8
// 0087b190  c786b800000001000000 mov dword ptr [esi + 0xb8], 1
// 0087b19a  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087b1a0  50                   push eax
// 0087b1a1  8bce                 mov ecx, esi
// 0087b1a3  e8accbf2ff           call 0x7a7d54
// 0087b1a8  8d4c2418             lea ecx, [esp + 0x18]
// 0087b1ac  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087b1b2  8b5620               mov edx, dword ptr [esi + 0x20]
// 0087b1b5  8b3d54ba9e00         mov edi, dword ptr [0x9eba54]
// 0087b1bb  53                   push ebx
// 0087b1bc  50                   push eax
// 0087b1bd  68b1000000           push 0xb1
// 0087b1c2  52                   push edx
// 0087b1c3  ffd7                 call edi
// 0087b1c5  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087b1c8  6a00                 push 0
// 0087b1ca  6a00                 push 0
// 0087b1cc  68b7000000           push 0xb7
// 0087b1d1  50                   push eax
// 0087b1d2  ffd7                 call edi
// 0087b1d4  8d4c2418             lea ecx, [esp + 0x18]
// 0087b1d8  c786b800000000000000 mov dword ptr [esi + 0xb8], 0
// 0087b1e2  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087b1e8  33ff                 xor edi, edi
// 0087b1ea  8d4c2420             lea ecx, [esp + 0x20]
// 0087b1ee  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0087b1f6  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087b1fc  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 0087b202  7412                 je 0x87b216
// 0087b204  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 0087b20a  3bcf                 cmp ecx, edi
// 0087b20c  7408                 je 0x87b216
// 0087b20e  56                   push esi
// 0087b20f  6a04                 push 4
// 0087b211  e8aa06faff           call 0x81b8c0
// 0087b216  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087b21a  64890d00000000       mov dword ptr fs:[0], ecx
// 0087b221  59                   pop ecx
// 0087b222  5f                   pop edi
// 0087b223  5e                   pop esi
// 0087b224  5d                   pop ebp
// 0087b225  5b                   pop ebx
// 0087b226  83c428               add esp, 0x28
// 0087b229  c3                   ret 
// copied from an identical function in another client (function ?OnEnChange@CXTPPropertyGridInplaceEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp