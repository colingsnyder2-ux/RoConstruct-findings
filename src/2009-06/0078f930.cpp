// roc 2009-06 0078f930  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078f930
//
// 0078f930  8b442404             mov eax, dword ptr [esp + 4]
// 0078f934  83ec20               sub esp, 0x20
// 0078f937  56                   push esi
// 0078f938  50                   push eax
// 0078f939  8bf1                 mov esi, ecx
// 0078f93b  e8d0830700           call 0x807d10
// 0078f940  83f8ff               cmp eax, -1
// 0078f943  7509                 jne 0x78f94e
// 0078f945  0bc0                 or eax, eax
// 0078f947  5e                   pop esi
// 0078f948  83c420               add esp, 0x20
// 0078f94b  c20400               ret 4
// 0078f94e  8bce                 mov ecx, esi
// 0078f950  e81b180000           call 0x791170
// 0078f955  33c9                 xor ecx, ecx
// 0078f957  394808               cmp dword ptr [eax + 8], ecx
// 0078f95a  6a20                 push 0x20
// 0078f95c  0f95c1               setne cl
// 0078f95f  8bc1                 mov eax, ecx
// 0078f961  8bce                 mov ecx, esi
// 0078f963  85c0                 test eax, eax
// 0078f965  0f84a1000000         je 0x78fa0c
// 0078f96b  6a00                 push 0
// 0078f96d  680000c400           push 0xc40000
// 0078f972  e83b98f8ff           call 0x7191b2
// 0078f977  6a20                 push 0x20
// 0078f979  6a00                 push 0
// 0078f97b  6801010200           push 0x20101
// 0078f980  8bce                 mov ecx, esi
// 0078f982  e85196f8ff           call 0x718fd8
// 0078f987  e8549bffff           call 0x7894e0
// 0078f98c  83b84801000000       cmp dword ptr [eax + 0x148], 0
// 0078f993  7420                 je 0x78f9b5
// 0078f995  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 0078f99c  7417                 je 0x78f9b5
// 0078f99e  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078f9a1  8d966c010000         lea edx, [esi + 0x16c]
// 0078f9a7  52                   push edx
// 0078f9a8  50                   push eax
// 0078f9a9  e842940700           call 0x808df0
// 0078f9ae  8bc8                 mov ecx, eax
// 0078f9b0  e87b9f0700           call 0x809930
// 0078f9b5  53                   push ebx
// 0078f9b6  55                   push ebp
// 0078f9b7  57                   push edi
// 0078f9b8  56                   push esi
// 0078f9b9  8d4c2414             lea ecx, [esp + 0x14]
// 0078f9bd  e8ae0afeff           call 0x770470
// 0078f9c2  8d4c2410             lea ecx, [esp + 0x10]
// 0078f9c6  51                   push ecx
// 0078f9c7  8d542424             lea edx, [esp + 0x24]
// 0078f9cb  52                   push edx
// 0078f9cc  e8cf1ffdff           call 0x7619a0
// 0078f9d1  8bc8                 mov ecx, eax
// 0078f9d3  e8281bfdff           call 0x761500
// 0078f9d8  8b542418             mov edx, dword ptr [esp + 0x18]
// 0078f9dc  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0078f9e0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078f9e4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0078f9e8  8bc2                 mov eax, edx
// 0078f9ea  8bfd                 mov edi, ebp
// 0078f9ec  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0078f9f0  2bc1                 sub eax, ecx
// 0078f9f2  3bcb                 cmp ecx, ebx
// 0078f9f4  c644243400           mov byte ptr [esp + 0x34], 0
// 0078f9f9  7d1f                 jge 0x78fa1a
// 0078f9fb  8bcb                 mov ecx, ebx
// 0078f9fd  8d1418               lea edx, [eax + ebx]
// 0078fa00  894c2410             mov dword ptr [esp + 0x10], ecx
// 0078fa04  89542418             mov dword ptr [esp + 0x18], edx
// 0078fa08  b301                 mov bl, 1
// 0078fa0a  eb2c                 jmp 0x78fa38
// 0078fa0c  6800004000           push 0x400000
// 0078fa11  6a00                 push 0
// 0078fa13  e89a97f8ff           call 0x7191b2
// 0078fa18  eb9b                 jmp 0x78f9b5
// 0078fa1a  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0078fa1e  3bd3                 cmp edx, ebx
// 0078fa20  7e12                 jle 0x78fa34
// 0078fa22  8bd3                 mov edx, ebx
// 0078fa24  2bd8                 sub ebx, eax
// 0078fa26  8bcb                 mov ecx, ebx
// 0078fa28  89542418             mov dword ptr [esp + 0x18], edx
// 0078fa2c  894c2410             mov dword ptr [esp + 0x10], ecx
// 0078fa30  b301                 mov bl, 1
// 0078fa32  eb04                 jmp 0x78fa38
// 0078fa34  8a5c2434             mov bl, byte ptr [esp + 0x34]
// 0078fa38  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0078fa3c  3be8                 cmp ebp, eax
// 0078fa3e  7e0e                 jle 0x78fa4e
// 0078fa40  8be8                 mov ebp, eax
// 0078fa42  2bc7                 sub eax, edi
// 0078fa44  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0078fa48  89442414             mov dword ptr [esp + 0x14], eax
// 0078fa4c  eb08                 jmp 0x78fa56
// 0078fa4e  84db                 test bl, bl
// 0078fa50  7415                 je 0x78fa67
// 0078fa52  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078fa56  6a01                 push 1
// 0078fa58  2be8                 sub ebp, eax
// 0078fa5a  55                   push ebp
// 0078fa5b  2bd1                 sub edx, ecx
// 0078fa5d  52                   push edx
// 0078fa5e  50                   push eax
// 0078fa5f  51                   push ecx
// 0078fa60  8bce                 mov ecx, esi
// 0078fa62  e8a393f8ff           call 0x718e0a
// 0078fa67  56                   push esi
// 0078fa68  e80330feff           call 0x772a70
// 0078fa6d  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0078fa73  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0078fa79  8b5678               mov edx, dword ptr [esi + 0x78]
// 0078fa7c  83c404               add esp, 4
// 0078fa7f  50                   push eax
// 0078fa80  8b4220               mov eax, dword ptr [edx + 0x20]
// 0078fa83  51                   push ecx
// 0078fa84  682a270000           push 0x272a
// 0078fa89  50                   push eax
// 0078fa8a  ff1590ee8900         call dword ptr [0x89ee90]
// 0078fa90  5f                   pop edi
// 0078fa91  5d                   pop ebp
// 0078fa92  5b                   pop ebx
// 0078fa93  33c0                 xor eax, eax
// 0078fa95  5e                   pop esi
// 0078fa96  83c420               add esp, 0x20
// 0078fa99  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnCreate@CXTColorPopup@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
