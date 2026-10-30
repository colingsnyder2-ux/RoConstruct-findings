// roc 2009-12 0080dbc0  unit: IIHH::?$CMap  size: 303 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080dbc0
//
// 0080dbc0  6aff                 push -1
// 0080dbc2  68689c9500           push 0x959c68
// 0080dbc7  64a100000000         mov eax, dword ptr fs:[0]
// 0080dbcd  50                   push eax
// 0080dbce  83ec34               sub esp, 0x34
// 0080dbd1  53                   push ebx
// 0080dbd2  56                   push esi
// 0080dbd3  57                   push edi
// 0080dbd4  a10052b600           mov eax, dword ptr [0xb65200]
// 0080dbd9  33c4                 xor eax, esp
// 0080dbdb  50                   push eax
// 0080dbdc  8d442444             lea eax, [esp + 0x44]
// 0080dbe0  64a300000000         mov dword ptr fs:[0], eax
// 0080dbe6  8bf9                 mov edi, ecx
// 0080dbe8  e8d3e5ffff           call 0x80c1c0
// 0080dbed  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 0080dbf0  8b742454             mov esi, dword ptr [esp + 0x54]
// 0080dbf4  85db                 test ebx, ebx
// 0080dbf6  747b                 je 0x80dc73
// 0080dbf8  8bce                 mov ecx, esi
// 0080dbfa  e8a1ccffff           call 0x80a8a0
// 0080dbff  85c0                 test eax, eax
// 0080dc01  7570                 jne 0x80dc73
// 0080dc03  394320               cmp dword ptr [ebx + 0x20], eax
// 0080dc06  746b                 je 0x80dc73
// 0080dc08  394620               cmp dword ptr [esi + 0x20], eax
// 0080dc0b  7466                 je 0x80dc73
// 0080dc0d  8d442410             lea eax, [esp + 0x10]
// 0080dc11  50                   push eax
// 0080dc12  e8f9b4ffff           call 0x809110
// 0080dc17  8b4804               mov ecx, dword ptr [eax + 4]
// 0080dc1a  8b10                 mov edx, dword ptr [eax]
// 0080dc1c  51                   push ecx
// 0080dc1d  52                   push edx
// 0080dc1e  8bcb                 mov ecx, ebx
// 0080dc20  e8ebfeffff           call 0x80db10
// 0080dc25  837e1400             cmp dword ptr [esi + 0x14], 0
// 0080dc29  8bd8                 mov ebx, eax
// 0080dc2b  750d                 jne 0x80dc3a
// 0080dc2d  56                   push esi
// 0080dc2e  8bcb                 mov ecx, ebx
// 0080dc30  e8dbf8ffff           call 0x80d510
// 0080dc35  894714               mov dword ptr [edi + 0x14], eax
// 0080dc38  eb7c                 jmp 0x80dcb6
// 0080dc3a  8d4c2420             lea ecx, [esp + 0x20]
// 0080dc3e  e8edcbffff           call 0x80a830
// 0080dc43  56                   push esi
// 0080dc44  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0080dc4c  e86fffffff           call 0x80dbc0
// 0080dc51  8d442420             lea eax, [esp + 0x20]
// 0080dc55  50                   push eax
// 0080dc56  8bcb                 mov ecx, ebx
// 0080dc58  e8b3f8ffff           call 0x80d510
// 0080dc5d  8d4c2420             lea ecx, [esp + 0x20]
// 0080dc61  894714               mov dword ptr [edi + 0x14], eax
// 0080dc64  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0080dc6c  e86ff1ffff           call 0x80cde0
// 0080dc71  eb43                 jmp 0x80dcb6
// 0080dc73  8b06                 mov eax, dword ptr [esi]
// 0080dc75  85c0                 test eax, eax
// 0080dc77  7409                 je 0x80dc82
// 0080dc79  50                   push eax
// 0080dc7a  ff1508cb9800         call dword ptr [0x98cb08]
// 0080dc80  8907                 mov dword ptr [edi], eax
// 0080dc82  8b4e04               mov ecx, dword ptr [esi + 4]
// 0080dc85  85c9                 test ecx, ecx
// 0080dc87  741a                 je 0x80dca3
// 0080dc89  837e0800             cmp dword ptr [esi + 8], 0
// 0080dc8d  7405                 je 0x80dc94
// 0080dc8f  8d4708               lea eax, [edi + 8]
// 0080dc92  eb02                 jmp 0x80dc96
// 0080dc94  33c0                 xor eax, eax
// 0080dc96  50                   push eax
// 0080dc97  51                   push ecx
// 0080dc98  e883cdffff           call 0x80aa20
// 0080dc9d  83c408               add esp, 8
// 0080dca0  894704               mov dword ptr [edi + 4], eax
// 0080dca3  837e1400             cmp dword ptr [esi + 0x14], 0
// 0080dca7  740d                 je 0x80dcb6
// 0080dca9  8b4614               mov eax, dword ptr [esi + 0x14]
// 0080dcac  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0080dcaf  50                   push eax
// 0080dcb0  57                   push edi
// 0080dcb1  e81aeeffff           call 0x80cad0
// 0080dcb6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0080dcb9  8d542418             lea edx, [esp + 0x18]
// 0080dcbd  894f20               mov dword ptr [edi + 0x20], ecx
// 0080dcc0  52                   push edx
// 0080dcc1  8bce                 mov ecx, esi
// 0080dcc3  c7470c01000000       mov dword ptr [edi + 0xc], 1
// 0080dcca  e841b4ffff           call 0x809110
// 0080dccf  8b08                 mov ecx, dword ptr [eax]
// 0080dcd1  894f18               mov dword ptr [edi + 0x18], ecx
// 0080dcd4  8b5004               mov edx, dword ptr [eax + 4]
// 0080dcd7  89571c               mov dword ptr [edi + 0x1c], edx
// 0080dcda  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080dcde  64890d00000000       mov dword ptr fs:[0], ecx
// 0080dce5  59                   pop ecx
// 0080dce6  5f                   pop edi
// 0080dce7  5e                   pop esi
// 0080dce8  5b                   pop ebx
// 0080dce9  83c440               add esp, 0x40
// 0080dcec  c20400               ret 4
// copied from an identical function in another client (function ?CopyHandle@CXTPImageManagerIconHandle@@QAEXAAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp