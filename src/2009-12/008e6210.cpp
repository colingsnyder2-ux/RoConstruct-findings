// roc 2009-12 008e6210  unit: CXTButton  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e6210
//
// 008e6210  6aff                 push -1
// 008e6212  6816619600           push 0x966116
// 008e6217  64a100000000         mov eax, dword ptr fs:[0]
// 008e621d  50                   push eax
// 008e621e  56                   push esi
// 008e621f  57                   push edi
// 008e6220  a10052b600           mov eax, dword ptr [0xb65200]
// 008e6225  33c4                 xor eax, esp
// 008e6227  50                   push eax
// 008e6228  8d44240c             lea eax, [esp + 0xc]
// 008e622c  64a300000000         mov dword ptr fs:[0], eax
// 008e6232  8bf1                 mov esi, ecx
// 008e6234  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e6238  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 008e623e  898680000000         mov dword ptr [esi + 0x80], eax
// 008e6244  a840                 test al, 0x40
// 008e6246  7428                 je 0x8e6270
// 008e6248  68c8000000           push 0xc8
// 008e624d  e80ed6f0ff           call 0x7f3860
// 008e6252  83c404               add esp, 4
// 008e6255  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e6259  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008e6261  85c0                 test eax, eax
// 008e6263  7435                 je 0x8e629a
// 008e6265  6a00                 push 0
// 008e6267  8bc8                 mov ecx, eax
// 008e6269  e882df0000           call 0x8f41f0
// 008e626e  eb2c                 jmp 0x8e629c
// 008e6270  a801                 test al, 1
// 008e6272  7439                 je 0x8e62ad
// 008e6274  6880000000           push 0x80
// 008e6279  e8e2d5f0ff           call 0x7f3860
// 008e627e  83c404               add esp, 4
// 008e6281  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e6285  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008e628d  85c0                 test eax, eax
// 008e628f  7409                 je 0x8e629a
// 008e6291  8bc8                 mov ecx, eax
// 008e6293  e8f8db0000           call 0x8f3e90
// 008e6298  eb02                 jmp 0x8e629c
// 008e629a  33c0                 xor eax, eax
// 008e629c  50                   push eax
// 008e629d  8d4e54               lea ecx, [esi + 0x54]
// 008e62a0  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008e62a8  e82341f7ff           call 0x85a3d0
// 008e62ad  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e62b0  50                   push eax
// 008e62b1  ff1584cc9800         call dword ptr [0x98cc84]
// 008e62b7  85c0                 test eax, eax
// 008e62b9  7415                 je 0x8e62d0
// 008e62bb  837c242000           cmp dword ptr [esp + 0x20], 0
// 008e62c0  740e                 je 0x8e62d0
// 008e62c2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008e62c5  6a01                 push 1
// 008e62c7  6a00                 push 0
// 008e62c9  51                   push ecx
// 008e62ca  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008e62d0  8bc7                 mov eax, edi
// 008e62d2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e62d6  64890d00000000       mov dword ptr fs:[0], ecx
// 008e62dd  59                   pop ecx
// 008e62de  5f                   pop edi
// 008e62df  5e                   pop esi
// 008e62e0  83c40c               add esp, 0xc
// 008e62e3  c20800               ret 8
// copied from an identical function in another client (function ?SetXButtonStyle@CXTButton@@UAEKKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp