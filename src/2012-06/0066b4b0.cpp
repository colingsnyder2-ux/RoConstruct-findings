// roc 2012-06 0066b4b0  unit: seg_00660000  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066b4b0
//
// 0066b4b0  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0066b4b6  53                   push ebx
// 0066b4b7  57                   push edi
// 0066b4b8  33ff                 xor edi, edi
// 0066b4ba  3bcf                 cmp ecx, edi
// 0066b4bc  7462                 je 0x66b520
// 0066b4be  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0066b4c4  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0066b4c7  8d14c0               lea edx, [eax + eax*8]
// 0066b4ca  8d0491               lea eax, [ecx + edx*4]
// 0066b4cd  8b08                 mov ecx, dword ptr [eax]
// 0066b4cf  898ee4000000         mov dword ptr [esi + 0xe4], ecx
// 0066b4d5  33c9                 xor ecx, ecx
// 0066b4d7  3938                 cmp dword ptr [eax], edi
// 0066b4d9  7e1e                 jle 0x66b4f9
// 0066b4db  8dbee8000000         lea edi, [esi + 0xe8]
// 0066b4e1  8d5004               lea edx, [eax + 4]
// 0066b4e4  8b1a                 mov ebx, dword ptr [edx]
// 0066b4e6  6bdb54               imul ebx, ebx, 0x54
// 0066b4e9  035e44               add ebx, dword ptr [esi + 0x44]
// 0066b4ec  41                   inc ecx
// 0066b4ed  891f                 mov dword ptr [edi], ebx
// 0066b4ef  83c204               add edx, 4
// 0066b4f2  83c704               add edi, 4
// 0066b4f5  3b08                 cmp ecx, dword ptr [eax]
// 0066b4f7  7ceb                 jl 0x66b4e4
// 0066b4f9  8b5014               mov edx, dword ptr [eax + 0x14]
// 0066b4fc  89962c010000         mov dword ptr [esi + 0x12c], edx
// 0066b502  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0066b505  898e30010000         mov dword ptr [esi + 0x130], ecx
// 0066b50b  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0066b50e  899634010000         mov dword ptr [esi + 0x134], edx
// 0066b514  8b4020               mov eax, dword ptr [eax + 0x20]
// 0066b517  5f                   pop edi
// 0066b518  898638010000         mov dword ptr [esi + 0x138], eax
// 0066b51e  5b                   pop ebx
// 0066b51f  c3                   ret 
// 0066b520  837e3c04             cmp dword ptr [esi + 0x3c], 4
// 0066b524  7e24                 jle 0x66b54a
// 0066b526  8b0e                 mov ecx, dword ptr [esi]
// 0066b528  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0066b52f  8b16                 mov edx, dword ptr [esi]
// 0066b531  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0066b534  894218               mov dword ptr [edx + 0x18], eax
// 0066b537  8b0e                 mov ecx, dword ptr [esi]
// 0066b539  c7411c04000000       mov dword ptr [ecx + 0x1c], 4
// 0066b540  8b16                 mov edx, dword ptr [esi]
// 0066b542  8b02                 mov eax, dword ptr [edx]
// 0066b544  56                   push esi
// 0066b545  ffd0                 call eax
// 0066b547  83c404               add esp, 4
// 0066b54a  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0066b54d  33d2                 xor edx, edx
// 0066b54f  3bc7                 cmp eax, edi
// 0066b551  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 0066b557  7e1b                 jle 0x66b574
// 0066b559  33c9                 xor ecx, ecx
// 0066b55b  8d86e8000000         lea eax, [esi + 0xe8]
// 0066b561  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 0066b564  03d9                 add ebx, ecx
// 0066b566  8918                 mov dword ptr [eax], ebx
// 0066b568  42                   inc edx
// 0066b569  83c004               add eax, 4
// 0066b56c  83c154               add ecx, 0x54
// 0066b56f  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0066b572  7ced                 jl 0x66b561
// 0066b574  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 0066b57a  89be34010000         mov dword ptr [esi + 0x134], edi
// 0066b580  89be38010000         mov dword ptr [esi + 0x138], edi
// 0066b586  5f                   pop edi
// 0066b587  c786300100003f000000 mov dword ptr [esi + 0x130], 0x3f
// 0066b591  5b                   pop ebx
// 0066b592  c3                   ret 
// library jpeg-6b/jcmaster.c (function _select_scan_parameters)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
