// roc 2009-12 008c8890  unit: CXTPPropertyGridInplaceEdit  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c8890
//
// 008c8890  51                   push ecx
// 008c8891  53                   push ebx
// 008c8892  56                   push esi
// 008c8893  8bf1                 mov esi, ecx
// 008c8895  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008c8899  7421                 je 0x8c88bc
// 008c889b  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c889f  741b                 je 0x8c88bc
// 008c88a1  e8ccdb0500           call 0x926472
// 008c88a6  a900080000           test eax, 0x800
// 008c88ab  750f                 jne 0x8c88bc
// 008c88ad  8d5e70               lea ebx, [esi + 0x70]
// 008c88b0  8bcb                 mov ecx, ebx
// 008c88b2  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008c88b8  84c0                 test al, al
// 008c88ba  740d                 je 0x8c88c9
// 008c88bc  8bce                 mov ecx, esi
// 008c88be  e86db5f2ff           call 0x7f3e30
// 008c88c3  5e                   pop esi
// 008c88c4  5b                   pop ebx
// 008c88c5  59                   pop ecx
// 008c88c6  c20c00               ret 0xc
// 008c88c9  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c88cd  83c0f8               add eax, -8
// 008c88d0  83f826               cmp eax, 0x26
// 008c88d3  770e                 ja 0x8c88e3
// 008c88d5  0fb680108a8c00       movzx eax, byte ptr [eax + 0x8c8a10]
// 008c88dc  ff2485088a8c00       jmp dword ptr [eax*4 + 0x8c8a08]
// 008c88e3  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c88e6  57                   push edi
// 008c88e7  85c0                 test eax, eax
// 008c88e9  7448                 je 0x8c8933
// 008c88eb  55                   push ebp
// 008c88ec  8d7e58               lea edi, [esi + 0x58]
// 008c88ef  57                   push edi
// 008c88f0  8d6e54               lea ebp, [esi + 0x54]
// 008c88f3  55                   push ebp
// 008c88f4  68b0000000           push 0xb0
// 008c88f9  50                   push eax
// 008c88fa  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c8900  8d8e80000000         lea ecx, [esi + 0x80]
// 008c8906  51                   push ecx
// 008c8907  8bce                 mov ecx, esi
// 008c8909  e83ab5f2ff           call 0x7f3e48
// 008c890e  8bce                 mov ecx, esi
// 008c8910  e86be1ffff           call 0x8c6a80
// 008c8915  6a01                 push 1
// 008c8917  55                   push ebp
// 008c8918  8bce                 mov ecx, esi
// 008c891a  e8e1f4ffff           call 0x8c7e00
// 008c891f  6a01                 push 1
// 008c8921  57                   push edi
// 008c8922  8bce                 mov ecx, esi
// 008c8924  e8d7f4ffff           call 0x8c7e00
// 008c8929  8b6d00               mov ebp, dword ptr [ebp]
// 008c892c  392f                 cmp dword ptr [edi], ebp
// 008c892e  7d02                 jge 0x8c8932
// 008c8930  892f                 mov dword ptr [edi], ebp
// 008c8932  5d                   pop ebp
// 008c8933  8b7e54               mov edi, dword ptr [esi + 0x54]
// 008c8936  85ff                 test edi, edi
// 008c8938  0f8cb6000000         jl 0x8c89f4
// 008c893e  8d8e84000000         lea ecx, [esi + 0x84]
// 008c8944  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c894a  3bf8                 cmp edi, eax
// 008c894c  0f8da2000000         jge 0x8c89f4
// 008c8952  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c8955  52                   push edx
// 008c8956  8bce                 mov ecx, esi
// 008c8958  e863eeffff           call 0x8c77c0
// 008c895d  85c0                 test eax, eax
// 008c895f  0f848f000000         je 0x8c89f4
// 008c8965  8a442414             mov al, byte ptr [esp + 0x14]
// 008c8969  8b16                 mov edx, dword ptr [esi]
// 008c896b  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 008c8971  8844240c             mov byte ptr [esp + 0xc], al
// 008c8975  8b4654               mov eax, dword ptr [esi + 0x54]
// 008c8978  50                   push eax
// 008c8979  8d4c2410             lea ecx, [esp + 0x10]
// 008c897d  51                   push ecx
// 008c897e  8bce                 mov ecx, esi
// 008c8980  ffd2                 call edx
// 008c8982  85c0                 test eax, eax
// 008c8984  7528                 jne 0x8c89ae
// 008c8986  8b4654               mov eax, dword ptr [esi + 0x54]
// 008c8989  8b3e                 mov edi, dword ptr [esi]
// 008c898b  50                   push eax
// 008c898c  8bcb                 mov ecx, ebx
// 008c898e  ff1510d59800         call dword ptr [0x98d510]
// 008c8994  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008c8998  0fb6c8               movzx ecx, al
// 008c899b  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 008c89a1  51                   push ecx
// 008c89a2  52                   push edx
// 008c89a3  8bce                 mov ecx, esi
// 008c89a5  ffd0                 call eax
// 008c89a7  5f                   pop edi
// 008c89a8  5e                   pop esi
// 008c89a9  5b                   pop ebx
// 008c89aa  59                   pop ecx
// 008c89ab  c20c00               ret 0xc
// 008c89ae  8b16                 mov edx, dword ptr [esi]
// 008c89b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c89b4  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 008c89ba  50                   push eax
// 008c89bb  8bce                 mov ecx, esi
// 008c89bd  ffd2                 call edx
// 008c89bf  85c0                 test eax, eax
// 008c89c1  741c                 je 0x8c89df
// 008c89c3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c89c7  50                   push eax
// 008c89c8  8bce                 mov ecx, esi
// 008c89ca  e841fbffff           call 0x8c8510
// 008c89cf  6a00                 push 0
// 008c89d1  8bce                 mov ecx, esi
// 008c89d3  e828eeffff           call 0x8c7800
// 008c89d8  5f                   pop edi
// 008c89d9  5e                   pop esi
// 008c89da  5b                   pop ebx
// 008c89db  59                   pop ecx
// 008c89dc  c20c00               ret 0xc
// 008c89df  837c24147f           cmp dword ptr [esp + 0x14], 0x7f
// 008c89e4  741a                 je 0x8c8a00
// 008c89e6  8bce                 mov ecx, esi
// 008c89e8  e843b4f2ff           call 0x7f3e30
// 008c89ed  5f                   pop edi
// 008c89ee  5e                   pop esi
// 008c89ef  5b                   pop ebx
// 008c89f0  59                   pop ecx
// 008c89f1  c20c00               ret 0xc
// 008c89f4  8b16                 mov edx, dword ptr [esi]
// 008c89f6  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 008c89fc  8bce                 mov ecx, esi
// 008c89fe  ffd0                 call eax
// 008c8a00  5f                   pop edi
// 008c8a01  5e                   pop esi
// 008c8a02  5b                   pop ebx
// 008c8a03  59                   pop ecx
// 008c8a04  c20c00               ret 0xc
// 008c8a07  90                   nop 
// 008c8a08  018a8c00e388         add dword ptr [edx - 0x771cff74], ecx
// 008c8a0e  8c00                 mov word ptr [eax], es
// 008c8a10  0001                 add byte ptr [ecx], al
// 008c8a12  0101                 add dword ptr [ecx], eax
// 008c8a14  0101                 add dword ptr [ecx], eax
// 008c8a16  0101                 add dword ptr [ecx], eax
// 008c8a18  0101                 add dword ptr [ecx], eax
// 008c8a1a  0101                 add dword ptr [ecx], eax
// 008c8a1c  0101                 add dword ptr [ecx], eax
// 008c8a1e  0101                 add dword ptr [ecx], eax
// 008c8a20  0101                 add dword ptr [ecx], eax
// 008c8a22  0101                 add dword ptr [ecx], eax
// 008c8a24  0101                 add dword ptr [ecx], eax
// 008c8a26  0101                 add dword ptr [ecx], eax
// 008c8a28  0001                 add byte ptr [ecx], al
// 008c8a2a  0100                 add dword ptr [eax], eax
// 008c8a2c  0000                 add byte ptr [eax], al
// 008c8a2e  0000                 add byte ptr [eax], al
// 008c8a30  0001                 add byte ptr [ecx], al
// 008c8a32  0101                 add dword ptr [ecx], eax
// 008c8a34  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function ?OnChar@?$CXTMaskEditT@VCEdit@@@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp