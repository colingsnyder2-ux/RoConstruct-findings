// roc 2012-06 009e0d60  unit: CXTPTabClientWnd  size: 394 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e0d60
//
// 009e0d60  53                   push ebx
// 009e0d61  55                   push ebp
// 009e0d62  56                   push esi
// 009e0d63  b801000000           mov eax, 1
// 009e0d68  8bf1                 mov esi, ecx
// 009e0d6a  894664               mov dword ptr [esi + 0x64], eax
// 009e0d6d  89465c               mov dword ptr [esi + 0x5c], eax
// 009e0d70  8b442418             mov eax, dword ptr [esp + 0x18]
// 009e0d74  33db                 xor ebx, ebx
// 009e0d76  57                   push edi
// 009e0d77  83f802               cmp eax, 2
// 009e0d7a  0f84b6000000         je 0x9e0e36
// 009e0d80  0f8e42010000         jle 0x9e0ec8
// 009e0d86  83f804               cmp eax, 4
// 009e0d89  0f8f39010000         jg 0x9e0ec8
// 009e0d8f  e8bce7ffff           call 0x9df550
// 009e0d94  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 009e0d98  85ed                 test ebp, ebp
// 009e0d9a  0f8443010000         je 0x9e0ee3
// 009e0da0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009e0da4  8b4760               mov eax, dword ptr [edi + 0x60]
// 009e0da7  8d4f04               lea ecx, [edi + 4]
// 009e0daa  51                   push ecx
// 009e0dab  8944241c             mov dword ptr [esp + 0x1c], eax
// 009e0daf  ff159821b200         call dword ptr [0xb22198]
// 009e0db5  8bcf                 mov ecx, edi
// 009e0db7  e884cd0600           call 0xa4db40
// 009e0dbc  8b575c               mov edx, dword ptr [edi + 0x5c]
// 009e0dbf  55                   push ebp
// 009e0dc0  8bce                 mov ecx, esi
// 009e0dc2  89542418             mov dword ptr [esp + 0x18], edx
// 009e0dc6  e8d5efffff           call 0x9dfda0
// 009e0dcb  8b16                 mov edx, dword ptr [esi]
// 009e0dcd  40                   inc eax
// 009e0dce  50                   push eax
// 009e0dcf  8b826c010000         mov eax, dword ptr [edx + 0x16c]
// 009e0dd5  8bce                 mov ecx, esi
// 009e0dd7  ffd0                 call eax
// 009e0dd9  8bd8                 mov ebx, eax
// 009e0ddb  57                   push edi
// 009e0ddc  6aff                 push -1
// 009e0dde  8bcb                 mov ecx, ebx
// 009e0de0  e81bbb0600           call 0xa4c900
// 009e0de5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009e0de9  894f5c               mov dword ptr [edi + 0x5c], ecx
// 009e0dec  8b13                 mov edx, dword ptr [ebx]
// 009e0dee  8b4220               mov eax, dword ptr [edx + 0x20]
// 009e0df1  57                   push edi
// 009e0df2  8bcb                 mov ecx, ebx
// 009e0df4  ffd0                 call eax
// 009e0df6  db86d0000000         fild dword ptr [esi + 0xd0]
// 009e0dfc  33c9                 xor ecx, ecx
// 009e0dfe  837c241c03           cmp dword ptr [esp + 0x1c], 3
// 009e0e03  dcad98000000         fsubr qword ptr [ebp + 0x98]
// 009e0e09  0f94c1               sete cl
// 009e0e0c  dc0d00a2b600         fmul qword ptr [0xb6a200]
// 009e0e12  dd9398000000         fst qword ptr [ebx + 0x98]
// 009e0e18  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009e0e1c  dcad98000000         fsubr qword ptr [ebp + 0x98]
// 009e0e22  daa6d0000000         fisub dword ptr [esi + 0xd0]
// 009e0e28  dd9d98000000         fstp qword ptr [ebp + 0x98]
// 009e0e2e  898e9c000000         mov dword ptr [esi + 0x9c], ecx
// 009e0e34  eb4b                 jmp 0x9e0e81
// 009e0e36  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 009e0e3a  85ed                 test ebp, ebp
// 009e0e3c  0f84a1000000         je 0x9e0ee3
// 009e0e42  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009e0e46  8b4760               mov eax, dword ptr [edi + 0x60]
// 009e0e49  3be8                 cmp ebp, eax
// 009e0e4b  7429                 je 0x9e0e76
// 009e0e4d  8d5704               lea edx, [edi + 4]
// 009e0e50  52                   push edx
// 009e0e51  8944241c             mov dword ptr [esp + 0x1c], eax
// 009e0e55  ff159821b200         call dword ptr [0xb22198]
// 009e0e5b  8bcf                 mov ecx, edi
// 009e0e5d  e8decc0600           call 0xa4db40
// 009e0e62  8b5f5c               mov ebx, dword ptr [edi + 0x5c]
// 009e0e65  57                   push edi
// 009e0e66  6aff                 push -1
// 009e0e68  8bcd                 mov ecx, ebp
// 009e0e6a  e891ba0600           call 0xa4c900
// 009e0e6f  895f5c               mov dword ptr [edi + 0x5c], ebx
// 009e0e72  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009e0e76  8b4500               mov eax, dword ptr [ebp]
// 009e0e79  8b5020               mov edx, dword ptr [eax + 0x20]
// 009e0e7c  57                   push edi
// 009e0e7d  8bcd                 mov ecx, ebp
// 009e0e7f  ffd2                 call edx
// 009e0e81  85db                 test ebx, ebx
// 009e0e83  7443                 je 0x9e0ec8
// 009e0e85  837b5c01             cmp dword ptr [ebx + 0x5c], 1
// 009e0e89  7e3d                 jle 0x9e0ec8
// 009e0e8b  8b4620               mov eax, dword ptr [esi + 0x20]
// 009e0e8e  8b2d403bb200         mov ebp, dword ptr [0xb23b40]
// 009e0e94  6a05                 push 5
// 009e0e96  50                   push eax
// 009e0e97  ffd5                 call ebp
// 009e0e99  8bf8                 mov edi, eax
// 009e0e9b  85ff                 test edi, edi
// 009e0e9d  7429                 je 0x9e0ec8
// 009e0e9f  90                   nop 
// 009e0ea0  57                   push edi
// 009e0ea1  8bce                 mov ecx, esi
// 009e0ea3  e898f6ffff           call 0x9e0540
// 009e0ea8  85c0                 test eax, eax
// 009e0eaa  7405                 je 0x9e0eb1
// 009e0eac  395860               cmp dword ptr [eax + 0x60], ebx
// 009e0eaf  740d                 je 0x9e0ebe
// 009e0eb1  6a02                 push 2
// 009e0eb3  57                   push edi
// 009e0eb4  ffd5                 call ebp
// 009e0eb6  8bf8                 mov edi, eax
// 009e0eb8  85ff                 test edi, edi
// 009e0eba  75e4                 jne 0x9e0ea0
// 009e0ebc  eb0a                 jmp 0x9e0ec8
// 009e0ebe  8b13                 mov edx, dword ptr [ebx]
// 009e0ec0  50                   push eax
// 009e0ec1  8b4220               mov eax, dword ptr [edx + 0x20]
// 009e0ec4  8bcb                 mov ecx, ebx
// 009e0ec6  ffd0                 call eax
// 009e0ec8  8b16                 mov edx, dword ptr [esi]
// 009e0eca  33c0                 xor eax, eax
// 009e0ecc  894664               mov dword ptr [esi + 0x64], eax
// 009e0ecf  89465c               mov dword ptr [esi + 0x5c], eax
// 009e0ed2  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 009e0ed8  8bce                 mov ecx, esi
// 009e0eda  c7466001000000       mov dword ptr [esi + 0x60], 1
// 009e0ee1  ffd0                 call eax
// 009e0ee3  5f                   pop edi
// 009e0ee4  5e                   pop esi
// 009e0ee5  5d                   pop ebp
// 009e0ee6  5b                   pop ebx
// 009e0ee7  c20c00               ret 0xc
// copied from an identical function in another client (function ?DoWorkspaceCommand@CXTPTabClientWnd@@IAEXPAVCXTPTabManagerItem@@PAVCWorkspace@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp