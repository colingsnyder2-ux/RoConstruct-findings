// roc 2010-06 0089a530  unit: CXTButton  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089a530
//
// 0089a530  6aff                 push -1
// 0089a532  6876c09b00           push 0x9bc076
// 0089a537  64a100000000         mov eax, dword ptr fs:[0]
// 0089a53d  50                   push eax
// 0089a53e  56                   push esi
// 0089a53f  57                   push edi
// 0089a540  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0089a545  33c4                 xor eax, esp
// 0089a547  50                   push eax
// 0089a548  8d44240c             lea eax, [esp + 0xc]
// 0089a54c  64a300000000         mov dword ptr fs:[0], eax
// 0089a552  8bf1                 mov esi, ecx
// 0089a554  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0089a558  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 0089a55e  898680000000         mov dword ptr [esi + 0x80], eax
// 0089a564  a840                 test al, 0x40
// 0089a566  7428                 je 0x89a590
// 0089a568  68c8000000           push 0xc8
// 0089a56d  e82ed4f0ff           call 0x7a79a0
// 0089a572  83c404               add esp, 4
// 0089a575  8944241c             mov dword ptr [esp + 0x1c], eax
// 0089a579  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0089a581  85c0                 test eax, eax
// 0089a583  7435                 je 0x89a5ba
// 0089a585  6a00                 push 0
// 0089a587  8bc8                 mov ecx, eax
// 0089a589  e8a2dd0000           call 0x8a8330
// 0089a58e  eb2c                 jmp 0x89a5bc
// 0089a590  a801                 test al, 1
// 0089a592  7439                 je 0x89a5cd
// 0089a594  6880000000           push 0x80
// 0089a599  e802d4f0ff           call 0x7a79a0
// 0089a59e  83c404               add esp, 4
// 0089a5a1  8944241c             mov dword ptr [esp + 0x1c], eax
// 0089a5a5  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0089a5ad  85c0                 test eax, eax
// 0089a5af  7409                 je 0x89a5ba
// 0089a5b1  8bc8                 mov ecx, eax
// 0089a5b3  e818da0000           call 0x8a7fd0
// 0089a5b8  eb02                 jmp 0x89a5bc
// 0089a5ba  33c0                 xor eax, eax
// 0089a5bc  50                   push eax
// 0089a5bd  8d4e54               lea ecx, [esi + 0x54]
// 0089a5c0  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0089a5c8  e8933df7ff           call 0x80e360
// 0089a5cd  8b4620               mov eax, dword ptr [esi + 0x20]
// 0089a5d0  50                   push eax
// 0089a5d1  ff1528bc9e00         call dword ptr [0x9ebc28]
// 0089a5d7  85c0                 test eax, eax
// 0089a5d9  7415                 je 0x89a5f0
// 0089a5db  837c242000           cmp dword ptr [esp + 0x20], 0
// 0089a5e0  740e                 je 0x89a5f0
// 0089a5e2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0089a5e5  6a01                 push 1
// 0089a5e7  6a00                 push 0
// 0089a5e9  51                   push ecx
// 0089a5ea  ff1578ba9e00         call dword ptr [0x9eba78]
// 0089a5f0  8bc7                 mov eax, edi
// 0089a5f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089a5f6  64890d00000000       mov dword ptr fs:[0], ecx
// 0089a5fd  59                   pop ecx
// 0089a5fe  5f                   pop edi
// 0089a5ff  5e                   pop esi
// 0089a600  83c40c               add esp, 0xc
// 0089a603  c20800               ret 8
// copied from an identical function in another client (function ?SetXButtonStyle@CXTButton@@UAEKKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp