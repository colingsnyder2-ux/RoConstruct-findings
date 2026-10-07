// roc 2007-08 005c8ef0  unit: lua_exception  size: 1015 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c8ef0
//
// 005c8ef0  51                   push ecx
// 005c8ef1  53                   push ebx
// 005c8ef2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005c8ef6  55                   push ebp
// 005c8ef7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005c8efb  3beb                 cmp ebp, ebx
// 005c8efd  0f8de0030000         jge 0x5c92e3
// 005c8f03  56                   push esi
// 005c8f04  8b742414             mov esi, dword ptr [esp + 0x14]
// 005c8f08  57                   push edi
// 005c8f09  eb0d                 jmp 0x5c8f18
// 005c8f0b  eb03                 jmp 0x5c8f10
// 005c8f0d  8d4900               lea ecx, [ecx]
// 005c8f10  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005c8f14  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005c8f18  55                   push ebp
// 005c8f19  6a01                 push 1
// 005c8f1b  56                   push esi
// 005c8f1c  e87f4fffff           call 0x5bdea0
// 005c8f21  53                   push ebx
// 005c8f22  6a01                 push 1
// 005c8f24  56                   push esi
// 005c8f25  e8764fffff           call 0x5bdea0
// 005c8f2a  6a02                 push 2
// 005c8f2c  56                   push esi
// 005c8f2d  e83e48ffff           call 0x5bd770
// 005c8f32  83c420               add esp, 0x20
// 005c8f35  85c0                 test eax, eax
// 005c8f37  743b                 je 0x5c8f74
// 005c8f39  6a02                 push 2
// 005c8f3b  56                   push esi
// 005c8f3c  e8ff47ffff           call 0x5bd740
// 005c8f41  6afe                 push -2
// 005c8f43  56                   push esi
// 005c8f44  e8f747ffff           call 0x5bd740
// 005c8f49  6afc                 push -4
// 005c8f4b  56                   push esi
// 005c8f4c  e8ef47ffff           call 0x5bd740
// 005c8f51  6a01                 push 1
// 005c8f53  6a02                 push 2
// 005c8f55  56                   push esi
// 005c8f56  e83553ffff           call 0x5be290
// 005c8f5b  6aff                 push -1
// 005c8f5d  56                   push esi
// 005c8f5e  e8ed49ffff           call 0x5bd950
// 005c8f63  6afe                 push -2
// 005c8f65  56                   push esi
// 005c8f66  8bf8                 mov edi, eax
// 005c8f68  e82346ffff           call 0x5bd590
// 005c8f6d  83c434               add esp, 0x34
// 005c8f70  8bc7                 mov eax, edi
// 005c8f72  eb0d                 jmp 0x5c8f81
// 005c8f74  6afe                 push -2
// 005c8f76  6aff                 push -1
// 005c8f78  56                   push esi
// 005c8f79  e81249ffff           call 0x5bd890
// 005c8f7e  83c40c               add esp, 0xc
// 005c8f81  85c0                 test eax, eax
// 005c8f83  7417                 je 0x5c8f9c
// 005c8f85  55                   push ebp
// 005c8f86  6a01                 push 1
// 005c8f88  56                   push esi
// 005c8f89  e86251ffff           call 0x5be0f0
// 005c8f8e  53                   push ebx
// 005c8f8f  6a01                 push 1
// 005c8f91  56                   push esi
// 005c8f92  e85951ffff           call 0x5be0f0
// 005c8f97  83c418               add esp, 0x18
// 005c8f9a  eb0b                 jmp 0x5c8fa7
// 005c8f9c  6afd                 push -3
// 005c8f9e  56                   push esi
// 005c8f9f  e8ec45ffff           call 0x5bd590
// 005c8fa4  83c408               add esp, 8
// 005c8fa7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005c8fab  8beb                 mov ebp, ebx
// 005c8fad  2be8                 sub ebp, eax
// 005c8faf  83fd01               cmp ebp, 1
// 005c8fb2  0f8429030000         je 0x5c92e1
// 005c8fb8  03c3                 add eax, ebx
// 005c8fba  99                   cdq 
// 005c8fbb  2bc2                 sub eax, edx
// 005c8fbd  8bf8                 mov edi, eax
// 005c8fbf  d1ff                 sar edi, 1
// 005c8fc1  57                   push edi
// 005c8fc2  6a01                 push 1
// 005c8fc4  56                   push esi
// 005c8fc5  e8d64effff           call 0x5bdea0
// 005c8fca  8b442428             mov eax, dword ptr [esp + 0x28]
// 005c8fce  50                   push eax
// 005c8fcf  6a01                 push 1
// 005c8fd1  56                   push esi
// 005c8fd2  e8c94effff           call 0x5bdea0
// 005c8fd7  6a02                 push 2
// 005c8fd9  56                   push esi
// 005c8fda  e89147ffff           call 0x5bd770
// 005c8fdf  83c420               add esp, 0x20
// 005c8fe2  85c0                 test eax, eax
// 005c8fe4  743f                 je 0x5c9025
// 005c8fe6  6a02                 push 2
// 005c8fe8  56                   push esi
// 005c8fe9  e85247ffff           call 0x5bd740
// 005c8fee  6afd                 push -3
// 005c8ff0  56                   push esi
// 005c8ff1  e84a47ffff           call 0x5bd740
// 005c8ff6  6afd                 push -3
// 005c8ff8  56                   push esi
// 005c8ff9  e84247ffff           call 0x5bd740
// 005c8ffe  6a01                 push 1
// 005c9000  6a02                 push 2
// 005c9002  56                   push esi
// 005c9003  e88852ffff           call 0x5be290
// 005c9008  6aff                 push -1
// 005c900a  56                   push esi
// 005c900b  e84049ffff           call 0x5bd950
// 005c9010  6afe                 push -2
// 005c9012  56                   push esi
// 005c9013  8bd8                 mov ebx, eax
// 005c9015  e87645ffff           call 0x5bd590
// 005c901a  8bc3                 mov eax, ebx
// 005c901c  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 005c9020  83c434               add esp, 0x34
// 005c9023  eb0d                 jmp 0x5c9032
// 005c9025  6aff                 push -1
// 005c9027  6afe                 push -2
// 005c9029  56                   push esi
// 005c902a  e86148ffff           call 0x5bd890
// 005c902f  83c40c               add esp, 0xc
// 005c9032  85c0                 test eax, eax
// 005c9034  741e                 je 0x5c9054
// 005c9036  57                   push edi
// 005c9037  6a01                 push 1
// 005c9039  56                   push esi
// 005c903a  e8b150ffff           call 0x5be0f0
// 005c903f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005c9043  51                   push ecx
// 005c9044  6a01                 push 1
// 005c9046  56                   push esi
// 005c9047  e8a450ffff           call 0x5be0f0
// 005c904c  83c418               add esp, 0x18
// 005c904f  e992000000           jmp 0x5c90e6
// 005c9054  6afe                 push -2
// 005c9056  56                   push esi
// 005c9057  e83445ffff           call 0x5bd590
// 005c905c  53                   push ebx
// 005c905d  6a01                 push 1
// 005c905f  56                   push esi
// 005c9060  e83b4effff           call 0x5bdea0
// 005c9065  6a02                 push 2
// 005c9067  56                   push esi
// 005c9068  e80347ffff           call 0x5bd770
// 005c906d  83c41c               add esp, 0x1c
// 005c9070  85c0                 test eax, eax
// 005c9072  743f                 je 0x5c90b3
// 005c9074  6a02                 push 2
// 005c9076  56                   push esi
// 005c9077  e8c446ffff           call 0x5bd740
// 005c907c  6afe                 push -2
// 005c907e  56                   push esi
// 005c907f  e8bc46ffff           call 0x5bd740
// 005c9084  6afc                 push -4
// 005c9086  56                   push esi
// 005c9087  e8b446ffff           call 0x5bd740
// 005c908c  6a01                 push 1
// 005c908e  6a02                 push 2
// 005c9090  56                   push esi
// 005c9091  e8fa51ffff           call 0x5be290
// 005c9096  6aff                 push -1
// 005c9098  56                   push esi
// 005c9099  e8b248ffff           call 0x5bd950
// 005c909e  6afe                 push -2
// 005c90a0  56                   push esi
// 005c90a1  8bd8                 mov ebx, eax
// 005c90a3  e8e844ffff           call 0x5bd590
// 005c90a8  8bc3                 mov eax, ebx
// 005c90aa  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 005c90ae  83c434               add esp, 0x34
// 005c90b1  eb0d                 jmp 0x5c90c0
// 005c90b3  6afe                 push -2
// 005c90b5  6aff                 push -1
// 005c90b7  56                   push esi
// 005c90b8  e8d347ffff           call 0x5bd890
// 005c90bd  83c40c               add esp, 0xc
// 005c90c0  85c0                 test eax, eax
// 005c90c2  7417                 je 0x5c90db
// 005c90c4  57                   push edi
// 005c90c5  6a01                 push 1
// 005c90c7  56                   push esi
// 005c90c8  e82350ffff           call 0x5be0f0
// 005c90cd  53                   push ebx
// 005c90ce  6a01                 push 1
// 005c90d0  56                   push esi
// 005c90d1  e81a50ffff           call 0x5be0f0
// 005c90d6  83c418               add esp, 0x18
// 005c90d9  eb0b                 jmp 0x5c90e6
// 005c90db  6afd                 push -3
// 005c90dd  56                   push esi
// 005c90de  e8ad44ffff           call 0x5bd590
// 005c90e3  83c408               add esp, 8
// 005c90e6  83fd02               cmp ebp, 2
// 005c90e9  0f84f2010000         je 0x5c92e1
// 005c90ef  57                   push edi
// 005c90f0  6a01                 push 1
// 005c90f2  56                   push esi
// 005c90f3  e8a84dffff           call 0x5bdea0
// 005c90f8  6aff                 push -1
// 005c90fa  56                   push esi
// 005c90fb  e84046ffff           call 0x5bd740
// 005c9100  8d6bff               lea ebp, [ebx - 1]
// 005c9103  55                   push ebp
// 005c9104  6a01                 push 1
// 005c9106  56                   push esi
// 005c9107  896c2430             mov dword ptr [esp + 0x30], ebp
// 005c910b  e8904dffff           call 0x5bdea0
// 005c9110  57                   push edi
// 005c9111  6a01                 push 1
// 005c9113  56                   push esi
// 005c9114  e8d74fffff           call 0x5be0f0
// 005c9119  55                   push ebp
// 005c911a  6a01                 push 1
// 005c911c  56                   push esi
// 005c911d  e8ce4fffff           call 0x5be0f0
// 005c9122  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 005c9126  83c438               add esp, 0x38
// 005c9129  8da42400000000       lea esp, [esp]
// 005c9130  83c301               add ebx, 1
// 005c9133  53                   push ebx
// 005c9134  6a01                 push 1
// 005c9136  56                   push esi
// 005c9137  e8644dffff           call 0x5bdea0
// 005c913c  6a02                 push 2
// 005c913e  56                   push esi
// 005c913f  e82c46ffff           call 0x5bd770
// 005c9144  83c414               add esp, 0x14
// 005c9147  85c0                 test eax, eax
// 005c9149  743b                 je 0x5c9186
// 005c914b  6a02                 push 2
// 005c914d  56                   push esi
// 005c914e  e8ed45ffff           call 0x5bd740
// 005c9153  6afe                 push -2
// 005c9155  56                   push esi
// 005c9156  e8e545ffff           call 0x5bd740
// 005c915b  6afc                 push -4
// 005c915d  56                   push esi
// 005c915e  e8dd45ffff           call 0x5bd740
// 005c9163  6a01                 push 1
// 005c9165  6a02                 push 2
// 005c9167  56                   push esi
// 005c9168  e82351ffff           call 0x5be290
// 005c916d  6aff                 push -1
// 005c916f  56                   push esi
// 005c9170  e8db47ffff           call 0x5bd950
// 005c9175  6afe                 push -2
// 005c9177  56                   push esi
// 005c9178  8bf8                 mov edi, eax
// 005c917a  e81144ffff           call 0x5bd590
// 005c917f  83c434               add esp, 0x34
// 005c9182  8bc7                 mov eax, edi
// 005c9184  eb0d                 jmp 0x5c9193
// 005c9186  6afe                 push -2
// 005c9188  6aff                 push -1
// 005c918a  56                   push esi
// 005c918b  e80047ffff           call 0x5bd890
// 005c9190  83c40c               add esp, 0xc
// 005c9193  85c0                 test eax, eax
// 005c9195  7429                 je 0x5c91c0
// 005c9197  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 005c919b  7e0e                 jle 0x5c91ab
// 005c919d  68689b7b00           push 0x7b9b68
// 005c91a2  56                   push esi
// 005c91a3  e83857ffff           call 0x5be8e0
// 005c91a8  83c408               add esp, 8
// 005c91ab  6afe                 push -2
// 005c91ad  56                   push esi
// 005c91ae  e8dd43ffff           call 0x5bd590
// 005c91b3  83c408               add esp, 8
// 005c91b6  e975ffffff           jmp 0x5c9130
// 005c91bb  eb03                 jmp 0x5c91c0
// 005c91bd  8d4900               lea ecx, [ecx]
// 005c91c0  83ed01               sub ebp, 1
// 005c91c3  55                   push ebp
// 005c91c4  6a01                 push 1
// 005c91c6  56                   push esi
// 005c91c7  e8d44cffff           call 0x5bdea0
// 005c91cc  6a02                 push 2
// 005c91ce  56                   push esi
// 005c91cf  e89c45ffff           call 0x5bd770
// 005c91d4  83c414               add esp, 0x14
// 005c91d7  85c0                 test eax, eax
// 005c91d9  743b                 je 0x5c9216
// 005c91db  6a02                 push 2
// 005c91dd  56                   push esi
// 005c91de  e85d45ffff           call 0x5bd740
// 005c91e3  6afc                 push -4
// 005c91e5  56                   push esi
// 005c91e6  e85545ffff           call 0x5bd740
// 005c91eb  6afd                 push -3
// 005c91ed  56                   push esi
// 005c91ee  e84d45ffff           call 0x5bd740
// 005c91f3  6a01                 push 1
// 005c91f5  6a02                 push 2
// 005c91f7  56                   push esi
// 005c91f8  e89350ffff           call 0x5be290
// 005c91fd  6aff                 push -1
// 005c91ff  56                   push esi
// 005c9200  e84b47ffff           call 0x5bd950
// 005c9205  6afe                 push -2
// 005c9207  56                   push esi
// 005c9208  8bf8                 mov edi, eax
// 005c920a  e88143ffff           call 0x5bd590
// 005c920f  83c434               add esp, 0x34
// 005c9212  8bc7                 mov eax, edi
// 005c9214  eb0d                 jmp 0x5c9223
// 005c9216  6aff                 push -1
// 005c9218  6afd                 push -3
// 005c921a  56                   push esi
// 005c921b  e87046ffff           call 0x5bd890
// 005c9220  83c40c               add esp, 0xc
// 005c9223  85c0                 test eax, eax
// 005c9225  7424                 je 0x5c924b
// 005c9227  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 005c922b  7d0e                 jge 0x5c923b
// 005c922d  68689b7b00           push 0x7b9b68
// 005c9232  56                   push esi
// 005c9233  e8a856ffff           call 0x5be8e0
// 005c9238  83c408               add esp, 8
// 005c923b  6afe                 push -2
// 005c923d  56                   push esi
// 005c923e  e84d43ffff           call 0x5bd590
// 005c9243  83c408               add esp, 8
// 005c9246  e975ffffff           jmp 0x5c91c0
// 005c924b  3beb                 cmp ebp, ebx
// 005c924d  7c1a                 jl 0x5c9269
// 005c924f  53                   push ebx
// 005c9250  6a01                 push 1
// 005c9252  56                   push esi
// 005c9253  e8984effff           call 0x5be0f0
// 005c9258  55                   push ebp
// 005c9259  6a01                 push 1
// 005c925b  56                   push esi
// 005c925c  e88f4effff           call 0x5be0f0
// 005c9261  83c418               add esp, 0x18
// 005c9264  e9c7feffff           jmp 0x5c9130
// 005c9269  6afc                 push -4
// 005c926b  56                   push esi
// 005c926c  e81f43ffff           call 0x5bd590
// 005c9271  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005c9275  57                   push edi
// 005c9276  6a01                 push 1
// 005c9278  56                   push esi
// 005c9279  e8224cffff           call 0x5bdea0
// 005c927e  53                   push ebx
// 005c927f  6a01                 push 1
// 005c9281  56                   push esi
// 005c9282  e8194cffff           call 0x5bdea0
// 005c9287  57                   push edi
// 005c9288  6a01                 push 1
// 005c928a  56                   push esi
// 005c928b  e8604effff           call 0x5be0f0
// 005c9290  53                   push ebx
// 005c9291  6a01                 push 1
// 005c9293  56                   push esi
// 005c9294  e8574effff           call 0x5be0f0
// 005c9299  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 005c929d  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 005c92a1  8bd5                 mov edx, ebp
// 005c92a3  8bc3                 mov eax, ebx
// 005c92a5  2bd3                 sub edx, ebx
// 005c92a7  2bc7                 sub eax, edi
// 005c92a9  83c438               add esp, 0x38
// 005c92ac  3bc2                 cmp eax, edx
// 005c92ae  7d10                 jge 0x5c92c0
// 005c92b0  83eb01               sub ebx, 1
// 005c92b3  8d4b02               lea ecx, [ebx + 2]
// 005c92b6  8bc7                 mov eax, edi
// 005c92b8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005c92bc  8bf9                 mov edi, ecx
// 005c92be  eb0e                 jmp 0x5c92ce
// 005c92c0  8d4301               lea eax, [ebx + 1]
// 005c92c3  8d50fe               lea edx, [eax - 2]
// 005c92c6  8bdd                 mov ebx, ebp
// 005c92c8  89542420             mov dword ptr [esp + 0x20], edx
// 005c92cc  8bea                 mov ebp, edx
// 005c92ce  53                   push ebx
// 005c92cf  50                   push eax
// 005c92d0  56                   push esi
// 005c92d1  e81afcffff           call 0x5c8ef0
// 005c92d6  83c40c               add esp, 0xc
// 005c92d9  3bfd                 cmp edi, ebp
// 005c92db  0f8c2ffcffff         jl 0x5c8f10
// 005c92e1  5f                   pop edi
// 005c92e2  5e                   pop esi
// 005c92e3  5d                   pop ebp
// 005c92e4  5b                   pop ebx
// 005c92e5  59                   pop ecx
// 005c92e6  c3                   ret 
// library lua-5.1.4/ltablib.c (function _auxsort)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
