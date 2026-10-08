// from server: 100% by auto
// roc 2007-08 0050c8f0  unit: G3D::BinaryInput  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c8f0
//
// 0050c8f0  53                   push ebx
// 0050c8f1  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0050c8f5  55                   push ebp
// 0050c8f6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0050c8fa  56                   push esi
// 0050c8fb  57                   push edi
// 0050c8fc  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0050c900  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050c904  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0050c908  750e                 jne 0x50c918
// 0050c90a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0050c90e  394c2420             cmp dword ptr [esp + 0x20], ecx
// 0050c912  0f8476010000         je 0x50ca8e
// 0050c918  8b742418             mov esi, dword ptr [esp + 0x18]
// 0050c91c  85f6                 test esi, esi
// 0050c91e  7506                 jne 0x50c926
// 0050c920  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c926  85db                 test ebx, ebx
// 0050c928  7506                 jne 0x50c930
// 0050c92a  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c930  85f6                 test esi, esi
// 0050c932  7407                 je 0x50c93b
// 0050c934  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0050c939  7506                 jne 0x50c941
// 0050c93b  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c941  8b7608               mov esi, dword ptr [esi + 8]
// 0050c944  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050c948  3b720c               cmp esi, dword ptr [edx + 0xc]
// 0050c94b  7606                 jbe 0x50c953
// 0050c94d  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c953  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050c957  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050c95b  2bc6                 sub eax, esi
// 0050c95d  8b742420             mov esi, dword ptr [esp + 0x20]
// 0050c961  c1f802               sar eax, 2
// 0050c964  c1e005               shl eax, 5
// 0050c967  03c6                 add eax, esi
// 0050c969  3b01                 cmp eax, dword ptr [ecx]
// 0050c96b  7206                 jb 0x50c973
// 0050c96d  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c973  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050c977  ba01000000           mov edx, 1
// 0050c97c  8bce                 mov ecx, esi
// 0050c97e  d3e2                 shl edx, cl
// 0050c980  8510                 test dword ptr [eax], edx
// 0050c982  743f                 je 0x50c9c3
// 0050c984  85db                 test ebx, ebx
// 0050c986  7404                 je 0x50c98c
// 0050c988  85ff                 test edi, edi
// 0050c98a  7506                 jne 0x50c992
// 0050c98c  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c992  8b7308               mov esi, dword ptr [ebx + 8]
// 0050c995  3b730c               cmp esi, dword ptr [ebx + 0xc]
// 0050c998  7606                 jbe 0x50c9a0
// 0050c99a  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c9a0  8bcf                 mov ecx, edi
// 0050c9a2  2bce                 sub ecx, esi
// 0050c9a4  c1f902               sar ecx, 2
// 0050c9a7  c1e105               shl ecx, 5
// 0050c9aa  03cd                 add ecx, ebp
// 0050c9ac  3b0b                 cmp ecx, dword ptr [ebx]
// 0050c9ae  7206                 jb 0x50c9b6
// 0050c9b0  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c9b6  ba01000000           mov edx, 1
// 0050c9bb  8bcd                 mov ecx, ebp
// 0050c9bd  d3e2                 shl edx, cl
// 0050c9bf  0917                 or dword ptr [edi], edx
// 0050c9c1  eb3f                 jmp 0x50ca02
// 0050c9c3  85db                 test ebx, ebx
// 0050c9c5  7404                 je 0x50c9cb
// 0050c9c7  85ff                 test edi, edi
// 0050c9c9  7506                 jne 0x50c9d1
// 0050c9cb  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c9d1  8b7308               mov esi, dword ptr [ebx + 8]
// 0050c9d4  3b730c               cmp esi, dword ptr [ebx + 0xc]
// 0050c9d7  7606                 jbe 0x50c9df
// 0050c9d9  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c9df  8bc7                 mov eax, edi
// 0050c9e1  2bc6                 sub eax, esi
// 0050c9e3  c1f802               sar eax, 2
// 0050c9e6  c1e005               shl eax, 5
// 0050c9e9  03c5                 add eax, ebp
// 0050c9eb  3b03                 cmp eax, dword ptr [ebx]
// 0050c9ed  7206                 jb 0x50c9f5
// 0050c9ef  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c9f5  ba01000000           mov edx, 1
// 0050c9fa  8bcd                 mov ecx, ebp
// 0050c9fc  d3e2                 shl edx, cl
// 0050c9fe  f7d2                 not edx
// 0050ca00  2117                 and dword ptr [edi], edx
// 0050ca02  8b7308               mov esi, dword ptr [ebx + 8]
// 0050ca05  3b730c               cmp esi, dword ptr [ebx + 0xc]
// 0050ca08  7606                 jbe 0x50ca10
// 0050ca0a  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050ca10  8bc7                 mov eax, edi
// 0050ca12  2bc6                 sub eax, esi
// 0050ca14  c1f802               sar eax, 2
// 0050ca17  c1e005               shl eax, 5
// 0050ca1a  8d4c2801             lea ecx, [eax + ebp + 1]
// 0050ca1e  3b0b                 cmp ecx, dword ptr [ebx]
// 0050ca20  7606                 jbe 0x50ca28
// 0050ca22  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050ca28  83fd1f               cmp ebp, 0x1f
// 0050ca2b  7305                 jae 0x50ca32
// 0050ca2d  83c501               add ebp, 1
// 0050ca30  eb05                 jmp 0x50ca37
// 0050ca32  33ed                 xor ebp, ebp
// 0050ca34  83c704               add edi, 4
// 0050ca37  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050ca3b  8b7008               mov esi, dword ptr [eax + 8]
// 0050ca3e  3b700c               cmp esi, dword ptr [eax + 0xc]
// 0050ca41  7606                 jbe 0x50ca49
// 0050ca43  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050ca49  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0050ca4d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050ca51  2bd6                 sub edx, esi
// 0050ca53  8b742420             mov esi, dword ptr [esp + 0x20]
// 0050ca57  c1fa02               sar edx, 2
// 0050ca5a  c1e205               shl edx, 5
// 0050ca5d  8d443201             lea eax, [edx + esi + 1]
// 0050ca61  3b01                 cmp eax, dword ptr [ecx]
// 0050ca63  7606                 jbe 0x50ca6b
// 0050ca65  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050ca6b  83fe1f               cmp esi, 0x1f
// 0050ca6e  730c                 jae 0x50ca7c
// 0050ca70  83c601               add esi, 1
// 0050ca73  89742420             mov dword ptr [esp + 0x20], esi
// 0050ca77  e984feffff           jmp 0x50c900
// 0050ca7c  8344241c04           add dword ptr [esp + 0x1c], 4
// 0050ca81  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0050ca89  e972feffff           jmp 0x50c900
// 0050ca8e  85db                 test ebx, ebx
// 0050ca90  8b742414             mov esi, dword ptr [esp + 0x14]
// 0050ca94  c70600000000         mov dword ptr [esi], 0
// 0050ca9a  897e04               mov dword ptr [esi + 4], edi
// 0050ca9d  896e08               mov dword ptr [esi + 8], ebp
// 0050caa0  7506                 jne 0x50caa8
// 0050caa2  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050caa8  5f                   pop edi
// 0050caa9  891e                 mov dword ptr [esi], ebx
// 0050caab  8bc6                 mov eax, esi
// 0050caad  5e                   pop esi
// 0050caae  5d                   pop ebp
// 0050caaf  5b                   pop ebx
// 0050cab0  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??$_Copy_opt@V?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@V12@Uforward_iterator_tag@2@@std@@YA?AV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@0@V10@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
