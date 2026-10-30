// roc 2009-12 008e6040  unit: CXTCaptionButton  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e6040
//
// 008e6040  6aff                 push -1
// 008e6042  68d8609600           push 0x9660d8
// 008e6047  64a100000000         mov eax, dword ptr fs:[0]
// 008e604d  50                   push eax
// 008e604e  83ec34               sub esp, 0x34
// 008e6051  53                   push ebx
// 008e6052  56                   push esi
// 008e6053  57                   push edi
// 008e6054  a10052b600           mov eax, dword ptr [0xb65200]
// 008e6059  33c4                 xor eax, esp
// 008e605b  50                   push eax
// 008e605c  8d442444             lea eax, [esp + 0x44]
// 008e6060  64a300000000         mov dword ptr fs:[0], eax
// 008e6066  8bf9                 mov edi, ecx
// 008e6068  8d4c2420             lea ecx, [esp + 0x20]
// 008e606c  e8bf47f2ff           call 0x80a830
// 008e6071  0fb74c245c           movzx ecx, word ptr [esp + 0x5c]
// 008e6076  8d442410             lea eax, [esp + 0x10]
// 008e607a  50                   push eax
// 008e607b  33db                 xor ebx, ebx
// 008e607d  51                   push ecx
// 008e607e  895c2454             mov dword ptr [esp + 0x54], ebx
// 008e6082  895c2418             mov dword ptr [esp + 0x18], ebx
// 008e6086  e8155af2ff           call 0x80baa0
// 008e608b  83c408               add esp, 8
// 008e608e  3bc3                 cmp eax, ebx
// 008e6090  7528                 jne 0x8e60ba
// 008e6092  8d4c2420             lea ecx, [esp + 0x20]
// 008e6096  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 008e609e  e83d6df2ff           call 0x80cde0
// 008e60a3  33c0                 xor eax, eax
// 008e60a5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008e60a9  64890d00000000       mov dword ptr fs:[0], ecx
// 008e60b0  59                   pop ecx
// 008e60b1  5f                   pop edi
// 008e60b2  5e                   pop esi
// 008e60b3  5b                   pop ebx
// 008e60b4  83c440               add esp, 0x40
// 008e60b7  c21000               ret 0x10
// 008e60ba  395c2410             cmp dword ptr [esp + 0x10], ebx
// 008e60be  740c                 je 0x8e60cc
// 008e60c0  50                   push eax
// 008e60c1  8d4c2424             lea ecx, [esp + 0x24]
// 008e60c5  e8d66cf2ff           call 0x80cda0
// 008e60ca  eb4c                 jmp 0x8e6118
// 008e60cc  be18229a00           mov esi, 0x9a2218
// 008e60d1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008e60d5  89742418             mov dword ptr [esp + 0x18], esi
// 008e60d9  50                   push eax
// 008e60da  8d4c241c             lea ecx, [esp + 0x1c]
// 008e60de  c644245001           mov byte ptr [esp + 0x50], 1
// 008e60e3  e842ddf0ff           call 0x7f3e2a
// 008e60e8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008e60ec  52                   push edx
// 008e60ed  8d4c2460             lea ecx, [esp + 0x60]
// 008e60f1  e8caccdcff           call 0x6b2dc0
// 008e60f6  8bc8                 mov ecx, eax
// 008e60f8  e80370f6ff           call 0x84d100
// 008e60fd  50                   push eax
// 008e60fe  8d4c2424             lea ecx, [esp + 0x24]
// 008e6102  e8596cf2ff           call 0x80cd60
// 008e6107  8d4c2418             lea ecx, [esp + 0x18]
// 008e610b  885c244c             mov byte ptr [esp + 0x4c], bl
// 008e610f  89742418             mov dword ptr [esp + 0x18], esi
// 008e6113  e81891b2ff           call 0x40f230
// 008e6118  8d4c2420             lea ecx, [esp + 0x20]
// 008e611c  e87f47f2ff           call 0x80a8a0
// 008e6121  85c0                 test eax, eax
// 008e6123  0f8569ffffff         jne 0x8e6092
// 008e6129  8b442460             mov eax, dword ptr [esp + 0x60]
// 008e612d  50                   push eax
// 008e612e  83ec24               sub esp, 0x24
// 008e6131  8bcc                 mov ecx, esp
// 008e6133  89a42488000000       mov dword ptr [esp + 0x88], esp
// 008e613a  e8f146f2ff           call 0x80a830
// 008e613f  83ec24               sub esp, 0x24
// 008e6142  8d54246c             lea edx, [esp + 0x6c]
// 008e6146  8bcc                 mov ecx, esp
// 008e6148  89642460             mov dword ptr [esp + 0x60], esp
// 008e614c  52                   push edx
// 008e614d  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 008e6155  e8e646f2ff           call 0x80a840
// 008e615a  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 008e6161  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008e6168  50                   push eax
// 008e6169  51                   push ecx
// 008e616a  8bcf                 mov ecx, edi
// 008e616c  889c24a0000000       mov byte ptr [esp + 0xa0], bl
// 008e6173  e898fdffff           call 0x8e5f10
// 008e6178  8d4c2420             lea ecx, [esp + 0x20]
// 008e617c  8bf0                 mov esi, eax
// 008e617e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 008e6186  e8556cf2ff           call 0x80cde0
// 008e618b  8bc6                 mov eax, esi
// 008e618d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008e6191  64890d00000000       mov dword ptr fs:[0], ecx
// 008e6198  59                   pop ecx
// 008e6199  5f                   pop edi
// 008e619a  5e                   pop esi
// 008e619b  5b                   pop ebx
// 008e619c  83c440               add esp, 0x40
// 008e619f  c21000               ret 0x10
// copied from an identical function in another client (function ?SetBitmap@CXTButton@@UAEHVCSize@@IH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp