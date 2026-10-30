// roc 2012-06 00a4cbf0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4cbf0
//
// 00a4cbf0  56                   push esi
// 00a4cbf1  8bf1                 mov esi, ecx
// 00a4cbf3  57                   push edi
// 00a4cbf4  8b7e5c               mov edi, dword ptr [esi + 0x5c]
// 00a4cbf7  83ff01               cmp edi, 1
// 00a4cbfa  7d07                 jge 0xa4cc03
// 00a4cbfc  5f                   pop edi
// 00a4cbfd  33c0                 xor eax, eax
// 00a4cbff  5e                   pop esi
// 00a4cc00  c20800               ret 8
// 00a4cc03  53                   push ebx
// 00a4cc04  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a4cc08  83fb25               cmp ebx, 0x25
// 00a4cc0b  751b                 jne 0xa4cc28
// 00a4cc0d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a4cc11  6aec                 push -0x14
// 00a4cc13  50                   push eax
// 00a4cc14  ff15bc3ab200         call dword ptr [0xb23abc]
// 00a4cc1a  a900004000           test eax, 0x400000
// 00a4cc1f  7425                 je 0xa4cc46
// 00a4cc21  bb27000000           mov ebx, 0x27
// 00a4cc26  eb1e                 jmp 0xa4cc46
// 00a4cc28  83fb27               cmp ebx, 0x27
// 00a4cc2b  7519                 jne 0xa4cc46
// 00a4cc2d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a4cc31  6aec                 push -0x14
// 00a4cc33  51                   push ecx
// 00a4cc34  ff15bc3ab200         call dword ptr [0xb23abc]
// 00a4cc3a  a900004000           test eax, 0x400000
// 00a4cc3f  7405                 je 0xa4cc46
// 00a4cc41  bb25000000           mov ebx, 0x25
// 00a4cc46  8d43dd               lea eax, [ebx - 0x23]
// 00a4cc49  83f805               cmp eax, 5
// 00a4cc4c  0f8719010000         ja 0xa4cd6b
// 00a4cc52  ff248574cda400       jmp dword ptr [eax*4 + 0xa4cd74]
// 00a4cc59  8b3e                 mov edi, dword ptr [esi]
// 00a4cc5b  6a01                 push 1
// 00a4cc5d  6aff                 push -1
// 00a4cc5f  8bce                 mov ecx, esi
// 00a4cc61  e83affffff           call 0xa4cba0
// 00a4cc66  8b5724               mov edx, dword ptr [edi + 0x24]
// 00a4cc69  50                   push eax
// 00a4cc6a  8bce                 mov ecx, esi
// 00a4cc6c  ffd2                 call edx
// 00a4cc6e  5b                   pop ebx
// 00a4cc6f  5f                   pop edi
// 00a4cc70  b801000000           mov eax, 1
// 00a4cc75  5e                   pop esi
// 00a4cc76  c20800               ret 8
// 00a4cc79  8b1e                 mov ebx, dword ptr [esi]
// 00a4cc7b  6aff                 push -1
// 00a4cc7d  57                   push edi
// 00a4cc7e  8bce                 mov ecx, esi
// 00a4cc80  e81bffffff           call 0xa4cba0
// 00a4cc85  50                   push eax
// 00a4cc86  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00a4cc89  8bce                 mov ecx, esi
// 00a4cc8b  ffd0                 call eax
// 00a4cc8d  5b                   pop ebx
// 00a4cc8e  5f                   pop edi
// 00a4cc8f  b801000000           mov eax, 1
// 00a4cc94  5e                   pop esi
// 00a4cc95  c20800               ret 8
// 00a4cc98  8bce                 mov ecx, esi
// 00a4cc9a  e821f6f8ff           call 0x9dc2c0
// 00a4cc9f  85c0                 test eax, eax
// 00a4cca1  0f84b9000000         je 0xa4cd60
// 00a4cca7  8b4604               mov eax, dword ptr [esi + 4]
// 00a4ccaa  85c0                 test eax, eax
// 00a4ccac  0f84ae000000         je 0xa4cd60
// 00a4ccb2  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00a4ccb5  85c0                 test eax, eax
// 00a4ccb7  0f8ea3000000         jle 0xa4cd60
// 00a4ccbd  8b3e                 mov edi, dword ptr [esi]
// 00a4ccbf  6aff                 push -1
// 00a4ccc1  50                   push eax
// 00a4ccc2  8bce                 mov ecx, esi
// 00a4ccc4  e8d7feffff           call 0xa4cba0
// 00a4ccc9  8b5724               mov edx, dword ptr [edi + 0x24]
// 00a4cccc  50                   push eax
// 00a4cccd  8bce                 mov ecx, esi
// 00a4cccf  ffd2                 call edx
// 00a4ccd1  5b                   pop ebx
// 00a4ccd2  5f                   pop edi
// 00a4ccd3  b801000000           mov eax, 1
// 00a4ccd8  5e                   pop esi
// 00a4ccd9  c20800               ret 8
// 00a4ccdc  8bce                 mov ecx, esi
// 00a4ccde  e8ddf5f8ff           call 0x9dc2c0
// 00a4cce3  85c0                 test eax, eax
// 00a4cce5  7579                 jne 0xa4cd60
// 00a4cce7  8b4604               mov eax, dword ptr [esi + 4]
// 00a4ccea  85c0                 test eax, eax
// 00a4ccec  7472                 je 0xa4cd60
// 00a4ccee  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00a4ccf1  85c0                 test eax, eax
// 00a4ccf3  7e6b                 jle 0xa4cd60
// 00a4ccf5  6aff                 push -1
// 00a4ccf7  eb55                 jmp 0xa4cd4e
// 00a4ccf9  8bce                 mov ecx, esi
// 00a4ccfb  e8c0f5f8ff           call 0x9dc2c0
// 00a4cd00  85c0                 test eax, eax
// 00a4cd02  7423                 je 0xa4cd27
// 00a4cd04  8b4604               mov eax, dword ptr [esi + 4]
// 00a4cd07  85c0                 test eax, eax
// 00a4cd09  741c                 je 0xa4cd27
// 00a4cd0b  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00a4cd0e  4f                   dec edi
// 00a4cd0f  3bc7                 cmp eax, edi
// 00a4cd11  7d14                 jge 0xa4cd27
// 00a4cd13  8b3e                 mov edi, dword ptr [esi]
// 00a4cd15  6a01                 push 1
// 00a4cd17  50                   push eax
// 00a4cd18  8bce                 mov ecx, esi
// 00a4cd1a  e881feffff           call 0xa4cba0
// 00a4cd1f  8b5724               mov edx, dword ptr [edi + 0x24]
// 00a4cd22  50                   push eax
// 00a4cd23  8bce                 mov ecx, esi
// 00a4cd25  ffd2                 call edx
// 00a4cd27  5b                   pop ebx
// 00a4cd28  5f                   pop edi
// 00a4cd29  b801000000           mov eax, 1
// 00a4cd2e  5e                   pop esi
// 00a4cd2f  c20800               ret 8
// 00a4cd32  8bce                 mov ecx, esi
// 00a4cd34  e887f5f8ff           call 0x9dc2c0
// 00a4cd39  85c0                 test eax, eax
// 00a4cd3b  7523                 jne 0xa4cd60
// 00a4cd3d  8b4604               mov eax, dword ptr [esi + 4]
// 00a4cd40  85c0                 test eax, eax
// 00a4cd42  741c                 je 0xa4cd60
// 00a4cd44  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00a4cd47  4f                   dec edi
// 00a4cd48  3bc7                 cmp eax, edi
// 00a4cd4a  7d14                 jge 0xa4cd60
// 00a4cd4c  6a01                 push 1
// 00a4cd4e  8b3e                 mov edi, dword ptr [esi]
// 00a4cd50  50                   push eax
// 00a4cd51  8bce                 mov ecx, esi
// 00a4cd53  e848feffff           call 0xa4cba0
// 00a4cd58  50                   push eax
// 00a4cd59  8b4724               mov eax, dword ptr [edi + 0x24]
// 00a4cd5c  8bce                 mov ecx, esi
// 00a4cd5e  ffd0                 call eax
// 00a4cd60  5b                   pop ebx
// 00a4cd61  5f                   pop edi
// 00a4cd62  b801000000           mov eax, 1
// 00a4cd67  5e                   pop esi
// 00a4cd68  c20800               ret 8
// 00a4cd6b  5b                   pop ebx
// 00a4cd6c  5f                   pop edi
// 00a4cd6d  33c0                 xor eax, eax
// 00a4cd6f  5e                   pop esi
// 00a4cd70  c20800               ret 8
// 00a4cd73  90                   nop 
// 00a4cd74  79cc                 jns 0xa4cd42
// 00a4cd76  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// 00a4cd77  0059cc               add byte ptr [ecx - 0x34], bl
// 00a4cd7a  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// 00a4cd7b  0098cca400dc         add byte ptr [eax - 0x23ff5b34], bl
// 00a4cd81  cc                   int3 
// 00a4cd82  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// 00a4cd83  00f9                 add cl, bh
// 00a4cd85  cc                   int3 
// 00a4cd86  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// 00a4cd87  0032                 add byte ptr [edx], dh
// 00a4cd89  cda4                 int 0xa4
// copied from an identical function in another client (function ?PerformKeyDown@CXTPTabManager@@UAEHPAUHWND__@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp