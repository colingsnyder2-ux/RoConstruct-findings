// roc 2009-12 00789e70  unit: RBX::UniversalTool  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00789e70
//
// 00789e70  8b442408             mov eax, dword ptr [esp + 8]
// 00789e74  53                   push ebx
// 00789e75  55                   push ebp
// 00789e76  56                   push esi
// 00789e77  8b742410             mov esi, dword ptr [esp + 0x10]
// 00789e7b  57                   push edi
// 00789e7c  50                   push eax
// 00789e7d  56                   push esi
// 00789e7e  e8ddeaffff           call 0x788960
// 00789e83  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00789e87  83c408               add esp, 8
// 00789e8a  8d9b00000000         lea ebx, [ebx]
// 00789e90  6a2e                 push 0x2e
// 00789e92  57                   push edi
// 00789e93  ff1530b89800         call dword ptr [0x98b830]
// 00789e99  8bd8                 mov ebx, eax
// 00789e9b  83c408               add esp, 8
// 00789e9e  85db                 test ebx, ebx
// 00789ea0  7511                 jne 0x789eb3
// 00789ea2  8bc7                 mov eax, edi
// 00789ea4  8d5001               lea edx, [eax + 1]
// 00789ea7  8a08                 mov cl, byte ptr [eax]
// 00789ea9  40                   inc eax
// 00789eaa  84c9                 test cl, cl
// 00789eac  75f9                 jne 0x789ea7
// 00789eae  2bc2                 sub eax, edx
// 00789eb0  8d1c38               lea ebx, [eax + edi]
// 00789eb3  8beb                 mov ebp, ebx
// 00789eb5  2bef                 sub ebp, edi
// 00789eb7  55                   push ebp
// 00789eb8  57                   push edi
// 00789eb9  56                   push esi
// 00789eba  e8e1eeffff           call 0x788da0
// 00789ebf  6afe                 push -2
// 00789ec1  56                   push esi
// 00789ec2  e889f1ffff           call 0x789050
// 00789ec7  6aff                 push -1
// 00789ec9  56                   push esi
// 00789eca  e8c1eaffff           call 0x788990
// 00789ecf  83c41c               add esp, 0x1c
// 00789ed2  85c0                 test eax, eax
// 00789ed4  753f                 jne 0x789f15
// 00789ed6  6afe                 push -2
// 00789ed8  56                   push esi
// 00789ed9  e8d2e8ffff           call 0x7887b0
// 00789ede  83c408               add esp, 8
// 00789ee1  803b2e               cmp byte ptr [ebx], 0x2e
// 00789ee4  b801000000           mov eax, 1
// 00789ee9  7404                 je 0x789eef
// 00789eeb  8b442420             mov eax, dword ptr [esp + 0x20]
// 00789eef  50                   push eax
// 00789ef0  6a00                 push 0
// 00789ef2  56                   push esi
// 00789ef3  e8d8f1ffff           call 0x7890d0
// 00789ef8  55                   push ebp
// 00789ef9  57                   push edi
// 00789efa  56                   push esi
// 00789efb  e8a0eeffff           call 0x788da0
// 00789f00  6afe                 push -2
// 00789f02  56                   push esi
// 00789f03  e858eaffff           call 0x788960
// 00789f08  6afc                 push -4
// 00789f0a  56                   push esi
// 00789f0b  e8f0f2ffff           call 0x789200
// 00789f10  83c428               add esp, 0x28
// 00789f13  eb10                 jmp 0x789f25
// 00789f15  6aff                 push -1
// 00789f17  56                   push esi
// 00789f18  e873eaffff           call 0x788990
// 00789f1d  83c408               add esp, 8
// 00789f20  83f805               cmp eax, 5
// 00789f23  751e                 jne 0x789f43
// 00789f25  6afe                 push -2
// 00789f27  56                   push esi
// 00789f28  e8d3e8ffff           call 0x788800
// 00789f2d  83c408               add esp, 8
// 00789f30  803b2e               cmp byte ptr [ebx], 0x2e
// 00789f33  8d7b01               lea edi, [ebx + 1]
// 00789f36  0f8454ffffff         je 0x789e90
// 00789f3c  5f                   pop edi
// 00789f3d  5e                   pop esi
// 00789f3e  5d                   pop ebp
// 00789f3f  33c0                 xor eax, eax
// 00789f41  5b                   pop ebx
// 00789f42  c3                   ret 
// 00789f43  6afd                 push -3
// 00789f45  56                   push esi
// 00789f46  e865e8ffff           call 0x7887b0
// 00789f4b  83c408               add esp, 8
// 00789f4e  8bc7                 mov eax, edi
// 00789f50  5f                   pop edi
// 00789f51  5e                   pop esi
// 00789f52  5d                   pop ebp
// 00789f53  5b                   pop ebx
// 00789f54  c3                   ret 
// copied from an identical function in another client (function _luaL_findtable)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lauxlib.c