// roc 2009-06 007ec2c0  unit: VCEdit::?$CXTMaskEditT  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ec2c0
//
// 007ec2c0  6aff                 push -1
// 007ec2c2  68d2058800           push 0x8805d2
// 007ec2c7  64a100000000         mov eax, dword ptr fs:[0]
// 007ec2cd  50                   push eax
// 007ec2ce  83ec1c               sub esp, 0x1c
// 007ec2d1  53                   push ebx
// 007ec2d2  55                   push ebp
// 007ec2d3  56                   push esi
// 007ec2d4  57                   push edi
// 007ec2d5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007ec2da  33c4                 xor eax, esp
// 007ec2dc  50                   push eax
// 007ec2dd  8d442430             lea eax, [esp + 0x30]
// 007ec2e1  64a300000000         mov dword ptr fs:[0], eax
// 007ec2e7  8bf1                 mov esi, ecx
// 007ec2e9  33ff                 xor edi, edi
// 007ec2eb  897c241c             mov dword ptr [esp + 0x1c], edi
// 007ec2ef  39bea8000000         cmp dword ptr [esi + 0xa8], edi
// 007ec2f5  0f84eb010000         je 0x7ec4e6
// 007ec2fb  39beb8000000         cmp dword ptr [esi + 0xb8], edi
// 007ec301  0f85df010000         jne 0x7ec4e6
// 007ec307  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 007ec30d  3bcf                 cmp ecx, edi
// 007ec30f  0f84b7010000         je 0x7ec4cc
// 007ec315  39be9c000000         cmp dword ptr [esi + 0x9c], edi
// 007ec31b  0f84ab010000         je 0x7ec4cc
// 007ec321  8b01                 mov eax, dword ptr [ecx]
// 007ec323  8b5058               mov edx, dword ptr [eax + 0x58]
// 007ec326  ffd2                 call edx
// 007ec328  85c0                 test eax, eax
// 007ec32a  0f859c010000         jne 0x7ec4cc
// 007ec330  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 007ec336  39b8c8000000         cmp dword ptr [eax + 0xc8], edi
// 007ec33c  0f848a010000         je 0x7ec4cc
// 007ec342  39787c               cmp dword ptr [eax + 0x7c], edi
// 007ec345  0f8581010000         jne 0x7ec4cc
// 007ec34b  39beb4000000         cmp dword ptr [esi + 0xb4], edi
// 007ec351  0f8475010000         je 0x7ec4cc
// 007ec357  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 007ec35d  8ba8c4000000         mov ebp, dword ptr [eax + 0xc4]
// 007ec363  397d28               cmp dword ptr [ebp + 0x28], edi
// 007ec366  0f8460010000         je 0x7ec4cc
// 007ec36c  8d4c2420             lea ecx, [esp + 0x20]
// 007ec370  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007ec376  8d442420             lea eax, [esp + 0x20]
// 007ec37a  50                   push eax
// 007ec37b  8bce                 mov ecx, esi
// 007ec37d  897c243c             mov dword ptr [esp + 0x3c], edi
// 007ec381  e89accf2ff           call 0x719020
// 007ec386  8d4c2420             lea ecx, [esp + 0x20]
// 007ec38a  ff1554fb8900         call dword ptr [0x89fb54]
// 007ec390  8d4c2424             lea ecx, [esp + 0x24]
// 007ec394  51                   push ecx
// 007ec395  8d54242c             lea edx, [esp + 0x2c]
// 007ec399  52                   push edx
// 007ec39a  8bce                 mov ecx, esi
// 007ec39c  8bd8                 mov ebx, eax
// 007ec39e  897c2430             mov dword ptr [esp + 0x30], edi
// 007ec3a2  897c242c             mov dword ptr [esp + 0x2c], edi
// 007ec3a6  e845f6f2ff           call 0x71b9f0
// 007ec3ab  8b442424             mov eax, dword ptr [esp + 0x24]
// 007ec3af  39442428             cmp dword ptr [esp + 0x28], eax
// 007ec3b3  0f8501010000         jne 0x7ec4ba
// 007ec3b9  3bd8                 cmp ebx, eax
// 007ec3bb  0f85f9000000         jne 0x7ec4ba
// 007ec3c1  3bdf                 cmp ebx, edi
// 007ec3c3  0f8ef1000000         jle 0x7ec4ba
// 007ec3c9  397d28               cmp dword ptr [ebp + 0x28], edi
// 007ec3cc  0f8ee6000000         jle 0x7ec4b8
// 007ec3d2  57                   push edi
// 007ec3d3  8d44241c             lea eax, [esp + 0x1c]
// 007ec3d7  50                   push eax
// 007ec3d8  8bcd                 mov ecx, ebp
// 007ec3da  e851e9f9ff           call 0x78ad30
// 007ec3df  8d4c2418             lea ecx, [esp + 0x18]
// 007ec3e3  c644243801           mov byte ptr [esp + 0x38], 1
// 007ec3e8  ff1554fb8900         call dword ptr [0x89fb54]
// 007ec3ee  3bc3                 cmp eax, ebx
// 007ec3f0  7e31                 jle 0x7ec423
// 007ec3f2  53                   push ebx
// 007ec3f3  8d4c2430             lea ecx, [esp + 0x30]
// 007ec3f7  51                   push ecx
// 007ec3f8  8d4c2420             lea ecx, [esp + 0x20]
// 007ec3fc  ff1510f48900         call dword ptr [0x89f410]
// 007ec402  834c241c01           or dword ptr [esp + 0x1c], 1
// 007ec407  8bc8                 mov ecx, eax
// 007ec409  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ec40f  50                   push eax
// 007ec410  8d4c2424             lea ecx, [esp + 0x24]
// 007ec414  ff158cf38900         call dword ptr [0x89f38c]
// 007ec41a  c644241701           mov byte ptr [esp + 0x17], 1
// 007ec41f  85c0                 test eax, eax
// 007ec421  7405                 je 0x7ec428
// 007ec423  c644241700           mov byte ptr [esp + 0x17], 0
// 007ec428  f644241c01           test byte ptr [esp + 0x1c], 1
// 007ec42d  740f                 je 0x7ec43e
// 007ec42f  8364241cfe           and dword ptr [esp + 0x1c], 0xfffffffe
// 007ec434  8d4c242c             lea ecx, [esp + 0x2c]
// 007ec438  ff1510fd8900         call dword ptr [0x89fd10]
// 007ec43e  807c241700           cmp byte ptr [esp + 0x17], 0
// 007ec443  8d4c2418             lea ecx, [esp + 0x18]
// 007ec447  7517                 jne 0x7ec460
// 007ec449  c644243800           mov byte ptr [esp + 0x38], 0
// 007ec44e  ff1510fd8900         call dword ptr [0x89fd10]
// 007ec454  47                   inc edi
// 007ec455  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 007ec458  0f8c74ffffff         jl 0x7ec3d2
// 007ec45e  eb58                 jmp 0x7ec4b8
// 007ec460  c786b800000001000000 mov dword ptr [esi + 0xb8], 1
// 007ec46a  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ec470  50                   push eax
// 007ec471  8bce                 mov ecx, esi
// 007ec473  e874c9f2ff           call 0x718dec
// 007ec478  8d4c2418             lea ecx, [esp + 0x18]
// 007ec47c  ff1554fb8900         call dword ptr [0x89fb54]
// 007ec482  8b5620               mov edx, dword ptr [esi + 0x20]
// 007ec485  8b3d90ee8900         mov edi, dword ptr [0x89ee90]
// 007ec48b  53                   push ebx
// 007ec48c  50                   push eax
// 007ec48d  68b1000000           push 0xb1
// 007ec492  52                   push edx
// 007ec493  ffd7                 call edi
// 007ec495  8b4620               mov eax, dword ptr [esi + 0x20]
// 007ec498  6a00                 push 0
// 007ec49a  6a00                 push 0
// 007ec49c  68b7000000           push 0xb7
// 007ec4a1  50                   push eax
// 007ec4a2  ffd7                 call edi
// 007ec4a4  8d4c2418             lea ecx, [esp + 0x18]
// 007ec4a8  c786b800000000000000 mov dword ptr [esi + 0xb8], 0
// 007ec4b2  ff1510fd8900         call dword ptr [0x89fd10]
// 007ec4b8  33ff                 xor edi, edi
// 007ec4ba  8d4c2420             lea ecx, [esp + 0x20]
// 007ec4be  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 007ec4c6  ff1510fd8900         call dword ptr [0x89fd10]
// 007ec4cc  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 007ec4d2  7412                 je 0x7ec4e6
// 007ec4d4  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 007ec4da  3bcf                 cmp ecx, edi
// 007ec4dc  7408                 je 0x7ec4e6
// 007ec4de  56                   push esi
// 007ec4df  6a04                 push 4
// 007ec4e1  e82a04faff           call 0x78c910
// 007ec4e6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007ec4ea  64890d00000000       mov dword ptr fs:[0], ecx
// 007ec4f1  59                   pop ecx
// 007ec4f2  5f                   pop edi
// 007ec4f3  5e                   pop esi
// 007ec4f4  5d                   pop ebp
// 007ec4f5  5b                   pop ebx
// 007ec4f6  83c428               add esp, 0x28
// 007ec4f9  c3                   ret 
// copied from an identical function in another client (function ?OnEnChange@CXTPPropertyGridInplaceEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp