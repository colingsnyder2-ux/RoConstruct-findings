// roc 2012-06 0046e8c0  unit: RBX::Security::VContext::?$thread_specific_ptr::delete_data  size: 757 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046e8c0
//
// 0046e8c0  55                   push ebp
// 0046e8c1  8bec                 mov ebp, esp
// 0046e8c3  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0046e8c6  81ec1c010000         sub esp, 0x11c
// 0046e8cc  53                   push ebx
// 0046e8cd  56                   push esi
// 0046e8ce  57                   push edi
// 0046e8cf  85c9                 test ecx, ecx
// 0046e8d1  0f84ca020000         je 0x46eba1
// 0046e8d7  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0046e8da  85c0                 test eax, eax
// 0046e8dc  0f84bf020000         je 0x46eba1
// 0046e8e2  c70100000000         mov dword ptr [ecx], 0
// 0046e8e8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0046e8eb  c70000000000         mov dword ptr [eax], 0
// 0046e8f1  6804010000           push 0x104
// 0046e8f6  8d85e4feffff         lea eax, [ebp - 0x11c]
// 0046e8fc  50                   push eax
// 0046e8fd  51                   push ecx
// 0046e8fe  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0046e905  ff159021b200         call dword ptr [0xb22190]
// 0046e90b  8bf8                 mov edi, eax
// 0046e90d  85ff                 test edi, edi
// 0046e90f  7520                 jne 0x46e931
// 0046e911  e87a59f9ff           call 0x404290
// 0046e916  8d4dfc               lea ecx, [ebp - 4]
// 0046e919  8bf0                 mov esi, eax
// 0046e91b  e84061f9ff           call 0x404a60
// 0046e920  8bc6                 mov eax, esi
// 0046e922  8da5d8feffff         lea esp, [ebp - 0x128]
// 0046e928  5f                   pop edi
// 0046e929  5e                   pop esi
// 0046e92a  5b                   pop ebx
// 0046e92b  8be5                 mov esp, ebp
// 0046e92d  5d                   pop ebp
// 0046e92e  c21000               ret 0x10
// 0046e931  81ff04010000         cmp edi, 0x104
// 0046e937  751c                 jne 0x46e955
// 0046e939  8d4dfc               lea ecx, [ebp - 4]
// 0046e93c  e81f61f9ff           call 0x404a60
// 0046e941  b87a000780           mov eax, 0x8007007a
// 0046e946  8da5d8feffff         lea esp, [ebp - 0x128]
// 0046e94c  5f                   pop edi
// 0046e94d  5e                   pop esi
// 0046e94e  5b                   pop ebx
// 0046e94f  8be5                 mov esp, ebp
// 0046e951  5d                   pop ebp
// 0046e952  c21000               ret 0x10
// 0046e955  8d85e4feffff         lea eax, [ebp - 0x11c]
// 0046e95b  e8e0ddffff           call 0x46c740
// 0046e960  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0046e963  8bd8                 mov ebx, eax
// 0046e965  895df4               mov dword ptr [ebp - 0xc], ebx
// 0046e968  85f6                 test esi, esi
// 0046e96a  0f84ac000000         je 0x46ea1c
// 0046e970  56                   push esi
// 0046e971  ff15c421b200         call dword ptr [0xb221c4]
// 0046e977  40                   inc eax
// 0046e978  6a02                 push 2
// 0046e97a  50                   push eax
// 0046e97b  8d5508               lea edx, [ebp + 8]
// 0046e97e  52                   push edx
// 0046e97f  894508               mov dword ptr [ebp + 8], eax
// 0046e982  e82957f9ff           call 0x4040b0
// 0046e987  83c40c               add esp, 0xc
// 0046e98a  85c0                 test eax, eax
// 0046e98c  7c3c                 jl 0x46e9ca
// 0046e98e  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0046e991  81fb00040000         cmp ebx, 0x400
// 0046e997  7f18                 jg 0x46e9b1
// 0046e999  53                   push ebx
// 0046e99a  e8d163f9ff           call 0x404d70
// 0046e99f  83c404               add esp, 4
// 0046e9a2  84c0                 test al, al
// 0046e9a4  740b                 je 0x46e9b1
// 0046e9a6  8bc3                 mov eax, ebx
// 0046e9a8  e863495100           call 0x983310
// 0046e9ad  8bc4                 mov eax, esp
// 0046e9af  eb09                 jmp 0x46e9ba
// 0046e9b1  53                   push ebx
// 0046e9b2  8d4dfc               lea ecx, [ebp - 4]
// 0046e9b5  e86668f9ff           call 0x405220
// 0046e9ba  6a03                 push 3
// 0046e9bc  53                   push ebx
// 0046e9bd  56                   push esi
// 0046e9be  50                   push eax
// 0046e9bf  e87c57f9ff           call 0x404140
// 0046e9c4  8bf0                 mov esi, eax
// 0046e9c6  85f6                 test esi, esi
// 0046e9c8  751c                 jne 0x46e9e6
// 0046e9ca  8d4dfc               lea ecx, [ebp - 4]
// 0046e9cd  e88e60f9ff           call 0x404a60
// 0046e9d2  b80e000780           mov eax, 0x8007000e
// 0046e9d7  8da5d8feffff         lea esp, [ebp - 0x128]
// 0046e9dd  5f                   pop edi
// 0046e9de  5e                   pop esi
// 0046e9df  5b                   pop ebx
// 0046e9e0  8be5                 mov esp, ebp
// 0046e9e2  5d                   pop ebp
// 0046e9e3  c21000               ret 0x10
// 0046e9e6  56                   push esi
// 0046e9e7  ff15a821b200         call dword ptr [0xb221a8]
// 0046e9ed  8d0c38               lea ecx, [eax + edi]
// 0046e9f0  3bcf                 cmp ecx, edi
// 0046e9f2  726f                 jb 0x46ea63
// 0046e9f4  3bc8                 cmp ecx, eax
// 0046e9f6  726b                 jb 0x46ea63
// 0046e9f8  81f90e010000         cmp ecx, 0x10e
// 0046e9fe  7363                 jae 0x46ea63
// 0046ea00  b80e010000           mov eax, 0x10e
// 0046ea05  56                   push esi
// 0046ea06  2bc7                 sub eax, edi
// 0046ea08  50                   push eax
// 0046ea09  8d8c3de4feffff       lea ecx, [ebp + edi - 0x11c]
// 0046ea10  51                   push ecx
// 0046ea11  e8dadaffff           call 0x46c4f0
// 0046ea16  8b5df4               mov ebx, dword ptr [ebp - 0xc]
// 0046ea19  83c40c               add esp, 0xc
// 0046ea1c  8d95e4feffff         lea edx, [ebp - 0x11c]
// 0046ea22  52                   push edx
// 0046ea23  ff15a821b200         call dword ptr [0xb221a8]
// 0046ea29  40                   inc eax
// 0046ea2a  6a02                 push 2
// 0046ea2c  50                   push eax
// 0046ea2d  894508               mov dword ptr [ebp + 8], eax
// 0046ea30  8d4508               lea eax, [ebp + 8]
// 0046ea33  50                   push eax
// 0046ea34  e87756f9ff           call 0x4040b0
// 0046ea39  83c40c               add esp, 0xc
// 0046ea3c  85c0                 test eax, eax
// 0046ea3e  7c8a                 jl 0x46e9ca
// 0046ea40  8b7508               mov esi, dword ptr [ebp + 8]
// 0046ea43  81fe00040000         cmp esi, 0x400
// 0046ea49  7f34                 jg 0x46ea7f
// 0046ea4b  56                   push esi
// 0046ea4c  e81f63f9ff           call 0x404d70
// 0046ea51  83c404               add esp, 4
// 0046ea54  84c0                 test al, al
// 0046ea56  7427                 je 0x46ea7f
// 0046ea58  8bc6                 mov eax, esi
// 0046ea5a  e8b1485100           call 0x983310
// 0046ea5f  8bc4                 mov eax, esp
// 0046ea61  eb25                 jmp 0x46ea88
// 0046ea63  8d4dfc               lea ecx, [ebp - 4]
// 0046ea66  e8f55ff9ff           call 0x404a60
// 0046ea6b  b805400080           mov eax, 0x80004005
// 0046ea70  8da5d8feffff         lea esp, [ebp - 0x128]
// 0046ea76  5f                   pop edi
// 0046ea77  5e                   pop esi
// 0046ea78  5b                   pop ebx
// 0046ea79  8be5                 mov esp, ebp
// 0046ea7b  5d                   pop ebp
// 0046ea7c  c21000               ret 0x10
// 0046ea7f  56                   push esi
// 0046ea80  8d4dfc               lea ecx, [ebp - 4]
// 0046ea83  e89867f9ff           call 0x405220
// 0046ea88  6a03                 push 3
// 0046ea8a  d1ee                 shr esi, 1
// 0046ea8c  56                   push esi
// 0046ea8d  8d8de4feffff         lea ecx, [ebp - 0x11c]
// 0046ea93  51                   push ecx
// 0046ea94  50                   push eax
// 0046ea95  e86656f9ff           call 0x404100
// 0046ea9a  8bf0                 mov esi, eax
// 0046ea9c  85f6                 test esi, esi
// 0046ea9e  0f8426ffffff         je 0x46e9ca
// 0046eaa4  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0046eaa7  52                   push edx
// 0046eaa8  56                   push esi
// 0046eaa9  ff15202bb200         call dword ptr [0xb22b20]
// 0046eaaf  8bf8                 mov edi, eax
// 0046eab1  85ff                 test edi, edi
// 0046eab3  0f8dba000000         jge 0x46eb73
// 0046eab9  a1589eb500           mov eax, dword ptr [0xb59e58]
// 0046eabe  8a0d5c9eb500         mov cl, byte ptr [0xb59e5c]
// 0046eac4  8945f4               mov dword ptr [ebp - 0xc], eax
// 0046eac7  8bd3                 mov edx, ebx
// 0046eac9  8d85e4feffff         lea eax, [ebp - 0x11c]
// 0046eacf  2bd0                 sub edx, eax
// 0046ead1  83c205               add edx, 5
// 0046ead4  884df8               mov byte ptr [ebp - 8], cl
// 0046ead7  81fa04010000         cmp edx, 0x104
// 0046eadd  7784                 ja 0x46ea63
// 0046eadf  8d4df4               lea ecx, [ebp - 0xc]
// 0046eae2  51                   push ecx
// 0046eae3  8d55f2               lea edx, [ebp - 0xe]
// 0046eae6  2bd3                 sub edx, ebx
// 0046eae8  52                   push edx
// 0046eae9  53                   push ebx
// 0046eaea  e801daffff           call 0x46c4f0
// 0046eaef  83c40c               add esp, 0xc
// 0046eaf2  8d85e4feffff         lea eax, [ebp - 0x11c]
// 0046eaf8  50                   push eax
// 0046eaf9  ff15a821b200         call dword ptr [0xb221a8]
// 0046eaff  40                   inc eax
// 0046eb00  6a02                 push 2
// 0046eb02  50                   push eax
// 0046eb03  8d4d08               lea ecx, [ebp + 8]
// 0046eb06  51                   push ecx
// 0046eb07  894508               mov dword ptr [ebp + 8], eax
// 0046eb0a  e8a155f9ff           call 0x4040b0
// 0046eb0f  83c40c               add esp, 0xc
// 0046eb12  85c0                 test eax, eax
// 0046eb14  0f8cb0feffff         jl 0x46e9ca
// 0046eb1a  8b7508               mov esi, dword ptr [ebp + 8]
// 0046eb1d  81fe00040000         cmp esi, 0x400
// 0046eb23  7f18                 jg 0x46eb3d
// 0046eb25  56                   push esi
// 0046eb26  e84562f9ff           call 0x404d70
// 0046eb2b  83c404               add esp, 4
// 0046eb2e  84c0                 test al, al
// 0046eb30  740b                 je 0x46eb3d
// 0046eb32  8bc6                 mov eax, esi
// 0046eb34  e8d7475100           call 0x983310
// 0046eb39  8bc4                 mov eax, esp
// 0046eb3b  eb09                 jmp 0x46eb46
// 0046eb3d  56                   push esi
// 0046eb3e  8d4dfc               lea ecx, [ebp - 4]
// 0046eb41  e8da66f9ff           call 0x405220
// 0046eb46  6a03                 push 3
// 0046eb48  d1ee                 shr esi, 1
// 0046eb4a  56                   push esi
// 0046eb4b  8d95e4feffff         lea edx, [ebp - 0x11c]
// 0046eb51  52                   push edx
// 0046eb52  50                   push eax
// 0046eb53  e8a855f9ff           call 0x404100
// 0046eb58  8bf0                 mov esi, eax
// 0046eb5a  85f6                 test esi, esi
// 0046eb5c  0f8468feffff         je 0x46e9ca
// 0046eb62  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0046eb65  50                   push eax
// 0046eb66  56                   push esi
// 0046eb67  ff15202bb200         call dword ptr [0xb22b20]
// 0046eb6d  8bf8                 mov edi, eax
// 0046eb6f  85ff                 test edi, edi
// 0046eb71  7c15                 jl 0x46eb88
// 0046eb73  56                   push esi
// 0046eb74  ff15482bb200         call dword ptr [0xb22b48]
// 0046eb7a  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0046eb7d  8901                 mov dword ptr [ecx], eax
// 0046eb7f  85c0                 test eax, eax
// 0046eb81  7505                 jne 0x46eb88
// 0046eb83  bf0e000780           mov edi, 0x8007000e
// 0046eb88  8d4dfc               lea ecx, [ebp - 4]
// 0046eb8b  e8d05ef9ff           call 0x404a60
// 0046eb90  8bc7                 mov eax, edi
// 0046eb92  8da5d8feffff         lea esp, [ebp - 0x128]
// 0046eb98  5f                   pop edi
// 0046eb99  5e                   pop esi
// 0046eb9a  5b                   pop ebx
// 0046eb9b  8be5                 mov esp, ebp
// 0046eb9d  5d                   pop ebp
// 0046eb9e  c21000               ret 0x10
// 0046eba1  b803400080           mov eax, 0x80004003
// 0046eba6  8da5d8feffff         lea esp, [ebp - 0x128]
// 0046ebac  5f                   pop edi
// 0046ebad  5e                   pop esi
// 0046ebae  5b                   pop ebx
// 0046ebaf  8be5                 mov esp, ebp
// 0046ebb1  5d                   pop ebp
// 0046ebb2  c21000               ret 0x10
// copied from an identical function in another client (function _AtlLoadTypeLib@16)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-dll atl.cpp