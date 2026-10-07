// roc 2007-08 00482ab0  unit: G3D::Shader  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482ab0
//
// 00482ab0  6aff                 push -1
// 00482ab2  68595f7400           push 0x745f59
// 00482ab7  64a100000000         mov eax, dword ptr fs:[0]
// 00482abd  50                   push eax
// 00482abe  83ec08               sub esp, 8
// 00482ac1  53                   push ebx
// 00482ac2  55                   push ebp
// 00482ac3  56                   push esi
// 00482ac4  57                   push edi
// 00482ac5  a188518b00           mov eax, dword ptr [0x8b5188]
// 00482aca  33c4                 xor eax, esp
// 00482acc  50                   push eax
// 00482acd  8d44241c             lea eax, [esp + 0x1c]
// 00482ad1  64a300000000         mov dword ptr fs:[0], eax
// 00482ad7  8bf1                 mov esi, ecx
// 00482ad9  89742418             mov dword ptr [esp + 0x18], esi
// 00482add  8b4604               mov eax, dword ptr [esi + 4]
// 00482ae0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00482ae4  3be8                 cmp ebp, eax
// 00482ae6  89442414             mov dword ptr [esp + 0x14], eax
// 00482aea  896e04               mov dword ptr [esi + 4], ebp
// 00482aed  7d2a                 jge 0x482b19
// 00482aef  8d7c6d00             lea edi, [ebp + ebp*2]
// 00482af3  8bd8                 mov ebx, eax
// 00482af5  c1e704               shl edi, 4
// 00482af8  2bdd                 sub ebx, ebp
// 00482afa  8d9b00000000         lea ebx, [ebx]
// 00482b00  8b06                 mov eax, dword ptr [esi]
// 00482b02  03c7                 add eax, edi
// 00482b04  8d4808               lea ecx, [eax + 8]
// 00482b07  ff15ace67700         call dword ptr [0x77e6ac]
// 00482b0d  83c730               add edi, 0x30
// 00482b10  83eb01               sub ebx, 1
// 00482b13  75eb                 jne 0x482b00
// 00482b15  8b442414             mov eax, dword ptr [esp + 0x14]
// 00482b19  f605d0db8b0001       test byte ptr [0x8bdbd0], 1
// 00482b20  7514                 jne 0x482b36
// 00482b22  830dd0db8b0001       or dword ptr [0x8bdbd0], 1
// 00482b29  bb0a000000           mov ebx, 0xa
// 00482b2e  891dccdb8b00         mov dword ptr [0x8bdbcc], ebx
// 00482b34  eb06                 jmp 0x482b3c
// 00482b36  8b1dccdb8b00         mov ebx, dword ptr [0x8bdbcc]
// 00482b3c  8b7e04               mov edi, dword ptr [esi + 4]
// 00482b3f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00482b42  3bf9                 cmp edi, ecx
// 00482b44  7e7a                 jle 0x482bc0
// 00482b46  85c9                 test ecx, ecx
// 00482b48  7509                 jne 0x482b53
// 00482b4a  896e08               mov dword ptr [esi + 8], ebp
// 00482b4d  50                   push eax
// 00482b4e  e995000000           jmp 0x482be8
// 00482b53  3bfb                 cmp edi, ebx
// 00482b55  7d09                 jge 0x482b60
// 00482b57  895e08               mov dword ptr [esi + 8], ebx
// 00482b5a  50                   push eax
// 00482b5b  e988000000           jmp 0x482be8
// 00482b60  d905387b7900         fld dword ptr [0x797b38]
// 00482b66  8bc1                 mov eax, ecx
// 00482b68  8d0440               lea eax, [eax + eax*2]
// 00482b6b  d95c2430             fstp dword ptr [esp + 0x30]
// 00482b6f  c1e004               shl eax, 4
// 00482b72  3d801a0600           cmp eax, 0x61a80
// 00482b77  7608                 jbe 0x482b81
// 00482b79  d905347b7900         fld dword ptr [0x797b34]
// 00482b7f  eb0d                 jmp 0x482b8e
// 00482b81  3d00fa0000           cmp eax, 0xfa00
// 00482b86  760a                 jbe 0x482b92
// 00482b88  d90588797900         fld dword ptr [0x797988]
// 00482b8e  d95c2430             fstp dword ptr [esp + 0x30]
// 00482b92  8be9                 mov ebp, ecx
// 00482b94  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00482b98  db44242c             fild dword ptr [esp + 0x2c]
// 00482b9c  d84c2430             fmul dword ptr [esp + 0x30]
// 00482ba0  e8bbe11a00           call 0x630d60
// 00482ba5  2bc5                 sub eax, ebp
// 00482ba7  03c7                 add eax, edi
// 00482ba9  894608               mov dword ptr [esi + 8], eax
// 00482bac  8b0dccdb8b00         mov ecx, dword ptr [0x8bdbcc]
// 00482bb2  3bc1                 cmp eax, ecx
// 00482bb4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00482bb8  7d03                 jge 0x482bbd
// 00482bba  894e08               mov dword ptr [esi + 8], ecx
// 00482bbd  50                   push eax
// 00482bbe  eb28                 jmp 0x482be8
// 00482bc0  b856555555           mov eax, 0x55555556
// 00482bc5  f7e9                 imul ecx
// 00482bc7  8bc2                 mov eax, edx
// 00482bc9  c1e81f               shr eax, 0x1f
// 00482bcc  03c2                 add eax, edx
// 00482bce  3bf8                 cmp edi, eax
// 00482bd0  7f1d                 jg 0x482bef
// 00482bd2  807c243000           cmp byte ptr [esp + 0x30], 0
// 00482bd7  7416                 je 0x482bef
// 00482bd9  3bfb                 cmp edi, ebx
// 00482bdb  7e12                 jle 0x482bef
// 00482bdd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00482be1  3bf8                 cmp edi, eax
// 00482be3  7c02                 jl 0x482be7
// 00482be5  8bf8                 mov edi, eax
// 00482be7  57                   push edi
// 00482be8  8bce                 mov ecx, esi
// 00482bea  e831fdffff           call 0x482920
// 00482bef  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00482bf3  3b7e04               cmp edi, dword ptr [esi + 4]
// 00482bf6  897c2430             mov dword ptr [esp + 0x30], edi
// 00482bfa  7d33                 jge 0x482c2f
// 00482bfc  83cbff               or ebx, 0xffffffff
// 00482bff  90                   nop 
// 00482c00  8d047f               lea eax, [edi + edi*2]
// 00482c03  c1e004               shl eax, 4
// 00482c06  0306                 add eax, dword ptr [esi]
// 00482c08  8944242c             mov dword ptr [esp + 0x2c], eax
// 00482c0c  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00482c14  7409                 je 0x482c1f
// 00482c16  8d4808               lea ecx, [eax + 8]
// 00482c19  ff15a4e67700         call dword ptr [0x77e6a4]
// 00482c1f  83c701               add edi, 1
// 00482c22  3b7e04               cmp edi, dword ptr [esi + 4]
// 00482c25  895c2424             mov dword ptr [esp + 0x24], ebx
// 00482c29  897c2430             mov dword ptr [esp + 0x30], edi
// 00482c2d  7cd1                 jl 0x482c00
// 00482c2f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00482c33  64890d00000000       mov dword ptr fs:[0], ecx
// 00482c3a  59                   pop ecx
// 00482c3b  5f                   pop edi
// 00482c3c  5e                   pop esi
// 00482c3d  5d                   pop ebp
// 00482c3e  5b                   pop ebx
// 00482c3f  83c414               add esp, 0x14
// 00482c42  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?resize@?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
