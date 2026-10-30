// roc 2009-12 00838240  unit: CXTPControls  size: 350 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838240
//
// 00838240  6aff                 push -1
// 00838242  685ac49500           push 0x95c45a
// 00838247  64a100000000         mov eax, dword ptr fs:[0]
// 0083824d  50                   push eax
// 0083824e  83ec24               sub esp, 0x24
// 00838251  56                   push esi
// 00838252  57                   push edi
// 00838253  a10052b600           mov eax, dword ptr [0xb65200]
// 00838258  33c4                 xor eax, esp
// 0083825a  50                   push eax
// 0083825b  8d442430             lea eax, [esp + 0x30]
// 0083825f  64a300000000         mov dword ptr fs:[0], eax
// 00838265  8bf9                 mov edi, ecx
// 00838267  33f6                 xor esi, esi
// 00838269  8d4c2410             lea ecx, [esp + 0x10]
// 0083826d  89742418             mov dword ptr [esp + 0x18], esi
// 00838271  89742414             mov dword ptr [esp + 0x14], esi
// 00838275  ff1574de9800         call dword ptr [0x98de74]
// 0083827b  8b442444             mov eax, dword ptr [esp + 0x44]
// 0083827f  89742438             mov dword ptr [esp + 0x38], esi
// 00838283  8d4c2410             lea ecx, [esp + 0x10]
// 00838287  3bc6                 cmp eax, esi
// 00838289  7403                 je 0x83828e
// 0083828b  50                   push eax
// 0083828c  eb05                 jmp 0x838293
// 0083828e  68a8449a00           push 0x9a44a8
// 00838293  ff155cde9800         call dword ptr [0x98de5c]
// 00838299  8d4c240c             lea ecx, [esp + 0xc]
// 0083829d  ff1574de9800         call dword ptr [0x98de74]
// 008382a3  8b442440             mov eax, dword ptr [esp + 0x40]
// 008382a7  c644243801           mov byte ptr [esp + 0x38], 1
// 008382ac  8d4c240c             lea ecx, [esp + 0xc]
// 008382b0  3bc6                 cmp eax, esi
// 008382b2  7403                 je 0x8382b7
// 008382b4  50                   push eax
// 008382b5  eb05                 jmp 0x8382bc
// 008382b7  68207e9f00           push 0x9f7e20
// 008382bc  ff155cde9800         call dword ptr [0x98de5c]
// 008382c2  6801000080           push 0x80000001
// 008382c7  8d4c2420             lea ecx, [esp + 0x20]
// 008382cb  e8d0f30600           call 0x8a76a0
// 008382d0  8d442418             lea eax, [esp + 0x18]
// 008382d4  50                   push eax
// 008382d5  8d4c2418             lea ecx, [esp + 0x18]
// 008382d9  51                   push ecx
// 008382da  8d4c2414             lea ecx, [esp + 0x14]
// 008382de  c644244002           mov byte ptr [esp + 0x40], 2
// 008382e3  ff1580de9800         call dword ptr [0x98de80]
// 008382e9  50                   push eax
// 008382ea  8d4c241c             lea ecx, [esp + 0x1c]
// 008382ee  ff1580de9800         call dword ptr [0x98de80]
// 008382f4  50                   push eax
// 008382f5  8d4c242c             lea ecx, [esp + 0x2c]
// 008382f9  e872f90600           call 0x8a7c70
// 008382fe  85c0                 test eax, eax
// 00838300  7538                 jne 0x83833a
// 00838302  8d4c241c             lea ecx, [esp + 0x1c]
// 00838306  c644243801           mov byte ptr [esp + 0x38], 1
// 0083830b  e8b0f30600           call 0x8a76c0
// 00838310  8d4c240c             lea ecx, [esp + 0xc]
// 00838314  ff15c0de9800         call dword ptr [0x98dec0]
// 0083831a  8d4c2410             lea ecx, [esp + 0x10]
// 0083831e  ff15c0de9800         call dword ptr [0x98dec0]
// 00838324  33c0                 xor eax, eax
// 00838326  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0083832a  64890d00000000       mov dword ptr fs:[0], ecx
// 00838331  59                   pop ecx
// 00838332  5f                   pop edi
// 00838333  5e                   pop esi
// 00838334  83c430               add esp, 0x30
// 00838337  c20800               ret 8
// 0083833a  837c24182c           cmp dword ptr [esp + 0x18], 0x2c
// 0083833f  7518                 jne 0x838359
// 00838341  8b542414             mov edx, dword ptr [esp + 0x14]
// 00838345  6a2c                 push 0x2c
// 00838347  52                   push edx
// 00838348  6a2c                 push 0x2c
// 0083834a  57                   push edi
// 0083834b  ff157cb79800         call dword ptr [0x98b77c]
// 00838351  83c410               add esp, 0x10
// 00838354  be01000000           mov esi, 1
// 00838359  8b442414             mov eax, dword ptr [esp + 0x14]
// 0083835d  50                   push eax
// 0083835e  e8a3b7fbff           call 0x7f3b06
// 00838363  83c404               add esp, 4
// 00838366  8d4c241c             lea ecx, [esp + 0x1c]
// 0083836a  c644243801           mov byte ptr [esp + 0x38], 1
// 0083836f  e84cf30600           call 0x8a76c0
// 00838374  8d4c240c             lea ecx, [esp + 0xc]
// 00838378  ff15c0de9800         call dword ptr [0x98dec0]
// 0083837e  8d4c2410             lea ecx, [esp + 0x10]
// 00838382  ff15c0de9800         call dword ptr [0x98dec0]
// 00838388  8bc6                 mov eax, esi
// 0083838a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0083838e  64890d00000000       mov dword ptr fs:[0], ecx
// 00838395  59                   pop ecx
// 00838396  5f                   pop edi
// 00838397  5e                   pop esi
// 00838398  83c430               add esp, 0x30
// 0083839b  c20800               ret 8
// copied from an identical function in another client (function ?LoadWindowPos@CXTWindowPos@@QAEHPBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Controls\XTWindowPos.cpp