// from server: 100% by auto
// roc 2011-06 0057f5c0  unit: seg_00570000  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057f5c0
//
// 0057f5c0  53                   push ebx
// 0057f5c1  56                   push esi
// 0057f5c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057f5c6  8b4604               mov eax, dword ptr [esi + 4]
// 0057f5c9  8b08                 mov ecx, dword ptr [eax]
// 0057f5cb  57                   push edi
// 0057f5cc  6a0c                 push 0xc
// 0057f5ce  6a01                 push 1
// 0057f5d0  56                   push esi
// 0057f5d1  ffd1                 call ecx
// 0057f5d3  8bf8                 mov edi, eax
// 0057f5d5  89be50010000         mov dword ptr [esi + 0x150], edi
// 0057f5db  c70740b68600         mov dword ptr [edi], 0x86b640
// 0057f5e1  8b4628               mov eax, dword ptr [esi + 0x28]
// 0057f5e4  48                   dec eax
// 0057f5e5  bb04000000           mov ebx, 4
// 0057f5ea  83c40c               add esp, 0xc
// 0057f5ed  3bc3                 cmp eax, ebx
// 0057f5ef  771e                 ja 0x57f60f
// 0057f5f1  ff2485c0f75700       jmp dword ptr [eax*4 + 0x57f7c0]
// 0057f5f8  837e2401             cmp dword ptr [esi + 0x24], 1
// 0057f5fc  742a                 je 0x57f628
// 0057f5fe  eb15                 jmp 0x57f615
// 0057f600  837e2403             cmp dword ptr [esi + 0x24], 3
// 0057f604  7422                 je 0x57f628
// 0057f606  eb0d                 jmp 0x57f615
// 0057f608  395e24               cmp dword ptr [esi + 0x24], ebx
// 0057f60b  741b                 je 0x57f628
// 0057f60d  eb06                 jmp 0x57f615
// 0057f60f  837e2401             cmp dword ptr [esi + 0x24], 1
// 0057f613  7d13                 jge 0x57f628
// 0057f615  8b16                 mov edx, dword ptr [esi]
// 0057f617  c7421409000000       mov dword ptr [edx + 0x14], 9
// 0057f61e  8b06                 mov eax, dword ptr [esi]
// 0057f620  8b08                 mov ecx, dword ptr [eax]
// 0057f622  56                   push esi
// 0057f623  ffd1                 call ecx
// 0057f625  83c404               add esp, 4
// 0057f628  8b4640               mov eax, dword ptr [esi + 0x40]
// 0057f62b  8d48ff               lea ecx, [eax - 1]
// 0057f62e  3bcb                 cmp ecx, ebx
// 0057f630  0f875e010000         ja 0x57f794
// 0057f636  ff248dd4f75700       jmp dword ptr [ecx*4 + 0x57f7d4]
// 0057f63d  837e3c01             cmp dword ptr [esi + 0x3c], 1
// 0057f641  7413                 je 0x57f656
// 0057f643  8b16                 mov edx, dword ptr [esi]
// 0057f645  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0057f64c  8b06                 mov eax, dword ptr [esi]
// 0057f64e  8b08                 mov ecx, dword ptr [eax]
// 0057f650  56                   push esi
// 0057f651  ffd1                 call ecx
// 0057f653  83c404               add esp, 4
// 0057f656  8b4628               mov eax, dword ptr [esi + 0x28]
// 0057f659  83f801               cmp eax, 1
// 0057f65c  741b                 je 0x57f679
// 0057f65e  83f802               cmp eax, 2
// 0057f661  7511                 jne 0x57f674
// 0057f663  c707f0f05700         mov dword ptr [edi], 0x57f0f0
// 0057f669  c74704e0f25700       mov dword ptr [edi + 4], 0x57f2e0
// 0057f670  5f                   pop edi
// 0057f671  5e                   pop esi
// 0057f672  5b                   pop ebx
// 0057f673  c3                   ret 
// 0057f674  83f803               cmp eax, 3
// 0057f677  752e                 jne 0x57f6a7
// 0057f679  c74704e0f45700       mov dword ptr [edi + 4], 0x57f4e0
// 0057f680  5f                   pop edi
// 0057f681  5e                   pop esi
// 0057f682  5b                   pop ebx
// 0057f683  c3                   ret 
// 0057f684  837e3c03             cmp dword ptr [esi + 0x3c], 3
// 0057f688  7413                 je 0x57f69d
// 0057f68a  8b16                 mov edx, dword ptr [esi]
// 0057f68c  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0057f693  8b06                 mov eax, dword ptr [esi]
// 0057f695  8b08                 mov ecx, dword ptr [eax]
// 0057f697  56                   push esi
// 0057f698  ffd1                 call ecx
// 0057f69a  83c404               add esp, 4
// 0057f69d  837e2802             cmp dword ptr [esi + 0x28], 2
// 0057f6a1  0f840d010000         je 0x57f7b4
// 0057f6a7  8b16                 mov edx, dword ptr [esi]
// 0057f6a9  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0057f6b0  8b06                 mov eax, dword ptr [esi]
// 0057f6b2  8b08                 mov ecx, dword ptr [eax]
// 0057f6b4  56                   push esi
// 0057f6b5  ffd1                 call ecx
// 0057f6b7  83c404               add esp, 4
// 0057f6ba  5f                   pop edi
// 0057f6bb  5e                   pop esi
// 0057f6bc  5b                   pop ebx
// 0057f6bd  c3                   ret 
// 0057f6be  837e3c03             cmp dword ptr [esi + 0x3c], 3
// 0057f6c2  7413                 je 0x57f6d7
// 0057f6c4  8b16                 mov edx, dword ptr [esi]
// 0057f6c6  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0057f6cd  8b06                 mov eax, dword ptr [esi]
// 0057f6cf  8b08                 mov ecx, dword ptr [eax]
// 0057f6d1  56                   push esi
// 0057f6d2  ffd1                 call ecx
// 0057f6d4  83c404               add esp, 4
// 0057f6d7  8b4628               mov eax, dword ptr [esi + 0x28]
// 0057f6da  83f802               cmp eax, 2
// 0057f6dd  7511                 jne 0x57f6f0
// 0057f6df  c707f0f05700         mov dword ptr [edi], 0x57f0f0
// 0057f6e5  c74704d0f15700       mov dword ptr [edi + 4], 0x57f1d0
// 0057f6ec  5f                   pop edi
// 0057f6ed  5e                   pop esi
// 0057f6ee  5b                   pop ebx
// 0057f6ef  c3                   ret 
// 0057f6f0  83f803               cmp eax, 3
// 0057f6f3  0f84bb000000         je 0x57f7b4
// 0057f6f9  8b16                 mov edx, dword ptr [esi]
// 0057f6fb  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0057f702  8b06                 mov eax, dword ptr [esi]
// 0057f704  8b08                 mov ecx, dword ptr [eax]
// 0057f706  56                   push esi
// 0057f707  ffd1                 call ecx
// 0057f709  83c404               add esp, 4
// 0057f70c  5f                   pop edi
// 0057f70d  5e                   pop esi
// 0057f70e  5b                   pop ebx
// 0057f70f  c3                   ret 
// 0057f710  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0057f713  7413                 je 0x57f728
// 0057f715  8b16                 mov edx, dword ptr [esi]
// 0057f717  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0057f71e  8b06                 mov eax, dword ptr [esi]
// 0057f720  8b08                 mov ecx, dword ptr [eax]
// 0057f722  56                   push esi
// 0057f723  ffd1                 call ecx
// 0057f725  83c404               add esp, 4
// 0057f728  395e28               cmp dword ptr [esi + 0x28], ebx
// 0057f72b  0f8483000000         je 0x57f7b4
// 0057f731  8b16                 mov edx, dword ptr [esi]
// 0057f733  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0057f73a  8b06                 mov eax, dword ptr [esi]
// 0057f73c  8b08                 mov ecx, dword ptr [eax]
// 0057f73e  56                   push esi
// 0057f73f  ffd1                 call ecx
// 0057f741  83c404               add esp, 4
// 0057f744  5f                   pop edi
// 0057f745  5e                   pop esi
// 0057f746  5b                   pop ebx
// 0057f747  c3                   ret 
// 0057f748  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0057f74b  7413                 je 0x57f760
// 0057f74d  8b16                 mov edx, dword ptr [esi]
// 0057f74f  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0057f756  8b06                 mov eax, dword ptr [esi]
// 0057f758  8b08                 mov ecx, dword ptr [eax]
// 0057f75a  56                   push esi
// 0057f75b  ffd1                 call ecx
// 0057f75d  83c404               add esp, 4
// 0057f760  8b4628               mov eax, dword ptr [esi + 0x28]
// 0057f763  3bc3                 cmp eax, ebx
// 0057f765  7511                 jne 0x57f778
// 0057f767  c707f0f05700         mov dword ptr [edi], 0x57f0f0
// 0057f76d  c7470490f35700       mov dword ptr [edi + 4], 0x57f390
// 0057f774  5f                   pop edi
// 0057f775  5e                   pop esi
// 0057f776  5b                   pop ebx
// 0057f777  c3                   ret 
// 0057f778  83f805               cmp eax, 5
// 0057f77b  7437                 je 0x57f7b4
// 0057f77d  8b16                 mov edx, dword ptr [esi]
// 0057f77f  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0057f786  8b06                 mov eax, dword ptr [esi]
// 0057f788  8b08                 mov ecx, dword ptr [eax]
// 0057f78a  56                   push esi
// 0057f78b  ffd1                 call ecx
// 0057f78d  83c404               add esp, 4
// 0057f790  5f                   pop edi
// 0057f791  5e                   pop esi
// 0057f792  5b                   pop ebx
// 0057f793  c3                   ret 
// 0057f794  3b4628               cmp eax, dword ptr [esi + 0x28]
// 0057f797  7508                 jne 0x57f7a1
// 0057f799  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0057f79c  3b5624               cmp edx, dword ptr [esi + 0x24]
// 0057f79f  7413                 je 0x57f7b4
// 0057f7a1  8b06                 mov eax, dword ptr [esi]
// 0057f7a3  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 0057f7aa  8b0e                 mov ecx, dword ptr [esi]
// 0057f7ac  8b11                 mov edx, dword ptr [ecx]
// 0057f7ae  56                   push esi
// 0057f7af  ffd2                 call edx
// 0057f7b1  83c404               add esp, 4
// 0057f7b4  c7470440f55700       mov dword ptr [edi + 4], 0x57f540
// 0057f7bb  5f                   pop edi
// 0057f7bc  5e                   pop esi
// 0057f7bd  5b                   pop ebx
// 0057f7be  c3                   ret 
// 0057f7bf  90                   nop 
// 0057f7c0  f8                   clc 
// 0057f7c1  f5                   cmc 
// 0057f7c2  57                   push edi
// 0057f7c3  0000                 add byte ptr [eax], al
// 0057f7c5  f65700               not byte ptr [edi]
// 0057f7c8  00f6                 add dh, dh
// 0057f7ca  57                   push edi
// 0057f7cb  0008                 add byte ptr [eax], cl
// 0057f7cd  f65700               not byte ptr [edi]
// 0057f7d0  08f6                 or dh, dh
// 0057f7d2  57                   push edi
// 0057f7d3  003df6570084         add byte ptr [0x840057f6], bh
// 0057f7d9  f65700               not byte ptr [edi]
// 0057f7dc  bef6570010           mov esi, 0x100057f6
// 0057f7e1  f75700               not dword ptr [edi]
// 0057f7e4  48                   dec eax
// 0057f7e5  f75700               not dword ptr [edi]
// library jpeg-6b/jccolor.c (function _jinit_color_converter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
