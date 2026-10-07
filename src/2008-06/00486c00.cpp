// roc 2008-06 00486c00  unit: G3D::Shader  size: 685 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00486c00
//
// 00486c00  6aff                 push -1
// 00486c02  6844577c00           push 0x7c5744
// 00486c07  64a100000000         mov eax, dword ptr fs:[0]
// 00486c0d  50                   push eax
// 00486c0e  64892500000000       mov dword ptr fs:[0], esp
// 00486c15  83ec58               sub esp, 0x58
// 00486c18  53                   push ebx
// 00486c19  55                   push ebp
// 00486c1a  56                   push esi
// 00486c1b  57                   push edi
// 00486c1c  8bf9                 mov edi, ecx
// 00486c1e  33ed                 xor ebp, ebp
// 00486c20  6a01                 push 1
// 00486c22  8db790010000         lea esi, [edi + 0x190]
// 00486c28  55                   push ebp
// 00486c29  8bce                 mov ecx, esi
// 00486c2b  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00486c2f  e8bcf0ffff           call 0x485cf0
// 00486c34  68408b0000           push 0x8b40
// 00486c39  ff1518f99600         call dword ptr [0x96f918]
// 00486c3f  8944242c             mov dword ptr [esp + 0x2c], eax
// 00486c43  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 00486c49  50                   push eax
// 00486c4a  ff1538f99600         call dword ptr [0x96f938]
// 00486c50  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 00486c56  8d4c241c             lea ecx, [esp + 0x1c]
// 00486c5a  51                   push ecx
// 00486c5b  68878b0000           push 0x8b87
// 00486c60  50                   push eax
// 00486c61  ff1578f99600         call dword ptr [0x96f978]
// 00486c67  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 00486c6d  8d542424             lea edx, [esp + 0x24]
// 00486c71  52                   push edx
// 00486c72  68868b0000           push 0x8b86
// 00486c77  50                   push eax
// 00486c78  ff1578f99600         call dword ptr [0x96f978]
// 00486c7e  6a01                 push 1
// 00486c80  55                   push ebp
// 00486c81  8bce                 mov ecx, esi
// 00486c83  e868f0ffff           call 0x485cf0
// 00486c88  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00486c8c  50                   push eax
// 00486c8d  ff15b0288000         call dword ptr [0x8028b0]
// 00486c93  83c404               add esp, 4
// 00486c96  396c2424             cmp dword ptr [esp + 0x24], ebp
// 00486c9a  8bd8                 mov ebx, eax
// 00486c9c  896c2418             mov dword ptr [esp + 0x18], ebp
// 00486ca0  0f8edf010000         jle 0x486e85
// 00486ca6  eb08                 jmp 0x486cb0
// 00486ca8  8da42400000000       lea esp, [esp]
// 00486caf  90                   nop 
// 00486cb0  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 00486cb6  53                   push ebx
// 00486cb7  8d4c2424             lea ecx, [esp + 0x24]
// 00486cbb  51                   push ecx
// 00486cbc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00486cc0  8d542430             lea edx, [esp + 0x30]
// 00486cc4  52                   push edx
// 00486cc5  8b542424             mov edx, dword ptr [esp + 0x24]
// 00486cc9  6a00                 push 0
// 00486ccb  51                   push ecx
// 00486ccc  52                   push edx
// 00486ccd  50                   push eax
// 00486cce  ff157cf99600         call dword ptr [0x96f97c]
// 00486cd4  8b4604               mov eax, dword ptr [esi + 4]
// 00486cd7  6a00                 push 0
// 00486cd9  40                   inc eax
// 00486cda  50                   push eax
// 00486cdb  8bce                 mov ecx, esi
// 00486cdd  e80ef0ffff           call 0x485cf0
// 00486ce2  8b4604               mov eax, dword ptr [esi + 4]
// 00486ce5  8b16                 mov edx, dword ptr [esi]
// 00486ce7  8d0c40               lea ecx, [eax + eax*2]
// 00486cea  c1e104               shl ecx, 4
// 00486ced  53                   push ebx
// 00486cee  8d4c11d8             lea ecx, [ecx + edx - 0x28]
// 00486cf2  ff154c248000         call dword ptr [0x80244c]
// 00486cf8  8b4604               mov eax, dword ptr [esi + 4]
// 00486cfb  8b8f14010000         mov ecx, dword ptr [edi + 0x114]
// 00486d01  8b16                 mov edx, dword ptr [esi]
// 00486d03  8d0440               lea eax, [eax + eax*2]
// 00486d06  53                   push ebx
// 00486d07  c1e004               shl eax, 4
// 00486d0a  51                   push ecx
// 00486d0b  8d6c10d0             lea ebp, [eax + edx - 0x30]
// 00486d0f  ff1570f99600         call dword ptr [0x96f970]
// 00486d15  894504               mov dword ptr [ebp + 4], eax
// 00486d18  8b4604               mov eax, dword ptr [esi + 4]
// 00486d1b  8b0e                 mov ecx, dword ptr [esi]
// 00486d1d  8d0440               lea eax, [eax + eax*2]
// 00486d20  c1e004               shl eax, 4
// 00486d23  83cdff               or ebp, 0xffffffff
// 00486d26  396c08d4             cmp dword ptr [eax + ecx - 0x2c], ebp
// 00486d2a  7460                 je 0x486d8c
// 00486d2c  8bc3                 mov eax, ebx
// 00486d2e  8d5001               lea edx, [eax + 1]
// 00486d31  8a08                 mov cl, byte ptr [eax]
// 00486d33  40                   inc eax
// 00486d34  84c9                 test cl, cl
// 00486d36  75f9                 jne 0x486d31
// 00486d38  2bc2                 sub eax, edx
// 00486d3a  83f803               cmp eax, 3
// 00486d3d  7646                 jbe 0x486d85
// 00486d3f  68900f8200           push 0x820f90
// 00486d44  8d4c2434             lea ecx, [esp + 0x34]
// 00486d48  ff1558248000         call dword ptr [0x802458]
// 00486d4e  834c241401           or dword ptr [esp + 0x14], 1
// 00486d53  53                   push ebx
// 00486d54  8d4c2450             lea ecx, [esp + 0x50]
// 00486d58  c744247400000000     mov dword ptr [esp + 0x74], 0
// 00486d60  ff1558248000         call dword ptr [0x802458]
// 00486d66  834c241402           or dword ptr [esp + 0x14], 2
// 00486d6b  8d542430             lea edx, [esp + 0x30]
// 00486d6f  52                   push edx
// 00486d70  50                   push eax
// 00486d71  c744247801000000     mov dword ptr [esp + 0x78], 1
// 00486d79  e832b30800           call 0x5120b0
// 00486d7e  83c408               add esp, 8
// 00486d81  84c0                 test al, al
// 00486d83  7507                 jne 0x486d8c
// 00486d85  c644241300           mov byte ptr [esp + 0x13], 0
// 00486d8a  eb05                 jmp 0x486d91
// 00486d8c  c644241301           mov byte ptr [esp + 0x13], 1
// 00486d91  f644241402           test byte ptr [esp + 0x14], 2
// 00486d96  c744247000000000     mov dword ptr [esp + 0x70], 0
// 00486d9e  740f                 je 0x486daf
// 00486da0  83642414fd           and dword ptr [esp + 0x14], 0xfffffffd
// 00486da5  8d4c244c             lea ecx, [esp + 0x4c]
// 00486da9  ff1568248000         call dword ptr [0x802468]
// 00486daf  f644241401           test byte ptr [esp + 0x14], 1
// 00486db4  896c2470             mov dword ptr [esp + 0x70], ebp
// 00486db8  740f                 je 0x486dc9
// 00486dba  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 00486dbf  8d4c2430             lea ecx, [esp + 0x30]
// 00486dc3  ff1568248000         call dword ptr [0x802468]
// 00486dc9  8b4604               mov eax, dword ptr [esi + 4]
// 00486dcc  8b16                 mov edx, dword ptr [esi]
// 00486dce  8d0c40               lea ecx, [eax + eax*2]
// 00486dd1  8a442413             mov al, byte ptr [esp + 0x13]
// 00486dd5  c1e104               shl ecx, 4
// 00486dd8  884411d0             mov byte ptr [ecx + edx - 0x30], al
// 00486ddc  84c0                 test al, al
// 00486dde  0f858e000000         jne 0x486e72
// 00486de4  8b4604               mov eax, dword ptr [esi + 4]
// 00486de7  8b0e                 mov ecx, dword ptr [esi]
// 00486de9  8b542428             mov edx, dword ptr [esp + 0x28]
// 00486ded  8d0440               lea eax, [eax + eax*2]
// 00486df0  c1e004               shl eax, 4
// 00486df3  895408f8             mov dword ptr [eax + ecx - 8], edx
// 00486df7  8b4604               mov eax, dword ptr [esi + 4]
// 00486dfa  8b0e                 mov ecx, dword ptr [esi]
// 00486dfc  8b542420             mov edx, dword ptr [esp + 0x20]
// 00486e00  8d0440               lea eax, [eax + eax*2]
// 00486e03  c1e004               shl eax, 4
// 00486e06  895408f4             mov dword ptr [eax + ecx - 0xc], edx
// 00486e0a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00486e0e  3d5d8b0000           cmp eax, 0x8b5d
// 00486e13  7431                 je 0x486e46
// 00486e15  3d5e8b0000           cmp eax, 0x8b5e
// 00486e1a  742a                 je 0x486e46
// 00486e1c  3d638b0000           cmp eax, 0x8b63
// 00486e21  7423                 je 0x486e46
// 00486e23  3d5f8b0000           cmp eax, 0x8b5f
// 00486e28  741c                 je 0x486e46
// 00486e2a  3d608b0000           cmp eax, 0x8b60
// 00486e2f  7415                 je 0x486e46
// 00486e31  3d618b0000           cmp eax, 0x8b61
// 00486e36  740e                 je 0x486e46
// 00486e38  3d628b0000           cmp eax, 0x8b62
// 00486e3d  7407                 je 0x486e46
// 00486e3f  3d648b0000           cmp eax, 0x8b64
// 00486e44  751d                 jne 0x486e63
// 00486e46  ff878c010000         inc dword ptr [edi + 0x18c]
// 00486e4c  8b4604               mov eax, dword ptr [esi + 4]
// 00486e4f  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 00486e55  8b16                 mov edx, dword ptr [esi]
// 00486e57  8d0440               lea eax, [eax + eax*2]
// 00486e5a  c1e004               shl eax, 4
// 00486e5d  894c10fc             mov dword ptr [eax + edx - 4], ecx
// 00486e61  eb0f                 jmp 0x486e72
// 00486e63  8b4604               mov eax, dword ptr [esi + 4]
// 00486e66  8b0e                 mov ecx, dword ptr [esi]
// 00486e68  8d0440               lea eax, [eax + eax*2]
// 00486e6b  c1e004               shl eax, 4
// 00486e6e  896c08fc             mov dword ptr [eax + ecx - 4], ebp
// 00486e72  8b442418             mov eax, dword ptr [esp + 0x18]
// 00486e76  40                   inc eax
// 00486e77  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00486e7b  89442418             mov dword ptr [esp + 0x18], eax
// 00486e7f  0f8c2bfeffff         jl 0x486cb0
// 00486e85  53                   push ebx
// 00486e86  ff15c0288000         call dword ptr [0x8028c0]
// 00486e8c  8b542430             mov edx, dword ptr [esp + 0x30]
// 00486e90  83c404               add esp, 4
// 00486e93  52                   push edx
// 00486e94  ff1538f99600         call dword ptr [0x96f938]
// 00486e9a  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00486e9e  5f                   pop edi
// 00486e9f  5e                   pop esi
// 00486ea0  5d                   pop ebp
// 00486ea1  5b                   pop ebx
// 00486ea2  64890d00000000       mov dword ptr fs:[0], ecx
// 00486ea9  83c464               add esp, 0x64
// 00486eac  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?computeUniformArray@VertexAndPixelShader@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
