// roc 2010-06 0081e920  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081e920
//
// 0081e920  8b442404             mov eax, dword ptr [esp + 4]
// 0081e924  83ec20               sub esp, 0x20
// 0081e927  56                   push esi
// 0081e928  50                   push eax
// 0081e929  8bf1                 mov esi, ecx
// 0081e92b  e8f0810700           call 0x896b20
// 0081e930  83f8ff               cmp eax, -1
// 0081e933  7509                 jne 0x81e93e
// 0081e935  0bc0                 or eax, eax
// 0081e937  5e                   pop esi
// 0081e938  83c420               add esp, 0x20
// 0081e93b  c20400               ret 4
// 0081e93e  8bce                 mov ecx, esi
// 0081e940  e81b250000           call 0x820e60
// 0081e945  33c9                 xor ecx, ecx
// 0081e947  394808               cmp dword ptr [eax + 8], ecx
// 0081e94a  6a20                 push 0x20
// 0081e94c  0f95c1               setne cl
// 0081e94f  8bc1                 mov eax, ecx
// 0081e951  8bce                 mov ecx, esi
// 0081e953  85c0                 test eax, eax
// 0081e955  0f84a1000000         je 0x81e9fc
// 0081e95b  6a00                 push 0
// 0081e95d  680000c400           push 0xc40000
// 0081e962  e8b397f8ff           call 0x7a811a
// 0081e967  6a20                 push 0x20
// 0081e969  6a00                 push 0
// 0081e96b  6801010200           push 0x20101
// 0081e970  8bce                 mov ecx, esi
// 0081e972  e8cf95f8ff           call 0x7a7f46
// 0081e977  e8449bffff           call 0x8184c0
// 0081e97c  83b84801000000       cmp dword ptr [eax + 0x148], 0
// 0081e983  7420                 je 0x81e9a5
// 0081e985  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 0081e98c  7417                 je 0x81e9a5
// 0081e98e  8b4620               mov eax, dword ptr [esi + 0x20]
// 0081e991  8d966c010000         lea edx, [esi + 0x16c]
// 0081e997  52                   push edx
// 0081e998  50                   push eax
// 0081e999  e842920700           call 0x897be0
// 0081e99e  8bc8                 mov ecx, eax
// 0081e9a0  e87b9d0700           call 0x898720
// 0081e9a5  53                   push ebx
// 0081e9a6  55                   push ebp
// 0081e9a7  57                   push edi
// 0081e9a8  56                   push esi
// 0081e9a9  8d4c2414             lea ecx, [esp + 0x14]
// 0081e9ad  e8fe08feff           call 0x7ff2b0
// 0081e9b2  8d4c2410             lea ecx, [esp + 0x10]
// 0081e9b6  51                   push ecx
// 0081e9b7  8d542424             lea edx, [esp + 0x24]
// 0081e9bb  52                   push edx
// 0081e9bc  e80f1ffdff           call 0x7f08d0
// 0081e9c1  8bc8                 mov ecx, eax
// 0081e9c3  e8681afdff           call 0x7f0430
// 0081e9c8  8b542418             mov edx, dword ptr [esp + 0x18]
// 0081e9cc  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0081e9d0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081e9d4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0081e9d8  8bc2                 mov eax, edx
// 0081e9da  8bfd                 mov edi, ebp
// 0081e9dc  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0081e9e0  2bc1                 sub eax, ecx
// 0081e9e2  3bcb                 cmp ecx, ebx
// 0081e9e4  c644243400           mov byte ptr [esp + 0x34], 0
// 0081e9e9  7d1f                 jge 0x81ea0a
// 0081e9eb  8bcb                 mov ecx, ebx
// 0081e9ed  8d1418               lea edx, [eax + ebx]
// 0081e9f0  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081e9f4  89542418             mov dword ptr [esp + 0x18], edx
// 0081e9f8  b301                 mov bl, 1
// 0081e9fa  eb2c                 jmp 0x81ea28
// 0081e9fc  6800004000           push 0x400000
// 0081ea01  6a00                 push 0
// 0081ea03  e81297f8ff           call 0x7a811a
// 0081ea08  eb9b                 jmp 0x81e9a5
// 0081ea0a  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0081ea0e  3bd3                 cmp edx, ebx
// 0081ea10  7e12                 jle 0x81ea24
// 0081ea12  8bd3                 mov edx, ebx
// 0081ea14  2bd8                 sub ebx, eax
// 0081ea16  8bcb                 mov ecx, ebx
// 0081ea18  89542418             mov dword ptr [esp + 0x18], edx
// 0081ea1c  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081ea20  b301                 mov bl, 1
// 0081ea22  eb04                 jmp 0x81ea28
// 0081ea24  8a5c2434             mov bl, byte ptr [esp + 0x34]
// 0081ea28  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0081ea2c  3be8                 cmp ebp, eax
// 0081ea2e  7e0e                 jle 0x81ea3e
// 0081ea30  8be8                 mov ebp, eax
// 0081ea32  2bc7                 sub eax, edi
// 0081ea34  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0081ea38  89442414             mov dword ptr [esp + 0x14], eax
// 0081ea3c  eb08                 jmp 0x81ea46
// 0081ea3e  84db                 test bl, bl
// 0081ea40  7415                 je 0x81ea57
// 0081ea42  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081ea46  6a01                 push 1
// 0081ea48  2be8                 sub ebp, eax
// 0081ea4a  55                   push ebp
// 0081ea4b  2bd1                 sub edx, ecx
// 0081ea4d  52                   push edx
// 0081ea4e  50                   push eax
// 0081ea4f  51                   push ecx
// 0081ea50  8bce                 mov ecx, esi
// 0081ea52  e81b93f8ff           call 0x7a7d72
// 0081ea57  56                   push esi
// 0081ea58  e8a32dfeff           call 0x801800
// 0081ea5d  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0081ea63  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0081ea69  8b5678               mov edx, dword ptr [esi + 0x78]
// 0081ea6c  83c404               add esp, 4
// 0081ea6f  50                   push eax
// 0081ea70  8b4220               mov eax, dword ptr [edx + 0x20]
// 0081ea73  51                   push ecx
// 0081ea74  682a270000           push 0x272a
// 0081ea79  50                   push eax
// 0081ea7a  ff1554ba9e00         call dword ptr [0x9eba54]
// 0081ea80  5f                   pop edi
// 0081ea81  5d                   pop ebp
// 0081ea82  5b                   pop ebx
// 0081ea83  33c0                 xor eax, eax
// 0081ea85  5e                   pop esi
// 0081ea86  83c420               add esp, 0x20
// 0081ea89  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnCreate@CXTColorPopup@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
