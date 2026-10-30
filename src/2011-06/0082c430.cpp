// roc 2011-06 0082c430  unit: MyXTPCommandBars  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082c430
//
// 0082c430  6aff                 push -1
// 0082c432  68583ca000           push 0xa03c58
// 0082c437  64a100000000         mov eax, dword ptr fs:[0]
// 0082c43d  50                   push eax
// 0082c43e  83ec14               sub esp, 0x14
// 0082c441  53                   push ebx
// 0082c442  55                   push ebp
// 0082c443  56                   push esi
// 0082c444  57                   push edi
// 0082c445  a12058c900           mov eax, dword ptr [0xc95820]
// 0082c44a  33c4                 xor eax, esp
// 0082c44c  50                   push eax
// 0082c44d  8d442428             lea eax, [esp + 0x28]
// 0082c451  64a300000000         mov dword ptr fs:[0], eax
// 0082c457  8bd9                 mov ebx, ecx
// 0082c459  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0082c45d  8bb580010000         mov esi, dword ptr [ebp + 0x180]
// 0082c463  85f6                 test esi, esi
// 0082c465  750d                 jne 0x82c474
// 0082c467  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0082c46b  57                   push edi
// 0082c46c  55                   push ebp
// 0082c46d  e8fedbffff           call 0x82a070
// 0082c472  eb7e                 jmp 0x82c4f2
// 0082c474  6aff                 push -1
// 0082c476  55                   push ebp
// 0082c477  8bce                 mov ecx, esi
// 0082c479  e862650700           call 0x8a29e0
// 0082c47e  8bf8                 mov edi, eax
// 0082c480  83ffff               cmp edi, -1
// 0082c483  750f                 jne 0x82c494
// 0082c485  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0082c489  57                   push edi
// 0082c48a  55                   push ebp
// 0082c48b  8bcb                 mov ecx, ebx
// 0082c48d  e8dedbffff           call 0x82a070
// 0082c492  eb5e                 jmp 0x82c4f2
// 0082c494  8d4c2414             lea ecx, [esp + 0x14]
// 0082c498  e8c3ddffff           call 0x82a260
// 0082c49d  8d442414             lea eax, [esp + 0x14]
// 0082c4a1  50                   push eax
// 0082c4a2  57                   push edi
// 0082c4a3  8bce                 mov ecx, esi
// 0082c4a5  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0082c4ad  e83e750700           call 0x8a39f0
// 0082c4b2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0082c4b6  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0082c4ba  33f6                 xor esi, esi
// 0082c4bc  85c0                 test eax, eax
// 0082c4be  7e21                 jle 0x82c4e1
// 0082c4c0  85f6                 test esi, esi
// 0082c4c2  7c6f                 jl 0x82c533
// 0082c4c4  3bf0                 cmp esi, eax
// 0082c4c6  7d6b                 jge 0x82c533
// 0082c4c8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082c4cc  8b14b1               mov edx, dword ptr [ecx + esi*4]
// 0082c4cf  57                   push edi
// 0082c4d0  52                   push edx
// 0082c4d1  8bcb                 mov ecx, ebx
// 0082c4d3  e898dbffff           call 0x82a070
// 0082c4d8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0082c4dc  46                   inc esi
// 0082c4dd  3bf0                 cmp esi, eax
// 0082c4df  7cdf                 jl 0x82c4c0
// 0082c4e1  8d4c2414             lea ecx, [esp + 0x14]
// 0082c4e5  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0082c4ed  e8eeddffff           call 0x82a2e0
// 0082c4f2  837b6000             cmp dword ptr [ebx + 0x60], 0
// 0082c4f6  7425                 je 0x82c51d
// 0082c4f8  8bbffc000000         mov edi, dword ptr [edi + 0xfc]
// 0082c4fe  6a00                 push 0
// 0082c500  6aff                 push -1
// 0082c502  6a00                 push 0
// 0082c504  68b9880000           push 0x88b9
// 0082c509  6a01                 push 1
// 0082c50b  8bcf                 mov ecx, edi
// 0082c50d  e8fed60200           call 0x859c10
// 0082c512  8b10                 mov edx, dword ptr [eax]
// 0082c514  8bc8                 mov ecx, eax
// 0082c516  8b4264               mov eax, dword ptr [edx + 0x64]
// 0082c519  6a01                 push 1
// 0082c51b  ffd0                 call eax
// 0082c51d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0082c521  64890d00000000       mov dword ptr fs:[0], ecx
// 0082c528  59                   pop ecx
// 0082c529  5f                   pop edi
// 0082c52a  5e                   pop esi
// 0082c52b  5d                   pop ebp
// 0082c52c  5b                   pop ebx
// 0082c52d  83c420               add esp, 0x20
// 0082c530  c20800               ret 8
// 0082c533  e8d2ddfdff           call 0x80a30a
// copied from an identical function in another client (function ?GetAddOrRemovePopup@CXTPCommandBars@@UAEXPAVCXTPToolBar@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp