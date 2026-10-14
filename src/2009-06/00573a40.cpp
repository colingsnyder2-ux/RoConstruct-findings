// roc 2009-06 00573a40  unit: G3D::GCamera  size: 370 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573a40
//
// 00573a40  8b542404             mov edx, dword ptr [esp + 4]
// 00573a44  53                   push ebx
// 00573a45  56                   push esi
// 00573a46  8bf1                 mov esi, ecx
// 00573a48  8b5e04               mov ebx, dword ptr [esi + 4]
// 00573a4b  3bd3                 cmp edx, ebx
// 00573a4d  57                   push edi
// 00573a4e  895604               mov dword ptr [esi + 4], edx
// 00573a51  7d1f                 jge 0x573a72
// 00573a53  8d04d2               lea eax, [edx + edx*8]
// 00573a56  03c0                 add eax, eax
// 00573a58  8bcb                 mov ecx, ebx
// 00573a5a  03c0                 add eax, eax
// 00573a5c  2bca                 sub ecx, edx
// 00573a5e  8bff                 mov edi, edi
// 00573a60  8b3e                 mov edi, dword ptr [esi]
// 00573a62  c744381014b78c00     mov dword ptr [eax + edi + 0x10], 0x8cb714
// 00573a6a  83c024               add eax, 0x24
// 00573a6d  83e901               sub ecx, 1
// 00573a70  75ee                 jne 0x573a60
// 00573a72  f605302aa40001       test byte ptr [0xa42a30], 1
// 00573a79  55                   push ebp
// 00573a7a  7514                 jne 0x573a90
// 00573a7c  830d302aa40001       or dword ptr [0xa42a30], 1
// 00573a83  bd0a000000           mov ebp, 0xa
// 00573a88  892d2c2aa400         mov dword ptr [0xa42a2c], ebp
// 00573a8e  eb06                 jmp 0x573a96
// 00573a90  8b2d2c2aa400         mov ebp, dword ptr [0xa42a2c]
// 00573a96  8b7e04               mov edi, dword ptr [esi + 4]
// 00573a99  8b4e08               mov ecx, dword ptr [esi + 8]
// 00573a9c  3bf9                 cmp edi, ecx
// 00573a9e  7e6c                 jle 0x573b0c
// 00573aa0  85c9                 test ecx, ecx
// 00573aa2  7509                 jne 0x573aad
// 00573aa4  895608               mov dword ptr [esi + 8], edx
// 00573aa7  53                   push ebx
// 00573aa8  e983000000           jmp 0x573b30
// 00573aad  3bfd                 cmp edi, ebp
// 00573aaf  7d06                 jge 0x573ab7
// 00573ab1  896e08               mov dword ptr [esi + 8], ebp
// 00573ab4  53                   push ebx
// 00573ab5  eb79                 jmp 0x573b30
// 00573ab7  d90548e88b00         fld dword ptr [0x8be848]
// 00573abd  8bc1                 mov eax, ecx
// 00573abf  8d04c0               lea eax, [eax + eax*8]
// 00573ac2  03c0                 add eax, eax
// 00573ac4  03c0                 add eax, eax
// 00573ac6  3d801a0600           cmp eax, 0x61a80
// 00573acb  760a                 jbe 0x573ad7
// 00573acd  ddd8                 fstp st(0)
// 00573acf  d905a0ef8b00         fld dword ptr [0x8befa0]
// 00573ad5  eb0f                 jmp 0x573ae6
// 00573ad7  3d00fa0000           cmp eax, 0xfa00
// 00573adc  7608                 jbe 0x573ae6
// 00573ade  ddd8                 fstp st(0)
// 00573ae0  d90544d08b00         fld dword ptr [0x8bd044]
// 00573ae6  8be9                 mov ebp, ecx
// 00573ae8  896c2418             mov dword ptr [esp + 0x18], ebp
// 00573aec  da4c2418             fimul dword ptr [esp + 0x18]
// 00573af0  e8cb631a00           call 0x719ec0
// 00573af5  2bc5                 sub eax, ebp
// 00573af7  03c7                 add eax, edi
// 00573af9  894608               mov dword ptr [esi + 8], eax
// 00573afc  8b0d2c2aa400         mov ecx, dword ptr [0xa42a2c]
// 00573b02  3bc1                 cmp eax, ecx
// 00573b04  7d03                 jge 0x573b09
// 00573b06  894e08               mov dword ptr [esi + 8], ecx
// 00573b09  53                   push ebx
// 00573b0a  eb24                 jmp 0x573b30
// 00573b0c  b856555555           mov eax, 0x55555556
// 00573b11  f7e9                 imul ecx
// 00573b13  8bc2                 mov eax, edx
// 00573b15  c1e81f               shr eax, 0x1f
// 00573b18  03c2                 add eax, edx
// 00573b1a  3bf8                 cmp edi, eax
// 00573b1c  7f19                 jg 0x573b37
// 00573b1e  807c241800           cmp byte ptr [esp + 0x18], 0
// 00573b23  7412                 je 0x573b37
// 00573b25  3bfd                 cmp edi, ebp
// 00573b27  7e0e                 jle 0x573b37
// 00573b29  3bfb                 cmp edi, ebx
// 00573b2b  7c02                 jl 0x573b2f
// 00573b2d  8bfb                 mov edi, ebx
// 00573b2f  57                   push edi
// 00573b30  8bce                 mov ecx, esi
// 00573b32  e819fcffff           call 0x573750
// 00573b37  3b5e04               cmp ebx, dword ptr [esi + 4]
// 00573b3a  8bfb                 mov edi, ebx
// 00573b3c  5d                   pop ebp
// 00573b3d  7d6d                 jge 0x573bac
// 00573b3f  d9ee                 fldz 
// 00573b41  8d0cdb               lea ecx, [ebx + ebx*8]
// 00573b44  d9e8                 fld1 
// 00573b46  03c9                 add ecx, ecx
// 00573b48  03c9                 add ecx, ecx
// 00573b4a  8b06                 mov eax, dword ptr [esi]
// 00573b4c  03c1                 add eax, ecx
// 00573b4e  744f                 je 0x573b9f
// 00573b50  c7401014b78c00       mov dword ptr [eax + 0x10], 0x8cb714
// 00573b57  f605b01ca40001       test byte ptr [0xa41cb0], 1
// 00573b5e  751d                 jne 0x573b7d
// 00573b60  830db01ca40001       or dword ptr [0xa41cb0], 1
// 00573b67  d9c9                 fxch st(1)
// 00573b69  d915a41ca400         fst dword ptr [0xa41ca4]
// 00573b6f  d915ac1ca400         fst dword ptr [0xa41cac]
// 00573b75  d9c9                 fxch st(1)
// 00573b77  d915a81ca400         fst dword ptr [0xa41ca8]
// 00573b7d  d905a41ca400         fld dword ptr [0xa41ca4]
// 00573b83  d95814               fstp dword ptr [eax + 0x14]
// 00573b86  d905a81ca400         fld dword ptr [0xa41ca8]
// 00573b8c  d95818               fstp dword ptr [eax + 0x18]
// 00573b8f  d905ac1ca400         fld dword ptr [0xa41cac]
// 00573b95  d9581c               fstp dword ptr [eax + 0x1c]
// 00573b98  d9c9                 fxch st(1)
// 00573b9a  d95020               fst dword ptr [eax + 0x20]
// 00573b9d  d9c9                 fxch st(1)
// 00573b9f  47                   inc edi
// 00573ba0  83c124               add ecx, 0x24
// 00573ba3  3b7e04               cmp edi, dword ptr [esi + 4]
// 00573ba6  7ca2                 jl 0x573b4a
// 00573ba8  ddd9                 fstp st(1)
// 00573baa  ddd8                 fstp st(0)
// 00573bac  5f                   pop edi
// 00573bad  5e                   pop esi
// 00573bae  5b                   pop ebx
// 00573baf  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GCamera.cpp (function ?resize@?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GCamera.cpp
