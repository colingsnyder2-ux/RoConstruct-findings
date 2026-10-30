// roc 2011-06 008208b0  unit: CXTPImageManagerResource::CBitmapDC  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008208b0
//
// 008208b0  6aff                 push -1
// 008208b2  68d82ea000           push 0xa02ed8
// 008208b7  64a100000000         mov eax, dword ptr fs:[0]
// 008208bd  50                   push eax
// 008208be  83ec1c               sub esp, 0x1c
// 008208c1  53                   push ebx
// 008208c2  55                   push ebp
// 008208c3  56                   push esi
// 008208c4  57                   push edi
// 008208c5  a12058c900           mov eax, dword ptr [0xc95820]
// 008208ca  33c4                 xor eax, esp
// 008208cc  50                   push eax
// 008208cd  8d442430             lea eax, [esp + 0x30]
// 008208d1  64a300000000         mov dword ptr fs:[0], eax
// 008208d7  8b442444             mov eax, dword ptr [esp + 0x44]
// 008208db  8b742440             mov esi, dword ptr [esp + 0x40]
// 008208df  6a02                 push 2
// 008208e1  50                   push eax
// 008208e2  56                   push esi
// 008208e3  ff153803a400         call dword ptr [0xa40338]
// 008208e9  8be8                 mov ebp, eax
// 008208eb  85ed                 test ebp, ebp
// 008208ed  0f849a000000         je 0x82098d
// 008208f3  55                   push ebp
// 008208f4  56                   push esi
// 008208f5  ff153c03a400         call dword ptr [0xa4033c]
// 008208fb  8bd8                 mov ebx, eax
// 008208fd  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00820901  85db                 test ebx, ebx
// 00820903  0f8484000000         je 0x82098d
// 00820909  53                   push ebx
// 0082090a  ff15d001a400         call dword ptr [0xa401d0]
// 00820910  8bf8                 mov edi, eax
// 00820912  85ff                 test edi, edi
// 00820914  7477                 je 0x82098d
// 00820916  8b7708               mov esi, dword ptr [edi + 8]
// 00820919  0faf7704             imul esi, dword ptr [edi + 4]
// 0082091d  03f6                 add esi, esi
// 0082091f  03f6                 add esi, esi
// 00820921  66837f0e20           cmp word ptr [edi + 0xe], 0x20
// 00820926  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0082092e  0f85d5000000         jne 0x820a09
// 00820934  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00820938  55                   push ebp
// 00820939  51                   push ecx
// 0082093a  ff154003a400         call dword ptr [0xa40340]
// 00820940  8d5628               lea edx, [esi + 0x28]
// 00820943  3bc2                 cmp eax, edx
// 00820945  0f82be000000         jb 0x820a09
// 0082094b  8d4c2420             lea ecx, [esp + 0x20]
// 0082094f  e8c0a4feff           call 0x80ae14
// 00820954  33ed                 xor ebp, ebp
// 00820956  55                   push ebp
// 00820957  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0082095b  ff158401a400         call dword ptr [0xa40184]
// 00820961  50                   push eax
// 00820962  8d4c2424             lea ecx, [esp + 0x24]
// 00820966  e88ba4feff           call 0x80adf6
// 0082096b  6a34                 push 0x34
// 0082096d  ff15400aa400         call dword ptr [0xa40a40]
// 00820973  8bd8                 mov ebx, eax
// 00820975  83c404               add esp, 4
// 00820978  3bdd                 cmp ebx, ebp
// 0082097a  7527                 jne 0x8209a3
// 0082097c  8d4c2420             lea ecx, [esp + 0x20]
// 00820980  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00820988  e875a4feff           call 0x80ae02
// 0082098d  33c0                 xor eax, eax
// 0082098f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00820993  64890d00000000       mov dword ptr fs:[0], ecx
// 0082099a  59                   pop ecx
// 0082099b  5f                   pop edi
// 0082099c  5e                   pop esi
// 0082099d  5d                   pop ebp
// 0082099e  5b                   pop ebx
// 0082099f  83c428               add esp, 0x28
// 008209a2  c3                   ret 
// 008209a3  6a28                 push 0x28
// 008209a5  57                   push edi
// 008209a6  53                   push ebx
// 008209a7  e844e2ffff           call 0x81ebf0
// 008209ac  83c40c               add esp, 0xc
// 008209af  55                   push ebp
// 008209b0  55                   push ebp
// 008209b1  8d44241c             lea eax, [esp + 0x1c]
// 008209b5  50                   push eax
// 008209b6  55                   push ebp
// 008209b7  897314               mov dword ptr [ebx + 0x14], esi
// 008209ba  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008209be  53                   push ebx
// 008209bf  51                   push ecx
// 008209c0  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008209c4  ff157801a400         call dword ptr [0xa40178]
// 008209ca  8be8                 mov ebp, eax
// 008209cc  85ed                 test ebp, ebp
// 008209ce  741a                 je 0x8209ea
// 008209d0  8b442414             mov eax, dword ptr [esp + 0x14]
// 008209d4  85c0                 test eax, eax
// 008209d6  7412                 je 0x8209ea
// 008209d8  56                   push esi
// 008209d9  83c728               add edi, 0x28
// 008209dc  57                   push edi
// 008209dd  50                   push eax
// 008209de  e80de2ffff           call 0x81ebf0
// 008209e3  83c40c               add esp, 0xc
// 008209e6  896c2418             mov dword ptr [esp + 0x18], ebp
// 008209ea  53                   push ebx
// 008209eb  ff15740aa400         call dword ptr [0xa40a74]
// 008209f1  83c404               add esp, 4
// 008209f4  8d4c2420             lea ecx, [esp + 0x20]
// 008209f8  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00820a00  e8fda3feff           call 0x80ae02
// 00820a05  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00820a09  53                   push ebx
// 00820a0a  ff15cc01a400         call dword ptr [0xa401cc]
// 00820a10  8b442418             mov eax, dword ptr [esp + 0x18]
// 00820a14  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00820a18  64890d00000000       mov dword ptr fs:[0], ecx
// 00820a1f  59                   pop ecx
// 00820a20  5f                   pop edi
// 00820a21  5e                   pop esi
// 00820a22  5d                   pop ebp
// 00820a23  5b                   pop ebx
// 00820a24  83c428               add esp, 0x28
// 00820a27  c3                   ret 
// copied from an identical function in another client (function ?LoadAlphaBitmap@CXTPImageManagerIcon@@SAPAUHBITMAP__@@PAUHINSTANCE__@@PBD@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source\Common\XTPImageManager.cpp