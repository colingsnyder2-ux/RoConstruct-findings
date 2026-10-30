// roc 2012-06 009a4a00  unit: MyXTPCommandBars  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a4a00
//
// 009a4a00  6aff                 push -1
// 009a4a02  68a8d9ad00           push 0xadd9a8
// 009a4a07  64a100000000         mov eax, dword ptr fs:[0]
// 009a4a0d  50                   push eax
// 009a4a0e  83ec14               sub esp, 0x14
// 009a4a11  53                   push ebx
// 009a4a12  55                   push ebp
// 009a4a13  56                   push esi
// 009a4a14  57                   push edi
// 009a4a15  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009a4a1a  33c4                 xor eax, esp
// 009a4a1c  50                   push eax
// 009a4a1d  8d442428             lea eax, [esp + 0x28]
// 009a4a21  64a300000000         mov dword ptr fs:[0], eax
// 009a4a27  8bd9                 mov ebx, ecx
// 009a4a29  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 009a4a2d  8bb580010000         mov esi, dword ptr [ebp + 0x180]
// 009a4a33  85f6                 test esi, esi
// 009a4a35  750d                 jne 0x9a4a44
// 009a4a37  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 009a4a3b  57                   push edi
// 009a4a3c  55                   push ebp
// 009a4a3d  e85edcffff           call 0x9a26a0
// 009a4a42  eb7e                 jmp 0x9a4ac2
// 009a4a44  6aff                 push -1
// 009a4a46  55                   push ebp
// 009a4a47  8bce                 mov ecx, esi
// 009a4a49  e8c2630700           call 0xa1ae10
// 009a4a4e  8bf8                 mov edi, eax
// 009a4a50  83ffff               cmp edi, -1
// 009a4a53  750f                 jne 0x9a4a64
// 009a4a55  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 009a4a59  57                   push edi
// 009a4a5a  55                   push ebp
// 009a4a5b  8bcb                 mov ecx, ebx
// 009a4a5d  e83edcffff           call 0x9a26a0
// 009a4a62  eb5e                 jmp 0x9a4ac2
// 009a4a64  8d4c2414             lea ecx, [esp + 0x14]
// 009a4a68  e823deffff           call 0x9a2890
// 009a4a6d  8d442414             lea eax, [esp + 0x14]
// 009a4a71  50                   push eax
// 009a4a72  57                   push edi
// 009a4a73  8bce                 mov ecx, esi
// 009a4a75  c744243800000000     mov dword ptr [esp + 0x38], 0
// 009a4a7d  e89e730700           call 0xa1be20
// 009a4a82  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009a4a86  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 009a4a8a  33f6                 xor esi, esi
// 009a4a8c  85c0                 test eax, eax
// 009a4a8e  7e21                 jle 0x9a4ab1
// 009a4a90  85f6                 test esi, esi
// 009a4a92  7c6f                 jl 0x9a4b03
// 009a4a94  3bf0                 cmp esi, eax
// 009a4a96  7d6b                 jge 0x9a4b03
// 009a4a98  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009a4a9c  8b14b1               mov edx, dword ptr [ecx + esi*4]
// 009a4a9f  57                   push edi
// 009a4aa0  52                   push edx
// 009a4aa1  8bcb                 mov ecx, ebx
// 009a4aa3  e8f8dbffff           call 0x9a26a0
// 009a4aa8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009a4aac  46                   inc esi
// 009a4aad  3bf0                 cmp esi, eax
// 009a4aaf  7cdf                 jl 0x9a4a90
// 009a4ab1  8d4c2414             lea ecx, [esp + 0x14]
// 009a4ab5  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 009a4abd  e8eeddffff           call 0x9a28b0
// 009a4ac2  837b6000             cmp dword ptr [ebx + 0x60], 0
// 009a4ac6  7425                 je 0x9a4aed
// 009a4ac8  8bbffc000000         mov edi, dword ptr [edi + 0xfc]
// 009a4ace  6a00                 push 0
// 009a4ad0  6aff                 push -1
// 009a4ad2  6a00                 push 0
// 009a4ad4  68b9880000           push 0x88b9
// 009a4ad9  6a01                 push 1
// 009a4adb  8bcf                 mov ecx, edi
// 009a4add  e82ed50200           call 0x9d2010
// 009a4ae2  8b10                 mov edx, dword ptr [eax]
// 009a4ae4  8bc8                 mov ecx, eax
// 009a4ae6  8b4264               mov eax, dword ptr [edx + 0x64]
// 009a4ae9  6a01                 push 1
// 009a4aeb  ffd0                 call eax
// 009a4aed  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009a4af1  64890d00000000       mov dword ptr fs:[0], ecx
// 009a4af8  59                   pop ecx
// 009a4af9  5f                   pop edi
// 009a4afa  5e                   pop esi
// 009a4afb  5d                   pop ebp
// 009a4afc  5b                   pop ebx
// 009a4afd  83c420               add esp, 0x20
// 009a4b00  c20800               ret 8
// 009a4b03  e8b8d8fdff           call 0x9823c0
// copied from an identical function in another client (function ?GetAddOrRemovePopup@CXTPCommandBars@@UAEXPAVCXTPToolBar@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp