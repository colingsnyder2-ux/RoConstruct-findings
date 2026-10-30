// roc 2009-06 0057ea20  unit: G3D::_internal::DialogTemplate  size: 894 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057ea20
//
// 0057ea20  53                   push ebx
// 0057ea21  56                   push esi
// 0057ea22  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057ea26  57                   push edi
// 0057ea27  33db                 xor ebx, ebx
// 0057ea29  8da42400000000       lea esp, [esp]
// 0057ea30  399e7c010000         cmp dword ptr [esi + 0x17c], ebx
// 0057ea36  751f                 jne 0x57ea57
// 0057ea38  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0057ea3e  56                   push esi
// 0057ea3f  38580c               cmp byte ptr [eax + 0xc], bl
// 0057ea42  7507                 jne 0x57ea4b
// 0057ea44  e837ffffff           call 0x57e980
// 0057ea49  eb05                 jmp 0x57ea50
// 0057ea4b  e810feffff           call 0x57e860
// 0057ea50  83c404               add esp, 4
// 0057ea53  84c0                 test al, al
// 0057ea55  7430                 je 0x57ea87
// 0057ea57  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0057ea5d  8d48ff               lea ecx, [eax - 1]
// 0057ea60  81f9fd000000         cmp ecx, 0xfd
// 0057ea66  0f8789010000         ja 0x57ebf5
// 0057ea6c  0fb689a0ec5700       movzx ecx, byte ptr [ecx + 0x57eca0]
// 0057ea73  ff248d60ec5700       jmp dword ptr [ecx*4 + 0x57ec60]
// 0057ea7a  e8b1ebffff           call 0x57d630
// 0057ea7f  84c0                 test al, al
// 0057ea81  0f858c010000         jne 0x57ec13
// 0057ea87  5f                   pop edi
// 0057ea88  5e                   pop esi
// 0057ea89  33c0                 xor eax, eax
// 0057ea8b  5b                   pop ebx
// 0057ea8c  c3                   ret 
// 0057ea8d  32c9                 xor cl, cl
// 0057ea8f  32c0                 xor al, al
// 0057ea91  e84aecffff           call 0x57d6e0
// 0057ea96  84c0                 test al, al
// 0057ea98  74ed                 je 0x57ea87
// 0057ea9a  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057eaa0  eb8e                 jmp 0x57ea30
// 0057eaa2  32c9                 xor cl, cl
// 0057eaa4  b001                 mov al, 1
// 0057eaa6  e835ecffff           call 0x57d6e0
// 0057eaab  84c0                 test al, al
// 0057eaad  74d8                 je 0x57ea87
// 0057eaaf  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057eab5  e976ffffff           jmp 0x57ea30
// 0057eaba  b101                 mov cl, 1
// 0057eabc  32c0                 xor al, al
// 0057eabe  e81decffff           call 0x57d6e0
// 0057eac3  84c0                 test al, al
// 0057eac5  74c0                 je 0x57ea87
// 0057eac7  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057eacd  e95effffff           jmp 0x57ea30
// 0057ead2  b101                 mov cl, 1
// 0057ead4  8ac1                 mov al, cl
// 0057ead6  e805ecffff           call 0x57d6e0
// 0057eadb  84c0                 test al, al
// 0057eadd  74a8                 je 0x57ea87
// 0057eadf  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057eae5  e946ffffff           jmp 0x57ea30
// 0057eaea  8b16                 mov edx, dword ptr [esi]
// 0057eaec  c742143c000000       mov dword ptr [edx + 0x14], 0x3c
// 0057eaf3  8b06                 mov eax, dword ptr [esi]
// 0057eaf5  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0057eafb  894818               mov dword ptr [eax + 0x18], ecx
// 0057eafe  8b16                 mov edx, dword ptr [esi]
// 0057eb00  8b02                 mov eax, dword ptr [edx]
// 0057eb02  56                   push esi
// 0057eb03  ffd0                 call eax
// 0057eb05  83c404               add esp, 4
// 0057eb08  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057eb0e  e91dffffff           jmp 0x57ea30
// 0057eb13  56                   push esi
// 0057eb14  e897fcffff           call 0x57e7b0
// 0057eb19  83c404               add esp, 4
// 0057eb1c  84c0                 test al, al
// 0057eb1e  0f8463ffffff         je 0x57ea87
// 0057eb24  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057eb2a  e901ffffff           jmp 0x57ea30
// 0057eb2f  56                   push esi
// 0057eb30  e8abf1ffff           call 0x57dce0
// 0057eb35  83c404               add esp, 4
// 0057eb38  84c0                 test al, al
// 0057eb3a  0f8447ffffff         je 0x57ea87
// 0057eb40  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057eb46  e9e5feffff           jmp 0x57ea30
// 0057eb4b  8bfe                 mov edi, esi
// 0057eb4d  e88ef4ffff           call 0x57dfe0
// 0057eb52  84c0                 test al, al
// 0057eb54  0f842dffffff         je 0x57ea87
// 0057eb5a  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057eb60  e9cbfeffff           jmp 0x57ea30
// 0057eb65  56                   push esi
// 0057eb66  e8d5f6ffff           call 0x57e240
// 0057eb6b  83c404               add esp, 4
// 0057eb6e  84c0                 test al, al
// 0057eb70  0f8411ffffff         je 0x57ea87
// 0057eb76  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057eb7c  e9affeffff           jmp 0x57ea30
// 0057eb81  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0057eb87  8b94819cfcffff       mov edx, dword ptr [ecx + eax*4 - 0x364]
// 0057eb8e  56                   push esi
// 0057eb8f  ffd2                 call edx
// 0057eb91  83c404               add esp, 4
// 0057eb94  84c0                 test al, al
// 0057eb96  0f84ebfeffff         je 0x57ea87
// 0057eb9c  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057eba2  e989feffff           jmp 0x57ea30
// 0057eba7  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0057ebad  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0057ebb0  56                   push esi
// 0057ebb1  ffd1                 call ecx
// 0057ebb3  83c404               add esp, 4
// 0057ebb6  84c0                 test al, al
// 0057ebb8  0f84c9feffff         je 0x57ea87
// 0057ebbe  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057ebc4  e967feffff           jmp 0x57ea30
// 0057ebc9  8b16                 mov edx, dword ptr [esi]
// 0057ebcb  c742145c000000       mov dword ptr [edx + 0x14], 0x5c
// 0057ebd2  8b06                 mov eax, dword ptr [esi]
// 0057ebd4  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0057ebda  894818               mov dword ptr [eax + 0x18], ecx
// 0057ebdd  8b16                 mov edx, dword ptr [esi]
// 0057ebdf  8b4204               mov eax, dword ptr [edx + 4]
// 0057ebe2  6a01                 push 1
// 0057ebe4  56                   push esi
// 0057ebe5  ffd0                 call eax
// 0057ebe7  83c408               add esp, 8
// 0057ebea  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057ebf0  e93bfeffff           jmp 0x57ea30
// 0057ebf5  8b0e                 mov ecx, dword ptr [esi]
// 0057ebf7  c7411444000000       mov dword ptr [ecx + 0x14], 0x44
// 0057ebfe  8b16                 mov edx, dword ptr [esi]
// 0057ec00  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0057ec06  894218               mov dword ptr [edx + 0x18], eax
// 0057ec09  8b0e                 mov ecx, dword ptr [esi]
// 0057ec0b  8b11                 mov edx, dword ptr [ecx]
// 0057ec0d  56                   push esi
// 0057ec0e  ffd2                 call edx
// 0057ec10  83c404               add esp, 4
// 0057ec13  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057ec19  e912feffff           jmp 0x57ea30
// 0057ec1e  e8bdedffff           call 0x57d9e0
// 0057ec23  84c0                 test al, al
// 0057ec25  0f845cfeffff         je 0x57ea87
// 0057ec2b  5f                   pop edi
// 0057ec2c  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057ec32  5e                   pop esi
// 0057ec33  b801000000           mov eax, 1
// 0057ec38  5b                   pop ebx
// 0057ec39  c3                   ret 
// 0057ec3a  8b06                 mov eax, dword ptr [esi]
// 0057ec3c  c7401455000000       mov dword ptr [eax + 0x14], 0x55
// 0057ec43  8b0e                 mov ecx, dword ptr [esi]
// 0057ec45  8b5104               mov edx, dword ptr [ecx + 4]
// 0057ec48  6a01                 push 1
// 0057ec4a  56                   push esi
// 0057ec4b  ffd2                 call edx
// 0057ec4d  83c408               add esp, 8
// 0057ec50  5f                   pop edi
// 0057ec51  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057ec57  5e                   pop esi
// 0057ec58  b802000000           mov eax, 2
// 0057ec5d  5b                   pop ebx
// 0057ec5e  c3                   ret 
// 0057ec5f  90                   nop 
// 0057ec60  c9                   leave 
// 0057ec61  eb57                 jmp 0x57ecba
// 0057ec63  008dea5700a2         add byte ptr [ebp - 0x5dffa816], cl
// 0057ec69  ea5700eaea5700       ljmp 0x57:0xeaea0057
// 0057ec70  2f                   das 
// 0057ec71  eb57                 jmp 0x57ecca
// 0057ec73  00baea5700d2         add byte ptr [edx - 0x2dffa816], bh
// 0057ec79  ea570013eb5700       ljmp 0x57:0xeb130057
// 0057ec80  7aea                 jp 0x57ec6c
// 0057ec82  57                   push edi
// 0057ec83  003a                 add byte ptr [edx], bh
// 0057ec85  ec                   in al, dx
// 0057ec86  57                   push edi
// 0057ec87  001e                 add byte ptr [esi], bl
// 0057ec89  ec                   in al, dx
// 0057ec8a  57                   push edi
// 0057ec8b  004beb               add byte ptr [ebx - 0x15], cl
// 0057ec8e  57                   push edi
// 0057ec8f  0065eb               add byte ptr [ebp - 0x15], ah
// 0057ec92  57                   push edi
// 0057ec93  0081eb5700a7         add byte ptr [ecx - 0x58ffa815], al
// 0057ec99  eb57                 jmp 0x57ecf2
// 0057ec9b  00f5                 add ch, dh
// 0057ec9d  eb57                 jmp 0x57ecf6
// 0057ec9f  0000                 add byte ptr [eax], al
// library jpeg-6b/jdmarker.c (function _read_markers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
