// roc 2009-06 00566a30  unit: RBX::RbxG3D::RenderScene  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00566a30
//
// 00566a30  6aff                 push -1
// 00566a32  6861f78500           push 0x85f761
// 00566a37  64a100000000         mov eax, dword ptr fs:[0]
// 00566a3d  50                   push eax
// 00566a3e  64892500000000       mov dword ptr fs:[0], esp
// 00566a45  83ec0c               sub esp, 0xc
// 00566a48  53                   push ebx
// 00566a49  55                   push ebp
// 00566a4a  56                   push esi
// 00566a4b  57                   push edi
// 00566a4c  8bf9                 mov edi, ecx
// 00566a4e  8b4708               mov eax, dword ptr [edi + 8]
// 00566a51  8b2f                 mov ebp, dword ptr [edi]
// 00566a53  8bc8                 mov ecx, eax
// 00566a55  c1e104               shl ecx, 4
// 00566a58  03c8                 add ecx, eax
// 00566a5a  03c9                 add ecx, ecx
// 00566a5c  03c9                 add ecx, ecx
// 00566a5e  6a10                 push 0x10
// 00566a60  51                   push ecx
// 00566a61  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00566a65  e806470000           call 0x56b170
// 00566a6a  8b4f08               mov ecx, dword ptr [edi + 8]
// 00566a6d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00566a71  83c408               add esp, 8
// 00566a74  3bd1                 cmp edx, ecx
// 00566a76  8907                 mov dword ptr [edi], eax
// 00566a78  7d02                 jge 0x566a7c
// 00566a7a  8bca                 mov ecx, edx
// 00566a7c  8bf1                 mov esi, ecx
// 00566a7e  c1e604               shl esi, 4
// 00566a81  03f1                 add esi, ecx
// 00566a83  8d1cb0               lea ebx, [eax + esi*4]
// 00566a86  8bf0                 mov esi, eax
// 00566a88  89742410             mov dword ptr [esp + 0x10], esi
// 00566a8c  3bf3                 cmp esi, ebx
// 00566a8e  0f8385000000         jae 0x566b19
// 00566a94  8d7d2c               lea edi, [ebp + 0x2c]
// 00566a97  8b2dd0e18900         mov ebp, dword ptr [0x89e1d0]
// 00566a9d  8d4900               lea ecx, [ecx]
// 00566aa0  89742418             mov dword ptr [esp + 0x18], esi
// 00566aa4  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00566aac  85f6                 test esi, esi
// 00566aae  744b                 je 0x566afb
// 00566ab0  8d57d4               lea edx, [edi - 0x2c]
// 00566ab3  52                   push edx
// 00566ab4  8bce                 mov ecx, esi
// 00566ab6  e8c534f3ff           call 0x499f80
// 00566abb  d947f8               fld dword ptr [edi - 8]
// 00566abe  d95e24               fstp dword ptr [esi + 0x24]
// 00566ac1  d947fc               fld dword ptr [edi - 4]
// 00566ac4  d95e28               fstp dword ptr [esi + 0x28]
// 00566ac7  d907                 fld dword ptr [edi]
// 00566ac9  d95e2c               fstp dword ptr [esi + 0x2c]
// 00566acc  d94704               fld dword ptr [edi + 4]
// 00566acf  d95e30               fstp dword ptr [esi + 0x30]
// 00566ad2  8b4708               mov eax, dword ptr [edi + 8]
// 00566ad5  894634               mov dword ptr [esi + 0x34], eax
// 00566ad8  d9470c               fld dword ptr [edi + 0xc]
// 00566adb  d95e38               fstp dword ptr [esi + 0x38]
// 00566ade  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00566ae1  894e3c               mov dword ptr [esi + 0x3c], ecx
// 00566ae4  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00566aeb  8b4714               mov eax, dword ptr [edi + 0x14]
// 00566aee  85c0                 test eax, eax
// 00566af0  7409                 je 0x566afb
// 00566af2  894640               mov dword ptr [esi + 0x40], eax
// 00566af5  83c004               add eax, 4
// 00566af8  50                   push eax
// 00566af9  ffd5                 call ebp
// 00566afb  83c644               add esi, 0x44
// 00566afe  83c744               add edi, 0x44
// 00566b01  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00566b09  89742410             mov dword ptr [esp + 0x10], esi
// 00566b0d  3bf3                 cmp esi, ebx
// 00566b0f  728f                 jb 0x566aa0
// 00566b11  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00566b15  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00566b19  8bc2                 mov eax, edx
// 00566b1b  c1e004               shl eax, 4
// 00566b1e  03c2                 add eax, edx
// 00566b20  8d4c8500             lea ecx, [ebp + eax*4]
// 00566b24  3be9                 cmp ebp, ecx
// 00566b26  736f                 jae 0x566b97
// 00566b28  2bcd                 sub ecx, ebp
// 00566b2a  49                   dec ecx
// 00566b2b  b8f1f0f0f0           mov eax, 0xf0f0f0f1
// 00566b30  f7e1                 mul ecx
// 00566b32  8bda                 mov ebx, edx
// 00566b34  c1eb06               shr ebx, 6
// 00566b37  8d7d40               lea edi, [ebp + 0x40]
// 00566b3a  43                   inc ebx
// 00566b3b  eb03                 jmp 0x566b40
// 00566b3d  8d4900               lea ecx, [ecx]
// 00566b40  8b07                 mov eax, dword ptr [edi]
// 00566b42  85c0                 test eax, eax
// 00566b44  7449                 je 0x566b8f
// 00566b46  83c004               add eax, 4
// 00566b49  50                   push eax
// 00566b4a  ff15a4e18900         call dword ptr [0x89e1a4]
// 00566b50  85c0                 test eax, eax
// 00566b52  7535                 jne 0x566b89
// 00566b54  8b0f                 mov ecx, dword ptr [edi]
// 00566b56  8b7108               mov esi, dword ptr [ecx + 8]
// 00566b59  85f6                 test esi, esi
// 00566b5b  741e                 je 0x566b7b
// 00566b5d  8d4900               lea ecx, [ecx]
// 00566b60  8b0e                 mov ecx, dword ptr [esi]
// 00566b62  8b11                 mov edx, dword ptr [ecx]
// 00566b64  8b4204               mov eax, dword ptr [edx + 4]
// 00566b67  ffd0                 call eax
// 00566b69  8bc6                 mov eax, esi
// 00566b6b  8b7604               mov esi, dword ptr [esi + 4]
// 00566b6e  50                   push eax
// 00566b6f  e8be1e1b00           call 0x718a32
// 00566b74  83c404               add esp, 4
// 00566b77  85f6                 test esi, esi
// 00566b79  75e5                 jne 0x566b60
// 00566b7b  8b0f                 mov ecx, dword ptr [edi]
// 00566b7d  85c9                 test ecx, ecx
// 00566b7f  7408                 je 0x566b89
// 00566b81  8b11                 mov edx, dword ptr [ecx]
// 00566b83  8b02                 mov eax, dword ptr [edx]
// 00566b85  6a01                 push 1
// 00566b87  ffd0                 call eax
// 00566b89  c70700000000         mov dword ptr [edi], 0
// 00566b8f  83c744               add edi, 0x44
// 00566b92  83eb01               sub ebx, 1
// 00566b95  75a9                 jne 0x566b40
// 00566b97  55                   push ebp
// 00566b98  e8f3460000           call 0x56b290
// 00566b9d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00566ba1  83c404               add esp, 4
// 00566ba4  5f                   pop edi
// 00566ba5  5e                   pop esi
// 00566ba6  5d                   pop ebp
// 00566ba7  5b                   pop ebx
// 00566ba8  64890d00000000       mov dword ptr fs:[0], ecx
// 00566baf  83c418               add esp, 0x18
// 00566bb2  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?realloc@?$Array@VRenderSurface@Render@RBX@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
