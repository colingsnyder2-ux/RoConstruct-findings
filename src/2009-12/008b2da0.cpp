// roc 2009-12 008b2da0  unit: CXTPDockingPaneTabbedContainer::CContainerDropTarget  size: 630 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b2da0
//
// 008b2da0  6aff                 push -1
// 008b2da2  6887309600           push 0x963087
// 008b2da7  64a100000000         mov eax, dword ptr fs:[0]
// 008b2dad  50                   push eax
// 008b2dae  51                   push ecx
// 008b2daf  53                   push ebx
// 008b2db0  55                   push ebp
// 008b2db1  56                   push esi
// 008b2db2  57                   push edi
// 008b2db3  a10052b600           mov eax, dword ptr [0xb65200]
// 008b2db8  33c4                 xor eax, esp
// 008b2dba  50                   push eax
// 008b2dbb  8d442418             lea eax, [esp + 0x18]
// 008b2dbf  64a300000000         mov dword ptr fs:[0], eax
// 008b2dc5  8bf1                 mov esi, ecx
// 008b2dc7  89742414             mov dword ptr [esp + 0x14], esi
// 008b2dcb  e87813f4ff           call 0x7f4148
// 008b2dd0  8b442428             mov eax, dword ptr [esp + 0x28]
// 008b2dd4  50                   push eax
// 008b2dd5  8d5e54               lea ebx, [esi + 0x54]
// 008b2dd8  33ff                 xor edi, edi
// 008b2dda  6a01                 push 1
// 008b2ddc  8bcb                 mov ecx, ebx
// 008b2dde  897c2428             mov dword ptr [esp + 0x28], edi
// 008b2de2  e879010400           call 0x8f2f60
// 008b2de7  8daea8000000         lea ebp, [esi + 0xa8]
// 008b2ded  8bcd                 mov ecx, ebp
// 008b2def  c644242001           mov byte ptr [esp + 0x20], 1
// 008b2df4  e837c30100           call 0x8cf130
// 008b2df9  8d8e38010000         lea ecx, [esi + 0x138]
// 008b2dff  c644242002           mov byte ptr [esp + 0x20], 2
// 008b2e04  e8d799f8ff           call 0x83c7e0
// 008b2e09  8d8eac010000         lea ecx, [esi + 0x1ac]
// 008b2e0f  c706c475a000         mov dword ptr [esi], 0xa075c4
// 008b2e15  c7036475a000         mov dword ptr [ebx], 0xa07564
// 008b2e1b  c74500dc74a000       mov dword ptr [ebp], 0xa074dc
// 008b2e22  c786380100007c74a000 mov dword ptr [esi + 0x138], 0xa0747c
// 008b2e2c  e8af24faff           call 0x8552e0
// 008b2e31  6a14                 push 0x14
// 008b2e33  c644242404           mov byte ptr [esp + 0x24], 4
// 008b2e38  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 008b2e3e  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 008b2e44  89be9c010000         mov dword ptr [esi + 0x19c], edi
// 008b2e4a  89be94010000         mov dword ptr [esi + 0x194], edi
// 008b2e50  c7869801000001000000 mov dword ptr [esi + 0x198], 1
// 008b2e5a  89bea0010000         mov dword ptr [esi + 0x1a0], edi
// 008b2e60  e8fb09f4ff           call 0x7f3860
// 008b2e65  8be8                 mov ebp, eax
// 008b2e67  83c404               add esp, 4
// 008b2e6a  3bef                 cmp ebp, edi
// 008b2e6c  7410                 je 0x8b2e7e
// 008b2e6e  8bcd                 mov ecx, ebp
// 008b2e70  e88bc4ffff           call 0x8af300
// 008b2e75  c74500b070a000       mov dword ptr [ebp], 0xa070b0
// 008b2e7c  eb02                 jmp 0x8b2e80
// 008b2e7e  33ed                 xor ebp, ebp
// 008b2e80  6a24                 push 0x24
// 008b2e82  89ae80000000         mov dword ptr [esi + 0x80], ebp
// 008b2e88  e8d309f4ff           call 0x7f3860
// 008b2e8d  8be8                 mov ebp, eax
// 008b2e8f  83c404               add esp, 4
// 008b2e92  3bef                 cmp ebp, edi
// 008b2e94  741c                 je 0x8b2eb2
// 008b2e96  55                   push ebp
// 008b2e97  c74514f1240000       mov dword ptr [ebp + 0x14], 0x24f1
// 008b2e9e  895d10               mov dword ptr [ebp + 0x10], ebx
// 008b2ea1  897d1c               mov dword ptr [ebp + 0x1c], edi
// 008b2ea4  897d18               mov dword ptr [ebp + 0x18], edi
// 008b2ea7  897d20               mov dword ptr [ebp + 0x20], edi
// 008b2eaa  ff159cca9800         call dword ptr [0x98ca9c]
// 008b2eb0  eb02                 jmp 0x8b2eb4
// 008b2eb2  33ed                 xor ebp, ebp
// 008b2eb4  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 008b2eba  8b4108               mov eax, dword ptr [ecx + 8]
// 008b2ebd  55                   push ebp
// 008b2ebe  50                   push eax
// 008b2ebf  e8ac7dfbff           call 0x86ac70
// 008b2ec4  6a24                 push 0x24
// 008b2ec6  e89509f4ff           call 0x7f3860
// 008b2ecb  8be8                 mov ebp, eax
// 008b2ecd  83c404               add esp, 4
// 008b2ed0  3bef                 cmp ebp, edi
// 008b2ed2  741c                 je 0x8b2ef0
// 008b2ed4  55                   push ebp
// 008b2ed5  c74514f2240000       mov dword ptr [ebp + 0x14], 0x24f2
// 008b2edc  895d10               mov dword ptr [ebp + 0x10], ebx
// 008b2edf  897d1c               mov dword ptr [ebp + 0x1c], edi
// 008b2ee2  897d18               mov dword ptr [ebp + 0x18], edi
// 008b2ee5  897d20               mov dword ptr [ebp + 0x20], edi
// 008b2ee8  ff159cca9800         call dword ptr [0x98ca9c]
// 008b2eee  eb02                 jmp 0x8b2ef2
// 008b2ef0  33ed                 xor ebp, ebp
// 008b2ef2  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 008b2ef8  8b4108               mov eax, dword ptr [ecx + 8]
// 008b2efb  55                   push ebp
// 008b2efc  50                   push eax
// 008b2efd  e86e7dfbff           call 0x86ac70
// 008b2f02  6a24                 push 0x24
// 008b2f04  e85709f4ff           call 0x7f3860
// 008b2f09  8be8                 mov ebp, eax
// 008b2f0b  83c404               add esp, 4
// 008b2f0e  3bef                 cmp ebp, edi
// 008b2f10  741c                 je 0x8b2f2e
// 008b2f12  55                   push ebp
// 008b2f13  c74514f3240000       mov dword ptr [ebp + 0x14], 0x24f3
// 008b2f1a  895d10               mov dword ptr [ebp + 0x10], ebx
// 008b2f1d  897d1c               mov dword ptr [ebp + 0x1c], edi
// 008b2f20  897d18               mov dword ptr [ebp + 0x18], edi
// 008b2f23  897d20               mov dword ptr [ebp + 0x20], edi
// 008b2f26  ff159cca9800         call dword ptr [0x98ca9c]
// 008b2f2c  eb02                 jmp 0x8b2f30
// 008b2f2e  33ed                 xor ebp, ebp
// 008b2f30  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 008b2f36  8b4108               mov eax, dword ptr [ecx + 8]
// 008b2f39  55                   push ebp
// 008b2f3a  50                   push eax
// 008b2f3b  e8307dfbff           call 0x86ac70
// 008b2f40  6a24                 push 0x24
// 008b2f42  e81909f4ff           call 0x7f3860
// 008b2f47  8be8                 mov ebp, eax
// 008b2f49  83c404               add esp, 4
// 008b2f4c  3bef                 cmp ebp, edi
// 008b2f4e  741c                 je 0x8b2f6c
// 008b2f50  55                   push ebp
// 008b2f51  c74514f0240000       mov dword ptr [ebp + 0x14], 0x24f0
// 008b2f58  895d10               mov dword ptr [ebp + 0x10], ebx
// 008b2f5b  897d1c               mov dword ptr [ebp + 0x1c], edi
// 008b2f5e  897d18               mov dword ptr [ebp + 0x18], edi
// 008b2f61  897d20               mov dword ptr [ebp + 0x20], edi
// 008b2f64  ff159cca9800         call dword ptr [0x98ca9c]
// 008b2f6a  eb02                 jmp 0x8b2f6e
// 008b2f6c  33ed                 xor ebp, ebp
// 008b2f6e  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 008b2f74  8b4108               mov eax, dword ptr [ecx + 8]
// 008b2f77  55                   push ebp
// 008b2f78  50                   push eax
// 008b2f79  e8f27cfbff           call 0x86ac70
// 008b2f7e  6a24                 push 0x24
// 008b2f80  e8db08f4ff           call 0x7f3860
// 008b2f85  8be8                 mov ebp, eax
// 008b2f87  83c404               add esp, 4
// 008b2f8a  3bef                 cmp ebp, edi
// 008b2f8c  741c                 je 0x8b2faa
// 008b2f8e  55                   push ebp
// 008b2f8f  c74514f4240000       mov dword ptr [ebp + 0x14], 0x24f4
// 008b2f96  895d10               mov dword ptr [ebp + 0x10], ebx
// 008b2f99  897d1c               mov dword ptr [ebp + 0x1c], edi
// 008b2f9c  897d18               mov dword ptr [ebp + 0x18], edi
// 008b2f9f  897d20               mov dword ptr [ebp + 0x20], edi
// 008b2fa2  ff159cca9800         call dword ptr [0x98ca9c]
// 008b2fa8  eb02                 jmp 0x8b2fac
// 008b2faa  33ed                 xor ebp, ebp
// 008b2fac  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 008b2fb2  8b4108               mov eax, dword ptr [ecx + 8]
// 008b2fb5  55                   push ebp
// 008b2fb6  50                   push eax
// 008b2fb7  e8b47cfbff           call 0x86ac70
// 008b2fbc  6a38                 push 0x38
// 008b2fbe  e89d08f4ff           call 0x7f3860
// 008b2fc3  8bd8                 mov ebx, eax
// 008b2fc5  83c404               add esp, 4
// 008b2fc8  895c2428             mov dword ptr [esp + 0x28], ebx
// 008b2fcc  c644242005           mov byte ptr [esp + 0x20], 5
// 008b2fd1  3bdf                 cmp ebx, edi
// 008b2fd3  740f                 je 0x8b2fe4
// 008b2fd5  8bcb                 mov ecx, ebx
// 008b2fd7  e8d016f4ff           call 0x7f46ac
// 008b2fdc  c703c473a000         mov dword ptr [ebx], 0xa073c4
// 008b2fe2  eb02                 jmp 0x8b2fe6
// 008b2fe4  33db                 xor ebx, ebx
// 008b2fe6  8bce                 mov ecx, esi
// 008b2fe8  c644242004           mov byte ptr [esp + 0x20], 4
// 008b2fed  899ec0010000         mov dword ptr [esi + 0x1c0], ebx
// 008b2ff3  89bec4010000         mov dword ptr [esi + 0x1c4], edi
// 008b2ff9  e84a340700           call 0x926448
// 008b2ffe  8bc6                 mov eax, esi
// 008b3000  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b3004  64890d00000000       mov dword ptr fs:[0], ecx
// 008b300b  59                   pop ecx
// 008b300c  5f                   pop edi
// 008b300d  5e                   pop esi
// 008b300e  5d                   pop ebp
// 008b300f  5b                   pop ebx
// 008b3010  83c410               add esp, 0x10
// 008b3013  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPDockingPaneTabbedContainer@@IAE@PAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp