// roc 2009-12 00838ed0  unit: CXTPDockingPaneManager  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838ed0
//
// 00838ed0  83ec10               sub esp, 0x10
// 00838ed3  53                   push ebx
// 00838ed4  56                   push esi
// 00838ed5  57                   push edi
// 00838ed6  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00838eda  33db                 xor ebx, ebx
// 00838edc  8bf1                 mov esi, ecx
// 00838ede  3bfb                 cmp edi, ebx
// 00838ee0  7504                 jne 0x838ee6
// 00838ee2  33c0                 xor eax, eax
// 00838ee4  eb03                 jmp 0x838ee9
// 00838ee6  8b4720               mov eax, dword ptr [edi + 0x20]
// 00838ee9  50                   push eax
// 00838eea  ff1584cc9800         call dword ptr [0x98cc84]
// 00838ef0  85c0                 test eax, eax
// 00838ef2  0f84f3000000         je 0x838feb
// 00838ef8  399ecc000000         cmp dword ptr [esi + 0xcc], ebx
// 00838efe  0f85e7000000         jne 0x838feb
// 00838f04  385c2424             cmp byte ptr [esp + 0x24], bl
// 00838f08  743c                 je 0x838f46
// 00838f0a  3bfb                 cmp edi, ebx
// 00838f0c  7504                 jne 0x838f12
// 00838f0e  33c0                 xor eax, eax
// 00838f10  eb03                 jmp 0x838f15
// 00838f12  8b4720               mov eax, dword ptr [edi + 0x20]
// 00838f15  6af0                 push -0x10
// 00838f17  50                   push eax
// 00838f18  ff15d8c99800         call dword ptr [0x98c9d8]
// 00838f1e  a900000004           test eax, 0x4000000
// 00838f23  7407                 je 0x838f2c
// 00838f25  a900000002           test eax, 0x2000000
// 00838f2a  751a                 jne 0x838f46
// 00838f2c  3bfb                 cmp edi, ebx
// 00838f2e  7504                 jne 0x838f34
// 00838f30  33c9                 xor ecx, ecx
// 00838f32  eb03                 jmp 0x838f37
// 00838f34  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00838f37  0d00000006           or eax, 0x6000000
// 00838f3c  50                   push eax
// 00838f3d  6af0                 push -0x10
// 00838f3f  51                   push ecx
// 00838f40  ff15c0c99800         call dword ptr [0x98c9c0]
// 00838f46  8b06                 mov eax, dword ptr [esi]
// 00838f48  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00838f4b  53                   push ebx
// 00838f4c  53                   push ebx
// 00838f4d  57                   push edi
// 00838f4e  8d4c2418             lea ecx, [esp + 0x18]
// 00838f52  51                   push ecx
// 00838f53  6800000040           push 0x40000000
// 00838f58  6856fd9900           push 0x99fd56
// 00838f5d  6834809f00           push 0x9f8034
// 00838f62  8bce                 mov ecx, esi
// 00838f64  895c2428             mov dword ptr [esp + 0x28], ebx
// 00838f68  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00838f6c  895c2430             mov dword ptr [esp + 0x30], ebx
// 00838f70  895c2434             mov dword ptr [esp + 0x34], ebx
// 00838f74  ffd2                 call edx
// 00838f76  85c0                 test eax, eax
// 00838f78  7471                 je 0x838feb
// 00838f7a  8b06                 mov eax, dword ptr [esi]
// 00838f7c  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 00838f82  8bce                 mov ecx, esi
// 00838f84  89becc000000         mov dword ptr [esi + 0xcc], edi
// 00838f8a  ffd2                 call edx
// 00838f8c  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00838f92  899880000000         mov dword ptr [eax + 0x80], ebx
// 00838f98  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00838f9e  8b4020               mov eax, dword ptr [eax + 0x20]
// 00838fa1  53                   push ebx
// 00838fa2  50                   push eax
// 00838fa3  ff15f4cb9800         call dword ptr [0x98cbf4]
// 00838fa9  50                   push eax
// 00838faa  e83baffbff           call 0x7f3eea
// 00838faf  3bc3                 cmp eax, ebx
// 00838fb1  742d                 je 0x838fe0
// 00838fb3  53                   push ebx
// 00838fb4  81c648010000         add esi, 0x148
// 00838fba  56                   push esi
// 00838fbb  6810f00000           push 0xf010
// 00838fc0  8bc8                 mov ecx, eax
// 00838fc2  e805d80e00           call 0x9267cc
// 00838fc7  8bce                 mov ecx, esi
// 00838fc9  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00838fcf  84c0                 test al, al
// 00838fd1  740d                 je 0x838fe0
// 00838fd3  682c809f00           push 0x9f802c
// 00838fd8  8bce                 mov ecx, esi
// 00838fda  ff155cde9800         call dword ptr [0x98de5c]
// 00838fe0  5f                   pop edi
// 00838fe1  5e                   pop esi
// 00838fe2  b001                 mov al, 1
// 00838fe4  5b                   pop ebx
// 00838fe5  83c410               add esp, 0x10
// 00838fe8  c20800               ret 8
// 00838feb  5f                   pop edi
// 00838fec  5e                   pop esi
// 00838fed  32c0                 xor al, al
// 00838fef  5b                   pop ebx
// 00838ff0  83c410               add esp, 0x10
// 00838ff3  c20800               ret 8
// copied from an identical function in another client (function ?InstallDockingPanes@CXTPDockingPaneManager@@QAE_NPAVCWnd@@_N@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/DockingPane/XTPDockingPaneManager.cpp