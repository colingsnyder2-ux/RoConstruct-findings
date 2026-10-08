// roc 2007-03 00519d70  unit: seg_00510000  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519d70
//
// 00519d70  8b442410             mov eax, dword ptr [esp + 0x10]
// 00519d74  53                   push ebx
// 00519d75  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00519d79  55                   push ebp
// 00519d7a  56                   push esi
// 00519d7b  8b742414             mov esi, dword ptr [esp + 0x14]
// 00519d7f  57                   push edi
// 00519d80  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00519d84  8d2c07               lea ebp, [edi + eax]
// 00519d87  3b6e04               cmp ebp, dword ptr [esi + 4]
// 00519d8a  770a                 ja 0x519d96
// 00519d8c  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00519d8f  7705                 ja 0x519d96
// 00519d91  833e00               cmp dword ptr [esi], 0
// 00519d94  7513                 jne 0x519da9
// 00519d96  8b03                 mov eax, dword ptr [ebx]
// 00519d98  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 00519d9f  8b0b                 mov ecx, dword ptr [ebx]
// 00519da1  8b11                 mov edx, dword ptr [ecx]
// 00519da3  53                   push ebx
// 00519da4  ffd2                 call edx
// 00519da6  83c404               add esp, 4
// 00519da9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00519dac  3bf8                 cmp edi, eax
// 00519dae  7209                 jb 0x519db9
// 00519db0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00519db3  03c8                 add ecx, eax
// 00519db5  3be9                 cmp ebp, ecx
// 00519db7  764f                 jbe 0x519e08
// 00519db9  807e2200             cmp byte ptr [esi + 0x22], 0
// 00519dbd  7513                 jne 0x519dd2
// 00519dbf  8b13                 mov edx, dword ptr [ebx]
// 00519dc1  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 00519dc8  8b03                 mov eax, dword ptr [ebx]
// 00519dca  8b08                 mov ecx, dword ptr [eax]
// 00519dcc  53                   push ebx
// 00519dcd  ffd1                 call ecx
// 00519dcf  83c404               add esp, 4
// 00519dd2  807e2100             cmp byte ptr [esi + 0x21], 0
// 00519dd6  740f                 je 0x519de7
// 00519dd8  6a01                 push 1
// 00519dda  53                   push ebx
// 00519ddb  e850feffff           call 0x519c30
// 00519de0  83c408               add esp, 8
// 00519de3  c6462100             mov byte ptr [esi + 0x21], 0
// 00519de7  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 00519dea  7605                 jbe 0x519df1
// 00519dec  897e18               mov dword ptr [esi + 0x18], edi
// 00519def  eb0c                 jmp 0x519dfd
// 00519df1  8bc5                 mov eax, ebp
// 00519df3  2b4610               sub eax, dword ptr [esi + 0x10]
// 00519df6  7902                 jns 0x519dfa
// 00519df8  33c0                 xor eax, eax
// 00519dfa  894618               mov dword ptr [esi + 0x18], eax
// 00519dfd  6a00                 push 0
// 00519dff  53                   push ebx
// 00519e00  e82bfeffff           call 0x519c30
// 00519e05  83c408               add esp, 8
// 00519e08  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00519e0b  3bfd                 cmp edi, ebp
// 00519e0d  7359                 jae 0x519e68
// 00519e0f  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00519e13  731e                 jae 0x519e33
// 00519e15  807c242400           cmp byte ptr [esp + 0x24], 0
// 00519e1a  7413                 je 0x519e2f
// 00519e1c  8b13                 mov edx, dword ptr [ebx]
// 00519e1e  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 00519e25  8b03                 mov eax, dword ptr [ebx]
// 00519e27  8b08                 mov ecx, dword ptr [eax]
// 00519e29  53                   push ebx
// 00519e2a  ffd1                 call ecx
// 00519e2c  83c404               add esp, 4
// 00519e2f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00519e33  8a442424             mov al, byte ptr [esp + 0x24]
// 00519e37  84c0                 test al, al
// 00519e39  7403                 je 0x519e3e
// 00519e3b  896e1c               mov dword ptr [esi + 0x1c], ebp
// 00519e3e  807e2000             cmp byte ptr [esi + 0x20], 0
// 00519e42  7440                 je 0x519e84
// 00519e44  8b4618               mov eax, dword ptr [esi + 0x18]
// 00519e47  8b5e08               mov ebx, dword ptr [esi + 8]
// 00519e4a  2bf8                 sub edi, eax
// 00519e4c  2be8                 sub ebp, eax
// 00519e4e  3bfd                 cmp edi, ebp
// 00519e50  7316                 jae 0x519e68
// 00519e52  8b16                 mov edx, dword ptr [esi]
// 00519e54  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00519e57  53                   push ebx
// 00519e58  50                   push eax
// 00519e59  e852a8ffff           call 0x5146b0
// 00519e5e  83c701               add edi, 1
// 00519e61  83c408               add esp, 8
// 00519e64  3bfd                 cmp edi, ebp
// 00519e66  72ea                 jb 0x519e52
// 00519e68  807c242400           cmp byte ptr [esp + 0x24], 0
// 00519e6d  7404                 je 0x519e73
// 00519e6f  c6462101             mov byte ptr [esi + 0x21], 1
// 00519e73  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00519e77  2b4618               sub eax, dword ptr [esi + 0x18]
// 00519e7a  8b0e                 mov ecx, dword ptr [esi]
// 00519e7c  5f                   pop edi
// 00519e7d  5e                   pop esi
// 00519e7e  5d                   pop ebp
// 00519e7f  8d0481               lea eax, [ecx + eax*4]
// 00519e82  5b                   pop ebx
// 00519e83  c3                   ret 
// 00519e84  84c0                 test al, al
// 00519e86  75e7                 jne 0x519e6f
// 00519e88  8b0b                 mov ecx, dword ptr [ebx]
// 00519e8a  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 00519e91  8b13                 mov edx, dword ptr [ebx]
// 00519e93  8b02                 mov eax, dword ptr [edx]
// 00519e95  53                   push ebx
// 00519e96  ffd0                 call eax
// 00519e98  8b442420             mov eax, dword ptr [esp + 0x20]
// 00519e9c  2b4618               sub eax, dword ptr [esi + 0x18]
// 00519e9f  8b0e                 mov ecx, dword ptr [esi]
// 00519ea1  83c404               add esp, 4
// 00519ea4  5f                   pop edi
// 00519ea5  5e                   pop esi
// 00519ea6  5d                   pop ebp
// 00519ea7  8d0481               lea eax, [ecx + eax*4]
// 00519eaa  5b                   pop ebx
// 00519eab  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_sarray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
