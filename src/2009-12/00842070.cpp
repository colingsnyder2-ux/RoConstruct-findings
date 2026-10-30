// roc 2009-12 00842070  unit: CXTPPopupBar  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00842070
//
// 00842070  83ec08               sub esp, 8
// 00842073  56                   push esi
// 00842074  57                   push edi
// 00842075  8bf9                 mov edi, ecx
// 00842077  e85424fcff           call 0x8044d0
// 0084207c  8bf0                 mov esi, eax
// 0084207e  85f6                 test esi, esi
// 00842080  0f84c7000000         je 0x84214d
// 00842086  8b4720               mov eax, dword ptr [edi + 0x20]
// 00842089  6a05                 push 5
// 0084208b  50                   push eax
// 0084208c  ff15fccb9800         call dword ptr [0x98cbfc]
// 00842092  50                   push eax
// 00842093  e8921afbff           call 0x7f3b2a
// 00842098  85c0                 test eax, eax
// 0084209a  0f85ad000000         jne 0x84214d
// 008420a0  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008420a3  8b4154               mov eax, dword ptr [ecx + 0x54]
// 008420a6  8bc8                 mov ecx, eax
// 008420a8  83e900               sub ecx, 0
// 008420ab  743e                 je 0x8420eb
// 008420ad  83e901               sub ecx, 1
// 008420b0  0f859c000000         jne 0x842152
// 008420b6  ff153cb89800         call dword ptr [0x98b83c]
// 008420bc  33d2                 xor edx, edx
// 008420be  b903000000           mov ecx, 3
// 008420c3  f7f1                 div ecx
// 008420c5  83ea00               sub edx, 0
// 008420c8  7416                 je 0x8420e0
// 008420ca  83ea01               sub edx, 1
// 008420cd  7409                 je 0x8420d8
// 008420cf  5f                   pop edi
// 008420d0  8d41ff               lea eax, [ecx - 1]
// 008420d3  5e                   pop esi
// 008420d4  83c408               add esp, 8
// 008420d7  c3                   ret 
// 008420d8  5f                   pop edi
// 008420d9  8bc1                 mov eax, ecx
// 008420db  5e                   pop esi
// 008420dc  83c408               add esp, 8
// 008420df  c3                   ret 
// 008420e0  5f                   pop edi
// 008420e1  b804000000           mov eax, 4
// 008420e6  5e                   pop esi
// 008420e7  83c408               add esp, 8
// 008420ea  c3                   ret 
// 008420eb  8b3500cc9800         mov esi, dword ptr [0x98cc00]
// 008420f1  6a00                 push 0
// 008420f3  8d54240c             lea edx, [esp + 0xc]
// 008420f7  52                   push edx
// 008420f8  6a00                 push 0
// 008420fa  6802100000           push 0x1002
// 008420ff  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00842107  ffd6                 call esi
// 00842109  85c0                 test eax, eax
// 0084210b  7440                 je 0x84214d
// 0084210d  837c240800           cmp dword ptr [esp + 8], 0
// 00842112  7439                 je 0x84214d
// 00842114  6a00                 push 0
// 00842116  8d442410             lea eax, [esp + 0x10]
// 0084211a  50                   push eax
// 0084211b  6a00                 push 0
// 0084211d  6812100000           push 0x1012
// 00842122  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0084212a  ffd6                 call esi
// 0084212c  85c0                 test eax, eax
// 0084212e  750b                 jne 0x84213b
// 00842130  5f                   pop edi
// 00842131  b803000000           mov eax, 3
// 00842136  5e                   pop esi
// 00842137  83c408               add esp, 8
// 0084213a  c3                   ret 
// 0084213b  33c0                 xor eax, eax
// 0084213d  3944240c             cmp dword ptr [esp + 0xc], eax
// 00842141  5f                   pop edi
// 00842142  0f95c0               setne al
// 00842145  5e                   pop esi
// 00842146  83c003               add eax, 3
// 00842149  83c408               add esp, 8
// 0084214c  c3                   ret 
// 0084214d  b805000000           mov eax, 5
// 00842152  5f                   pop edi
// 00842153  5e                   pop esi
// 00842154  83c408               add esp, 8
// 00842157  c3                   ret 
// copied from an identical function in another client (function ?GetAnimationType@CXTPPopupBar@@ABE?AW4XTPAnimationType@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp