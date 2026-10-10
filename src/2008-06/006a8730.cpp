// roc 2008-06 006a8730  unit: CXTPControlComboBoxList  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a8730
//
// 006a8730  83ec10               sub esp, 0x10
// 006a8733  53                   push ebx
// 006a8734  55                   push ebp
// 006a8735  56                   push esi
// 006a8736  8bf1                 mov esi, ecx
// 006a8738  8b9ef0000000         mov ebx, dword ptr [esi + 0xf0]
// 006a873e  57                   push edi
// 006a873f  81e3ffffbfff         and ebx, 0xffbfffff
// 006a8745  e876f20000           call 0x6b79c0
// 006a874a  8bf8                 mov edi, eax
// 006a874c  33ed                 xor ebp, ebp
// 006a874e  3bfd                 cmp edi, ebp
// 006a8750  746b                 je 0x6a87bd
// 006a8752  f6c330               test bl, 0x30
// 006a8755  7466                 je 0x6a87bd
// 006a8757  8b06                 mov eax, dword ptr [esi]
// 006a8759  8b5060               mov edx, dword ptr [eax + 0x60]
// 006a875c  55                   push ebp
// 006a875d  55                   push ebp
// 006a875e  57                   push edi
// 006a875f  8d4c241c             lea ecx, [esp + 0x1c]
// 006a8763  51                   push ecx
// 006a8764  81cb01002042         or ebx, 0x42200001
// 006a876a  53                   push ebx
// 006a876b  6816b78000           push 0x80b716
// 006a8770  68d8138500           push 0x8513d8
// 006a8775  6880020000           push 0x280
// 006a877a  8bce                 mov ecx, esi
// 006a877c  896c2430             mov dword ptr [esp + 0x30], ebp
// 006a8780  896c2434             mov dword ptr [esp + 0x34], ebp
// 006a8784  896c2438             mov dword ptr [esp + 0x38], ebp
// 006a8788  896c243c             mov dword ptr [esp + 0x3c], ebp
// 006a878c  ffd2                 call edx
// 006a878e  8b4620               mov eax, dword ptr [esi + 0x20]
// 006a8791  8b1dd82d8000         mov ebx, dword ptr [0x802dd8]
// 006a8797  55                   push ebp
// 006a8798  6af8                 push -8
// 006a879a  50                   push eax
// 006a879b  ffd3                 call ebx
// 006a879d  55                   push ebp
// 006a879e  6800000080           push 0x80000000
// 006a87a3  6800000040           push 0x40000000
// 006a87a8  8bce                 mov ecx, esi
// 006a87aa  e86386ffff           call 0x6a0e12
// 006a87af  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006a87b2  8b5620               mov edx, dword ptr [esi + 0x20]
// 006a87b5  51                   push ecx
// 006a87b6  6af8                 push -8
// 006a87b8  52                   push edx
// 006a87b9  ffd3                 call ebx
// 006a87bb  eb37                 jmp 0x6a87f4
// 006a87bd  8b06                 mov eax, dword ptr [esi]
// 006a87bf  8b5060               mov edx, dword ptr [eax + 0x60]
// 006a87c2  55                   push ebp
// 006a87c3  55                   push ebp
// 006a87c4  55                   push ebp
// 006a87c5  8d4c241c             lea ecx, [esp + 0x1c]
// 006a87c9  51                   push ecx
// 006a87ca  81cb00002082         or ebx, 0x82200000
// 006a87d0  53                   push ebx
// 006a87d1  6816b78000           push 0x80b716
// 006a87d6  68d8138500           push 0x8513d8
// 006a87db  6880020000           push 0x280
// 006a87e0  8bce                 mov ecx, esi
// 006a87e2  896c2430             mov dword ptr [esp + 0x30], ebp
// 006a87e6  896c2434             mov dword ptr [esp + 0x34], ebp
// 006a87ea  896c2438             mov dword ptr [esp + 0x38], ebp
// 006a87ee  896c243c             mov dword ptr [esp + 0x3c], ebp
// 006a87f2  ffd2                 call edx
// 006a87f4  39ae04010000         cmp dword ptr [esi + 0x104], ebp
// 006a87fa  743e                 je 0x6a883a
// 006a87fc  8b865c020000         mov eax, dword ptr [esi + 0x25c]
// 006a8802  83f8ff               cmp eax, -1
// 006a8805  7433                 je 0x6a883a
// 006a8807  55                   push ebp
// 006a8808  50                   push eax
// 006a8809  8bce                 mov ecx, esi
// 006a880b  e840c70000           call 0x6b4f50
// 006a8810  8bc8                 mov ecx, eax
// 006a8812  e8397d0100           call 0x6c0550
// 006a8817  3bc5                 cmp eax, ebp
// 006a8819  741f                 je 0x6a883a
// 006a881b  8bc8                 mov ecx, eax
// 006a881d  e83e120100           call 0x6b9a60
// 006a8822  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006a8825  83c004               add eax, 4
// 006a8828  0fb7c0               movzx eax, ax
// 006a882b  50                   push eax
// 006a882c  6aff                 push -1
// 006a882e  68a0010000           push 0x1a0
// 006a8833  51                   push ecx
// 006a8834  ff15142e8000         call dword ptr [0x802e14]
// 006a883a  5f                   pop edi
// 006a883b  5e                   pop esi
// 006a883c  5d                   pop ebp
// 006a883d  5b                   pop ebx
// 006a883e  83c410               add esp, 0x10
// 006a8841  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?CreateListBox@CXTPControlComboBoxList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
