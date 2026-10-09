// roc 2010-06 00544ab0  unit: RBX::RbxG3D::RenderScene  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00544ab0
//
// 00544ab0  6aff                 push -1
// 00544ab2  6871fd9800           push 0x98fd71
// 00544ab7  64a100000000         mov eax, dword ptr fs:[0]
// 00544abd  50                   push eax
// 00544abe  64892500000000       mov dword ptr fs:[0], esp
// 00544ac5  83ec0c               sub esp, 0xc
// 00544ac8  53                   push ebx
// 00544ac9  55                   push ebp
// 00544aca  56                   push esi
// 00544acb  57                   push edi
// 00544acc  8bf9                 mov edi, ecx
// 00544ace  8b4708               mov eax, dword ptr [edi + 8]
// 00544ad1  8b2f                 mov ebp, dword ptr [edi]
// 00544ad3  8bc8                 mov ecx, eax
// 00544ad5  c1e104               shl ecx, 4
// 00544ad8  03c8                 add ecx, eax
// 00544ada  03c9                 add ecx, ecx
// 00544adc  03c9                 add ecx, ecx
// 00544ade  6a10                 push 0x10
// 00544ae0  51                   push ecx
// 00544ae1  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00544ae5  e8b68d0000           call 0x54d8a0
// 00544aea  8b4f08               mov ecx, dword ptr [edi + 8]
// 00544aed  8b542434             mov edx, dword ptr [esp + 0x34]
// 00544af1  83c408               add esp, 8
// 00544af4  3bd1                 cmp edx, ecx
// 00544af6  8907                 mov dword ptr [edi], eax
// 00544af8  7d02                 jge 0x544afc
// 00544afa  8bca                 mov ecx, edx
// 00544afc  8bf1                 mov esi, ecx
// 00544afe  c1e604               shl esi, 4
// 00544b01  03f1                 add esi, ecx
// 00544b03  8d1cb0               lea ebx, [eax + esi*4]
// 00544b06  8bf0                 mov esi, eax
// 00544b08  89742410             mov dword ptr [esp + 0x10], esi
// 00544b0c  3bf3                 cmp esi, ebx
// 00544b0e  0f8385000000         jae 0x544b99
// 00544b14  8d7d2c               lea edi, [ebp + 0x2c]
// 00544b17  8b2d80a39e00         mov ebp, dword ptr [0x9ea380]
// 00544b1d  8d4900               lea ecx, [ecx]
// 00544b20  89742418             mov dword ptr [esp + 0x18], esi
// 00544b24  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00544b2c  85f6                 test esi, esi
// 00544b2e  744b                 je 0x544b7b
// 00544b30  8d57d4               lea edx, [edi - 0x2c]
// 00544b33  52                   push edx
// 00544b34  8bce                 mov ecx, esi
// 00544b36  e835150100           call 0x556070
// 00544b3b  d947f8               fld dword ptr [edi - 8]
// 00544b3e  d95e24               fstp dword ptr [esi + 0x24]
// 00544b41  d947fc               fld dword ptr [edi - 4]
// 00544b44  d95e28               fstp dword ptr [esi + 0x28]
// 00544b47  d907                 fld dword ptr [edi]
// 00544b49  d95e2c               fstp dword ptr [esi + 0x2c]
// 00544b4c  d94704               fld dword ptr [edi + 4]
// 00544b4f  d95e30               fstp dword ptr [esi + 0x30]
// 00544b52  8b4708               mov eax, dword ptr [edi + 8]
// 00544b55  894634               mov dword ptr [esi + 0x34], eax
// 00544b58  d9470c               fld dword ptr [edi + 0xc]
// 00544b5b  d95e38               fstp dword ptr [esi + 0x38]
// 00544b5e  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00544b61  894e3c               mov dword ptr [esi + 0x3c], ecx
// 00544b64  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00544b6b  8b4714               mov eax, dword ptr [edi + 0x14]
// 00544b6e  85c0                 test eax, eax
// 00544b70  7409                 je 0x544b7b
// 00544b72  894640               mov dword ptr [esi + 0x40], eax
// 00544b75  83c004               add eax, 4
// 00544b78  50                   push eax
// 00544b79  ffd5                 call ebp
// 00544b7b  83c644               add esi, 0x44
// 00544b7e  83c744               add edi, 0x44
// 00544b81  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00544b89  89742410             mov dword ptr [esp + 0x10], esi
// 00544b8d  3bf3                 cmp esi, ebx
// 00544b8f  728f                 jb 0x544b20
// 00544b91  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00544b95  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00544b99  8bc2                 mov eax, edx
// 00544b9b  c1e004               shl eax, 4
// 00544b9e  03c2                 add eax, edx
// 00544ba0  8d4c8500             lea ecx, [ebp + eax*4]
// 00544ba4  3be9                 cmp ebp, ecx
// 00544ba6  736f                 jae 0x544c17
// 00544ba8  2bcd                 sub ecx, ebp
// 00544baa  49                   dec ecx
// 00544bab  b8f1f0f0f0           mov eax, 0xf0f0f0f1
// 00544bb0  f7e1                 mul ecx
// 00544bb2  8bda                 mov ebx, edx
// 00544bb4  c1eb06               shr ebx, 6
// 00544bb7  8d7d40               lea edi, [ebp + 0x40]
// 00544bba  43                   inc ebx
// 00544bbb  eb03                 jmp 0x544bc0
// 00544bbd  8d4900               lea ecx, [ecx]
// 00544bc0  8b07                 mov eax, dword ptr [edi]
// 00544bc2  85c0                 test eax, eax
// 00544bc4  7449                 je 0x544c0f
// 00544bc6  83c004               add eax, 4
// 00544bc9  50                   push eax
// 00544bca  ff157ca39e00         call dword ptr [0x9ea37c]
// 00544bd0  85c0                 test eax, eax
// 00544bd2  7535                 jne 0x544c09
// 00544bd4  8b0f                 mov ecx, dword ptr [edi]
// 00544bd6  8b7108               mov esi, dword ptr [ecx + 8]
// 00544bd9  85f6                 test esi, esi
// 00544bdb  741e                 je 0x544bfb
// 00544bdd  8d4900               lea ecx, [ecx]
// 00544be0  8b0e                 mov ecx, dword ptr [esi]
// 00544be2  8b11                 mov edx, dword ptr [ecx]
// 00544be4  8b4204               mov eax, dword ptr [edx + 4]
// 00544be7  ffd0                 call eax
// 00544be9  8bc6                 mov eax, esi
// 00544beb  8b7604               mov esi, dword ptr [esi + 4]
// 00544bee  50                   push eax
// 00544bef  e8a62d2600           call 0x7a799a
// 00544bf4  83c404               add esp, 4
// 00544bf7  85f6                 test esi, esi
// 00544bf9  75e5                 jne 0x544be0
// 00544bfb  8b0f                 mov ecx, dword ptr [edi]
// 00544bfd  85c9                 test ecx, ecx
// 00544bff  7408                 je 0x544c09
// 00544c01  8b11                 mov edx, dword ptr [ecx]
// 00544c03  8b02                 mov eax, dword ptr [edx]
// 00544c05  6a01                 push 1
// 00544c07  ffd0                 call eax
// 00544c09  c70700000000         mov dword ptr [edi], 0
// 00544c0f  83c744               add edi, 0x44
// 00544c12  83eb01               sub ebx, 1
// 00544c15  75a9                 jne 0x544bc0
// 00544c17  55                   push ebp
// 00544c18  e8a38d0000           call 0x54d9c0
// 00544c1d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00544c21  83c404               add esp, 4
// 00544c24  5f                   pop edi
// 00544c25  5e                   pop esi
// 00544c26  5d                   pop ebp
// 00544c27  5b                   pop ebx
// 00544c28  64890d00000000       mov dword ptr fs:[0], ecx
// 00544c2f  83c418               add esp, 0x18
// 00544c32  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?realloc@?$Array@VRenderSurface@Render@RBX@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
