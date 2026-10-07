// roc 2007-08 00482920  unit: G3D::Shader  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482920
//
// 00482920  6aff                 push -1
// 00482922  68215f7400           push 0x745f21
// 00482927  64a100000000         mov eax, dword ptr fs:[0]
// 0048292d  50                   push eax
// 0048292e  83ec08               sub esp, 8
// 00482931  53                   push ebx
// 00482932  55                   push ebp
// 00482933  56                   push esi
// 00482934  57                   push edi
// 00482935  a188518b00           mov eax, dword ptr [0x8b5188]
// 0048293a  33c4                 xor eax, esp
// 0048293c  50                   push eax
// 0048293d  8d44241c             lea eax, [esp + 0x1c]
// 00482941  64a300000000         mov dword ptr fs:[0], eax
// 00482947  8bf9                 mov edi, ecx
// 00482949  8b4708               mov eax, dword ptr [edi + 8]
// 0048294c  8b2f                 mov ebp, dword ptr [edi]
// 0048294e  8d0440               lea eax, [eax + eax*2]
// 00482951  c1e004               shl eax, 4
// 00482954  6a10                 push 0x10
// 00482956  50                   push eax
// 00482957  e804d70700           call 0x500060
// 0048295c  8b4f08               mov ecx, dword ptr [edi + 8]
// 0048295f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00482963  83c408               add esp, 8
// 00482966  3bd1                 cmp edx, ecx
// 00482968  8907                 mov dword ptr [edi], eax
// 0048296a  7d02                 jge 0x48296e
// 0048296c  8bca                 mov ecx, edx
// 0048296e  8d1c49               lea ebx, [ecx + ecx*2]
// 00482971  c1e304               shl ebx, 4
// 00482974  8bf0                 mov esi, eax
// 00482976  03d8                 add ebx, eax
// 00482978  3bf3                 cmp esi, ebx
// 0048297a  89742414             mov dword ptr [esp + 0x14], esi
// 0048297e  7361                 jae 0x4829e1
// 00482980  8d7d08               lea edi, [ebp + 8]
// 00482983  eb0b                 jmp 0x482990
// 00482985  8da42400000000       lea esp, [esp]
// 0048298c  8d642400             lea esp, [esp]
// 00482990  89742418             mov dword ptr [esp + 0x18], esi
// 00482994  85f6                 test esi, esi
// 00482996  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0048299e  742b                 je 0x4829cb
// 004829a0  8a4ff8               mov cl, byte ptr [edi - 8]
// 004829a3  880e                 mov byte ptr [esi], cl
// 004829a5  8b57fc               mov edx, dword ptr [edi - 4]
// 004829a8  57                   push edi
// 004829a9  8d4e08               lea ecx, [esi + 8]
// 004829ac  895604               mov dword ptr [esi + 4], edx
// 004829af  ff159ce67700         call dword ptr [0x77e69c]
// 004829b5  8b471c               mov eax, dword ptr [edi + 0x1c]
// 004829b8  894624               mov dword ptr [esi + 0x24], eax
// 004829bb  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 004829be  894e28               mov dword ptr [esi + 0x28], ecx
// 004829c1  8b5724               mov edx, dword ptr [edi + 0x24]
// 004829c4  89562c               mov dword ptr [esi + 0x2c], edx
// 004829c7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004829cb  83c630               add esi, 0x30
// 004829ce  83c730               add edi, 0x30
// 004829d1  3bf3                 cmp esi, ebx
// 004829d3  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004829db  89742414             mov dword ptr [esp + 0x14], esi
// 004829df  72af                 jb 0x482990
// 004829e1  8d3452               lea esi, [edx + edx*2]
// 004829e4  c1e604               shl esi, 4
// 004829e7  03f5                 add esi, ebp
// 004829e9  3bee                 cmp ebp, esi
// 004829eb  8bfd                 mov edi, ebp
// 004829ed  7311                 jae 0x482a00
// 004829ef  90                   nop 
// 004829f0  8d4f08               lea ecx, [edi + 8]
// 004829f3  ff15ace67700         call dword ptr [0x77e6ac]
// 004829f9  83c730               add edi, 0x30
// 004829fc  3bfe                 cmp edi, esi
// 004829fe  72f0                 jb 0x4829f0
// 00482a00  55                   push ebp
// 00482a01  e80ace0700           call 0x4ff810
// 00482a06  83c404               add esp, 4
// 00482a09  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00482a0d  64890d00000000       mov dword ptr fs:[0], ecx
// 00482a14  59                   pop ecx
// 00482a15  5f                   pop edi
// 00482a16  5e                   pop esi
// 00482a17  5d                   pop ebp
// 00482a18  5b                   pop ebx
// 00482a19  83c414               add esp, 0x14
// 00482a1c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?realloc@?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
