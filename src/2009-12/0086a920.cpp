// roc 2009-12 0086a920  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086a920
//
// 0086a920  8b442404             mov eax, dword ptr [esp + 4]
// 0086a924  83ec20               sub esp, 0x20
// 0086a927  56                   push esi
// 0086a928  50                   push eax
// 0086a929  8bf1                 mov esi, ecx
// 0086a92b  e8e07e0700           call 0x8e2810
// 0086a930  83f8ff               cmp eax, -1
// 0086a933  7509                 jne 0x86a93e
// 0086a935  0bc0                 or eax, eax
// 0086a937  5e                   pop esi
// 0086a938  83c420               add esp, 0x20
// 0086a93b  c20400               ret 4
// 0086a93e  8bce                 mov ecx, esi
// 0086a940  e82b6f0700           call 0x8e1870
// 0086a945  33c9                 xor ecx, ecx
// 0086a947  394808               cmp dword ptr [eax + 8], ecx
// 0086a94a  6a20                 push 0x20
// 0086a94c  0f95c1               setne cl
// 0086a94f  8bc1                 mov eax, ecx
// 0086a951  8bce                 mov ecx, esi
// 0086a953  85c0                 test eax, eax
// 0086a955  0f84a1000000         je 0x86a9fc
// 0086a95b  6a00                 push 0
// 0086a95d  680000c400           push 0xc40000
// 0086a962  e87396f8ff           call 0x7f3fda
// 0086a967  6a20                 push 0x20
// 0086a969  6a00                 push 0
// 0086a96b  6801010200           push 0x20101
// 0086a970  8bce                 mov ecx, esi
// 0086a972  e88994f8ff           call 0x7f3e00
// 0086a977  e8649bffff           call 0x8644e0
// 0086a97c  83b84801000000       cmp dword ptr [eax + 0x148], 0
// 0086a983  7420                 je 0x86a9a5
// 0086a985  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 0086a98c  7417                 je 0x86a9a5
// 0086a98e  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086a991  8d966c010000         lea edx, [esi + 0x16c]
// 0086a997  52                   push edx
// 0086a998  50                   push eax
// 0086a999  e8328f0700           call 0x8e38d0
// 0086a99e  8bc8                 mov ecx, eax
// 0086a9a0  e86b9a0700           call 0x8e4410
// 0086a9a5  53                   push ebx
// 0086a9a6  55                   push ebp
// 0086a9a7  57                   push edi
// 0086a9a8  56                   push esi
// 0086a9a9  8d4c2414             lea ecx, [esp + 0x14]
// 0086a9ad  e8be08feff           call 0x84b270
// 0086a9b2  8d4c2410             lea ecx, [esp + 0x10]
// 0086a9b6  51                   push ecx
// 0086a9b7  8d542424             lea edx, [esp + 0x24]
// 0086a9bb  52                   push edx
// 0086a9bc  e8af1dfdff           call 0x83c770
// 0086a9c1  8bc8                 mov ecx, eax
// 0086a9c3  e80819fdff           call 0x83c2d0
// 0086a9c8  8b542418             mov edx, dword ptr [esp + 0x18]
// 0086a9cc  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0086a9d0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086a9d4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0086a9d8  8bc2                 mov eax, edx
// 0086a9da  8bfd                 mov edi, ebp
// 0086a9dc  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0086a9e0  2bc1                 sub eax, ecx
// 0086a9e2  3bcb                 cmp ecx, ebx
// 0086a9e4  c644243400           mov byte ptr [esp + 0x34], 0
// 0086a9e9  7d1f                 jge 0x86aa0a
// 0086a9eb  8bcb                 mov ecx, ebx
// 0086a9ed  8d1418               lea edx, [eax + ebx]
// 0086a9f0  894c2410             mov dword ptr [esp + 0x10], ecx
// 0086a9f4  89542418             mov dword ptr [esp + 0x18], edx
// 0086a9f8  b301                 mov bl, 1
// 0086a9fa  eb2c                 jmp 0x86aa28
// 0086a9fc  6800004000           push 0x400000
// 0086aa01  6a00                 push 0
// 0086aa03  e8d295f8ff           call 0x7f3fda
// 0086aa08  eb9b                 jmp 0x86a9a5
// 0086aa0a  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0086aa0e  3bd3                 cmp edx, ebx
// 0086aa10  7e12                 jle 0x86aa24
// 0086aa12  8bd3                 mov edx, ebx
// 0086aa14  2bd8                 sub ebx, eax
// 0086aa16  8bcb                 mov ecx, ebx
// 0086aa18  89542418             mov dword ptr [esp + 0x18], edx
// 0086aa1c  894c2410             mov dword ptr [esp + 0x10], ecx
// 0086aa20  b301                 mov bl, 1
// 0086aa22  eb04                 jmp 0x86aa28
// 0086aa24  8a5c2434             mov bl, byte ptr [esp + 0x34]
// 0086aa28  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0086aa2c  3be8                 cmp ebp, eax
// 0086aa2e  7e0e                 jle 0x86aa3e
// 0086aa30  8be8                 mov ebp, eax
// 0086aa32  2bc7                 sub eax, edi
// 0086aa34  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0086aa38  89442414             mov dword ptr [esp + 0x14], eax
// 0086aa3c  eb08                 jmp 0x86aa46
// 0086aa3e  84db                 test bl, bl
// 0086aa40  7415                 je 0x86aa57
// 0086aa42  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086aa46  6a01                 push 1
// 0086aa48  2be8                 sub ebp, eax
// 0086aa4a  55                   push ebp
// 0086aa4b  2bd1                 sub edx, ecx
// 0086aa4d  52                   push edx
// 0086aa4e  50                   push eax
// 0086aa4f  51                   push ecx
// 0086aa50  8bce                 mov ecx, esi
// 0086aa52  e8db91f8ff           call 0x7f3c32
// 0086aa57  56                   push esi
// 0086aa58  e8432dfeff           call 0x84d7a0
// 0086aa5d  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0086aa63  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0086aa69  8b5678               mov edx, dword ptr [esi + 0x78]
// 0086aa6c  83c404               add esp, 4
// 0086aa6f  50                   push eax
// 0086aa70  8b4220               mov eax, dword ptr [edx + 0x20]
// 0086aa73  51                   push ecx
// 0086aa74  682a270000           push 0x272a
// 0086aa79  50                   push eax
// 0086aa7a  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0086aa80  5f                   pop edi
// 0086aa81  5d                   pop ebp
// 0086aa82  5b                   pop ebx
// 0086aa83  33c0                 xor eax, eax
// 0086aa85  5e                   pop esi
// 0086aa86  83c420               add esp, 0x20
// 0086aa89  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnCreate@CXTColorPopup@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
