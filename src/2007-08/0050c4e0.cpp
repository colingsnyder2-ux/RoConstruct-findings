// from server: 100% by auto
// roc 2007-08 0050c4e0  unit: G3D::BinaryInput  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c4e0
//
// 0050c4e0  56                   push esi
// 0050c4e1  57                   push edi
// 0050c4e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050c4e6  85ff                 test edi, edi
// 0050c4e8  8bf1                 mov esi, ecx
// 0050c4ea  0f84b8000000         je 0x50c5a8
// 0050c4f0  833e00               cmp dword ptr [esi], 0
// 0050c4f3  7406                 je 0x50c4fb
// 0050c4f5  837e0400             cmp dword ptr [esi + 4], 0
// 0050c4f9  7506                 jne 0x50c501
// 0050c4fb  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c501  8b06                 mov eax, dword ptr [esi]
// 0050c503  53                   push ebx
// 0050c504  8b5808               mov ebx, dword ptr [eax + 8]
// 0050c507  83c004               add eax, 4
// 0050c50a  85ff                 test edi, edi
// 0050c50c  55                   push ebp
// 0050c50d  8b6e08               mov ebp, dword ptr [esi + 8]
// 0050c510  7d22                 jge 0x50c534
// 0050c512  3b5808               cmp ebx, dword ptr [eax + 8]
// 0050c515  7606                 jbe 0x50c51d
// 0050c517  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c51d  8b4604               mov eax, dword ptr [esi + 4]
// 0050c520  2bc3                 sub eax, ebx
// 0050c522  c1f802               sar eax, 2
// 0050c525  c1e005               shl eax, 5
// 0050c528  8bcf                 mov ecx, edi
// 0050c52a  03c5                 add eax, ebp
// 0050c52c  f7d9                 neg ecx
// 0050c52e  3bc1                 cmp eax, ecx
// 0050c530  7328                 jae 0x50c55a
// 0050c532  eb20                 jmp 0x50c554
// 0050c534  3b5808               cmp ebx, dword ptr [eax + 8]
// 0050c537  7606                 jbe 0x50c53f
// 0050c539  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c53f  8b5604               mov edx, dword ptr [esi + 4]
// 0050c542  8b06                 mov eax, dword ptr [esi]
// 0050c544  2bd3                 sub edx, ebx
// 0050c546  c1fa02               sar edx, 2
// 0050c549  c1e205               shl edx, 5
// 0050c54c  03d5                 add edx, ebp
// 0050c54e  03d7                 add edx, edi
// 0050c550  3b10                 cmp edx, dword ptr [eax]
// 0050c552  7606                 jbe 0x50c55a
// 0050c554  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c55a  85ff                 test edi, edi
// 0050c55c  5d                   pop ebp
// 0050c55d  5b                   pop ebx
// 0050c55e  7d30                 jge 0x50c590
// 0050c560  8b4608               mov eax, dword ptr [esi + 8]
// 0050c563  8bcf                 mov ecx, edi
// 0050c565  f7d9                 neg ecx
// 0050c567  3bc1                 cmp eax, ecx
// 0050c569  7325                 jae 0x50c590
// 0050c56b  83caff               or edx, 0xffffffff
// 0050c56e  03c7                 add eax, edi
// 0050c570  2bd0                 sub edx, eax
// 0050c572  c1ea05               shr edx, 5
// 0050c575  03d2                 add edx, edx
// 0050c577  03d2                 add edx, edx
// 0050c579  b9fcffffff           mov ecx, 0xfffffffc
// 0050c57e  2bca                 sub ecx, edx
// 0050c580  014e04               add dword ptr [esi + 4], ecx
// 0050c583  83e01f               and eax, 0x1f
// 0050c586  894608               mov dword ptr [esi + 8], eax
// 0050c589  5f                   pop edi
// 0050c58a  8bc6                 mov eax, esi
// 0050c58c  5e                   pop esi
// 0050c58d  c20400               ret 4
// 0050c590  8b5608               mov edx, dword ptr [esi + 8]
// 0050c593  8d043a               lea eax, [edx + edi]
// 0050c596  8bc8                 mov ecx, eax
// 0050c598  c1e905               shr ecx, 5
// 0050c59b  03c9                 add ecx, ecx
// 0050c59d  03c9                 add ecx, ecx
// 0050c59f  014e04               add dword ptr [esi + 4], ecx
// 0050c5a2  83e01f               and eax, 0x1f
// 0050c5a5  894608               mov dword ptr [esi + 8], eax
// 0050c5a8  5f                   pop edi
// 0050c5a9  8bc6                 mov eax, esi
// 0050c5ab  5e                   pop esi
// 0050c5ac  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??Y?$_Vb_const_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@QAEAAV01@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
