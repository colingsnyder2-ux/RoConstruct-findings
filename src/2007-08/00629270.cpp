// roc 2007-08 00629270  unit: RBX::AssemblyStage  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629270
//
// 00629270  83ec08               sub esp, 8
// 00629273  53                   push ebx
// 00629274  55                   push ebp
// 00629275  56                   push esi
// 00629276  57                   push edi
// 00629277  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0062927b  8bd8                 mov ebx, eax
// 0062927d  8bf1                 mov esi, ecx
// 0062927f  e87cfeffff           call 0x629100
// 00629284  833b0a               cmp dword ptr [ebx], 0xa
// 00629287  7511                 jne 0x62929a
// 00629289  8b4308               mov eax, dword ptr [ebx + 8]
// 0062928c  50                   push eax
// 0062928d  8d4b10               lea ecx, [ebx + 0x10]
// 00629290  51                   push ecx
// 00629291  56                   push esi
// 00629292  e889f5ffff           call 0x628820
// 00629297  83c40c               add esp, 0xc
// 0062929a  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0062929d  8b6b14               mov ebp, dword ptr [ebx + 0x14]
// 006292a0  3bd5                 cmp edx, ebp
// 006292a2  0f84bd000000         je 0x629365
// 006292a8  83cfff               or edi, 0xffffffff
// 006292ab  8bc6                 mov eax, esi
// 006292ad  897c2414             mov dword ptr [esp + 0x14], edi
// 006292b1  e83af3ffff           call 0x6285f0
// 006292b6  85c0                 test eax, eax
// 006292b8  750d                 jne 0x6292c7
// 006292ba  8bd5                 mov edx, ebp
// 006292bc  8bc6                 mov eax, esi
// 006292be  e82df3ffff           call 0x6285f0
// 006292c3  85c0                 test eax, eax
// 006292c5  7475                 je 0x62933c
// 006292c7  833b0a               cmp dword ptr [ebx], 0xa
// 006292ca  750a                 jne 0x6292d6
// 006292cc  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006292d4  eb0d                 jmp 0x6292e3
// 006292d6  56                   push esi
// 006292d7  e834fcffff           call 0x628f10
// 006292dc  83c404               add esp, 4
// 006292df  89442410             mov dword ptr [esp + 0x10], eax
// 006292e3  8b5618               mov edx, dword ptr [esi + 0x18]
// 006292e6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006292ea  8b460c               mov eax, dword ptr [esi + 0xc]
// 006292ed  89561c               mov dword ptr [esi + 0x1c], edx
// 006292f0  8b4808               mov ecx, dword ptr [eax + 8]
// 006292f3  c1e506               shl ebp, 6
// 006292f6  8bd5                 mov edx, ebp
// 006292f8  51                   push ecx
// 006292f9  81ca02400000         or edx, 0x4002
// 006292ff  52                   push edx
// 00629300  e8dbf9ffff           call 0x628ce0
// 00629305  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00629308  8bf8                 mov edi, eax
// 0062930a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0062930d  89461c               mov dword ptr [esi + 0x1c], eax
// 00629310  8b5108               mov edx, dword ptr [ecx + 8]
// 00629313  52                   push edx
// 00629314  81cd02008000         or ebp, 0x800002
// 0062931a  55                   push ebp
// 0062931b  e8c0f9ffff           call 0x628ce0
// 00629320  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00629324  51                   push ecx
// 00629325  8d5620               lea edx, [esi + 0x20]
// 00629328  89442428             mov dword ptr [esp + 0x28], eax
// 0062932c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0062932f  52                   push edx
// 00629330  56                   push esi
// 00629331  89461c               mov dword ptr [esi + 0x1c], eax
// 00629334  e8e7f4ffff           call 0x628820
// 00629339  83c41c               add esp, 0x1c
// 0062933c  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0062933f  57                   push edi
// 00629340  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00629344  57                   push edi
// 00629345  896e1c               mov dword ptr [esi + 0x1c], ebp
// 00629348  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0062934b  55                   push ebp
// 0062934c  56                   push esi
// 0062934d  e80ef4ffff           call 0x628760
// 00629352  8b442424             mov eax, dword ptr [esp + 0x24]
// 00629356  50                   push eax
// 00629357  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0062935a  57                   push edi
// 0062935b  55                   push ebp
// 0062935c  56                   push esi
// 0062935d  e8fef3ffff           call 0x628760
// 00629362  83c420               add esp, 0x20
// 00629365  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00629369  5f                   pop edi
// 0062936a  5e                   pop esi
// 0062936b  83c8ff               or eax, 0xffffffff
// 0062936e  5d                   pop ebp
// 0062936f  894310               mov dword ptr [ebx + 0x10], eax
// 00629372  894314               mov dword ptr [ebx + 0x14], eax
// 00629375  894b08               mov dword ptr [ebx + 8], ecx
// 00629378  c7030c000000         mov dword ptr [ebx], 0xc
// 0062937e  5b                   pop ebx
// 0062937f  83c408               add esp, 8
// 00629382  c3                   ret 
// library lua-5.1.4/lcode.c (function _exp2reg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
