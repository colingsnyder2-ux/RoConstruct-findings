// roc 2009-12 008039a0  unit: CXTPPaintManager  size: 433 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008039a0
//
// 008039a0  6aff                 push -1
// 008039a2  6851949500           push 0x959451
// 008039a7  64a100000000         mov eax, dword ptr fs:[0]
// 008039ad  50                   push eax
// 008039ae  83ec30               sub esp, 0x30
// 008039b1  55                   push ebp
// 008039b2  56                   push esi
// 008039b3  57                   push edi
// 008039b4  a10052b600           mov eax, dword ptr [0xb65200]
// 008039b9  33c4                 xor eax, esp
// 008039bb  50                   push eax
// 008039bc  8d442440             lea eax, [esp + 0x40]
// 008039c0  64a300000000         mov dword ptr fs:[0], eax
// 008039c6  8bf9                 mov edi, ecx
// 008039c8  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 008039cc  83bd0001000004       cmp dword ptr [ebp + 0x100], 4
// 008039d3  0f8552010000         jne 0x803b2b
// 008039d9  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 008039dc  8d442420             lea eax, [esp + 0x20]
// 008039e0  50                   push eax
// 008039e1  51                   push ecx
// 008039e2  ff1550cc9800         call dword ptr [0x98cc50]
// 008039e8  8b742454             mov esi, dword ptr [esp + 0x54]
// 008039ec  85f6                 test esi, esi
// 008039ee  0f8437010000         je 0x803b2b
// 008039f4  8d9798000000         lea edx, [edi + 0x98]
// 008039fa  52                   push edx
// 008039fb  56                   push esi
// 008039fc  8d4c2438             lea ecx, [esp + 0x38]
// 00803a00  e85b7c0400           call 0x84b660
// 00803a05  8b4e08               mov ecx, dword ptr [esi + 8]
// 00803a08  8d442410             lea eax, [esp + 0x10]
// 00803a0c  50                   push eax
// 00803a0d  6a01                 push 1
// 00803a0f  6868619a00           push 0x9a6168
// 00803a14  51                   push ecx
// 00803a15  c744245800000000     mov dword ptr [esp + 0x58], 0
// 00803a1d  ff156cb19800         call dword ptr [0x98b16c]
// 00803a23  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00803a27  83f90f               cmp ecx, 0xf
// 00803a2a  7d05                 jge 0x803a31
// 00803a2c  b90f000000           mov ecx, 0xf
// 00803a31  8b442428             mov eax, dword ptr [esp + 0x28]
// 00803a35  83c103               add ecx, 3
// 00803a38  51                   push ecx
// 00803a39  83c0fd               add eax, -3
// 00803a3c  50                   push eax
// 00803a3d  6a03                 push 3
// 00803a3f  6a03                 push 3
// 00803a41  8d542430             lea edx, [esp + 0x30]
// 00803a45  52                   push edx
// 00803a46  ff1538ca9800         call dword ptr [0x98ca38]
// 00803a4c  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 00803a51  0f8493000000         je 0x803aea
// 00803a57  6a01                 push 1
// 00803a59  8bce                 mov ecx, esi
// 00803a5b  e8302a1200           call 0x926490
// 00803a60  8b4750               mov eax, dword ptr [edi + 0x50]
// 00803a63  83f8ff               cmp eax, -1
// 00803a66  7503                 jne 0x803a6b
// 00803a68  8b474c               mov eax, dword ptr [edi + 0x4c]
// 00803a6b  50                   push eax
// 00803a6c  8d442424             lea eax, [esp + 0x24]
// 00803a70  50                   push eax
// 00803a71  8bce                 mov ecx, esi
// 00803a73  e8860bffff           call 0x7f45fe
// 00803a78  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00803a7b  83f8ff               cmp eax, -1
// 00803a7e  7505                 jne 0x803a85
// 00803a80  8b7f58               mov edi, dword ptr [edi + 0x58]
// 00803a83  eb02                 jmp 0x803a87
// 00803a85  8bf8                 mov edi, eax
// 00803a87  8b16                 mov edx, dword ptr [esi]
// 00803a89  8b4238               mov eax, dword ptr [edx + 0x38]
// 00803a8c  57                   push edi
// 00803a8d  8bce                 mov ecx, esi
// 00803a8f  ffd0                 call eax
// 00803a91  8d4c2458             lea ecx, [esp + 0x58]
// 00803a95  51                   push ecx
// 00803a96  8bcd                 mov ecx, ebp
// 00803a98  e8e39affff           call 0x7fd580
// 00803a9d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00803aa1  8bca                 mov ecx, edx
// 00803aa3  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 00803aa7  8954241c             mov dword ptr [esp + 0x1c], edx
// 00803aab  03c9                 add ecx, ecx
// 00803aad  8bf9                 mov edi, ecx
// 00803aaf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00803ab3  6824080000           push 0x824
// 00803ab8  2bcf                 sub ecx, edi
// 00803aba  8d542414             lea edx, [esp + 0x14]
// 00803abe  52                   push edx
// 00803abf  894c2420             mov dword ptr [esp + 0x20], ecx
// 00803ac3  50                   push eax
// 00803ac4  8bce                 mov ecx, esi
// 00803ac6  c644245401           mov byte ptr [esp + 0x54], 1
// 00803acb  c744241c05000000     mov dword ptr [esp + 0x1c], 5
// 00803ad3  c744242003000000     mov dword ptr [esp + 0x20], 3
// 00803adb  e84060ffff           call 0x7f9b20
// 00803ae0  8d4c2458             lea ecx, [esp + 0x58]
// 00803ae4  ff15c0de9800         call dword ptr [0x98dec0]
// 00803aea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00803aee  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 00803af2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00803af6  8b742450             mov esi, dword ptr [esp + 0x50]
// 00803afa  2b442424             sub eax, dword ptr [esp + 0x24]
// 00803afe  890e                 mov dword ptr [esi], ecx
// 00803b00  8d4c2430             lea ecx, [esp + 0x30]
// 00803b04  894604               mov dword ptr [esi + 4], eax
// 00803b07  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00803b0f  e8cc7b0400           call 0x84b6e0
// 00803b14  8bc6                 mov eax, esi
// 00803b16  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00803b1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00803b21  59                   pop ecx
// 00803b22  5f                   pop edi
// 00803b23  5e                   pop esi
// 00803b24  5d                   pop ebp
// 00803b25  83c43c               add esp, 0x3c
// 00803b28  c21000               ret 0x10
// 00803b2b  8b442450             mov eax, dword ptr [esp + 0x50]
// 00803b2f  c7400400000000       mov dword ptr [eax + 4], 0
// 00803b36  c70000000000         mov dword ptr [eax], 0
// 00803b3c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00803b40  64890d00000000       mov dword ptr fs:[0], ecx
// 00803b47  59                   pop ecx
// 00803b48  5f                   pop edi
// 00803b49  5e                   pop esi
// 00803b4a  5d                   pop ebp
// 00803b4b  83c43c               add esp, 0x3c
// 00803b4e  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawCommandBarGripper@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp