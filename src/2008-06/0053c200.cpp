// from server: 100% by auto
// roc 2008-06 0053c200  unit: seg_00530000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053c200
//
// 0053c200  53                   push ebx
// 0053c201  56                   push esi
// 0053c202  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053c206  8b4604               mov eax, dword ptr [esi + 4]
// 0053c209  8b08                 mov ecx, dword ptr [eax]
// 0053c20b  57                   push edi
// 0053c20c  6a20                 push 0x20
// 0053c20e  6a01                 push 1
// 0053c210  56                   push esi
// 0053c211  ffd1                 call ecx
// 0053c213  8bf8                 mov edi, eax
// 0053c215  89be3c010000         mov dword ptr [esi + 0x13c], edi
// 0053c21b  33db                 xor ebx, ebx
// 0053c21d  83c40c               add esp, 0xc
// 0053c220  c707c0bf5300         mov dword ptr [edi], 0x53bfc0
// 0053c226  c7470460c15300       mov dword ptr [edi + 4], 0x53c160
// 0053c22d  c7470890c15300       mov dword ptr [edi + 8], 0x53c190
// 0053c234  885f0d               mov byte ptr [edi + 0xd], bl
// 0053c237  e814f5ffff           call 0x53b750
// 0053c23c  399eac000000         cmp dword ptr [esi + 0xac], ebx
// 0053c242  7407                 je 0x53c24b
// 0053c244  e8e7f6ffff           call 0x53b930
// 0053c249  eb10                 jmp 0x53c25b
// 0053c24b  889ed4000000         mov byte ptr [esi + 0xd4], bl
// 0053c251  c786a800000001000000 mov dword ptr [esi + 0xa8], 1
// 0053c25b  389ed4000000         cmp byte ptr [esi + 0xd4], bl
// 0053c261  7407                 je 0x53c26a
// 0053c263  c686b200000001       mov byte ptr [esi + 0xb2], 1
// 0053c26a  385c2414             cmp byte ptr [esp + 0x14], bl
// 0053c26e  7411                 je 0x53c281
// 0053c270  33d2                 xor edx, edx
// 0053c272  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 0053c278  0f94c2               sete dl
// 0053c27b  42                   inc edx
// 0053c27c  895710               mov dword ptr [edi + 0x10], edx
// 0053c27f  eb03                 jmp 0x53c284
// 0053c281  895f10               mov dword ptr [edi + 0x10], ebx
// 0053c284  895f1c               mov dword ptr [edi + 0x1c], ebx
// 0053c287  895f14               mov dword ptr [edi + 0x14], ebx
// 0053c28a  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 0053c290  740f                 je 0x53c2a1
// 0053c292  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0053c298  03c0                 add eax, eax
// 0053c29a  894718               mov dword ptr [edi + 0x18], eax
// 0053c29d  5f                   pop edi
// 0053c29e  5e                   pop esi
// 0053c29f  5b                   pop ebx
// 0053c2a0  c3                   ret 
// 0053c2a1  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0053c2a7  894f18               mov dword ptr [edi + 0x18], ecx
// 0053c2aa  5f                   pop edi
// 0053c2ab  5e                   pop esi
// 0053c2ac  5b                   pop ebx
// 0053c2ad  c3                   ret 
// library jpeg-6b/jcmaster.c (function _jinit_c_master_control)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
