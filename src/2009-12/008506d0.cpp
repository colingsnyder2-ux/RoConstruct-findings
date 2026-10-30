// roc 2009-12 008506d0  unit: CXTPPropExchangeXMLNode  size: 530 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008506d0
//
// 008506d0  6aff                 push -1
// 008506d2  6878d89500           push 0x95d878
// 008506d7  64a100000000         mov eax, dword ptr fs:[0]
// 008506dd  50                   push eax
// 008506de  83ec10               sub esp, 0x10
// 008506e1  53                   push ebx
// 008506e2  55                   push ebp
// 008506e3  56                   push esi
// 008506e4  57                   push edi
// 008506e5  a10052b600           mov eax, dword ptr [0xb65200]
// 008506ea  33c4                 xor eax, esp
// 008506ec  50                   push eax
// 008506ed  8d442424             lea eax, [esp + 0x24]
// 008506f1  64a300000000         mov dword ptr fs:[0], eax
// 008506f7  8d4c2414             lea ecx, [esp + 0x14]
// 008506fb  e8a8600d00           call 0x9267a8
// 00850700  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00850704  6a00                 push 0
// 00850706  6a00                 push 0
// 00850708  57                   push edi
// 00850709  8d4c2420             lea ecx, [esp + 0x20]
// 0085070d  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00850715  e87c600d00           call 0x926796
// 0085071a  8d4c2414             lea ecx, [esp + 0x14]
// 0085071e  85c0                 test eax, eax
// 00850720  0f8499010000         je 0x8508bf
// 00850726  e877600d00           call 0x9267a2
// 0085072b  8bf0                 mov esi, eax
// 0085072d  83fe03               cmp esi, 3
// 00850730  0f8285010000         jb 0x8508bb
// 00850736  8d4601               lea eax, [esi + 1]
// 00850739  50                   push eax
// 0085073a  e80334faff           call 0x7f3b42
// 0085073f  83c404               add esp, 4
// 00850742  8bd8                 mov ebx, eax
// 00850744  56                   push esi
// 00850745  53                   push ebx
// 00850746  8d4c241c             lea ecx, [esp + 0x1c]
// 0085074a  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0085074e  e81d3ffaff           call 0x7f4670
// 00850753  8d4c2414             lea ecx, [esp + 0x14]
// 00850757  c6043300             mov byte ptr [ebx + esi], 0
// 0085075b  e83c600d00           call 0x92679c
// 00850760  6a00                 push 0
// 00850762  6801100000           push 0x1001
// 00850767  57                   push edi
// 00850768  8d4c2420             lea ecx, [esp + 0x20]
// 0085076c  e825600d00           call 0x926796
// 00850771  85c0                 test eax, eax
// 00850773  7506                 jne 0x85077b
// 00850775  53                   push ebx
// 00850776  e938010000           jmp 0x8508b3
// 0085077b  33db                 xor ebx, ebx
// 0085077d  bd01000000           mov ebp, 1
// 00850782  83fe02               cmp esi, 2
// 00850785  7611                 jbe 0x850798
// 00850787  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0085078b  807c31fe0d           cmp byte ptr [ecx + esi - 2], 0xd
// 00850790  8d4431fe             lea eax, [ecx + esi - 2]
// 00850794  7502                 jne 0x850798
// 00850796  8818                 mov byte ptr [eax], bl
// 00850798  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0085079c  8d7701               lea esi, [edi + 1]
// 0085079f  8bc7                 mov eax, edi
// 008507a1  381e                 cmp byte ptr [esi], bl
// 008507a3  0f84e1000000         je 0x85088a
// 008507a9  8a4e01               mov cl, byte ptr [esi + 1]
// 008507ac  46                   inc esi
// 008507ad  80f93e               cmp cl, 0x3e
// 008507b0  750d                 jne 0x8507bf
// 008507b2  8a56ff               mov dl, byte ptr [esi - 1]
// 008507b5  80fa2f               cmp dl, 0x2f
// 008507b8  7414                 je 0x8507ce
// 008507ba  80fa3f               cmp dl, 0x3f
// 008507bd  740f                 je 0x8507ce
// 008507bf  80f93c               cmp cl, 0x3c
// 008507c2  0f85a0000000         jne 0x850868
// 008507c8  807e012f             cmp byte ptr [esi + 1], 0x2f
// 008507cc  7559                 jne 0x850827
// 008507ce  4d                   dec ebp
// 008507cf  80f93c               cmp cl, 0x3c
// 008507d2  0f8590000000         jne 0x850868
// 008507d8  8bd6                 mov edx, esi
// 008507da  2bd3                 sub edx, ebx
// 008507dc  807aff3e             cmp byte ptr [edx - 1], 0x3e
// 008507e0  0f8582000000         jne 0x850868
// 008507e6  8bce                 mov ecx, esi
// 008507e8  2bc8                 sub ecx, eax
// 008507ea  2bcb                 sub ecx, ebx
// 008507ec  51                   push ecx
// 008507ed  50                   push eax
// 008507ee  8d4c241c             lea ecx, [esp + 0x1c]
// 008507f2  e8bd5f0d00           call 0x9267b4
// 008507f7  6a02                 push 2
// 008507f9  6828fd9900           push 0x99fd28
// 008507fe  8d4c241c             lea ecx, [esp + 0x1c]
// 00850802  e8ad5f0d00           call 0x9267b4
// 00850807  85ed                 test ebp, ebp
// 00850809  7e5b                 jle 0x850866
// 0085080b  8bfd                 mov edi, ebp
// 0085080d  8d4900               lea ecx, [ecx]
// 00850810  6a01                 push 1
// 00850812  68ccb79a00           push 0x9ab7cc
// 00850817  8d4c241c             lea ecx, [esp + 0x1c]
// 0085081b  e8945f0d00           call 0x9267b4
// 00850820  83ef01               sub edi, 1
// 00850823  75eb                 jne 0x850810
// 00850825  eb3f                 jmp 0x850866
// 00850827  8bd6                 mov edx, esi
// 00850829  2bd0                 sub edx, eax
// 0085082b  2bd3                 sub edx, ebx
// 0085082d  52                   push edx
// 0085082e  50                   push eax
// 0085082f  8d4c241c             lea ecx, [esp + 0x1c]
// 00850833  e87c5f0d00           call 0x9267b4
// 00850838  6a02                 push 2
// 0085083a  6828fd9900           push 0x99fd28
// 0085083f  8d4c241c             lea ecx, [esp + 0x1c]
// 00850843  e86c5f0d00           call 0x9267b4
// 00850848  85ed                 test ebp, ebp
// 0085084a  7e19                 jle 0x850865
// 0085084c  8bfd                 mov edi, ebp
// 0085084e  8bff                 mov edi, edi
// 00850850  6a01                 push 1
// 00850852  68ccb79a00           push 0x9ab7cc
// 00850857  8d4c241c             lea ecx, [esp + 0x1c]
// 0085085b  e8545f0d00           call 0x9267b4
// 00850860  83ef01               sub edi, 1
// 00850863  75eb                 jne 0x850850
// 00850865  45                   inc ebp
// 00850866  8bc6                 mov eax, esi
// 00850868  8a0e                 mov cl, byte ptr [esi]
// 0085086a  80f90d               cmp cl, 0xd
// 0085086d  740e                 je 0x85087d
// 0085086f  80f90a               cmp cl, 0xa
// 00850872  7409                 je 0x85087d
// 00850874  80f909               cmp cl, 9
// 00850877  7404                 je 0x85087d
// 00850879  33db                 xor ebx, ebx
// 0085087b  eb01                 jmp 0x85087e
// 0085087d  43                   inc ebx
// 0085087e  84c9                 test cl, cl
// 00850880  0f8523ffffff         jne 0x8507a9
// 00850886  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0085088a  46                   inc esi
// 0085088b  2bf0                 sub esi, eax
// 0085088d  4e                   dec esi
// 0085088e  56                   push esi
// 0085088f  50                   push eax
// 00850890  8d4c241c             lea ecx, [esp + 0x1c]
// 00850894  e81b5f0d00           call 0x9267b4
// 00850899  6a02                 push 2
// 0085089b  6828fd9900           push 0x99fd28
// 008508a0  8d4c241c             lea ecx, [esp + 0x1c]
// 008508a4  e80b5f0d00           call 0x9267b4
// 008508a9  8d4c2414             lea ecx, [esp + 0x14]
// 008508ad  e8ea5e0d00           call 0x92679c
// 008508b2  57                   push edi
// 008508b3  e84e32faff           call 0x7f3b06
// 008508b8  83c404               add esp, 4
// 008508bb  8d4c2414             lea ecx, [esp + 0x14]
// 008508bf  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008508c7  e89e3dfaff           call 0x7f466a
// 008508cc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008508d0  64890d00000000       mov dword ptr fs:[0], ecx
// 008508d7  59                   pop ecx
// 008508d8  5f                   pop edi
// 008508d9  5e                   pop esi
// 008508da  5d                   pop ebp
// 008508db  5b                   pop ebx
// 008508dc  83c41c               add esp, 0x1c
// 008508df  c20400               ret 4
// copied from an identical function in another client (function ?FormatFile@CXTPPropExchangeXMLNode@@AAEXPBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp