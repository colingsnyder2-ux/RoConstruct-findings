// roc 2009-12 00840f10  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 368 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00840f10
//
// 00840f10  6aff                 push -1
// 00840f12  68dcce9500           push 0x95cedc
// 00840f17  64a100000000         mov eax, dword ptr fs:[0]
// 00840f1d  50                   push eax
// 00840f1e  83ec0c               sub esp, 0xc
// 00840f21  55                   push ebp
// 00840f22  56                   push esi
// 00840f23  57                   push edi
// 00840f24  a10052b600           mov eax, dword ptr [0xb65200]
// 00840f29  33c4                 xor eax, esp
// 00840f2b  50                   push eax
// 00840f2c  8d44241c             lea eax, [esp + 0x1c]
// 00840f30  64a300000000         mov dword ptr fs:[0], eax
// 00840f36  8bf1                 mov esi, ecx
// 00840f38  bf64309a00           mov edi, 0x9a3064
// 00840f3d  33ed                 xor ebp, ebp
// 00840f3f  897c2414             mov dword ptr [esp + 0x14], edi
// 00840f43  896c2418             mov dword ptr [esp + 0x18], ebp
// 00840f47  896c2424             mov dword ptr [esp + 0x24], ebp
// 00840f4b  e850d90200           call 0x86e8a0
// 00840f50  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00840f54  8b10                 mov edx, dword ptr [eax]
// 00840f56  8b520c               mov edx, dword ptr [edx + 0xc]
// 00840f59  51                   push ecx
// 00840f5a  8d4c2418             lea ecx, [esp + 0x18]
// 00840f5e  51                   push ecx
// 00840f5f  8bc8                 mov ecx, eax
// 00840f61  ffd2                 call edx
// 00840f63  85c0                 test eax, eax
// 00840f65  752c                 jne 0x840f93
// 00840f67  8d4c2414             lea ecx, [esp + 0x14]
// 00840f6b  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00840f73  897c2414             mov dword ptr [esp + 0x14], edi
// 00840f77  e85632fbff           call 0x7f41d2
// 00840f7c  33c0                 xor eax, eax
// 00840f7e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00840f82  64890d00000000       mov dword ptr fs:[0], ecx
// 00840f89  59                   pop ecx
// 00840f8a  5f                   pop edi
// 00840f8b  5e                   pop esi
// 00840f8c  5d                   pop ebp
// 00840f8d  83c418               add esp, 0x18
// 00840f90  c20c00               ret 0xc
// 00840f93  8d4c2410             lea ecx, [esp + 0x10]
// 00840f97  ff1574de9800         call dword ptr [0x98de74]
// 00840f9d  c644242401           mov byte ptr [esp + 0x24], 1
// 00840fa2  e8f9d80200           call 0x86e8a0
// 00840fa7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00840fab  8b10                 mov edx, dword ptr [eax]
// 00840fad  8b5208               mov edx, dword ptr [edx + 8]
// 00840fb0  51                   push ecx
// 00840fb1  8d4c2414             lea ecx, [esp + 0x14]
// 00840fb5  51                   push ecx
// 00840fb6  8bc8                 mov ecx, eax
// 00840fb8  ffd2                 call edx
// 00840fba  6a08                 push 8
// 00840fbc  e89f28fbff           call 0x7f3860
// 00840fc1  8bf8                 mov edi, eax
// 00840fc3  83c404               add esp, 4
// 00840fc6  897c242c             mov dword ptr [esp + 0x2c], edi
// 00840fca  c644242402           mov byte ptr [esp + 0x24], 2
// 00840fcf  3bfd                 cmp edi, ebp
// 00840fd1  7421                 je 0x840ff4
// 00840fd3  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 00840fd9  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 00840fdf  50                   push eax
// 00840fe0  8d4c2414             lea ecx, [esp + 0x14]
// 00840fe4  ff1580de9800         call dword ptr [0x98de80]
// 00840fea  50                   push eax
// 00840feb  8bcf                 mov ecx, edi
// 00840fed  e82ef8ffff           call 0x840820
// 00840ff2  8be8                 mov ebp, eax
// 00840ff4  8b442434             mov eax, dword ptr [esp + 0x34]
// 00840ff8  c644242401           mov byte ptr [esp + 0x24], 1
// 00840ffd  83f8ff               cmp eax, -1
// 00841000  7506                 jne 0x841008
// 00841002  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 00841008  6a01                 push 1
// 0084100a  55                   push ebp
// 0084100b  50                   push eax
// 0084100c  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00841012  e829cb0a00           call 0x8edb40
// 00841017  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084101b  51                   push ecx
// 0084101c  ff1540cc9800         call dword ptr [0x98cc40]
// 00841022  8bf8                 mov edi, eax
// 00841024  33f6                 xor esi, esi
// 00841026  85ff                 test edi, edi
// 00841028  7e19                 jle 0x841043
// 0084102a  8d9b00000000         lea ebx, [ebx]
// 00841030  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00841033  56                   push esi
// 00841034  8d542418             lea edx, [esp + 0x18]
// 00841038  52                   push edx
// 00841039  e8425c0000           call 0x846c80
// 0084103e  46                   inc esi
// 0084103f  3bf7                 cmp esi, edi
// 00841041  7ced                 jl 0x841030
// 00841043  8d4c2410             lea ecx, [esp + 0x10]
// 00841047  ff15c0de9800         call dword ptr [0x98dec0]
// 0084104d  8d4c2414             lea ecx, [esp + 0x14]
// 00841051  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00841059  c744241464309a00     mov dword ptr [esp + 0x14], 0x9a3064
// 00841061  e86c31fbff           call 0x7f41d2
// 00841066  b801000000           mov eax, 1
// 0084106b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0084106f  64890d00000000       mov dword ptr fs:[0], ecx
// 00841076  59                   pop ecx
// 00841077  5f                   pop edi
// 00841078  5e                   pop esi
// 00841079  5d                   pop ebp
// 0084107a  83c418               add esp, 0x18
// 0084107d  c20c00               ret 0xc
// copied from an identical function in another client (function ?InsertBuiltInMenus@CXTPCustomizeCommandsPage@@QAEHIIH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp