// roc 2009-12 00841f90  unit: CXTPPopupBar  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841f90
//
// 00841f90  83ec10               sub esp, 0x10
// 00841f93  55                   push ebp
// 00841f94  56                   push esi
// 00841f95  8bf1                 mov esi, ecx
// 00841f97  33ed                 xor ebp, ebp
// 00841f99  396e20               cmp dword ptr [esi + 0x20], ebp
// 00841f9c  0f85b8000000         jne 0x84205a
// 00841fa2  53                   push ebx
// 00841fa3  57                   push edi
// 00841fa4  e82725fcff           call 0x8044d0
// 00841fa9  8bd8                 mov ebx, eax
// 00841fab  3bdd                 cmp ebx, ebp
// 00841fad  740e                 je 0x841fbd
// 00841faf  8b4374               mov eax, dword ptr [ebx + 0x74]
// 00841fb2  39a880000000         cmp dword ptr [eax + 0x80], ebp
// 00841fb8  8d4508               lea eax, [ebp + 8]
// 00841fbb  7405                 je 0x841fc2
// 00841fbd  b808080000           mov eax, 0x808
// 00841fc2  55                   push ebp
// 00841fc3  50                   push eax
// 00841fc4  6824a29f00           push 0x9fa224
// 00841fc9  55                   push ebp
// 00841fca  e841a20000           call 0x84c210
// 00841fcf  83c410               add esp, 0x10
// 00841fd2  3bdd                 cmp ebx, ebp
// 00841fd4  7412                 je 0x841fe8
// 00841fd6  8bcb                 mov ecx, ebx
// 00841fd8  e8c323fdff           call 0x8143a0
// 00841fdd  85c0                 test eax, eax
// 00841fdf  7407                 je 0x841fe8
// 00841fe1  bf00004000           mov edi, 0x400000
// 00841fe6  eb02                 jmp 0x841fea
// 00841fe8  33ff                 xor edi, edi
// 00841fea  3bdd                 cmp ebx, ebp
// 00841fec  7512                 jne 0x842000
// 00841fee  8bce                 mov ecx, esi
// 00841ff0  e81b26fcff           call 0x804610
// 00841ff5  83787801             cmp dword ptr [eax + 0x78], 1
// 00841ff9  7505                 jne 0x842000
// 00841ffb  bf00004000           mov edi, 0x400000
// 00842000  8b1e                 mov ebx, dword ptr [esi]
// 00842002  55                   push ebp
// 00842003  55                   push ebp
// 00842004  8bce                 mov ecx, esi
// 00842006  896c2418             mov dword ptr [esp + 0x18], ebp
// 0084200a  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0084200e  896c2420             mov dword ptr [esp + 0x20], ebp
// 00842012  896c2424             mov dword ptr [esp + 0x24], ebp
// 00842016  e87550fcff           call 0x807090
// 0084201b  8b5360               mov edx, dword ptr [ebx + 0x60]
// 0084201e  50                   push eax
// 0084201f  8d4c241c             lea ecx, [esp + 0x1c]
// 00842023  51                   push ecx
// 00842024  6800010086           push 0x86000100
// 00842029  55                   push ebp
// 0084202a  6824a29f00           push 0x9fa224
// 0084202f  81cf80000000         or edi, 0x80
// 00842035  57                   push edi
// 00842036  8bce                 mov ecx, esi
// 00842038  ffd2                 call edx
// 0084203a  5f                   pop edi
// 0084203b  5b                   pop ebx
// 0084203c  85c0                 test eax, eax
// 0084203e  7506                 jne 0x842046
// 00842040  5e                   pop esi
// 00842041  5d                   pop ebp
// 00842042  83c410               add esp, 0x10
// 00842045  c3                   ret 
// 00842046  8d8ef4000000         lea ecx, [esi + 0xf4]
// 0084204c  ff1580de9800         call dword ptr [0x98de80]
// 00842052  50                   push eax
// 00842053  8bce                 mov ecx, esi
// 00842055  e8ba1bfbff           call 0x7f3c14
// 0084205a  5e                   pop esi
// 0084205b  b801000000           mov eax, 1
// 00842060  5d                   pop ebp
// 00842061  83c410               add esp, 0x10
// 00842064  c3                   ret 
// copied from an identical function in another client (function ?Create@CXTPPopupBar@@IAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPPopupBar.cpp