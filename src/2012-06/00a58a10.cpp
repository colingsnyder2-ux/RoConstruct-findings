// roc 2012-06 00a58a10  unit: CXTPPropertyGridInplaceEdit  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a58a10
//
// 00a58a10  51                   push ecx
// 00a58a11  53                   push ebx
// 00a58a12  56                   push esi
// 00a58a13  8bf1                 mov esi, ecx
// 00a58a15  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00a58a19  7421                 je 0xa58a3c
// 00a58a1b  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a58a1f  741b                 je 0xa58a3c
// 00a58a21  e8ac0b0400           call 0xa995d2
// 00a58a26  a900080000           test eax, 0x800
// 00a58a2b  750f                 jne 0xa58a3c
// 00a58a2d  8d5e70               lea ebx, [esi + 0x70]
// 00a58a30  8bcb                 mov ecx, ebx
// 00a58a32  ff156046b200         call dword ptr [0xb24660]
// 00a58a38  84c0                 test al, al
// 00a58a3a  740d                 je 0xa58a49
// 00a58a3c  8bce                 mov ecx, esi
// 00a58a3e  e89b9cf2ff           call 0x9826de
// 00a58a43  5e                   pop esi
// 00a58a44  5b                   pop ebx
// 00a58a45  59                   pop ecx
// 00a58a46  c20c00               ret 0xc
// 00a58a49  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a58a4d  83c0f8               add eax, -8
// 00a58a50  83f826               cmp eax, 0x26
// 00a58a53  770e                 ja 0xa58a63
// 00a58a55  0fb680908ba500       movzx eax, byte ptr [eax + 0xa58b90]
// 00a58a5c  ff2485888ba500       jmp dword ptr [eax*4 + 0xa58b88]
// 00a58a63  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a58a66  57                   push edi
// 00a58a67  85c0                 test eax, eax
// 00a58a69  7448                 je 0xa58ab3
// 00a58a6b  55                   push ebp
// 00a58a6c  8d7e58               lea edi, [esi + 0x58]
// 00a58a6f  57                   push edi
// 00a58a70  8d6e54               lea ebp, [esi + 0x54]
// 00a58a73  55                   push ebp
// 00a58a74  68b0000000           push 0xb0
// 00a58a79  50                   push eax
// 00a58a7a  ff15043cb200         call dword ptr [0xb23c04]
// 00a58a80  8d8e80000000         lea ecx, [esi + 0x80]
// 00a58a86  51                   push ecx
// 00a58a87  8bce                 mov ecx, esi
// 00a58a89  e8689cf2ff           call 0x9826f6
// 00a58a8e  8bce                 mov ecx, esi
// 00a58a90  e85be1ffff           call 0xa56bf0
// 00a58a95  6a01                 push 1
// 00a58a97  55                   push ebp
// 00a58a98  8bce                 mov ecx, esi
// 00a58a9a  e8e1f4ffff           call 0xa57f80
// 00a58a9f  6a01                 push 1
// 00a58aa1  57                   push edi
// 00a58aa2  8bce                 mov ecx, esi
// 00a58aa4  e8d7f4ffff           call 0xa57f80
// 00a58aa9  8b6d00               mov ebp, dword ptr [ebp]
// 00a58aac  392f                 cmp dword ptr [edi], ebp
// 00a58aae  7d02                 jge 0xa58ab2
// 00a58ab0  892f                 mov dword ptr [edi], ebp
// 00a58ab2  5d                   pop ebp
// 00a58ab3  8b7e54               mov edi, dword ptr [esi + 0x54]
// 00a58ab6  85ff                 test edi, edi
// 00a58ab8  0f8cb6000000         jl 0xa58b74
// 00a58abe  8d8e84000000         lea ecx, [esi + 0x84]
// 00a58ac4  ff155846b200         call dword ptr [0xb24658]
// 00a58aca  3bf8                 cmp edi, eax
// 00a58acc  0f8da2000000         jge 0xa58b74
// 00a58ad2  8b5654               mov edx, dword ptr [esi + 0x54]
// 00a58ad5  52                   push edx
// 00a58ad6  8bce                 mov ecx, esi
// 00a58ad8  e863eeffff           call 0xa57940
// 00a58add  85c0                 test eax, eax
// 00a58adf  0f848f000000         je 0xa58b74
// 00a58ae5  8a442414             mov al, byte ptr [esp + 0x14]
// 00a58ae9  8b16                 mov edx, dword ptr [esi]
// 00a58aeb  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 00a58af1  8844240c             mov byte ptr [esp + 0xc], al
// 00a58af5  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a58af8  50                   push eax
// 00a58af9  8d4c2410             lea ecx, [esp + 0x10]
// 00a58afd  51                   push ecx
// 00a58afe  8bce                 mov ecx, esi
// 00a58b00  ffd2                 call edx
// 00a58b02  85c0                 test eax, eax
// 00a58b04  7528                 jne 0xa58b2e
// 00a58b06  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a58b09  8b3e                 mov edi, dword ptr [esi]
// 00a58b0b  50                   push eax
// 00a58b0c  8bcb                 mov ecx, ebx
// 00a58b0e  ff15e844b200         call dword ptr [0xb244e8]
// 00a58b14  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a58b18  0fb6c8               movzx ecx, al
// 00a58b1b  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 00a58b21  51                   push ecx
// 00a58b22  52                   push edx
// 00a58b23  8bce                 mov ecx, esi
// 00a58b25  ffd0                 call eax
// 00a58b27  5f                   pop edi
// 00a58b28  5e                   pop esi
// 00a58b29  5b                   pop ebx
// 00a58b2a  59                   pop ecx
// 00a58b2b  c20c00               ret 0xc
// 00a58b2e  8b16                 mov edx, dword ptr [esi]
// 00a58b30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a58b34  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 00a58b3a  50                   push eax
// 00a58b3b  8bce                 mov ecx, esi
// 00a58b3d  ffd2                 call edx
// 00a58b3f  85c0                 test eax, eax
// 00a58b41  741c                 je 0xa58b5f
// 00a58b43  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a58b47  50                   push eax
// 00a58b48  8bce                 mov ecx, esi
// 00a58b4a  e841fbffff           call 0xa58690
// 00a58b4f  6a00                 push 0
// 00a58b51  8bce                 mov ecx, esi
// 00a58b53  e828eeffff           call 0xa57980
// 00a58b58  5f                   pop edi
// 00a58b59  5e                   pop esi
// 00a58b5a  5b                   pop ebx
// 00a58b5b  59                   pop ecx
// 00a58b5c  c20c00               ret 0xc
// 00a58b5f  837c24147f           cmp dword ptr [esp + 0x14], 0x7f
// 00a58b64  741a                 je 0xa58b80
// 00a58b66  8bce                 mov ecx, esi
// 00a58b68  e8719bf2ff           call 0x9826de
// 00a58b6d  5f                   pop edi
// 00a58b6e  5e                   pop esi
// 00a58b6f  5b                   pop ebx
// 00a58b70  59                   pop ecx
// 00a58b71  c20c00               ret 0xc
// 00a58b74  8b16                 mov edx, dword ptr [esi]
// 00a58b76  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00a58b7c  8bce                 mov ecx, esi
// 00a58b7e  ffd0                 call eax
// 00a58b80  5f                   pop edi
// 00a58b81  5e                   pop esi
// 00a58b82  5b                   pop ebx
// 00a58b83  59                   pop ecx
// 00a58b84  c20c00               ret 0xc
// 00a58b87  90                   nop 
// 00a58b88  818ba500638aa5000001 or dword ptr [ebx - 0x759cff5b], 0x10000a5
// 00a58b92  0101                 add dword ptr [ecx], eax
// 00a58b94  0101                 add dword ptr [ecx], eax
// 00a58b96  0101                 add dword ptr [ecx], eax
// 00a58b98  0101                 add dword ptr [ecx], eax
// 00a58b9a  0101                 add dword ptr [ecx], eax
// 00a58b9c  0101                 add dword ptr [ecx], eax
// 00a58b9e  0101                 add dword ptr [ecx], eax
// 00a58ba0  0101                 add dword ptr [ecx], eax
// 00a58ba2  0101                 add dword ptr [ecx], eax
// 00a58ba4  0101                 add dword ptr [ecx], eax
// 00a58ba6  0101                 add dword ptr [ecx], eax
// 00a58ba8  0001                 add byte ptr [ecx], al
// 00a58baa  0100                 add dword ptr [eax], eax
// 00a58bac  0000                 add byte ptr [eax], al
// 00a58bae  0000                 add byte ptr [eax], al
// 00a58bb0  0001                 add byte ptr [ecx], al
// 00a58bb2  0101                 add dword ptr [ecx], eax
// 00a58bb4  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function ?OnChar@?$CXTMaskEditT@VCEdit@@@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp