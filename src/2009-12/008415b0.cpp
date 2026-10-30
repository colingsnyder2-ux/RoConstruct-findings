// roc 2009-12 008415b0  unit: CXTPCustomizeCommandsPage  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008415b0
//
// 008415b0  6aff                 push -1
// 008415b2  6871cf9500           push 0x95cf71
// 008415b7  64a100000000         mov eax, dword ptr fs:[0]
// 008415bd  50                   push eax
// 008415be  83ec0c               sub esp, 0xc
// 008415c1  53                   push ebx
// 008415c2  55                   push ebp
// 008415c3  56                   push esi
// 008415c4  57                   push edi
// 008415c5  a10052b600           mov eax, dword ptr [0xb65200]
// 008415ca  33c4                 xor eax, esp
// 008415cc  50                   push eax
// 008415cd  8d442420             lea eax, [esp + 0x20]
// 008415d1  64a300000000         mov dword ptr fs:[0], eax
// 008415d7  894c2414             mov dword ptr [esp + 0x14], ecx
// 008415db  bf64309a00           mov edi, 0x9a3064
// 008415e0  33f6                 xor esi, esi
// 008415e2  897c2418             mov dword ptr [esp + 0x18], edi
// 008415e6  8974241c             mov dword ptr [esp + 0x1c], esi
// 008415ea  89742428             mov dword ptr [esp + 0x28], esi
// 008415ee  e8add20200           call 0x86e8a0
// 008415f3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008415f7  8b10                 mov edx, dword ptr [eax]
// 008415f9  8b520c               mov edx, dword ptr [edx + 0xc]
// 008415fc  51                   push ecx
// 008415fd  8d4c241c             lea ecx, [esp + 0x1c]
// 00841601  51                   push ecx
// 00841602  8bc8                 mov ecx, eax
// 00841604  ffd2                 call edx
// 00841606  85c0                 test eax, eax
// 00841608  751c                 jne 0x841626
// 0084160a  8d4c2418             lea ecx, [esp + 0x18]
// 0084160e  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00841616  897c2418             mov dword ptr [esp + 0x18], edi
// 0084161a  e8b32bfbff           call 0x7f41d2
// 0084161f  33c0                 xor eax, eax
// 00841621  e9d8000000           jmp 0x8416fe
// 00841626  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0084162a  50                   push eax
// 0084162b  ff1540cc9800         call dword ptr [0x98cc40]
// 00841631  8be8                 mov ebp, eax
// 00841633  3bee                 cmp ebp, esi
// 00841635  0f8ea9000000         jle 0x8416e4
// 0084163b  8b1d48cc9800         mov ebx, dword ptr [0x98cc48]
// 00841641  8d4c2430             lea ecx, [esp + 0x30]
// 00841645  ff1574de9800         call dword ptr [0x98de74]
// 0084164b  6800040000           push 0x400
// 00841650  8d4c2434             lea ecx, [esp + 0x34]
// 00841654  51                   push ecx
// 00841655  8d542420             lea edx, [esp + 0x20]
// 00841659  56                   push esi
// 0084165a  52                   push edx
// 0084165b  c644243801           mov byte ptr [esp + 0x38], 1
// 00841660  e83bd20200           call 0x86e8a0
// 00841665  8bc8                 mov ecx, eax
// 00841667  e874cd0200           call 0x86e3e0
// 0084166c  85c0                 test eax, eax
// 0084166e  7e5c                 jle 0x8416cc
// 00841670  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00841674  56                   push esi
// 00841675  50                   push eax
// 00841676  ffd3                 call ebx
// 00841678  50                   push eax
// 00841679  e86c28fbff           call 0x7f3eea
// 0084167e  8bf8                 mov edi, eax
// 00841680  85ff                 test edi, edi
// 00841682  7448                 je 0x8416cc
// 00841684  8d4c2430             lea ecx, [esp + 0x30]
// 00841688  51                   push ecx
// 00841689  e842c2fbff           call 0x7fd8d0
// 0084168e  83c404               add esp, 4
// 00841691  6a00                 push 0
// 00841693  6a09                 push 9
// 00841695  8d4c2438             lea ecx, [esp + 0x38]
// 00841699  ff1580d69800         call dword ptr [0x98d680]
// 0084169f  85c0                 test eax, eax
// 008416a1  7e0b                 jle 0x8416ae
// 008416a3  50                   push eax
// 008416a4  8d4c2434             lea ecx, [esp + 0x34]
// 008416a8  ff1560d29800         call dword ptr [0x98d260]
// 008416ae  8b542434             mov edx, dword ptr [esp + 0x34]
// 008416b2  52                   push edx
// 008416b3  57                   push edi
// 008416b4  8d4c2438             lea ecx, [esp + 0x38]
// 008416b8  ff1580de9800         call dword ptr [0x98de80]
// 008416be  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008416c2  50                   push eax
// 008416c3  e818feffff           call 0x8414e0
// 008416c8  85c0                 test eax, eax
// 008416ca  7448                 je 0x841714
// 008416cc  8d4c2430             lea ecx, [esp + 0x30]
// 008416d0  ff15c0de9800         call dword ptr [0x98dec0]
// 008416d6  46                   inc esi
// 008416d7  3bf5                 cmp esi, ebp
// 008416d9  0f8c62ffffff         jl 0x841641
// 008416df  bf64309a00           mov edi, 0x9a3064
// 008416e4  8d4c2418             lea ecx, [esp + 0x18]
// 008416e8  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 008416f0  897c2418             mov dword ptr [esp + 0x18], edi
// 008416f4  e8d92afbff           call 0x7f41d2
// 008416f9  b801000000           mov eax, 1
// 008416fe  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00841702  64890d00000000       mov dword ptr fs:[0], ecx
// 00841709  59                   pop ecx
// 0084170a  5f                   pop edi
// 0084170b  5e                   pop esi
// 0084170c  5d                   pop ebp
// 0084170d  5b                   pop ebx
// 0084170e  83c418               add esp, 0x18
// 00841711  c20800               ret 8
// 00841714  8d4c2430             lea ecx, [esp + 0x30]
// 00841718  ff15c0de9800         call dword ptr [0x98dec0]
// 0084171e  8d4c2418             lea ecx, [esp + 0x18]
// 00841722  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0084172a  c744241864309a00     mov dword ptr [esp + 0x18], 0x9a3064
// 00841732  e89b2afbff           call 0x7f41d2
// 00841737  33c0                 xor eax, eax
// 00841739  ebc3                 jmp 0x8416fe
// copied from an identical function in another client (function ?AddCategories@CXTPCustomizeCommandsPage@@QAEHIH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp