// from server: 100% by tester
// roc 2007-03 00480dd0  unit: seg_00480000  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480dd0
//
// 00480dd0  6aff                 push -1
// 00480dd2  68f1f37400           push 0x74f3f1
// 00480dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00480ddd  50                   push eax
// 00480dde  83ec08               sub esp, 8
// 00480de1  53                   push ebx
// 00480de2  55                   push ebp
// 00480de3  56                   push esi
// 00480de4  57                   push edi
// 00480de5  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00480dea  33c4                 xor eax, esp
// 00480dec  50                   push eax
// 00480ded  8d44241c             lea eax, [esp + 0x1c]
// 00480df1  64a300000000         mov dword ptr fs:[0], eax
// 00480df7  8bf9                 mov edi, ecx
// 00480df9  8b4708               mov eax, dword ptr [edi + 8]
// 00480dfc  8b2f                 mov ebp, dword ptr [edi]
// 00480dfe  8d0440               lea eax, [eax + eax*2]
// 00480e01  c1e004               shl eax, 4
// 00480e04  6a10                 push 0x10
// 00480e06  50                   push eax
// 00480e07  e8c42d0700           call 0x4f3bd0
// 00480e0c  8b4f08               mov ecx, dword ptr [edi + 8]
// 00480e0f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00480e13  83c408               add esp, 8
// 00480e16  3bd1                 cmp edx, ecx
// 00480e18  8907                 mov dword ptr [edi], eax
// 00480e1a  7d02                 jge 0x480e1e
// 00480e1c  8bca                 mov ecx, edx
// 00480e1e  8d1c49               lea ebx, [ecx + ecx*2]
// 00480e21  c1e304               shl ebx, 4
// 00480e24  8bf0                 mov esi, eax
// 00480e26  03d8                 add ebx, eax
// 00480e28  3bf3                 cmp esi, ebx
// 00480e2a  89742414             mov dword ptr [esp + 0x14], esi
// 00480e2e  7361                 jae 0x480e91
// 00480e30  8d7d08               lea edi, [ebp + 8]
// 00480e33  eb0b                 jmp 0x480e40
// 00480e35  8da42400000000       lea esp, [esp]
// 00480e3c  8d642400             lea esp, [esp]
// 00480e40  89742418             mov dword ptr [esp + 0x18], esi
// 00480e44  85f6                 test esi, esi
// 00480e46  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00480e4e  742b                 je 0x480e7b
// 00480e50  8a4ff8               mov cl, byte ptr [edi - 8]
// 00480e53  880e                 mov byte ptr [esi], cl
// 00480e55  8b57fc               mov edx, dword ptr [edi - 4]
// 00480e58  57                   push edi
// 00480e59  8d4e08               lea ecx, [esi + 8]
// 00480e5c  895604               mov dword ptr [esi + 4], edx
// 00480e5f  ff157ce77700         call dword ptr [0x77e77c]
// 00480e65  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00480e68  894624               mov dword ptr [esi + 0x24], eax
// 00480e6b  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00480e6e  894e28               mov dword ptr [esi + 0x28], ecx
// 00480e71  8b5724               mov edx, dword ptr [edi + 0x24]
// 00480e74  89562c               mov dword ptr [esi + 0x2c], edx
// 00480e77  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00480e7b  83c630               add esi, 0x30
// 00480e7e  83c730               add edi, 0x30
// 00480e81  3bf3                 cmp esi, ebx
// 00480e83  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00480e8b  89742414             mov dword ptr [esp + 0x14], esi
// 00480e8f  72af                 jb 0x480e40
// 00480e91  8d3452               lea esi, [edx + edx*2]
// 00480e94  c1e604               shl esi, 4
// 00480e97  03f5                 add esi, ebp
// 00480e99  3bee                 cmp ebp, esi
// 00480e9b  8bfd                 mov edi, ebp
// 00480e9d  7311                 jae 0x480eb0
// 00480e9f  90                   nop 
// 00480ea0  8d4f08               lea ecx, [edi + 8]
// 00480ea3  ff158ce77700         call dword ptr [0x77e78c]
// 00480ea9  83c730               add edi, 0x30
// 00480eac  3bfe                 cmp edi, esi
// 00480eae  72f0                 jb 0x480ea0
// 00480eb0  55                   push ebp
// 00480eb1  e8ca240700           call 0x4f3380
// 00480eb6  83c404               add esp, 4
// 00480eb9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00480ebd  64890d00000000       mov dword ptr fs:[0], ecx
// 00480ec4  59                   pop ecx
// 00480ec5  5f                   pop edi
// 00480ec6  5e                   pop esi
// 00480ec7  5d                   pop ebp
// 00480ec8  5b                   pop ebx
// 00480ec9  83c414               add esp, 0x14
// 00480ecc  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?realloc@?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
