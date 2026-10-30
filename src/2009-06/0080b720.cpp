// roc 2009-06 0080b720  unit: CXTButton  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080b720
//
// 0080b720  6aff                 push -1
// 0080b722  68461f8800           push 0x881f46
// 0080b727  64a100000000         mov eax, dword ptr fs:[0]
// 0080b72d  50                   push eax
// 0080b72e  56                   push esi
// 0080b72f  57                   push edi
// 0080b730  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080b735  33c4                 xor eax, esp
// 0080b737  50                   push eax
// 0080b738  8d44240c             lea eax, [esp + 0xc]
// 0080b73c  64a300000000         mov dword ptr fs:[0], eax
// 0080b742  8bf1                 mov esi, ecx
// 0080b744  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0080b748  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 0080b74e  898680000000         mov dword ptr [esi + 0x80], eax
// 0080b754  a840                 test al, 0x40
// 0080b756  7428                 je 0x80b780
// 0080b758  68c8000000           push 0xc8
// 0080b75d  e8d6d2f0ff           call 0x718a38
// 0080b762  83c404               add esp, 4
// 0080b765  8944241c             mov dword ptr [esp + 0x1c], eax
// 0080b769  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0080b771  85c0                 test eax, eax
// 0080b773  7435                 je 0x80b7aa
// 0080b775  6a00                 push 0
// 0080b777  8bc8                 mov ecx, eax
// 0080b779  e882dd0000           call 0x819500
// 0080b77e  eb2c                 jmp 0x80b7ac
// 0080b780  a801                 test al, 1
// 0080b782  7439                 je 0x80b7bd
// 0080b784  6880000000           push 0x80
// 0080b789  e8aad2f0ff           call 0x718a38
// 0080b78e  83c404               add esp, 4
// 0080b791  8944241c             mov dword ptr [esp + 0x1c], eax
// 0080b795  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0080b79d  85c0                 test eax, eax
// 0080b79f  7409                 je 0x80b7aa
// 0080b7a1  8bc8                 mov ecx, eax
// 0080b7a3  e8f8d90000           call 0x8191a0
// 0080b7a8  eb02                 jmp 0x80b7ac
// 0080b7aa  33c0                 xor eax, eax
// 0080b7ac  50                   push eax
// 0080b7ad  8d4e54               lea ecx, [esi + 0x54]
// 0080b7b0  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0080b7b8  e8533bf7ff           call 0x77f310
// 0080b7bd  8b4620               mov eax, dword ptr [esi + 0x20]
// 0080b7c0  50                   push eax
// 0080b7c1  ff15e0ed8900         call dword ptr [0x89ede0]
// 0080b7c7  85c0                 test eax, eax
// 0080b7c9  7415                 je 0x80b7e0
// 0080b7cb  837c242000           cmp dword ptr [esp + 0x20], 0
// 0080b7d0  740e                 je 0x80b7e0
// 0080b7d2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0080b7d5  6a01                 push 1
// 0080b7d7  6a00                 push 0
// 0080b7d9  51                   push ecx
// 0080b7da  ff157cee8900         call dword ptr [0x89ee7c]
// 0080b7e0  8bc7                 mov eax, edi
// 0080b7e2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080b7e6  64890d00000000       mov dword ptr fs:[0], ecx
// 0080b7ed  59                   pop ecx
// 0080b7ee  5f                   pop edi
// 0080b7ef  5e                   pop esi
// 0080b7f0  83c40c               add esp, 0xc
// 0080b7f3  c20800               ret 8
// copied from an identical function in another client (function ?SetXButtonStyle@CXTButton@@UAEKKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp