// roc 2009-06 00622e00  unit: RBX::RootInstance  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00622e00
//
// 00622e00  6aff                 push -1
// 00622e02  64a100000000         mov eax, dword ptr fs:[0]
// 00622e08  8b542408             mov edx, dword ptr [esp + 8]
// 00622e0c  68608a8600           push 0x868a60
// 00622e11  50                   push eax
// 00622e12  64892500000000       mov dword ptr fs:[0], esp
// 00622e19  83ec1c               sub esp, 0x1c
// 00622e1c  53                   push ebx
// 00622e1d  55                   push ebp
// 00622e1e  56                   push esi
// 00622e1f  57                   push edi
// 00622e20  8bf9                 mov edi, ecx
// 00622e22  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00622e25  8b4104               mov eax, dword ptr [ecx + 4]
// 00622e28  33db                 xor ebx, ebx
// 00622e2a  8be9                 mov ebp, ecx
// 00622e2c  385819               cmp byte ptr [eax + 0x19], bl
// 00622e2f  7515                 jne 0x622e46
// 00622e31  8b0a                 mov ecx, dword ptr [edx]
// 00622e33  39480c               cmp dword ptr [eax + 0xc], ecx
// 00622e36  7305                 jae 0x622e3d
// 00622e38  8b4008               mov eax, dword ptr [eax + 8]
// 00622e3b  eb04                 jmp 0x622e41
// 00622e3d  8be8                 mov ebp, eax
// 00622e3f  8b00                 mov eax, dword ptr [eax]
// 00622e41  385819               cmp byte ptr [eax + 0x19], bl
// 00622e44  74ed                 je 0x622e33
// 00622e46  8b37                 mov esi, dword ptr [edi]
// 00622e48  8b4718               mov eax, dword ptr [edi + 0x18]
// 00622e4b  89442414             mov dword ptr [esp + 0x14], eax
// 00622e4f  3bf3                 cmp esi, ebx
// 00622e51  7404                 je 0x622e57
// 00622e53  3bf6                 cmp esi, esi
// 00622e55  740c                 je 0x622e63
// 00622e57  ff15ace98900         call dword ptr [0x89e9ac]
// 00622e5d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00622e61  33db                 xor ebx, ebx
// 00622e63  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00622e67  7407                 je 0x622e70
// 00622e69  8b0a                 mov ecx, dword ptr [edx]
// 00622e6b  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 00622e6e  736d                 jae 0x622edd
// 00622e70  895c2410             mov dword ptr [esp + 0x10], ebx
// 00622e74  895c2414             mov dword ptr [esp + 0x14], ebx
// 00622e78  8b12                 mov edx, dword ptr [edx]
// 00622e7a  895c2434             mov dword ptr [esp + 0x34], ebx
// 00622e7e  89542420             mov dword ptr [esp + 0x20], edx
// 00622e82  895c2424             mov dword ptr [esp + 0x24], ebx
// 00622e86  895c2428             mov dword ptr [esp + 0x28], ebx
// 00622e8a  8d442420             lea eax, [esp + 0x20]
// 00622e8e  50                   push eax
// 00622e8f  55                   push ebp
// 00622e90  56                   push esi
// 00622e91  8d4c2424             lea ecx, [esp + 0x24]
// 00622e95  51                   push ecx
// 00622e96  8bcf                 mov ecx, edi
// 00622e98  c644244401           mov byte ptr [esp + 0x44], 1
// 00622e9d  e89efcffff           call 0x622b40
// 00622ea2  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00622ea6  8b30                 mov esi, dword ptr [eax]
// 00622ea8  8b6804               mov ebp, dword ptr [eax + 4]
// 00622eab  885c2434             mov byte ptr [esp + 0x34], bl
// 00622eaf  3bfb                 cmp edi, ebx
// 00622eb1  742a                 je 0x622edd
// 00622eb3  8d5704               lea edx, [edi + 4]
// 00622eb6  83c8ff               or eax, 0xffffffff
// 00622eb9  f00fc102             lock xadd dword ptr [edx], eax
// 00622ebd  751e                 jne 0x622edd
// 00622ebf  8b17                 mov edx, dword ptr [edi]
// 00622ec1  8b4204               mov eax, dword ptr [edx + 4]
// 00622ec4  8bcf                 mov ecx, edi
// 00622ec6  ffd0                 call eax
// 00622ec8  8d4f08               lea ecx, [edi + 8]
// 00622ecb  83caff               or edx, 0xffffffff
// 00622ece  f00fc111             lock xadd dword ptr [ecx], edx
// 00622ed2  7509                 jne 0x622edd
// 00622ed4  8b07                 mov eax, dword ptr [edi]
// 00622ed6  8b5008               mov edx, dword ptr [eax + 8]
// 00622ed9  8bcf                 mov ecx, edi
// 00622edb  ffd2                 call edx
// 00622edd  3bf3                 cmp esi, ebx
// 00622edf  752b                 jne 0x622f0c
// 00622ee1  ff15ace98900         call dword ptr [0x89e9ac]
// 00622ee7  33f6                 xor esi, esi
// 00622ee9  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 00622eec  7506                 jne 0x622ef4
// 00622eee  ff15ace98900         call dword ptr [0x89e9ac]
// 00622ef4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00622ef8  5f                   pop edi
// 00622ef9  5e                   pop esi
// 00622efa  8d4510               lea eax, [ebp + 0x10]
// 00622efd  5d                   pop ebp
// 00622efe  5b                   pop ebx
// 00622eff  64890d00000000       mov dword ptr fs:[0], ecx
// 00622f06  83c428               add esp, 0x28
// 00622f09  c20400               ret 4
// 00622f0c  8b36                 mov esi, dword ptr [esi]
// 00622f0e  ebd9                 jmp 0x622ee9
// library openrbx-client/App\reflection\signal.cpp (function ??A?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@QAEAAV?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@ABQBVSignalDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
