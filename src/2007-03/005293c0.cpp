// roc 2007-03 005293c0  unit: seg_00520000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005293c0
//
// 005293c0  807c240800           cmp byte ptr [esp + 8], 0
// 005293c5  57                   push edi
// 005293c6  8b7c2408             mov edi, dword ptr [esp + 8]
// 005293ca  7413                 je 0x5293df
// 005293cc  8b07                 mov eax, dword ptr [edi]
// 005293ce  c7401404000000       mov dword ptr [eax + 0x14], 4
// 005293d5  8b0f                 mov ecx, dword ptr [edi]
// 005293d7  8b11                 mov edx, dword ptr [ecx]
// 005293d9  57                   push edi
// 005293da  ffd2                 call edx
// 005293dc  83c404               add esp, 4
// 005293df  8b4704               mov eax, dword ptr [edi + 4]
// 005293e2  8b08                 mov ecx, dword ptr [eax]
// 005293e4  6a40                 push 0x40
// 005293e6  6a01                 push 1
// 005293e8  57                   push edi
// 005293e9  ffd1                 call ecx
// 005293eb  898744010000         mov dword ptr [edi + 0x144], eax
// 005293f1  c700c08e5200         mov dword ptr [eax], 0x528ec0
// 005293f7  8b9754010000         mov edx, dword ptr [edi + 0x154]
// 005293fd  83c40c               add esp, 0xc
// 00529400  807a0800             cmp byte ptr [edx + 8], 0
// 00529404  740e                 je 0x529414
// 00529406  c74004d0905200       mov dword ptr [eax + 4], 0x5290d0
// 0052940d  e88efeffff           call 0x5292a0
// 00529412  5f                   pop edi
// 00529413  c3                   ret 
// 00529414  55                   push ebp
// 00529415  c74004408f5200       mov dword ptr [eax + 4], 0x528f40
// 0052941c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0052941f  33ed                 xor ebp, ebp
// 00529421  396f3c               cmp dword ptr [edi + 0x3c], ebp
// 00529424  7e45                 jle 0x52946b
// 00529426  53                   push ebx
// 00529427  56                   push esi
// 00529428  8d7108               lea esi, [ecx + 8]
// 0052942b  8d5808               lea ebx, [eax + 8]
// 0052942e  8bff                 mov edi, edi
// 00529430  8b4614               mov eax, dword ptr [esi + 0x14]
// 00529433  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 0052943a  8b97dc000000         mov edx, dword ptr [edi + 0xdc]
// 00529440  03c0                 add eax, eax
// 00529442  03c0                 add eax, eax
// 00529444  52                   push edx
// 00529445  03c0                 add eax, eax
// 00529447  99                   cdq 
// 00529448  f73e                 idiv dword ptr [esi]
// 0052944a  8b4f04               mov ecx, dword ptr [edi + 4]
// 0052944d  50                   push eax
// 0052944e  8b4108               mov eax, dword ptr [ecx + 8]
// 00529451  6a01                 push 1
// 00529453  57                   push edi
// 00529454  ffd0                 call eax
// 00529456  8903                 mov dword ptr [ebx], eax
// 00529458  83c501               add ebp, 1
// 0052945b  83c410               add esp, 0x10
// 0052945e  83c304               add ebx, 4
// 00529461  83c654               add esi, 0x54
// 00529464  3b6f3c               cmp ebp, dword ptr [edi + 0x3c]
// 00529467  7cc7                 jl 0x529430
// 00529469  5e                   pop esi
// 0052946a  5b                   pop ebx
// 0052946b  5d                   pop ebp
// 0052946c  5f                   pop edi
// 0052946d  c3                   ret 
// library jpeg-6b/jcprepct.c (function _jinit_c_prep_controller)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
