// roc 2011-06 008f3090  unit: CXTButton  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3090
//
// 008f3090  6aff                 push -1
// 008f3092  6896eba000           push 0xa0eb96
// 008f3097  64a100000000         mov eax, dword ptr fs:[0]
// 008f309d  50                   push eax
// 008f309e  56                   push esi
// 008f309f  57                   push edi
// 008f30a0  a12058c900           mov eax, dword ptr [0xc95820]
// 008f30a5  33c4                 xor eax, esp
// 008f30a7  50                   push eax
// 008f30a8  8d44240c             lea eax, [esp + 0xc]
// 008f30ac  64a300000000         mov dword ptr fs:[0], eax
// 008f30b2  8bf1                 mov esi, ecx
// 008f30b4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008f30b8  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 008f30be  898680000000         mov dword ptr [esi + 0x80], eax
// 008f30c4  a840                 test al, 0x40
// 008f30c6  7428                 je 0x8f30f0
// 008f30c8  68c8000000           push 0xc8
// 008f30cd  e88c6ff1ff           call 0x80a05e
// 008f30d2  83c404               add esp, 4
// 008f30d5  8944241c             mov dword ptr [esp + 0x1c], eax
// 008f30d9  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008f30e1  85c0                 test eax, eax
// 008f30e3  7435                 je 0x8f311a
// 008f30e5  6a00                 push 0
// 008f30e7  8bc8                 mov ecx, eax
// 008f30e9  e812e90000           call 0x901a00
// 008f30ee  eb2c                 jmp 0x8f311c
// 008f30f0  a801                 test al, 1
// 008f30f2  7439                 je 0x8f312d
// 008f30f4  6880000000           push 0x80
// 008f30f9  e8606ff1ff           call 0x80a05e
// 008f30fe  83c404               add esp, 4
// 008f3101  8944241c             mov dword ptr [esp + 0x1c], eax
// 008f3105  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008f310d  85c0                 test eax, eax
// 008f310f  7409                 je 0x8f311a
// 008f3111  8bc8                 mov ecx, eax
// 008f3113  e888e50000           call 0x9016a0
// 008f3118  eb02                 jmp 0x8f311c
// 008f311a  33c0                 xor eax, eax
// 008f311c  50                   push eax
// 008f311d  8d4e54               lea ecx, [esi + 0x54]
// 008f3120  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008f3128  e8d389f7ff           call 0x86bb00
// 008f312d  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f3130  50                   push eax
// 008f3131  ff15ec1ba400         call dword ptr [0xa41bec]
// 008f3137  85c0                 test eax, eax
// 008f3139  7415                 je 0x8f3150
// 008f313b  837c242000           cmp dword ptr [esp + 0x20], 0
// 008f3140  740e                 je 0x8f3150
// 008f3142  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008f3145  6a01                 push 1
// 008f3147  6a00                 push 0
// 008f3149  51                   push ecx
// 008f314a  ff15ec19a400         call dword ptr [0xa419ec]
// 008f3150  8bc7                 mov eax, edi
// 008f3152  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f3156  64890d00000000       mov dword ptr fs:[0], ecx
// 008f315d  59                   pop ecx
// 008f315e  5f                   pop edi
// 008f315f  5e                   pop esi
// 008f3160  83c40c               add esp, 0xc
// 008f3163  c20800               ret 8
// copied from an identical function in another client (function ?SetXButtonStyle@CXTButton@@UAEKKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp