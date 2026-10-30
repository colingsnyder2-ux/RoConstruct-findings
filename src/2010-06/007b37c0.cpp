// roc 2010-06 007b37c0  unit: CXTPPaintManager  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b37c0
//
// 007b37c0  6aff                 push -1
// 007b37c2  68e8ed9a00           push 0x9aede8
// 007b37c7  64a100000000         mov eax, dword ptr fs:[0]
// 007b37cd  50                   push eax
// 007b37ce  83ec20               sub esp, 0x20
// 007b37d1  53                   push ebx
// 007b37d2  55                   push ebp
// 007b37d3  56                   push esi
// 007b37d4  57                   push edi
// 007b37d5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007b37da  33c4                 xor eax, esp
// 007b37dc  50                   push eax
// 007b37dd  8d442434             lea eax, [esp + 0x34]
// 007b37e1  64a300000000         mov dword ptr fs:[0], eax
// 007b37e7  8bf9                 mov edi, ecx
// 007b37e9  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 007b37ee  0f85bb000000         jne 0x7b38af
// 007b37f4  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 007b37f8  53                   push ebx
// 007b37f9  8d4c2418             lea ecx, [esp + 0x18]
// 007b37fd  e80ebb0400           call 0x7ff310
// 007b3802  8b742444             mov esi, dword ptr [esp + 0x44]
// 007b3806  8d87bc000000         lea eax, [edi + 0xbc]
// 007b380c  50                   push eax
// 007b380d  56                   push esi
// 007b380e  8d4c242c             lea ecx, [esp + 0x2c]
// 007b3812  e889be0400           call 0x7ff6a0
// 007b3817  6a18                 push 0x18
// 007b3819  8bcf                 mov ecx, edi
// 007b381b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 007b3823  e8e898ffff           call 0x7ad110
// 007b3828  50                   push eax
// 007b3829  8d4c2418             lea ecx, [esp + 0x18]
// 007b382d  51                   push ecx
// 007b382e  8bce                 mov ecx, esi
// 007b3830  e8094fffff           call 0x7a873e
// 007b3835  8b2d04ba9e00         mov ebp, dword ptr [0x9eba04]
// 007b383b  6a10                 push 0x10
// 007b383d  ffd5                 call ebp
// 007b383f  50                   push eax
// 007b3840  6a10                 push 0x10
// 007b3842  ffd5                 call ebp
// 007b3844  50                   push eax
// 007b3845  8d54241c             lea edx, [esp + 0x1c]
// 007b3849  52                   push edx
// 007b384a  8bce                 mov ecx, esi
// 007b384c  e8e74effff           call 0x7a8738
// 007b3851  6a01                 push 1
// 007b3853  8bce                 mov ecx, esi
// 007b3855  e85a951c00           call 0x97cdb4
// 007b385a  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 007b385d  8b16                 mov edx, dword ptr [esi]
// 007b385f  f7d8                 neg eax
// 007b3861  1bc0                 sbb eax, eax
// 007b3863  83e006               and eax, 6
// 007b3866  83c011               add eax, 0x11
// 007b3869  50                   push eax
// 007b386a  8bcf                 mov ecx, edi
// 007b386c  e89f98ffff           call 0x7ad110
// 007b3871  8b5238               mov edx, dword ptr [edx + 0x38]
// 007b3874  50                   push eax
// 007b3875  8bce                 mov ecx, esi
// 007b3877  ffd2                 call edx
// 007b3879  8d7b54               lea edi, [ebx + 0x54]
// 007b387c  8b1e                 mov ebx, dword ptr [esi]
// 007b387e  6a25                 push 0x25
// 007b3880  8d442418             lea eax, [esp + 0x18]
// 007b3884  50                   push eax
// 007b3885  8bcf                 mov ecx, edi
// 007b3887  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b388d  50                   push eax
// 007b388e  8bcf                 mov ecx, edi
// 007b3890  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007b3896  8b5370               mov edx, dword ptr [ebx + 0x70]
// 007b3899  50                   push eax
// 007b389a  8bce                 mov ecx, esi
// 007b389c  ffd2                 call edx
// 007b389e  8d4c2424             lea ecx, [esp + 0x24]
// 007b38a2  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 007b38aa  e871be0400           call 0x7ff720
// 007b38af  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b38b3  64890d00000000       mov dword ptr fs:[0], ecx
// 007b38ba  59                   pop ecx
// 007b38bb  5f                   pop edi
// 007b38bc  5e                   pop esi
// 007b38bd  5d                   pop ebp
// 007b38be  5b                   pop ebx
// 007b38bf  83c42c               add esp, 0x2c
// 007b38c2  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawKeyboardTip@CXTPPaintManager@@UAEXPAVCDC@@PAVCXTPCommandBarKeyboardTip@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp