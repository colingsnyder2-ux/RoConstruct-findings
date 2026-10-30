// roc 2009-12 008a8940  unit: UXTP_DOCKINGPANE_INFO::?$CList  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a8940
//
// 008a8940  6aff                 push -1
// 008a8942  6868289600           push 0x962868
// 008a8947  64a100000000         mov eax, dword ptr fs:[0]
// 008a894d  50                   push eax
// 008a894e  83ec28               sub esp, 0x28
// 008a8951  53                   push ebx
// 008a8952  55                   push ebp
// 008a8953  56                   push esi
// 008a8954  57                   push edi
// 008a8955  a10052b600           mov eax, dword ptr [0xb65200]
// 008a895a  33c4                 xor eax, esp
// 008a895c  50                   push eax
// 008a895d  8d44243c             lea eax, [esp + 0x3c]
// 008a8961  64a300000000         mov dword ptr fs:[0], eax
// 008a8967  8be9                 mov ebp, ecx
// 008a8969  896c2418             mov dword ptr [esp + 0x18], ebp
// 008a896d  6a0a                 push 0xa
// 008a896f  8d4c2424             lea ecx, [esp + 0x24]
// 008a8973  e852e30700           call 0x926cca
// 008a8978  8b752c               mov esi, dword ptr [ebp + 0x2c]
// 008a897b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 008a8983  85f6                 test esi, esi
// 008a8985  7450                 je 0x8a89d7
// 008a8987  8bfe                 mov edi, esi
// 008a8989  8b4710               mov eax, dword ptr [edi + 0x10]
// 008a898c  8b36                 mov esi, dword ptr [esi]
// 008a898e  50                   push eax
// 008a898f  8d4c2424             lea ecx, [esp + 0x24]
// 008a8993  e820e30700           call 0x926cb8
// 008a8998  b901000000           mov ecx, 1
// 008a899d  668908               mov word ptr [eax], cx
// 008a89a0  8b470c               mov eax, dword ptr [edi + 0xc]
// 008a89a3  50                   push eax
// 008a89a4  8d4c2424             lea ecx, [esp + 0x24]
// 008a89a8  e80be30700           call 0x926cb8
// 008a89ad  ba01000000           mov edx, 1
// 008a89b2  668910               mov word ptr [eax], dx
// 008a89b5  8b4708               mov eax, dword ptr [edi + 8]
// 008a89b8  8b4030               mov eax, dword ptr [eax + 0x30]
// 008a89bb  50                   push eax
// 008a89bc  8d4c2424             lea ecx, [esp + 0x24]
// 008a89c0  e8f3e20700           call 0x926cb8
// 008a89c5  b901000000           mov ecx, 1
// 008a89ca  668908               mov word ptr [eax], cx
// 008a89cd  85f6                 test esi, esi
// 008a89cf  75b6                 jne 0x8a8987
// 008a89d1  eb04                 jmp 0x8a89d7
// 008a89d3  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008a89d7  8b4548               mov eax, dword ptr [ebp + 0x48]
// 008a89da  33db                 xor ebx, ebx
// 008a89dc  8be8                 mov ebp, eax
// 008a89de  85c0                 test eax, eax
// 008a89e0  0f84f0000000         je 0x8a8ad6
// 008a89e6  eb0c                 jmp 0x8a89f4
// 008a89e8  eb06                 jmp 0x8a89f0
// 008a89ea  8d9b00000000         lea ebx, [ebx]
// 008a89f0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a89f4  8b7008               mov esi, dword ptr [eax + 8]
// 008a89f7  8b10                 mov edx, dword ptr [eax]
// 008a89f9  8b4618               mov eax, dword ptr [esi + 0x18]
// 008a89fc  8b7e10               mov edi, dword ptr [esi + 0x10]
// 008a89ff  b901000000           mov ecx, 1
// 008a8a04  2bc1                 sub eax, ecx
// 008a8a06  8954241c             mov dword ptr [esp + 0x1c], edx
// 008a8a0a  747a                 je 0x8a8a86
// 008a8a0c  2bc1                 sub eax, ecx
// 008a8a0e  742c                 je 0x8a8a3c
// 008a8a10  2bc1                 sub eax, ecx
// 008a8a12  0f85aa000000         jne 0x8a8ac2
// 008a8a18  394638               cmp dword ptr [esi + 0x38], eax
// 008a8a1b  0f85a1000000         jne 0x8a8ac2
// 008a8a21  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a8a25  55                   push ebp
// 008a8a26  83c144               add ecx, 0x44
// 008a8a29  e842ab0300           call 0x8e3570
// 008a8a2e  8b06                 mov eax, dword ptr [esi]
// 008a8a30  8b5054               mov edx, dword ptr [eax + 0x54]
// 008a8a33  8bce                 mov ecx, esi
// 008a8a35  ffd2                 call edx
// 008a8a37  e981000000           jmp 0x8a8abd
// 008a8a3c  837e4400             cmp dword ptr [esi + 0x44], 0
// 008a8a40  7510                 jne 0x8a8a52
// 008a8a42  85ff                 test edi, edi
// 008a8a44  74db                 je 0x8a8a21
// 008a8a46  8b07                 mov eax, dword ptr [edi]
// 008a8a48  8b5048               mov edx, dword ptr [eax + 0x48]
// 008a8a4b  56                   push esi
// 008a8a4c  8bcf                 mov ecx, edi
// 008a8a4e  ffd2                 call edx
// 008a8a50  ebcf                 jmp 0x8a8a21
// 008a8a52  85ff                 test edi, edi
// 008a8a54  746c                 je 0x8a8ac2
// 008a8a56  837f1802             cmp dword ptr [edi + 0x18], 2
// 008a8a5a  7566                 jne 0x8a8ac2
// 008a8a5c  394e44               cmp dword ptr [esi + 0x44], ecx
// 008a8a5f  7561                 jne 0x8a8ac2
// 008a8a61  394f44               cmp dword ptr [edi + 0x44], ecx
// 008a8a64  755c                 jne 0x8a8ac2
// 008a8a66  8d4e38               lea ecx, [esi + 0x38]
// 008a8a69  e802a00100           call 0x8c2a70
// 008a8a6e  8d4f38               lea ecx, [edi + 0x38]
// 008a8a71  8bd8                 mov ebx, eax
// 008a8a73  e8f89f0100           call 0x8c2a70
// 008a8a78  53                   push ebx
// 008a8a79  8d4f38               lea ecx, [edi + 0x38]
// 008a8a7c  e80ffeffff           call 0x8a8890
// 008a8a81  897b10               mov dword ptr [ebx + 0x10], edi
// 008a8a84  eb9b                 jmp 0x8a8a21
// 008a8a86  8d442414             lea eax, [esp + 0x14]
// 008a8a8a  50                   push eax
// 008a8a8b  56                   push esi
// 008a8a8c  8d4c2428             lea ecx, [esp + 0x28]
// 008a8a90  e82fe20700           call 0x926cc4
// 008a8a95  85c0                 test eax, eax
// 008a8a97  7529                 jne 0x8a8ac2
// 008a8a99  85ff                 test edi, edi
// 008a8a9b  740a                 je 0x8a8aa7
// 008a8a9d  8b17                 mov edx, dword ptr [edi]
// 008a8a9f  8b4248               mov eax, dword ptr [edx + 0x48]
// 008a8aa2  56                   push esi
// 008a8aa3  8bcf                 mov ecx, edi
// 008a8aa5  ffd0                 call eax
// 008a8aa7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a8aab  55                   push ebp
// 008a8aac  83c144               add ecx, 0x44
// 008a8aaf  e8bcaa0300           call 0x8e3570
// 008a8ab4  8b16                 mov edx, dword ptr [esi]
// 008a8ab6  8b4254               mov eax, dword ptr [edx + 0x54]
// 008a8ab9  8bce                 mov ecx, esi
// 008a8abb  ffd0                 call eax
// 008a8abd  bb01000000           mov ebx, 1
// 008a8ac2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008a8ac6  85ed                 test ebp, ebp
// 008a8ac8  0f8522ffffff         jne 0x8a89f0
// 008a8ace  85db                 test ebx, ebx
// 008a8ad0  0f85fdfeffff         jne 0x8a89d3
// 008a8ad6  8d4c2420             lea ecx, [esp + 0x20]
// 008a8ada  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 008a8ae2  e8d7e10700           call 0x926cbe
// 008a8ae7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008a8aeb  64890d00000000       mov dword ptr fs:[0], ecx
// 008a8af2  59                   pop ecx
// 008a8af3  5f                   pop edi
// 008a8af4  5e                   pop esi
// 008a8af5  5d                   pop ebp
// 008a8af6  5b                   pop ebx
// 008a8af7  83c434               add esp, 0x34
// 008a8afa  c3                   ret 
// copied from an identical function in another client (function ?_FreeEmptyPanes@CXTPDockingPaneLayout@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneLayout.cpp