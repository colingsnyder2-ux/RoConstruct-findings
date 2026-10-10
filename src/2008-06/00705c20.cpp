// roc 2008-06 00705c20  unit: CXTPTabClientWnd  size: 394 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00705c20
//
// 00705c20  53                   push ebx
// 00705c21  55                   push ebp
// 00705c22  56                   push esi
// 00705c23  b801000000           mov eax, 1
// 00705c28  8bf1                 mov esi, ecx
// 00705c2a  894664               mov dword ptr [esi + 0x64], eax
// 00705c2d  89465c               mov dword ptr [esi + 0x5c], eax
// 00705c30  8b442418             mov eax, dword ptr [esp + 0x18]
// 00705c34  33db                 xor ebx, ebx
// 00705c36  57                   push edi
// 00705c37  83f802               cmp eax, 2
// 00705c3a  0f84b6000000         je 0x705cf6
// 00705c40  0f8e42010000         jle 0x705d88
// 00705c46  83f804               cmp eax, 4
// 00705c49  0f8f39010000         jg 0x705d88
// 00705c4f  e89ce7ffff           call 0x7043f0
// 00705c54  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00705c58  85ed                 test ebp, ebp
// 00705c5a  0f8443010000         je 0x705da3
// 00705c60  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00705c64  8b4760               mov eax, dword ptr [edi + 0x60]
// 00705c67  8d4f04               lea ecx, [edi + 4]
// 00705c6a  51                   push ecx
// 00705c6b  8944241c             mov dword ptr [esp + 0x1c], eax
// 00705c6f  ff15b0218000         call dword ptr [0x8021b0]
// 00705c75  8bcf                 mov ecx, edi
// 00705c77  e834780700           call 0x77d4b0
// 00705c7c  8b575c               mov edx, dword ptr [edi + 0x5c]
// 00705c7f  55                   push ebp
// 00705c80  8bce                 mov ecx, esi
// 00705c82  89542418             mov dword ptr [esp + 0x18], edx
// 00705c86  e8d5efffff           call 0x704c60
// 00705c8b  8b16                 mov edx, dword ptr [esi]
// 00705c8d  40                   inc eax
// 00705c8e  50                   push eax
// 00705c8f  8b826c010000         mov eax, dword ptr [edx + 0x16c]
// 00705c95  8bce                 mov ecx, esi
// 00705c97  ffd0                 call eax
// 00705c99  8bd8                 mov ebx, eax
// 00705c9b  57                   push edi
// 00705c9c  6aff                 push -1
// 00705c9e  8bcb                 mov ecx, ebx
// 00705ca0  e8cb650700           call 0x77c270
// 00705ca5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00705ca9  894f5c               mov dword ptr [edi + 0x5c], ecx
// 00705cac  8b13                 mov edx, dword ptr [ebx]
// 00705cae  8b4220               mov eax, dword ptr [edx + 0x20]
// 00705cb1  57                   push edi
// 00705cb2  8bcb                 mov ecx, ebx
// 00705cb4  ffd0                 call eax
// 00705cb6  db86d0000000         fild dword ptr [esi + 0xd0]
// 00705cbc  33c9                 xor ecx, ecx
// 00705cbe  837c241c03           cmp dword ptr [esp + 0x1c], 3
// 00705cc3  dcad98000000         fsubr qword ptr [ebp + 0x98]
// 00705cc9  0f94c1               sete cl
// 00705ccc  dc0d38e78100         fmul qword ptr [0x81e738]
// 00705cd2  dd9398000000         fst qword ptr [ebx + 0x98]
// 00705cd8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00705cdc  dcad98000000         fsubr qword ptr [ebp + 0x98]
// 00705ce2  daa6d0000000         fisub dword ptr [esi + 0xd0]
// 00705ce8  dd9d98000000         fstp qword ptr [ebp + 0x98]
// 00705cee  898e9c000000         mov dword ptr [esi + 0x9c], ecx
// 00705cf4  eb4b                 jmp 0x705d41
// 00705cf6  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00705cfa  85ed                 test ebp, ebp
// 00705cfc  0f84a1000000         je 0x705da3
// 00705d02  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00705d06  8b4760               mov eax, dword ptr [edi + 0x60]
// 00705d09  3be8                 cmp ebp, eax
// 00705d0b  7429                 je 0x705d36
// 00705d0d  8d5704               lea edx, [edi + 4]
// 00705d10  52                   push edx
// 00705d11  8944241c             mov dword ptr [esp + 0x1c], eax
// 00705d15  ff15b0218000         call dword ptr [0x8021b0]
// 00705d1b  8bcf                 mov ecx, edi
// 00705d1d  e88e770700           call 0x77d4b0
// 00705d22  8b5f5c               mov ebx, dword ptr [edi + 0x5c]
// 00705d25  57                   push edi
// 00705d26  6aff                 push -1
// 00705d28  8bcd                 mov ecx, ebp
// 00705d2a  e841650700           call 0x77c270
// 00705d2f  895f5c               mov dword ptr [edi + 0x5c], ebx
// 00705d32  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00705d36  8b4500               mov eax, dword ptr [ebp]
// 00705d39  8b5020               mov edx, dword ptr [eax + 0x20]
// 00705d3c  57                   push edi
// 00705d3d  8bcd                 mov ecx, ebp
// 00705d3f  ffd2                 call edx
// 00705d41  85db                 test ebx, ebx
// 00705d43  7443                 je 0x705d88
// 00705d45  837b5c01             cmp dword ptr [ebx + 0x5c], 1
// 00705d49  7e3d                 jle 0x705d88
// 00705d4b  8b4620               mov eax, dword ptr [esi + 0x20]
// 00705d4e  8b2dfc2d8000         mov ebp, dword ptr [0x802dfc]
// 00705d54  6a05                 push 5
// 00705d56  50                   push eax
// 00705d57  ffd5                 call ebp
// 00705d59  8bf8                 mov edi, eax
// 00705d5b  85ff                 test edi, edi
// 00705d5d  7429                 je 0x705d88
// 00705d5f  90                   nop 
// 00705d60  57                   push edi
// 00705d61  8bce                 mov ecx, esi
// 00705d63  e898f6ffff           call 0x705400
// 00705d68  85c0                 test eax, eax
// 00705d6a  7405                 je 0x705d71
// 00705d6c  395860               cmp dword ptr [eax + 0x60], ebx
// 00705d6f  740d                 je 0x705d7e
// 00705d71  6a02                 push 2
// 00705d73  57                   push edi
// 00705d74  ffd5                 call ebp
// 00705d76  8bf8                 mov edi, eax
// 00705d78  85ff                 test edi, edi
// 00705d7a  75e4                 jne 0x705d60
// 00705d7c  eb0a                 jmp 0x705d88
// 00705d7e  8b13                 mov edx, dword ptr [ebx]
// 00705d80  50                   push eax
// 00705d81  8b4220               mov eax, dword ptr [edx + 0x20]
// 00705d84  8bcb                 mov ecx, ebx
// 00705d86  ffd0                 call eax
// 00705d88  8b16                 mov edx, dword ptr [esi]
// 00705d8a  33c0                 xor eax, eax
// 00705d8c  894664               mov dword ptr [esi + 0x64], eax
// 00705d8f  89465c               mov dword ptr [esi + 0x5c], eax
// 00705d92  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 00705d98  8bce                 mov ecx, esi
// 00705d9a  c7466001000000       mov dword ptr [esi + 0x60], 1
// 00705da1  ffd0                 call eax
// 00705da3  5f                   pop edi
// 00705da4  5e                   pop esi
// 00705da5  5d                   pop ebp
// 00705da6  5b                   pop ebx
// 00705da7  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?DoWorkspaceCommand@CXTPTabClientWnd@@IAEXPAVCXTPTabManagerItem@@PAVCWorkspace@1@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
