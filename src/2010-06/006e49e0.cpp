// roc 2010-06 006e49e0  unit: RBX::VLuaDragger::?$FactoryProduct  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e49e0
//
// 006e49e0  83ec08               sub esp, 8
// 006e49e3  53                   push ebx
// 006e49e4  55                   push ebp
// 006e49e5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006e49e9  56                   push esi
// 006e49ea  8bf1                 mov esi, ecx
// 006e49ec  57                   push edi
// 006e49ed  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 006e49f3  c7450000000000       mov dword ptr [ebp], 0
// 006e49fa  85f6                 test esi, esi
// 006e49fc  740e                 je 0x6e4a0c
// 006e49fe  8b442424             mov eax, dword ptr [esp + 0x24]
// 006e4a02  39460c               cmp dword ptr [esi + 0xc], eax
// 006e4a05  7705                 ja 0x6e4a0c
// 006e4a07  3b4610               cmp eax, dword ptr [esi + 0x10]
// 006e4a0a  7606                 jbe 0x6e4a12
// 006e4a0c  ffd7                 call edi
// 006e4a0e  8b442424             mov eax, dword ptr [esp + 0x24]
// 006e4a12  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006e4a16  8b0e                 mov ecx, dword ptr [esi]
// 006e4a18  894d00               mov dword ptr [ebp], ecx
// 006e4a1b  894504               mov dword ptr [ebp + 4], eax
// 006e4a1e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 006e4a21  7705                 ja 0x6e4a28
// 006e4a23  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 006e4a26  7606                 jbe 0x6e4a2e
// 006e4a28  ffd7                 call edi
// 006e4a2a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006e4a2e  8b4500               mov eax, dword ptr [ebp]
// 006e4a31  8b0e                 mov ecx, dword ptr [esi]
// 006e4a33  85c0                 test eax, eax
// 006e4a35  7404                 je 0x6e4a3b
// 006e4a37  3bc1                 cmp eax, ecx
// 006e4a39  7402                 je 0x6e4a3d
// 006e4a3b  ffd7                 call edi
// 006e4a3d  8b4504               mov eax, dword ptr [ebp + 4]
// 006e4a40  89442414             mov dword ptr [esp + 0x14], eax
// 006e4a44  3bc3                 cmp eax, ebx
// 006e4a46  7449                 je 0x6e4a91
// 006e4a48  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006e4a4b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 006e4a50  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006e4a54  52                   push edx
// 006e4a55  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e4a59  c644241400           mov byte ptr [esp + 0x14], 0
// 006e4a5e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e4a62  51                   push ecx
// 006e4a63  52                   push edx
// 006e4a64  50                   push eax
// 006e4a65  57                   push edi
// 006e4a66  53                   push ebx
// 006e4a67  e884ed0700           call 0x7637f0
// 006e4a6c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006e4a70  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006e4a74  2bfb                 sub edi, ebx
// 006e4a76  51                   push ecx
// 006e4a77  c1ff03               sar edi, 3
// 006e4a7a  8d3cf8               lea edi, [eax + edi*8]
// 006e4a7d  8b4610               mov eax, dword ptr [esi + 0x10]
// 006e4a80  8d5608               lea edx, [esi + 8]
// 006e4a83  52                   push edx
// 006e4a84  50                   push eax
// 006e4a85  57                   push edi
// 006e4a86  e87568fdff           call 0x6bb300
// 006e4a8b  83c428               add esp, 0x28
// 006e4a8e  897e10               mov dword ptr [esi + 0x10], edi
// 006e4a91  5f                   pop edi
// 006e4a92  5e                   pop esi
// 006e4a93  8bc5                 mov eax, ebp
// 006e4a95  5d                   pop ebp
// 006e4a96  5b                   pop ebx
// 006e4a97  83c408               add esp, 8
// 006e4a9a  c21400               ret 0x14
// library openrbx-client/App\v8tree\Service.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
