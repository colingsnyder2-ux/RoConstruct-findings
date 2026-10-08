// roc 2009-12 004dd670  unit: G3D::Shader  size: 685 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dd670
//
// 004dd670  6aff                 push -1
// 004dd672  68d4409300           push 0x9340d4
// 004dd677  64a100000000         mov eax, dword ptr fs:[0]
// 004dd67d  50                   push eax
// 004dd67e  64892500000000       mov dword ptr fs:[0], esp
// 004dd685  83ec58               sub esp, 0x58
// 004dd688  53                   push ebx
// 004dd689  55                   push ebp
// 004dd68a  56                   push esi
// 004dd68b  57                   push edi
// 004dd68c  8bf9                 mov edi, ecx
// 004dd68e  33ed                 xor ebp, ebp
// 004dd690  6a01                 push 1
// 004dd692  8db790010000         lea esi, [edi + 0x190]
// 004dd698  55                   push ebp
// 004dd699  8bce                 mov ecx, esi
// 004dd69b  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004dd69f  e83cf0ffff           call 0x4dc6e0
// 004dd6a4  68408b0000           push 0x8b40
// 004dd6a9  ff1528dab700         call dword ptr [0xb7da28]
// 004dd6af  8944242c             mov dword ptr [esp + 0x2c], eax
// 004dd6b3  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 004dd6b9  50                   push eax
// 004dd6ba  ff1548dab700         call dword ptr [0xb7da48]
// 004dd6c0  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 004dd6c6  8d4c241c             lea ecx, [esp + 0x1c]
// 004dd6ca  51                   push ecx
// 004dd6cb  68878b0000           push 0x8b87
// 004dd6d0  50                   push eax
// 004dd6d1  ff1588dab700         call dword ptr [0xb7da88]
// 004dd6d7  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 004dd6dd  8d542424             lea edx, [esp + 0x24]
// 004dd6e1  52                   push edx
// 004dd6e2  68868b0000           push 0x8b86
// 004dd6e7  50                   push eax
// 004dd6e8  ff1588dab700         call dword ptr [0xb7da88]
// 004dd6ee  6a01                 push 1
// 004dd6f0  55                   push ebp
// 004dd6f1  8bce                 mov ecx, esi
// 004dd6f3  e8e8efffff           call 0x4dc6e0
// 004dd6f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004dd6fc  50                   push eax
// 004dd6fd  ff1578b79800         call dword ptr [0x98b778]
// 004dd703  83c404               add esp, 4
// 004dd706  396c2424             cmp dword ptr [esp + 0x24], ebp
// 004dd70a  8bd8                 mov ebx, eax
// 004dd70c  896c2418             mov dword ptr [esp + 0x18], ebp
// 004dd710  0f8edf010000         jle 0x4dd8f5
// 004dd716  eb08                 jmp 0x4dd720
// 004dd718  8da42400000000       lea esp, [esp]
// 004dd71f  90                   nop 
// 004dd720  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 004dd726  53                   push ebx
// 004dd727  8d4c2424             lea ecx, [esp + 0x24]
// 004dd72b  51                   push ecx
// 004dd72c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004dd730  8d542430             lea edx, [esp + 0x30]
// 004dd734  52                   push edx
// 004dd735  8b542424             mov edx, dword ptr [esp + 0x24]
// 004dd739  6a00                 push 0
// 004dd73b  51                   push ecx
// 004dd73c  52                   push edx
// 004dd73d  50                   push eax
// 004dd73e  ff158cdab700         call dword ptr [0xb7da8c]
// 004dd744  8b4604               mov eax, dword ptr [esi + 4]
// 004dd747  6a00                 push 0
// 004dd749  40                   inc eax
// 004dd74a  50                   push eax
// 004dd74b  8bce                 mov ecx, esi
// 004dd74d  e88eefffff           call 0x4dc6e0
// 004dd752  8b4604               mov eax, dword ptr [esi + 4]
// 004dd755  8b16                 mov edx, dword ptr [esi]
// 004dd757  8d0c40               lea ecx, [eax + eax*2]
// 004dd75a  c1e104               shl ecx, 4
// 004dd75d  53                   push ebx
// 004dd75e  8d4c11d8             lea ecx, [ecx + edx - 0x28]
// 004dd762  ff1500b79800         call dword ptr [0x98b700]
// 004dd768  8b4604               mov eax, dword ptr [esi + 4]
// 004dd76b  8b8f14010000         mov ecx, dword ptr [edi + 0x114]
// 004dd771  8b16                 mov edx, dword ptr [esi]
// 004dd773  8d0440               lea eax, [eax + eax*2]
// 004dd776  53                   push ebx
// 004dd777  c1e004               shl eax, 4
// 004dd77a  51                   push ecx
// 004dd77b  8d6c10d0             lea ebp, [eax + edx - 0x30]
// 004dd77f  ff1580dab700         call dword ptr [0xb7da80]
// 004dd785  894504               mov dword ptr [ebp + 4], eax
// 004dd788  8b4604               mov eax, dword ptr [esi + 4]
// 004dd78b  8b0e                 mov ecx, dword ptr [esi]
// 004dd78d  8d0440               lea eax, [eax + eax*2]
// 004dd790  c1e004               shl eax, 4
// 004dd793  83cdff               or ebp, 0xffffffff
// 004dd796  396c08d4             cmp dword ptr [eax + ecx - 0x2c], ebp
// 004dd79a  7460                 je 0x4dd7fc
// 004dd79c  8bc3                 mov eax, ebx
// 004dd79e  8d5001               lea edx, [eax + 1]
// 004dd7a1  8a08                 mov cl, byte ptr [eax]
// 004dd7a3  40                   inc eax
// 004dd7a4  84c9                 test cl, cl
// 004dd7a6  75f9                 jne 0x4dd7a1
// 004dd7a8  2bc2                 sub eax, edx
// 004dd7aa  83f803               cmp eax, 3
// 004dd7ad  7646                 jbe 0x4dd7f5
// 004dd7af  6800989b00           push 0x9b9800
// 004dd7b4  8d4c2434             lea ecx, [esp + 0x34]
// 004dd7b8  ff15f4b69800         call dword ptr [0x98b6f4]
// 004dd7be  834c241401           or dword ptr [esp + 0x14], 1
// 004dd7c3  53                   push ebx
// 004dd7c4  8d4c2450             lea ecx, [esp + 0x50]
// 004dd7c8  c744247400000000     mov dword ptr [esp + 0x74], 0
// 004dd7d0  ff15f4b69800         call dword ptr [0x98b6f4]
// 004dd7d6  834c241402           or dword ptr [esp + 0x14], 2
// 004dd7db  8d542430             lea edx, [esp + 0x30]
// 004dd7df  52                   push edx
// 004dd7e0  50                   push eax
// 004dd7e1  c744247801000000     mov dword ptr [esp + 0x78], 1
// 004dd7e9  e8c25c1100           call 0x5f34b0
// 004dd7ee  83c408               add esp, 8
// 004dd7f1  84c0                 test al, al
// 004dd7f3  7507                 jne 0x4dd7fc
// 004dd7f5  c644241300           mov byte ptr [esp + 0x13], 0
// 004dd7fa  eb05                 jmp 0x4dd801
// 004dd7fc  c644241301           mov byte ptr [esp + 0x13], 1
// 004dd801  f644241402           test byte ptr [esp + 0x14], 2
// 004dd806  c744247000000000     mov dword ptr [esp + 0x70], 0
// 004dd80e  740f                 je 0x4dd81f
// 004dd810  83642414fd           and dword ptr [esp + 0x14], 0xfffffffd
// 004dd815  8d4c244c             lea ecx, [esp + 0x4c]
// 004dd819  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dd81f  f644241401           test byte ptr [esp + 0x14], 1
// 004dd824  896c2470             mov dword ptr [esp + 0x70], ebp
// 004dd828  740f                 je 0x4dd839
// 004dd82a  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 004dd82f  8d4c2430             lea ecx, [esp + 0x30]
// 004dd833  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dd839  8b4604               mov eax, dword ptr [esi + 4]
// 004dd83c  8b16                 mov edx, dword ptr [esi]
// 004dd83e  8d0c40               lea ecx, [eax + eax*2]
// 004dd841  8a442413             mov al, byte ptr [esp + 0x13]
// 004dd845  c1e104               shl ecx, 4
// 004dd848  884411d0             mov byte ptr [ecx + edx - 0x30], al
// 004dd84c  84c0                 test al, al
// 004dd84e  0f858e000000         jne 0x4dd8e2
// 004dd854  8b4604               mov eax, dword ptr [esi + 4]
// 004dd857  8b0e                 mov ecx, dword ptr [esi]
// 004dd859  8b542428             mov edx, dword ptr [esp + 0x28]
// 004dd85d  8d0440               lea eax, [eax + eax*2]
// 004dd860  c1e004               shl eax, 4
// 004dd863  895408f8             mov dword ptr [eax + ecx - 8], edx
// 004dd867  8b4604               mov eax, dword ptr [esi + 4]
// 004dd86a  8b0e                 mov ecx, dword ptr [esi]
// 004dd86c  8b542420             mov edx, dword ptr [esp + 0x20]
// 004dd870  8d0440               lea eax, [eax + eax*2]
// 004dd873  c1e004               shl eax, 4
// 004dd876  895408f4             mov dword ptr [eax + ecx - 0xc], edx
// 004dd87a  8b442420             mov eax, dword ptr [esp + 0x20]
// 004dd87e  3d5d8b0000           cmp eax, 0x8b5d
// 004dd883  7431                 je 0x4dd8b6
// 004dd885  3d5e8b0000           cmp eax, 0x8b5e
// 004dd88a  742a                 je 0x4dd8b6
// 004dd88c  3d638b0000           cmp eax, 0x8b63
// 004dd891  7423                 je 0x4dd8b6
// 004dd893  3d5f8b0000           cmp eax, 0x8b5f
// 004dd898  741c                 je 0x4dd8b6
// 004dd89a  3d608b0000           cmp eax, 0x8b60
// 004dd89f  7415                 je 0x4dd8b6
// 004dd8a1  3d618b0000           cmp eax, 0x8b61
// 004dd8a6  740e                 je 0x4dd8b6
// 004dd8a8  3d628b0000           cmp eax, 0x8b62
// 004dd8ad  7407                 je 0x4dd8b6
// 004dd8af  3d648b0000           cmp eax, 0x8b64
// 004dd8b4  751d                 jne 0x4dd8d3
// 004dd8b6  ff878c010000         inc dword ptr [edi + 0x18c]
// 004dd8bc  8b4604               mov eax, dword ptr [esi + 4]
// 004dd8bf  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 004dd8c5  8b16                 mov edx, dword ptr [esi]
// 004dd8c7  8d0440               lea eax, [eax + eax*2]
// 004dd8ca  c1e004               shl eax, 4
// 004dd8cd  894c10fc             mov dword ptr [eax + edx - 4], ecx
// 004dd8d1  eb0f                 jmp 0x4dd8e2
// 004dd8d3  8b4604               mov eax, dword ptr [esi + 4]
// 004dd8d6  8b0e                 mov ecx, dword ptr [esi]
// 004dd8d8  8d0440               lea eax, [eax + eax*2]
// 004dd8db  c1e004               shl eax, 4
// 004dd8de  896c08fc             mov dword ptr [eax + ecx - 4], ebp
// 004dd8e2  8b442418             mov eax, dword ptr [esp + 0x18]
// 004dd8e6  40                   inc eax
// 004dd8e7  3b442424             cmp eax, dword ptr [esp + 0x24]
// 004dd8eb  89442418             mov dword ptr [esp + 0x18], eax
// 004dd8ef  0f8c2bfeffff         jl 0x4dd720
// 004dd8f5  53                   push ebx
// 004dd8f6  ff1540b79800         call dword ptr [0x98b740]
// 004dd8fc  8b542430             mov edx, dword ptr [esp + 0x30]
// 004dd900  83c404               add esp, 4
// 004dd903  52                   push edx
// 004dd904  ff1548dab700         call dword ptr [0xb7da48]
// 004dd90a  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004dd90e  5f                   pop edi
// 004dd90f  5e                   pop esi
// 004dd910  5d                   pop ebp
// 004dd911  5b                   pop ebx
// 004dd912  64890d00000000       mov dword ptr fs:[0], ecx
// 004dd919  83c464               add esp, 0x64
// 004dd91c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?computeUniformArray@VertexAndPixelShader@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
