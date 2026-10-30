// roc 2012-06 006437c0  unit: seg_00640000  size: 894 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006437c0
//
// 006437c0  53                   push ebx
// 006437c1  56                   push esi
// 006437c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006437c6  57                   push edi
// 006437c7  33db                 xor ebx, ebx
// 006437c9  8da42400000000       lea esp, [esp]
// 006437d0  399e7c010000         cmp dword ptr [esi + 0x17c], ebx
// 006437d6  751f                 jne 0x6437f7
// 006437d8  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 006437de  56                   push esi
// 006437df  38580c               cmp byte ptr [eax + 0xc], bl
// 006437e2  7507                 jne 0x6437eb
// 006437e4  e837ffffff           call 0x643720
// 006437e9  eb05                 jmp 0x6437f0
// 006437eb  e810feffff           call 0x643600
// 006437f0  83c404               add esp, 4
// 006437f3  84c0                 test al, al
// 006437f5  7430                 je 0x643827
// 006437f7  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 006437fd  8d48ff               lea ecx, [eax - 1]
// 00643800  81f9fd000000         cmp ecx, 0xfd
// 00643806  0f8789010000         ja 0x643995
// 0064380c  0fb689403a6400       movzx ecx, byte ptr [ecx + 0x643a40]
// 00643813  ff248d003a6400       jmp dword ptr [ecx*4 + 0x643a00]
// 0064381a  e8b1ebffff           call 0x6423d0
// 0064381f  84c0                 test al, al
// 00643821  0f858c010000         jne 0x6439b3
// 00643827  5f                   pop edi
// 00643828  5e                   pop esi
// 00643829  33c0                 xor eax, eax
// 0064382b  5b                   pop ebx
// 0064382c  c3                   ret 
// 0064382d  32c9                 xor cl, cl
// 0064382f  32c0                 xor al, al
// 00643831  e84aecffff           call 0x642480
// 00643836  84c0                 test al, al
// 00643838  74ed                 je 0x643827
// 0064383a  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00643840  eb8e                 jmp 0x6437d0
// 00643842  32c9                 xor cl, cl
// 00643844  b001                 mov al, 1
// 00643846  e835ecffff           call 0x642480
// 0064384b  84c0                 test al, al
// 0064384d  74d8                 je 0x643827
// 0064384f  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00643855  e976ffffff           jmp 0x6437d0
// 0064385a  b101                 mov cl, 1
// 0064385c  32c0                 xor al, al
// 0064385e  e81decffff           call 0x642480
// 00643863  84c0                 test al, al
// 00643865  74c0                 je 0x643827
// 00643867  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0064386d  e95effffff           jmp 0x6437d0
// 00643872  b101                 mov cl, 1
// 00643874  8ac1                 mov al, cl
// 00643876  e805ecffff           call 0x642480
// 0064387b  84c0                 test al, al
// 0064387d  74a8                 je 0x643827
// 0064387f  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00643885  e946ffffff           jmp 0x6437d0
// 0064388a  8b16                 mov edx, dword ptr [esi]
// 0064388c  c742143c000000       mov dword ptr [edx + 0x14], 0x3c
// 00643893  8b06                 mov eax, dword ptr [esi]
// 00643895  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0064389b  894818               mov dword ptr [eax + 0x18], ecx
// 0064389e  8b16                 mov edx, dword ptr [esi]
// 006438a0  8b02                 mov eax, dword ptr [edx]
// 006438a2  56                   push esi
// 006438a3  ffd0                 call eax
// 006438a5  83c404               add esp, 4
// 006438a8  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 006438ae  e91dffffff           jmp 0x6437d0
// 006438b3  56                   push esi
// 006438b4  e897fcffff           call 0x643550
// 006438b9  83c404               add esp, 4
// 006438bc  84c0                 test al, al
// 006438be  0f8463ffffff         je 0x643827
// 006438c4  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 006438ca  e901ffffff           jmp 0x6437d0
// 006438cf  56                   push esi
// 006438d0  e8abf1ffff           call 0x642a80
// 006438d5  83c404               add esp, 4
// 006438d8  84c0                 test al, al
// 006438da  0f8447ffffff         je 0x643827
// 006438e0  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 006438e6  e9e5feffff           jmp 0x6437d0
// 006438eb  8bfe                 mov edi, esi
// 006438ed  e88ef4ffff           call 0x642d80
// 006438f2  84c0                 test al, al
// 006438f4  0f842dffffff         je 0x643827
// 006438fa  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00643900  e9cbfeffff           jmp 0x6437d0
// 00643905  56                   push esi
// 00643906  e8d5f6ffff           call 0x642fe0
// 0064390b  83c404               add esp, 4
// 0064390e  84c0                 test al, al
// 00643910  0f8411ffffff         je 0x643827
// 00643916  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0064391c  e9affeffff           jmp 0x6437d0
// 00643921  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00643927  8b94819cfcffff       mov edx, dword ptr [ecx + eax*4 - 0x364]
// 0064392e  56                   push esi
// 0064392f  ffd2                 call edx
// 00643931  83c404               add esp, 4
// 00643934  84c0                 test al, al
// 00643936  0f84ebfeffff         je 0x643827
// 0064393c  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00643942  e989feffff           jmp 0x6437d0
// 00643947  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0064394d  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00643950  56                   push esi
// 00643951  ffd1                 call ecx
// 00643953  83c404               add esp, 4
// 00643956  84c0                 test al, al
// 00643958  0f84c9feffff         je 0x643827
// 0064395e  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00643964  e967feffff           jmp 0x6437d0
// 00643969  8b16                 mov edx, dword ptr [esi]
// 0064396b  c742145c000000       mov dword ptr [edx + 0x14], 0x5c
// 00643972  8b06                 mov eax, dword ptr [esi]
// 00643974  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0064397a  894818               mov dword ptr [eax + 0x18], ecx
// 0064397d  8b16                 mov edx, dword ptr [esi]
// 0064397f  8b4204               mov eax, dword ptr [edx + 4]
// 00643982  6a01                 push 1
// 00643984  56                   push esi
// 00643985  ffd0                 call eax
// 00643987  83c408               add esp, 8
// 0064398a  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00643990  e93bfeffff           jmp 0x6437d0
// 00643995  8b0e                 mov ecx, dword ptr [esi]
// 00643997  c7411444000000       mov dword ptr [ecx + 0x14], 0x44
// 0064399e  8b16                 mov edx, dword ptr [esi]
// 006439a0  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 006439a6  894218               mov dword ptr [edx + 0x18], eax
// 006439a9  8b0e                 mov ecx, dword ptr [esi]
// 006439ab  8b11                 mov edx, dword ptr [ecx]
// 006439ad  56                   push esi
// 006439ae  ffd2                 call edx
// 006439b0  83c404               add esp, 4
// 006439b3  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 006439b9  e912feffff           jmp 0x6437d0
// 006439be  e8bdedffff           call 0x642780
// 006439c3  84c0                 test al, al
// 006439c5  0f845cfeffff         je 0x643827
// 006439cb  5f                   pop edi
// 006439cc  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 006439d2  5e                   pop esi
// 006439d3  b801000000           mov eax, 1
// 006439d8  5b                   pop ebx
// 006439d9  c3                   ret 
// 006439da  8b06                 mov eax, dword ptr [esi]
// 006439dc  c7401455000000       mov dword ptr [eax + 0x14], 0x55
// 006439e3  8b0e                 mov ecx, dword ptr [esi]
// 006439e5  8b5104               mov edx, dword ptr [ecx + 4]
// 006439e8  6a01                 push 1
// 006439ea  56                   push esi
// 006439eb  ffd2                 call edx
// 006439ed  83c408               add esp, 8
// 006439f0  5f                   pop edi
// 006439f1  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 006439f7  5e                   pop esi
// 006439f8  b802000000           mov eax, 2
// 006439fd  5b                   pop ebx
// 006439fe  c3                   ret 
// 006439ff  90                   nop 
// 00643a00  693964002d38         imul edi, dword ptr [ecx], 0x382d0064
// 00643a06  64004238             add byte ptr fs:[edx + 0x38], al
// 00643a0a  64008a386400cf       add byte ptr fs:[edx - 0x30ff9bc8], cl
// 00643a11  3864005a             cmp byte ptr [eax + eax + 0x5a], ah
// 00643a15  38640072             cmp byte ptr [eax + eax + 0x72], ah
// 00643a19  386400b3             cmp byte ptr [eax + eax - 0x4d], ah
// 00643a1d  3864001a             cmp byte ptr [eax + eax + 0x1a], ah
// 00643a21  386400da             cmp byte ptr [eax + eax - 0x26], ah
// 00643a25  396400be             cmp dword ptr [eax + eax - 0x42], esp
// 00643a29  396400eb             cmp dword ptr [eax + eax - 0x15], esp
// 00643a2d  38640005             cmp byte ptr [eax + eax + 5], ah
// 00643a31  39640021             cmp dword ptr [eax + eax + 0x21], esp
// 00643a35  39640047             cmp dword ptr [eax + eax + 0x47], esp
// 00643a39  39640095             cmp dword ptr [eax + eax - 0x6b], esp
// 00643a3d  39640000             cmp dword ptr [eax + eax], esp
// library jpeg-6b/jdmarker.c (function _read_markers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
