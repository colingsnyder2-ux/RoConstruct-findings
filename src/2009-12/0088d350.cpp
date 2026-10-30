// roc 2009-12 0088d350  unit: CXTPControlEditCtrl  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088d350
//
// 0088d350  6aff                 push -1
// 0088d352  68c8989500           push 0x9598c8
// 0088d357  64a100000000         mov eax, dword ptr fs:[0]
// 0088d35d  50                   push eax
// 0088d35e  83ec24               sub esp, 0x24
// 0088d361  53                   push ebx
// 0088d362  55                   push ebp
// 0088d363  56                   push esi
// 0088d364  57                   push edi
// 0088d365  a10052b600           mov eax, dword ptr [0xb65200]
// 0088d36a  33c4                 xor eax, esp
// 0088d36c  50                   push eax
// 0088d36d  8d442438             lea eax, [esp + 0x38]
// 0088d371  64a300000000         mov dword ptr fs:[0], eax
// 0088d377  894c2414             mov dword ptr [esp + 0x14], ecx
// 0088d37b  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0088d37f  8d4510               lea eax, [ebp + 0x10]
// 0088d382  50                   push eax
// 0088d383  8d4c241c             lea ecx, [esp + 0x1c]
// 0088d387  51                   push ecx
// 0088d388  ff1564cc9800         call dword ptr [0x98cc64]
// 0088d38e  8b742420             mov esi, dword ptr [esp + 0x20]
// 0088d392  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0088d396  2b742418             sub esi, dword ptr [esp + 0x18]
// 0088d39a  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 0088d39e  8d4c2428             lea ecx, [esp + 0x28]
// 0088d3a2  e807910900           call 0x9264ae
// 0088d3a7  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0088d3ab  33c0                 xor eax, eax
// 0088d3ad  89442440             mov dword ptr [esp + 0x40], eax
// 0088d3b1  3bd8                 cmp ebx, eax
// 0088d3b3  7403                 je 0x88d3b8
// 0088d3b5  8b4304               mov eax, dword ptr [ebx + 4]
// 0088d3b8  50                   push eax
// 0088d3b9  ff1554b19800         call dword ptr [0x98b154]
// 0088d3bf  50                   push eax
// 0088d3c0  8d4c242c             lea ecx, [esp + 0x2c]
// 0088d3c4  e8d3900900           call 0x92649c
// 0088d3c9  837d2006             cmp dword ptr [ebp + 0x20], 6
// 0088d3cd  7555                 jne 0x88d424
// 0088d3cf  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088d3d3  83c004               add eax, 4
// 0088d3d6  7403                 je 0x88d3db
// 0088d3d8  8b4004               mov eax, dword ptr [eax + 4]
// 0088d3db  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0088d3df  8b1d4cb19800         mov ebx, dword ptr [0x98b14c]
// 0088d3e5  50                   push eax
// 0088d3e6  52                   push edx
// 0088d3e7  ffd3                 call ebx
// 0088d3e9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088d3ed  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0088d3f1  682000cc00           push 0xcc0020
// 0088d3f6  89442450             mov dword ptr [esp + 0x50], eax
// 0088d3fa  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088d3fe  50                   push eax
// 0088d3ff  51                   push ecx
// 0088d400  52                   push edx
// 0088d401  57                   push edi
// 0088d402  56                   push esi
// 0088d403  50                   push eax
// 0088d404  8b442464             mov eax, dword ptr [esp + 0x64]
// 0088d408  51                   push ecx
// 0088d409  8b4804               mov ecx, dword ptr [eax + 4]
// 0088d40c  51                   push ecx
// 0088d40d  ff1548b19800         call dword ptr [0x98b148]
// 0088d413  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0088d417  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088d41b  52                   push edx
// 0088d41c  50                   push eax
// 0088d41d  ffd3                 call ebx
// 0088d41f  e99e000000           jmp 0x88d4c2
// 0088d424  33c0                 xor eax, eax
// 0088d426  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088d42a  3bd8                 cmp ebx, eax
// 0088d42c  7403                 je 0x88d431
// 0088d42e  8b4304               mov eax, dword ptr [ebx + 4]
// 0088d431  8d4c244c             lea ecx, [esp + 0x4c]
// 0088d435  51                   push ecx
// 0088d436  57                   push edi
// 0088d437  56                   push esi
// 0088d438  50                   push eax
// 0088d439  e802b7f7ff           call 0x808b40
// 0088d43e  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0088d441  69c9ff000000         imul ecx, ecx, 0xff
// 0088d447  8bd8                 mov ebx, eax
// 0088d449  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0088d44e  f7e9                 imul ecx
// 0088d450  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0088d453  83c410               add esp, 0x10
// 0088d456  8bc2                 mov eax, edx
// 0088d458  c1e81f               shr eax, 0x1f
// 0088d45b  03c2                 add eax, edx
// 0088d45d  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0088d460  50                   push eax
// 0088d461  8b442450             mov eax, dword ptr [esp + 0x50]
// 0088d465  51                   push ecx
// 0088d466  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088d46a  57                   push edi
// 0088d46b  56                   push esi
// 0088d46c  52                   push edx
// 0088d46d  50                   push eax
// 0088d46e  e84dfeffff           call 0x88d2c0
// 0088d473  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088d477  53                   push ebx
// 0088d478  51                   push ecx
// 0088d479  ff154cb19800         call dword ptr [0x98b14c]
// 0088d47f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0088d483  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088d487  682000cc00           push 0xcc0020
// 0088d48c  6a00                 push 0
// 0088d48e  6a00                 push 0
// 0088d490  52                   push edx
// 0088d491  8b542458             mov edx, dword ptr [esp + 0x58]
// 0088d495  57                   push edi
// 0088d496  89442428             mov dword ptr [esp + 0x28], eax
// 0088d49a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088d49e  56                   push esi
// 0088d49f  50                   push eax
// 0088d4a0  8b4204               mov eax, dword ptr [edx + 4]
// 0088d4a3  51                   push ecx
// 0088d4a4  50                   push eax
// 0088d4a5  ff1548b19800         call dword ptr [0x98b148]
// 0088d4ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088d4af  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0088d4b3  51                   push ecx
// 0088d4b4  52                   push edx
// 0088d4b5  ff154cb19800         call dword ptr [0x98b14c]
// 0088d4bb  53                   push ebx
// 0088d4bc  ff153cb19800         call dword ptr [0x98b13c]
// 0088d4c2  ff4520               inc dword ptr [ebp + 0x20]
// 0088d4c5  8d4c2428             lea ecx, [esp + 0x28]
// 0088d4c9  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0088d4d1  e8d28f0900           call 0x9264a8
// 0088d4d6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088d4da  64890d00000000       mov dword ptr fs:[0], ecx
// 0088d4e1  59                   pop ecx
// 0088d4e2  5f                   pop edi
// 0088d4e3  5e                   pop esi
// 0088d4e4  5d                   pop ebp
// 0088d4e5  5b                   pop ebx
// 0088d4e6  83c430               add esp, 0x30
// 0088d4e9  c20800               ret 8
// copied from an identical function in another client (function ?AnimateRect@CXTPCommandBarAnimation@@IAEXAAVCClientDC@@PAUCAnimateInfo@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp