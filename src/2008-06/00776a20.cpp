// roc 2008-06 00776a20  unit: CXTPPropertyGridPaintManager  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00776a20
//
// 00776a20  56                   push esi
// 00776a21  57                   push edi
// 00776a22  8bf1                 mov esi, ecx
// 00776a24  e8e7aef6ff           call 0x6e1910
// 00776a29  e81293f6ff           call 0x6dfd40
// 00776a2e  6a0d                 push 0xd
// 00776a30  8bc8                 mov ecx, eax
// 00776a32  e8e98af6ff           call 0x6df520
// 00776a37  89464c               mov dword ptr [esi + 0x4c], eax
// 00776a3a  e80193f6ff           call 0x6dfd40
// 00776a3f  6a0e                 push 0xe
// 00776a41  8bc8                 mov ecx, eax
// 00776a43  e8d88af6ff           call 0x6df520
// 00776a48  894658               mov dword ptr [esi + 0x58], eax
// 00776a4b  e8f092f6ff           call 0x6dfd40
// 00776a50  6a0f                 push 0xf
// 00776a52  8bc8                 mov ecx, eax
// 00776a54  e8c78af6ff           call 0x6df520
// 00776a59  894634               mov dword ptr [esi + 0x34], eax
// 00776a5c  e8df92f6ff           call 0x6dfd40
// 00776a61  6a10                 push 0x10
// 00776a63  8bc8                 mov ecx, eax
// 00776a65  e8b68af6ff           call 0x6df520
// 00776a6a  894640               mov dword ptr [esi + 0x40], eax
// 00776a6d  e8ce92f6ff           call 0x6dfd40
// 00776a72  6a02                 push 2
// 00776a74  8bc8                 mov ecx, eax
// 00776a76  e8a58af6ff           call 0x6df520
// 00776a7b  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00776a7e  89818c000000         mov dword ptr [ecx + 0x8c], eax
// 00776a84  8b4638               mov eax, dword ptr [esi + 0x38]
// 00776a87  83f8ff               cmp eax, -1
// 00776a8a  7503                 jne 0x776a8f
// 00776a8c  8b4634               mov eax, dword ptr [esi + 0x34]
// 00776a8f  8b5674               mov edx, dword ptr [esi + 0x74]
// 00776a92  894238               mov dword ptr [edx + 0x38], eax
// 00776a95  e8a692f6ff           call 0x6dfd40
// 00776a9a  6a12                 push 0x12
// 00776a9c  8bc8                 mov ecx, eax
// 00776a9e  e87d8af6ff           call 0x6df520
// 00776aa3  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00776aa6  6a00                 push 0
// 00776aa8  894144               mov dword ptr [ecx + 0x44], eax
// 00776aab  ff15582b8000         call dword ptr [0x802b58]
// 00776ab1  8b5674               mov edx, dword ptr [esi + 0x74]
// 00776ab4  894250               mov dword ptr [edx + 0x50], eax
// 00776ab7  e88492f6ff           call 0x6dfd40
// 00776abc  6a11                 push 0x11
// 00776abe  8bc8                 mov ecx, eax
// 00776ac0  e85b8af6ff           call 0x6df520
// 00776ac5  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00776ac8  894168               mov dword ptr [ecx + 0x68], eax
// 00776acb  e87092f6ff           call 0x6dfd40
// 00776ad0  6a05                 push 5
// 00776ad2  8bc8                 mov ecx, eax
// 00776ad4  e8478af6ff           call 0x6df520
// 00776ad9  8b5674               mov edx, dword ptr [esi + 0x74]
// 00776adc  894274               mov dword ptr [edx + 0x74], eax
// 00776adf  e85c92f6ff           call 0x6dfd40
// 00776ae4  6a08                 push 8
// 00776ae6  8bc8                 mov ecx, eax
// 00776ae8  e8338af6ff           call 0x6df520
// 00776aed  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00776af0  89415c               mov dword ptr [ecx + 0x5c], eax
// 00776af3  e84892f6ff           call 0x6dfd40
// 00776af8  6a11                 push 0x11
// 00776afa  8bc8                 mov ecx, eax
// 00776afc  e81f8af6ff           call 0x6df520
// 00776b01  8b5674               mov edx, dword ptr [esi + 0x74]
// 00776b04  898280000000         mov dword ptr [edx + 0x80], eax
// 00776b0a  e83fa3f2ff           call 0x6a0e4e
// 00776b0f  85c0                 test eax, eax
// 00776b11  7428                 je 0x776b3b
// 00776b13  8b10                 mov edx, dword ptr [eax]
// 00776b15  8bc8                 mov ecx, eax
// 00776b17  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00776b1a  ffd0                 call eax
// 00776b1c  85c0                 test eax, eax
// 00776b1e  741b                 je 0x776b3b
// 00776b20  e829a3f2ff           call 0x6a0e4e
// 00776b25  85c0                 test eax, eax
// 00776b27  7412                 je 0x776b3b
// 00776b29  8b10                 mov edx, dword ptr [eax]
// 00776b2b  8bc8                 mov ecx, eax
// 00776b2d  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00776b30  ffd0                 call eax
// 00776b32  85c0                 test eax, eax
// 00776b34  7405                 je 0x776b3b
// 00776b36  8b7820               mov edi, dword ptr [eax + 0x20]
// 00776b39  eb02                 jmp 0x776b3d
// 00776b3b  33ff                 xor edi, edi
// 00776b3d  68c05f8500           push 0x855fc0
// 00776b42  57                   push edi
// 00776b43  8d4e08               lea ecx, [esi + 8]
// 00776b46  e8251afaff           call 0x718570
// 00776b4b  6864198500           push 0x851964
// 00776b50  57                   push edi
// 00776b51  8d4e14               lea ecx, [esi + 0x14]
// 00776b54  e8171afaff           call 0x718570
// 00776b59  689c348600           push 0x86349c
// 00776b5e  57                   push edi
// 00776b5f  8d4e20               lea ecx, [esi + 0x20]
// 00776b62  e8091afaff           call 0x718570
// 00776b67  5f                   pop edi
// 00776b68  5e                   pop esi
// 00776b69  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
