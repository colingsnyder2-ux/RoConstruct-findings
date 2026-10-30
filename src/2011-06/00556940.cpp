// roc 2011-06 00556940  unit: G3D::LineSegment  size: 894 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00556940
//
// 00556940  53                   push ebx
// 00556941  56                   push esi
// 00556942  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00556946  57                   push edi
// 00556947  33db                 xor ebx, ebx
// 00556949  8da42400000000       lea esp, [esp]
// 00556950  399e7c010000         cmp dword ptr [esi + 0x17c], ebx
// 00556956  751f                 jne 0x556977
// 00556958  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0055695e  56                   push esi
// 0055695f  38580c               cmp byte ptr [eax + 0xc], bl
// 00556962  7507                 jne 0x55696b
// 00556964  e837ffffff           call 0x5568a0
// 00556969  eb05                 jmp 0x556970
// 0055696b  e810feffff           call 0x556780
// 00556970  83c404               add esp, 4
// 00556973  84c0                 test al, al
// 00556975  7430                 je 0x5569a7
// 00556977  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0055697d  8d48ff               lea ecx, [eax - 1]
// 00556980  81f9fd000000         cmp ecx, 0xfd
// 00556986  0f8789010000         ja 0x556b15
// 0055698c  0fb689c06b5500       movzx ecx, byte ptr [ecx + 0x556bc0]
// 00556993  ff248d806b5500       jmp dword ptr [ecx*4 + 0x556b80]
// 0055699a  e8b1ebffff           call 0x555550
// 0055699f  84c0                 test al, al
// 005569a1  0f858c010000         jne 0x556b33
// 005569a7  5f                   pop edi
// 005569a8  5e                   pop esi
// 005569a9  33c0                 xor eax, eax
// 005569ab  5b                   pop ebx
// 005569ac  c3                   ret 
// 005569ad  32c9                 xor cl, cl
// 005569af  32c0                 xor al, al
// 005569b1  e84aecffff           call 0x555600
// 005569b6  84c0                 test al, al
// 005569b8  74ed                 je 0x5569a7
// 005569ba  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005569c0  eb8e                 jmp 0x556950
// 005569c2  32c9                 xor cl, cl
// 005569c4  b001                 mov al, 1
// 005569c6  e835ecffff           call 0x555600
// 005569cb  84c0                 test al, al
// 005569cd  74d8                 je 0x5569a7
// 005569cf  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005569d5  e976ffffff           jmp 0x556950
// 005569da  b101                 mov cl, 1
// 005569dc  32c0                 xor al, al
// 005569de  e81decffff           call 0x555600
// 005569e3  84c0                 test al, al
// 005569e5  74c0                 je 0x5569a7
// 005569e7  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005569ed  e95effffff           jmp 0x556950
// 005569f2  b101                 mov cl, 1
// 005569f4  8ac1                 mov al, cl
// 005569f6  e805ecffff           call 0x555600
// 005569fb  84c0                 test al, al
// 005569fd  74a8                 je 0x5569a7
// 005569ff  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556a05  e946ffffff           jmp 0x556950
// 00556a0a  8b16                 mov edx, dword ptr [esi]
// 00556a0c  c742143c000000       mov dword ptr [edx + 0x14], 0x3c
// 00556a13  8b06                 mov eax, dword ptr [esi]
// 00556a15  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00556a1b  894818               mov dword ptr [eax + 0x18], ecx
// 00556a1e  8b16                 mov edx, dword ptr [esi]
// 00556a20  8b02                 mov eax, dword ptr [edx]
// 00556a22  56                   push esi
// 00556a23  ffd0                 call eax
// 00556a25  83c404               add esp, 4
// 00556a28  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556a2e  e91dffffff           jmp 0x556950
// 00556a33  56                   push esi
// 00556a34  e897fcffff           call 0x5566d0
// 00556a39  83c404               add esp, 4
// 00556a3c  84c0                 test al, al
// 00556a3e  0f8463ffffff         je 0x5569a7
// 00556a44  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556a4a  e901ffffff           jmp 0x556950
// 00556a4f  56                   push esi
// 00556a50  e8abf1ffff           call 0x555c00
// 00556a55  83c404               add esp, 4
// 00556a58  84c0                 test al, al
// 00556a5a  0f8447ffffff         je 0x5569a7
// 00556a60  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556a66  e9e5feffff           jmp 0x556950
// 00556a6b  8bfe                 mov edi, esi
// 00556a6d  e88ef4ffff           call 0x555f00
// 00556a72  84c0                 test al, al
// 00556a74  0f842dffffff         je 0x5569a7
// 00556a7a  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556a80  e9cbfeffff           jmp 0x556950
// 00556a85  56                   push esi
// 00556a86  e8d5f6ffff           call 0x556160
// 00556a8b  83c404               add esp, 4
// 00556a8e  84c0                 test al, al
// 00556a90  0f8411ffffff         je 0x5569a7
// 00556a96  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556a9c  e9affeffff           jmp 0x556950
// 00556aa1  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00556aa7  8b94819cfcffff       mov edx, dword ptr [ecx + eax*4 - 0x364]
// 00556aae  56                   push esi
// 00556aaf  ffd2                 call edx
// 00556ab1  83c404               add esp, 4
// 00556ab4  84c0                 test al, al
// 00556ab6  0f84ebfeffff         je 0x5569a7
// 00556abc  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556ac2  e989feffff           jmp 0x556950
// 00556ac7  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00556acd  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00556ad0  56                   push esi
// 00556ad1  ffd1                 call ecx
// 00556ad3  83c404               add esp, 4
// 00556ad6  84c0                 test al, al
// 00556ad8  0f84c9feffff         je 0x5569a7
// 00556ade  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556ae4  e967feffff           jmp 0x556950
// 00556ae9  8b16                 mov edx, dword ptr [esi]
// 00556aeb  c742145c000000       mov dword ptr [edx + 0x14], 0x5c
// 00556af2  8b06                 mov eax, dword ptr [esi]
// 00556af4  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00556afa  894818               mov dword ptr [eax + 0x18], ecx
// 00556afd  8b16                 mov edx, dword ptr [esi]
// 00556aff  8b4204               mov eax, dword ptr [edx + 4]
// 00556b02  6a01                 push 1
// 00556b04  56                   push esi
// 00556b05  ffd0                 call eax
// 00556b07  83c408               add esp, 8
// 00556b0a  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556b10  e93bfeffff           jmp 0x556950
// 00556b15  8b0e                 mov ecx, dword ptr [esi]
// 00556b17  c7411444000000       mov dword ptr [ecx + 0x14], 0x44
// 00556b1e  8b16                 mov edx, dword ptr [esi]
// 00556b20  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00556b26  894218               mov dword ptr [edx + 0x18], eax
// 00556b29  8b0e                 mov ecx, dword ptr [esi]
// 00556b2b  8b11                 mov edx, dword ptr [ecx]
// 00556b2d  56                   push esi
// 00556b2e  ffd2                 call edx
// 00556b30  83c404               add esp, 4
// 00556b33  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556b39  e912feffff           jmp 0x556950
// 00556b3e  e8bdedffff           call 0x555900
// 00556b43  84c0                 test al, al
// 00556b45  0f845cfeffff         je 0x5569a7
// 00556b4b  5f                   pop edi
// 00556b4c  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556b52  5e                   pop esi
// 00556b53  b801000000           mov eax, 1
// 00556b58  5b                   pop ebx
// 00556b59  c3                   ret 
// 00556b5a  8b06                 mov eax, dword ptr [esi]
// 00556b5c  c7401455000000       mov dword ptr [eax + 0x14], 0x55
// 00556b63  8b0e                 mov ecx, dword ptr [esi]
// 00556b65  8b5104               mov edx, dword ptr [ecx + 4]
// 00556b68  6a01                 push 1
// 00556b6a  56                   push esi
// 00556b6b  ffd2                 call edx
// 00556b6d  83c408               add esp, 8
// 00556b70  5f                   pop edi
// 00556b71  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556b77  5e                   pop esi
// 00556b78  b802000000           mov eax, 2
// 00556b7d  5b                   pop ebx
// 00556b7e  c3                   ret 
// 00556b7f  90                   nop 
// 00556b80  e96a5500ad           jmp 0xad55c0ef
// 00556b85  695500c2695500       imul edx, dword ptr [ebp], 0x5569c2
// 00556b8c  0a6a55               or ch, byte ptr [edx + 0x55]
// 00556b8f  004f6a               add byte ptr [edi + 0x6a], cl
// 00556b92  55                   push ebp
// 00556b93  00da                 add dl, bl
// 00556b95  695500f2695500       imul edx, dword ptr [ebp], 0x5569f2
// 00556b9c  336a55               xor ebp, dword ptr [edx + 0x55]
// 00556b9f  009a6955005a         add byte ptr [edx + 0x5a005569], bl
// 00556ba5  6b55003e             imul edx, dword ptr [ebp], 0x3e
// 00556ba9  6b55006b             imul edx, dword ptr [ebp], 0x6b
// 00556bad  6a55                 push 0x55
// 00556baf  00856a5500a1         add byte ptr [ebp - 0x5effaa96], al
// 00556bb5  6a55                 push 0x55
// 00556bb7  00c7                 add bh, al
// 00556bb9  6a55                 push 0x55
// 00556bbb  00156b550000         add byte ptr [0x556b], dl
// library jpeg-6b/jdmarker.c (function _read_markers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
