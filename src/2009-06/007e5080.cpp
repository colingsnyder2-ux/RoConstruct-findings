// roc 2009-06 007e5080  unit: CXTPDockingPaneContext  size: 892 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e5080
//
// 007e5080  8b442404             mov eax, dword ptr [esp + 4]
// 007e5084  83ec28               sub esp, 0x28
// 007e5087  53                   push ebx
// 007e5088  55                   push ebp
// 007e5089  56                   push esi
// 007e508a  8bf1                 mov esi, ecx
// 007e508c  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 007e5092  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 007e5098  2bc1                 sub eax, ecx
// 007e509a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007e509e  57                   push edi
// 007e509f  2bca                 sub ecx, edx
// 007e50a1  51                   push ecx
// 007e50a2  50                   push eax
// 007e50a3  8dbe0c010000         lea edi, [esi + 0x10c]
// 007e50a9  57                   push edi
// 007e50aa  ff15f8ed8900         call dword ptr [0x89edf8]
// 007e50b0  8d9efc000000         lea ebx, [esi + 0xfc]
// 007e50b6  8d442418             lea eax, [esp + 0x18]
// 007e50ba  53                   push ebx
// 007e50bb  50                   push eax
// 007e50bc  e8dfc8f7ff           call 0x7619a0
// 007e50c1  8bc8                 mov ecx, eax
// 007e50c3  e838c4f7ff           call 0x761500
// 007e50c8  50                   push eax
// 007e50c9  57                   push edi
// 007e50ca  8d4c2430             lea ecx, [esp + 0x30]
// 007e50ce  51                   push ecx
// 007e50cf  ff15f0ee8900         call dword ptr [0x89eef0]
// 007e50d5  85c0                 test eax, eax
// 007e50d7  7416                 je 0x7e50ef
// 007e50d9  8b17                 mov edx, dword ptr [edi]
// 007e50db  8b4704               mov eax, dword ptr [edi + 4]
// 007e50de  8b4f08               mov ecx, dword ptr [edi + 8]
// 007e50e1  8913                 mov dword ptr [ebx], edx
// 007e50e3  8b570c               mov edx, dword ptr [edi + 0xc]
// 007e50e6  894304               mov dword ptr [ebx + 4], eax
// 007e50e9  894b08               mov dword ptr [ebx + 8], ecx
// 007e50ec  89530c               mov dword ptr [ebx + 0xc], edx
// 007e50ef  53                   push ebx
// 007e50f0  e80bd5ffff           call 0x7e2600
// 007e50f5  83c404               add esp, 4
// 007e50f8  53                   push ebx
// 007e50f9  ff15fced8900         call dword ptr [0x89edfc]
// 007e50ff  85c0                 test eax, eax
// 007e5101  7519                 jne 0x7e511c
// 007e5103  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 007e5109  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 007e5110  740a                 je 0x7e511c
// 007e5112  8b16                 mov edx, dword ptr [esi]
// 007e5114  8b4224               mov eax, dword ptr [edx + 0x24]
// 007e5117  53                   push ebx
// 007e5118  8bce                 mov ecx, esi
// 007e511a  ffd0                 call eax
// 007e511c  8d86b8000000         lea eax, [esi + 0xb8]
// 007e5122  33ed                 xor ebp, ebp
// 007e5124  50                   push eax
// 007e5125  89ae2c010000         mov dword ptr [esi + 0x12c], ebp
// 007e512b  89ae44010000         mov dword ptr [esi + 0x144], ebp
// 007e5131  ff15c8ee8900         call dword ptr [0x89eec8]
// 007e5137  6a11                 push 0x11
// 007e5139  89aec8000000         mov dword ptr [esi + 0xc8], ebp
// 007e513f  ff1534ee8900         call dword ptr [0x89ee34]
// 007e5145  6685c0               test ax, ax
// 007e5148  7c1b                 jl 0x7e5165
// 007e514a  39ae4c010000         cmp dword ptr [esi + 0x14c], ebp
// 007e5150  7413                 je 0x7e5165
// 007e5152  8b442440             mov eax, dword ptr [esp + 0x40]
// 007e5156  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007e515a  8b16                 mov edx, dword ptr [esi]
// 007e515c  8b5220               mov edx, dword ptr [edx + 0x20]
// 007e515f  50                   push eax
// 007e5160  51                   push ecx
// 007e5161  8bce                 mov ecx, esi
// 007e5163  ffd2                 call edx
// 007e5165  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007e5169  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007e516d  8986ec000000         mov dword ptr [esi + 0xec], eax
// 007e5173  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 007e5179  39aeb0000000         cmp dword ptr [esi + 0xb0], ebp
// 007e517f  0f843b020000         je 0x7e53c0
// 007e5185  8bce                 mov ecx, esi
// 007e5187  e864fbffff           call 0x7e4cf0
// 007e518c  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 007e5192  33db                 xor ebx, ebx
// 007e5194  3bc5                 cmp eax, ebp
// 007e5196  0f8424020000         je 0x7e53c0
// 007e519c  eb06                 jmp 0x7e51a4
// 007e519e  8bff                 mov edi, edi
// 007e51a0  8b442414             mov eax, dword ptr [esp + 0x14]
// 007e51a4  8b5004               mov edx, dword ptr [eax + 4]
// 007e51a7  8b7808               mov edi, dword ptr [eax + 8]
// 007e51aa  89542414             mov dword ptr [esp + 0x14], edx
// 007e51ae  896c2410             mov dword ptr [esp + 0x10], ebp
// 007e51b2  3bdd                 cmp ebx, ebp
// 007e51b4  0f85e0010000         jne 0x7e539a
// 007e51ba  8b442440             mov eax, dword ptr [esp + 0x40]
// 007e51be  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007e51c2  50                   push eax
// 007e51c3  51                   push ecx
// 007e51c4  8bcf                 mov ecx, edi
// 007e51c6  e885cbffff           call 0x7e1d50
// 007e51cb  8be8                 mov ebp, eax
// 007e51cd  85ed                 test ebp, ebp
// 007e51cf  0f84c5010000         je 0x7e539a
// 007e51d5  f6475420             test byte ptr [edi + 0x54], 0x20
// 007e51d9  7438                 je 0x7e5213
// 007e51db  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 007e51e1  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 007e51e7  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 007e51ed  898630010000         mov dword ptr [esi + 0x130], eax
// 007e51f3  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 007e51f9  89962c010000         mov dword ptr [esi + 0x12c], edx
// 007e51ff  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 007e5205  898e34010000         mov dword ptr [esi + 0x134], ecx
// 007e520b  899638010000         mov dword ptr [esi + 0x138], edx
// 007e5211  eb3a                 jmp 0x7e524d
// 007e5213  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 007e5219  e82287f7ff           call 0x75d940
// 007e521e  8d4c2428             lea ecx, [esp + 0x28]
// 007e5222  51                   push ecx
// 007e5223  8bc8                 mov ecx, eax
// 007e5225  89862c010000         mov dword ptr [esi + 0x12c], eax
// 007e522b  e8300affff           call 0x7d5c60
// 007e5230  8b10                 mov edx, dword ptr [eax]
// 007e5232  899630010000         mov dword ptr [esi + 0x130], edx
// 007e5238  8b4804               mov ecx, dword ptr [eax + 4]
// 007e523b  898e34010000         mov dword ptr [esi + 0x134], ecx
// 007e5241  8b5008               mov edx, dword ptr [eax + 8]
// 007e5244  899638010000         mov dword ptr [esi + 0x138], edx
// 007e524a  8b400c               mov eax, dword ptr [eax + 0xc]
// 007e524d  89863c010000         mov dword ptr [esi + 0x13c], eax
// 007e5253  8d45ff               lea eax, [ebp - 1]
// 007e5256  83f80f               cmp eax, 0xf
// 007e5259  0f87a4000000         ja 0x7e5303
// 007e525f  0fb688ec537e00       movzx ecx, byte ptr [eax + 0x7e53ec]
// 007e5266  ff248dd4537e00       jmp dword ptr [ecx*4 + 0x7e53d4]
// 007e526d  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 007e5273  038634010000         add eax, dword ptr [esi + 0x134]
// 007e5279  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 007e5283  99                   cdq 
// 007e5284  2bc2                 sub eax, edx
// 007e5286  d1f8                 sar eax, 1
// 007e5288  89863c010000         mov dword ptr [esi + 0x13c], eax
// 007e528e  eb73                 jmp 0x7e5303
// 007e5290  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 007e5296  038634010000         add eax, dword ptr [esi + 0x134]
// 007e529c  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 007e52a6  99                   cdq 
// 007e52a7  2bc2                 sub eax, edx
// 007e52a9  d1f8                 sar eax, 1
// 007e52ab  898634010000         mov dword ptr [esi + 0x134], eax
// 007e52b1  eb50                 jmp 0x7e5303
// 007e52b3  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 007e52b9  038630010000         add eax, dword ptr [esi + 0x130]
// 007e52bf  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 007e52c9  99                   cdq 
// 007e52ca  2bc2                 sub eax, edx
// 007e52cc  d1f8                 sar eax, 1
// 007e52ce  898638010000         mov dword ptr [esi + 0x138], eax
// 007e52d4  eb2d                 jmp 0x7e5303
// 007e52d6  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 007e52dc  038630010000         add eax, dword ptr [esi + 0x130]
// 007e52e2  c7868801000001000000 mov dword ptr [esi + 0x188], 1
// 007e52ec  99                   cdq 
// 007e52ed  2bc2                 sub eax, edx
// 007e52ef  d1f8                 sar eax, 1
// 007e52f1  898630010000         mov dword ptr [esi + 0x130], eax
// 007e52f7  eb0a                 jmp 0x7e5303
// 007e52f9  c7864401000001000000 mov dword ptr [esi + 0x144], 1
// 007e5303  83fd10               cmp ebp, 0x10
// 007e5306  7421                 je 0x7e5329
// 007e5308  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 007e530e  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 007e5314  52                   push edx
// 007e5315  50                   push eax
// 007e5316  8bce                 mov ecx, esi
// 007e5318  e8a3e8ffff           call 0x7e3bc0
// 007e531d  85c0                 test eax, eax
// 007e531f  7528                 jne 0x7e5349
// 007e5321  89862c010000         mov dword ptr [esi + 0x12c], eax
// 007e5327  eb6c                 jmp 0x7e5395
// 007e5329  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 007e532f  51                   push ecx
// 007e5330  8bce                 mov ecx, esi
// 007e5332  e859e9ffff           call 0x7e3c90
// 007e5337  85c0                 test eax, eax
// 007e5339  7556                 jne 0x7e5391
// 007e533b  89862c010000         mov dword ptr [esi + 0x12c], eax
// 007e5341  898644010000         mov dword ptr [esi + 0x144], eax
// 007e5347  eb4c                 jmp 0x7e5395
// 007e5349  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 007e534f  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 007e5355  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 007e535b  52                   push edx
// 007e535c  50                   push eax
// 007e535d  51                   push ecx
// 007e535e  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 007e5364  8d542424             lea edx, [esp + 0x24]
// 007e5368  52                   push edx
// 007e5369  e8428cf7ff           call 0x75dfb0
// 007e536e  8b08                 mov ecx, dword ptr [eax]
// 007e5370  898e30010000         mov dword ptr [esi + 0x130], ecx
// 007e5376  8b5004               mov edx, dword ptr [eax + 4]
// 007e5379  899634010000         mov dword ptr [esi + 0x134], edx
// 007e537f  8b4808               mov ecx, dword ptr [eax + 8]
// 007e5382  898e38010000         mov dword ptr [esi + 0x138], ecx
// 007e5388  8b500c               mov edx, dword ptr [eax + 0xc]
// 007e538b  89963c010000         mov dword ptr [esi + 0x13c], edx
// 007e5391  896c2410             mov dword ptr [esp + 0x10], ebp
// 007e5395  bb01000000           mov ebx, 1
// 007e539a  8b442410             mov eax, dword ptr [esp + 0x10]
// 007e539e  394758               cmp dword ptr [edi + 0x58], eax
// 007e53a1  7411                 je 0x7e53b4
// 007e53a3  6a00                 push 0
// 007e53a5  894758               mov dword ptr [edi + 0x58], eax
// 007e53a8  8b4720               mov eax, dword ptr [edi + 0x20]
// 007e53ab  6a00                 push 0
// 007e53ad  50                   push eax
// 007e53ae  ff157cee8900         call dword ptr [0x89ee7c]
// 007e53b4  33ed                 xor ebp, ebp
// 007e53b6  396c2414             cmp dword ptr [esp + 0x14], ebp
// 007e53ba  0f85e0fdffff         jne 0x7e51a0
// 007e53c0  8b16                 mov edx, dword ptr [esi]
// 007e53c2  8b421c               mov eax, dword ptr [edx + 0x1c]
// 007e53c5  55                   push ebp
// 007e53c6  8bce                 mov ecx, esi
// 007e53c8  ffd0                 call eax
// 007e53ca  5f                   pop edi
// 007e53cb  5e                   pop esi
// 007e53cc  5d                   pop ebp
// 007e53cd  5b                   pop ebx
// 007e53ce  83c428               add esp, 0x28
// 007e53d1  c20800               ret 8
// 007e53d4  b352                 mov bl, 0x52
// 007e53d6  7e00                 jle 0x7e53d8
// 007e53d8  d6                   salc 
// 007e53d9  52                   push edx
// 007e53da  7e00                 jle 0x7e53dc
// 007e53dc  6d                   insd dword ptr es:[edi], dx
// 007e53dd  52                   push edx
// 007e53de  7e00                 jle 0x7e53e0
// 007e53e0  90                   nop 
// 007e53e1  52                   push edx
// 007e53e2  7e00                 jle 0x7e53e4
// 007e53e4  f9                   stc 
// 007e53e5  52                   push edx
// 007e53e6  7e00                 jle 0x7e53e8
// 007e53e8  03537e               add edx, dword ptr [ebx + 0x7e]
// 007e53eb  0000                 add byte ptr [eax], al
// 007e53ed  010502050505         add dword ptr [0x5050502], eax
// 007e53f3  030505050505         add eax, dword ptr [0x5050505]
// copied from an identical function in another client (function ?Move@CXTPDockingPaneContext@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp