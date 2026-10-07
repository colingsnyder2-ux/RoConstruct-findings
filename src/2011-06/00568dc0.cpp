// roc 2011-06 00568dc0  unit: seg_00560000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00568dc0
//
// 00568dc0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00568dc4  53                   push ebx
// 00568dc5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00568dc9  55                   push ebp
// 00568dca  56                   push esi
// 00568dcb  8b742414             mov esi, dword ptr [esp + 0x14]
// 00568dcf  57                   push edi
// 00568dd0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00568dd4  8d2c07               lea ebp, [edi + eax]
// 00568dd7  3b6e04               cmp ebp, dword ptr [esi + 4]
// 00568dda  770a                 ja 0x568de6
// 00568ddc  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00568ddf  7705                 ja 0x568de6
// 00568de1  833e00               cmp dword ptr [esi], 0
// 00568de4  7513                 jne 0x568df9
// 00568de6  8b03                 mov eax, dword ptr [ebx]
// 00568de8  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 00568def  8b0b                 mov ecx, dword ptr [ebx]
// 00568df1  8b11                 mov edx, dword ptr [ecx]
// 00568df3  53                   push ebx
// 00568df4  ffd2                 call edx
// 00568df6  83c404               add esp, 4
// 00568df9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00568dfc  3bf8                 cmp edi, eax
// 00568dfe  7209                 jb 0x568e09
// 00568e00  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00568e03  03c8                 add ecx, eax
// 00568e05  3be9                 cmp ebp, ecx
// 00568e07  764f                 jbe 0x568e58
// 00568e09  807e2200             cmp byte ptr [esi + 0x22], 0
// 00568e0d  7513                 jne 0x568e22
// 00568e0f  8b13                 mov edx, dword ptr [ebx]
// 00568e11  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 00568e18  8b03                 mov eax, dword ptr [ebx]
// 00568e1a  8b08                 mov ecx, dword ptr [eax]
// 00568e1c  53                   push ebx
// 00568e1d  ffd1                 call ecx
// 00568e1f  83c404               add esp, 4
// 00568e22  807e2100             cmp byte ptr [esi + 0x21], 0
// 00568e26  740f                 je 0x568e37
// 00568e28  6a01                 push 1
// 00568e2a  53                   push ebx
// 00568e2b  e850feffff           call 0x568c80
// 00568e30  83c408               add esp, 8
// 00568e33  c6462100             mov byte ptr [esi + 0x21], 0
// 00568e37  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 00568e3a  7605                 jbe 0x568e41
// 00568e3c  897e18               mov dword ptr [esi + 0x18], edi
// 00568e3f  eb0c                 jmp 0x568e4d
// 00568e41  8bc5                 mov eax, ebp
// 00568e43  2b4610               sub eax, dword ptr [esi + 0x10]
// 00568e46  7902                 jns 0x568e4a
// 00568e48  33c0                 xor eax, eax
// 00568e4a  894618               mov dword ptr [esi + 0x18], eax
// 00568e4d  6a00                 push 0
// 00568e4f  53                   push ebx
// 00568e50  e82bfeffff           call 0x568c80
// 00568e55  83c408               add esp, 8
// 00568e58  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00568e5b  3bfd                 cmp edi, ebp
// 00568e5d  7357                 jae 0x568eb6
// 00568e5f  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00568e63  731e                 jae 0x568e83
// 00568e65  807c242400           cmp byte ptr [esp + 0x24], 0
// 00568e6a  7413                 je 0x568e7f
// 00568e6c  8b13                 mov edx, dword ptr [ebx]
// 00568e6e  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 00568e75  8b03                 mov eax, dword ptr [ebx]
// 00568e77  8b08                 mov ecx, dword ptr [eax]
// 00568e79  53                   push ebx
// 00568e7a  ffd1                 call ecx
// 00568e7c  83c404               add esp, 4
// 00568e7f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00568e83  8a442424             mov al, byte ptr [esp + 0x24]
// 00568e87  84c0                 test al, al
// 00568e89  7403                 je 0x568e8e
// 00568e8b  896e1c               mov dword ptr [esi + 0x1c], ebp
// 00568e8e  807e2000             cmp byte ptr [esi + 0x20], 0
// 00568e92  743e                 je 0x568ed2
// 00568e94  8b4618               mov eax, dword ptr [esi + 0x18]
// 00568e97  8b5e08               mov ebx, dword ptr [esi + 8]
// 00568e9a  2bf8                 sub edi, eax
// 00568e9c  2be8                 sub ebp, eax
// 00568e9e  3bfd                 cmp edi, ebp
// 00568ea0  7314                 jae 0x568eb6
// 00568ea2  8b16                 mov edx, dword ptr [esi]
// 00568ea4  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00568ea7  53                   push ebx
// 00568ea8  50                   push eax
// 00568ea9  e892efffff           call 0x567e40
// 00568eae  47                   inc edi
// 00568eaf  83c408               add esp, 8
// 00568eb2  3bfd                 cmp edi, ebp
// 00568eb4  72ec                 jb 0x568ea2
// 00568eb6  807c242400           cmp byte ptr [esp + 0x24], 0
// 00568ebb  7404                 je 0x568ec1
// 00568ebd  c6462101             mov byte ptr [esi + 0x21], 1
// 00568ec1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00568ec5  2b4618               sub eax, dword ptr [esi + 0x18]
// 00568ec8  8b0e                 mov ecx, dword ptr [esi]
// 00568eca  5f                   pop edi
// 00568ecb  5e                   pop esi
// 00568ecc  5d                   pop ebp
// 00568ecd  8d0481               lea eax, [ecx + eax*4]
// 00568ed0  5b                   pop ebx
// 00568ed1  c3                   ret 
// 00568ed2  84c0                 test al, al
// 00568ed4  75e7                 jne 0x568ebd
// 00568ed6  8b0b                 mov ecx, dword ptr [ebx]
// 00568ed8  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 00568edf  8b13                 mov edx, dword ptr [ebx]
// 00568ee1  8b02                 mov eax, dword ptr [edx]
// 00568ee3  53                   push ebx
// 00568ee4  ffd0                 call eax
// 00568ee6  8b442420             mov eax, dword ptr [esp + 0x20]
// 00568eea  2b4618               sub eax, dword ptr [esi + 0x18]
// 00568eed  8b0e                 mov ecx, dword ptr [esi]
// 00568eef  83c404               add esp, 4
// 00568ef2  5f                   pop edi
// 00568ef3  5e                   pop esi
// 00568ef4  5d                   pop ebp
// 00568ef5  8d0481               lea eax, [ecx + eax*4]
// 00568ef8  5b                   pop ebx
// 00568ef9  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
