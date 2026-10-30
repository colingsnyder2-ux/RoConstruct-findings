// roc 2010-06 008839b0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008839b0
//
// 008839b0  56                   push esi
// 008839b1  8bf1                 mov esi, ecx
// 008839b3  57                   push edi
// 008839b4  8b7e5c               mov edi, dword ptr [esi + 0x5c]
// 008839b7  83ff01               cmp edi, 1
// 008839ba  7d07                 jge 0x8839c3
// 008839bc  5f                   pop edi
// 008839bd  33c0                 xor eax, eax
// 008839bf  5e                   pop esi
// 008839c0  c20800               ret 8
// 008839c3  53                   push ebx
// 008839c4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008839c8  83fb25               cmp ebx, 0x25
// 008839cb  751b                 jne 0x8839e8
// 008839cd  8b442410             mov eax, dword ptr [esp + 0x10]
// 008839d1  6aec                 push -0x14
// 008839d3  50                   push eax
// 008839d4  ff15fcbb9e00         call dword ptr [0x9ebbfc]
// 008839da  a900004000           test eax, 0x400000
// 008839df  7425                 je 0x883a06
// 008839e1  bb27000000           mov ebx, 0x27
// 008839e6  eb1e                 jmp 0x883a06
// 008839e8  83fb27               cmp ebx, 0x27
// 008839eb  7519                 jne 0x883a06
// 008839ed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008839f1  6aec                 push -0x14
// 008839f3  51                   push ecx
// 008839f4  ff15fcbb9e00         call dword ptr [0x9ebbfc]
// 008839fa  a900004000           test eax, 0x400000
// 008839ff  7405                 je 0x883a06
// 00883a01  bb25000000           mov ebx, 0x25
// 00883a06  8d43dd               lea eax, [ebx - 0x23]
// 00883a09  83f805               cmp eax, 5
// 00883a0c  0f8719010000         ja 0x883b2b
// 00883a12  ff2485343b8800       jmp dword ptr [eax*4 + 0x883b34]
// 00883a19  8b3e                 mov edi, dword ptr [esi]
// 00883a1b  6a01                 push 1
// 00883a1d  6aff                 push -1
// 00883a1f  8bce                 mov ecx, esi
// 00883a21  e83affffff           call 0x883960
// 00883a26  8b5724               mov edx, dword ptr [edi + 0x24]
// 00883a29  50                   push eax
// 00883a2a  8bce                 mov ecx, esi
// 00883a2c  ffd2                 call edx
// 00883a2e  5b                   pop ebx
// 00883a2f  5f                   pop edi
// 00883a30  b801000000           mov eax, 1
// 00883a35  5e                   pop esi
// 00883a36  c20800               ret 8
// 00883a39  8b1e                 mov ebx, dword ptr [esi]
// 00883a3b  6aff                 push -1
// 00883a3d  57                   push edi
// 00883a3e  8bce                 mov ecx, esi
// 00883a40  e81bffffff           call 0x883960
// 00883a45  50                   push eax
// 00883a46  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00883a49  8bce                 mov ecx, esi
// 00883a4b  ffd0                 call eax
// 00883a4d  5b                   pop ebx
// 00883a4e  5f                   pop edi
// 00883a4f  b801000000           mov eax, 1
// 00883a54  5e                   pop esi
// 00883a55  c20800               ret 8
// 00883a58  8bce                 mov ecx, esi
// 00883a5a  e8914ff8ff           call 0x8089f0
// 00883a5f  85c0                 test eax, eax
// 00883a61  0f84b9000000         je 0x883b20
// 00883a67  8b4604               mov eax, dword ptr [esi + 4]
// 00883a6a  85c0                 test eax, eax
// 00883a6c  0f84ae000000         je 0x883b20
// 00883a72  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00883a75  85c0                 test eax, eax
// 00883a77  0f8ea3000000         jle 0x883b20
// 00883a7d  8b3e                 mov edi, dword ptr [esi]
// 00883a7f  6aff                 push -1
// 00883a81  50                   push eax
// 00883a82  8bce                 mov ecx, esi
// 00883a84  e8d7feffff           call 0x883960
// 00883a89  8b5724               mov edx, dword ptr [edi + 0x24]
// 00883a8c  50                   push eax
// 00883a8d  8bce                 mov ecx, esi
// 00883a8f  ffd2                 call edx
// 00883a91  5b                   pop ebx
// 00883a92  5f                   pop edi
// 00883a93  b801000000           mov eax, 1
// 00883a98  5e                   pop esi
// 00883a99  c20800               ret 8
// 00883a9c  8bce                 mov ecx, esi
// 00883a9e  e84d4ff8ff           call 0x8089f0
// 00883aa3  85c0                 test eax, eax
// 00883aa5  7579                 jne 0x883b20
// 00883aa7  8b4604               mov eax, dword ptr [esi + 4]
// 00883aaa  85c0                 test eax, eax
// 00883aac  7472                 je 0x883b20
// 00883aae  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00883ab1  85c0                 test eax, eax
// 00883ab3  7e6b                 jle 0x883b20
// 00883ab5  6aff                 push -1
// 00883ab7  eb55                 jmp 0x883b0e
// 00883ab9  8bce                 mov ecx, esi
// 00883abb  e8304ff8ff           call 0x8089f0
// 00883ac0  85c0                 test eax, eax
// 00883ac2  7423                 je 0x883ae7
// 00883ac4  8b4604               mov eax, dword ptr [esi + 4]
// 00883ac7  85c0                 test eax, eax
// 00883ac9  741c                 je 0x883ae7
// 00883acb  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00883ace  4f                   dec edi
// 00883acf  3bc7                 cmp eax, edi
// 00883ad1  7d14                 jge 0x883ae7
// 00883ad3  8b3e                 mov edi, dword ptr [esi]
// 00883ad5  6a01                 push 1
// 00883ad7  50                   push eax
// 00883ad8  8bce                 mov ecx, esi
// 00883ada  e881feffff           call 0x883960
// 00883adf  8b5724               mov edx, dword ptr [edi + 0x24]
// 00883ae2  50                   push eax
// 00883ae3  8bce                 mov ecx, esi
// 00883ae5  ffd2                 call edx
// 00883ae7  5b                   pop ebx
// 00883ae8  5f                   pop edi
// 00883ae9  b801000000           mov eax, 1
// 00883aee  5e                   pop esi
// 00883aef  c20800               ret 8
// 00883af2  8bce                 mov ecx, esi
// 00883af4  e8f74ef8ff           call 0x8089f0
// 00883af9  85c0                 test eax, eax
// 00883afb  7523                 jne 0x883b20
// 00883afd  8b4604               mov eax, dword ptr [esi + 4]
// 00883b00  85c0                 test eax, eax
// 00883b02  741c                 je 0x883b20
// 00883b04  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00883b07  4f                   dec edi
// 00883b08  3bc7                 cmp eax, edi
// 00883b0a  7d14                 jge 0x883b20
// 00883b0c  6a01                 push 1
// 00883b0e  8b3e                 mov edi, dword ptr [esi]
// 00883b10  50                   push eax
// 00883b11  8bce                 mov ecx, esi
// 00883b13  e848feffff           call 0x883960
// 00883b18  50                   push eax
// 00883b19  8b4724               mov eax, dword ptr [edi + 0x24]
// 00883b1c  8bce                 mov ecx, esi
// 00883b1e  ffd0                 call eax
// 00883b20  5b                   pop ebx
// 00883b21  5f                   pop edi
// 00883b22  b801000000           mov eax, 1
// 00883b27  5e                   pop esi
// 00883b28  c20800               ret 8
// 00883b2b  5b                   pop ebx
// 00883b2c  5f                   pop edi
// 00883b2d  33c0                 xor eax, eax
// 00883b2f  5e                   pop esi
// 00883b30  c20800               ret 8
// 00883b33  90                   nop 
// 00883b34  393a                 cmp dword ptr [edx], edi
// 00883b36  8800                 mov byte ptr [eax], al
// 00883b38  193a                 sbb dword ptr [edx], edi
// 00883b3a  8800                 mov byte ptr [eax], al
// 00883b3c  58                   pop eax
// 00883b3d  3a88009c3a88         cmp cl, byte ptr [eax - 0x77c56400]
// 00883b43  00b93a8800f2         add byte ptr [ecx - 0xdff77c6], bh
// copied from an identical function in another client (function ?PerformKeyDown@CXTPTabManager@@UAEHPAUHWND__@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp