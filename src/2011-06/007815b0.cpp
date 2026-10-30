// from server: 100% by auto
// roc 2011-06 007815b0  unit: lua_exception  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007815b0
//
// 007815b0  81ec18010000         sub esp, 0x118
// 007815b6  53                   push ebx
// 007815b7  55                   push ebp
// 007815b8  56                   push esi
// 007815b9  57                   push edi
// 007815ba  8bbc242c010000       mov edi, dword ptr [esp + 0x12c]
// 007815c1  8d442414             lea eax, [esp + 0x14]
// 007815c5  50                   push eax
// 007815c6  68edd8ffff           push 0xffffd8ed
// 007815cb  57                   push edi
// 007815cc  e88f11feff           call 0x762760
// 007815d1  6a00                 push 0
// 007815d3  68ecd8ffff           push 0xffffd8ec
// 007815d8  57                   push edi
// 007815d9  8bd8                 mov ebx, eax
// 007815db  e88011feff           call 0x762760
// 007815e0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007815e4  03cb                 add ecx, ebx
// 007815e6  68ebd8ffff           push 0xffffd8eb
// 007815eb  57                   push edi
// 007815ec  8be8                 mov ebp, eax
// 007815ee  897c2440             mov dword ptr [esp + 0x40], edi
// 007815f2  895c2438             mov dword ptr [esp + 0x38], ebx
// 007815f6  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007815fa  e8f110feff           call 0x7626f0
// 007815ff  8bf0                 mov esi, eax
// 00781601  03f3                 add esi, ebx
// 00781603  83c420               add esp, 0x20
// 00781606  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0078160a  772c                 ja 0x781638
// 0078160c  8d642400             lea esp, [esp]
// 00781610  55                   push ebp
// 00781611  8d54241c             lea edx, [esp + 0x1c]
// 00781615  56                   push esi
// 00781616  52                   push edx
// 00781617  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0078161f  e84cf9ffff           call 0x780f70
// 00781624  8bc8                 mov ecx, eax
// 00781626  83c40c               add esp, 0xc
// 00781629  894c2410             mov dword ptr [esp + 0x10], ecx
// 0078162d  85c9                 test ecx, ecx
// 0078162f  7514                 jne 0x781645
// 00781631  46                   inc esi
// 00781632  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00781636  76d8                 jbe 0x781610
// 00781638  5f                   pop edi
// 00781639  5e                   pop esi
// 0078163a  5d                   pop ebp
// 0078163b  33c0                 xor eax, eax
// 0078163d  5b                   pop ebx
// 0078163e  81c418010000         add esp, 0x118
// 00781644  c3                   ret 
// 00781645  8bc1                 mov eax, ecx
// 00781647  2bc3                 sub eax, ebx
// 00781649  3bce                 cmp ecx, esi
// 0078164b  7501                 jne 0x78164e
// 0078164d  40                   inc eax
// 0078164e  50                   push eax
// 0078164f  57                   push edi
// 00781650  e8eb12feff           call 0x762940
// 00781655  68ebd8ffff           push 0xffffd8eb
// 0078165a  57                   push edi
// 0078165b  e8000efeff           call 0x762460
// 00781660  8b442434             mov eax, dword ptr [esp + 0x34]
// 00781664  83c410               add esp, 0x10
// 00781667  85c0                 test eax, eax
// 00781669  7507                 jne 0x781672
// 0078166b  8d6801               lea ebp, [eax + 1]
// 0078166e  85f6                 test esi, esi
// 00781670  7502                 jne 0x781674
// 00781672  8be8                 mov ebp, eax
// 00781674  8b442420             mov eax, dword ptr [esp + 0x20]
// 00781678  68a07dab00           push 0xab7da0
// 0078167d  55                   push ebp
// 0078167e  50                   push eax
// 0078167f  e81c21feff           call 0x7637a0
// 00781684  83c40c               add esp, 0xc
// 00781687  33ff                 xor edi, edi
// 00781689  85ed                 test ebp, ebp
// 0078168b  7e5e                 jle 0x7816eb
// 0078168d  8d4900               lea ecx, [ecx]
// 00781690  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 00781694  7c22                 jl 0x7816b8
// 00781696  85ff                 test edi, edi
// 00781698  750a                 jne 0x7816a4
// 0078169a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078169e  2bce                 sub ecx, esi
// 007816a0  51                   push ecx
// 007816a1  56                   push esi
// 007816a2  eb35                 jmp 0x7816d9
// 007816a4  8b442420             mov eax, dword ptr [esp + 0x20]
// 007816a8  68187dab00           push 0xab7d18
// 007816ad  50                   push eax
// 007816ae  e85d20feff           call 0x763710
// 007816b3  83c408               add esp, 8
// 007816b6  eb2e                 jmp 0x7816e6
// 007816b8  8b5cfc2c             mov ebx, dword ptr [esp + edi*8 + 0x2c]
// 007816bc  83fbff               cmp ebx, -1
// 007816bf  7537                 jne 0x7816f8
// 007816c1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007816c5  68d87dab00           push 0xab7dd8
// 007816ca  51                   push ecx
// 007816cb  e84020feff           call 0x763710
// 007816d0  83c408               add esp, 8
// 007816d3  8b4cfc28             mov ecx, dword ptr [esp + edi*8 + 0x28]
// 007816d7  53                   push ebx
// 007816d8  51                   push ecx
// 007816d9  8b542428             mov edx, dword ptr [esp + 0x28]
// 007816dd  52                   push edx
// 007816de  e87d12feff           call 0x762960
// 007816e3  83c40c               add esp, 0xc
// 007816e6  47                   inc edi
// 007816e7  3bfd                 cmp edi, ebp
// 007816e9  7ca5                 jl 0x781690
// 007816eb  5f                   pop edi
// 007816ec  5e                   pop esi
// 007816ed  8bc5                 mov eax, ebp
// 007816ef  5d                   pop ebp
// 007816f0  5b                   pop ebx
// 007816f1  81c418010000         add esp, 0x118
// 007816f7  c3                   ret 
// 007816f8  83fbfe               cmp ebx, -2
// 007816fb  75d6                 jne 0x7816d3
// 007816fd  8b54fc28             mov edx, dword ptr [esp + edi*8 + 0x28]
// 00781701  2b542418             sub edx, dword ptr [esp + 0x18]
// 00781705  8b442420             mov eax, dword ptr [esp + 0x20]
// 00781709  42                   inc edx
// 0078170a  52                   push edx
// 0078170b  50                   push eax
// 0078170c  e82f12feff           call 0x762940
// 00781711  83c408               add esp, 8
// 00781714  ebd0                 jmp 0x7816e6
// library lua-5.1.4/lstrlib.c (function _gmatch_aux)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
