// from server: 100% by auto
// roc 2009-06 005a5fe0  unit: seg_005a0000  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a5fe0
//
// 005a5fe0  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 005a5fe6  53                   push ebx
// 005a5fe7  57                   push edi
// 005a5fe8  33ff                 xor edi, edi
// 005a5fea  3bcf                 cmp ecx, edi
// 005a5fec  7462                 je 0x5a6050
// 005a5fee  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005a5ff4  8b401c               mov eax, dword ptr [eax + 0x1c]
// 005a5ff7  8d14c0               lea edx, [eax + eax*8]
// 005a5ffa  8d0491               lea eax, [ecx + edx*4]
// 005a5ffd  8b08                 mov ecx, dword ptr [eax]
// 005a5fff  898ee4000000         mov dword ptr [esi + 0xe4], ecx
// 005a6005  33c9                 xor ecx, ecx
// 005a6007  3938                 cmp dword ptr [eax], edi
// 005a6009  7e1e                 jle 0x5a6029
// 005a600b  8dbee8000000         lea edi, [esi + 0xe8]
// 005a6011  8d5004               lea edx, [eax + 4]
// 005a6014  8b1a                 mov ebx, dword ptr [edx]
// 005a6016  6bdb54               imul ebx, ebx, 0x54
// 005a6019  035e44               add ebx, dword ptr [esi + 0x44]
// 005a601c  41                   inc ecx
// 005a601d  891f                 mov dword ptr [edi], ebx
// 005a601f  83c204               add edx, 4
// 005a6022  83c704               add edi, 4
// 005a6025  3b08                 cmp ecx, dword ptr [eax]
// 005a6027  7ceb                 jl 0x5a6014
// 005a6029  8b5014               mov edx, dword ptr [eax + 0x14]
// 005a602c  89962c010000         mov dword ptr [esi + 0x12c], edx
// 005a6032  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005a6035  898e30010000         mov dword ptr [esi + 0x130], ecx
// 005a603b  8b501c               mov edx, dword ptr [eax + 0x1c]
// 005a603e  899634010000         mov dword ptr [esi + 0x134], edx
// 005a6044  8b4020               mov eax, dword ptr [eax + 0x20]
// 005a6047  5f                   pop edi
// 005a6048  898638010000         mov dword ptr [esi + 0x138], eax
// 005a604e  5b                   pop ebx
// 005a604f  c3                   ret 
// 005a6050  837e3c04             cmp dword ptr [esi + 0x3c], 4
// 005a6054  7e24                 jle 0x5a607a
// 005a6056  8b0e                 mov ecx, dword ptr [esi]
// 005a6058  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 005a605f  8b16                 mov edx, dword ptr [esi]
// 005a6061  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005a6064  894218               mov dword ptr [edx + 0x18], eax
// 005a6067  8b0e                 mov ecx, dword ptr [esi]
// 005a6069  c7411c04000000       mov dword ptr [ecx + 0x1c], 4
// 005a6070  8b16                 mov edx, dword ptr [esi]
// 005a6072  8b02                 mov eax, dword ptr [edx]
// 005a6074  56                   push esi
// 005a6075  ffd0                 call eax
// 005a6077  83c404               add esp, 4
// 005a607a  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005a607d  33d2                 xor edx, edx
// 005a607f  3bc7                 cmp eax, edi
// 005a6081  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 005a6087  7e1b                 jle 0x5a60a4
// 005a6089  33c9                 xor ecx, ecx
// 005a608b  8d86e8000000         lea eax, [esi + 0xe8]
// 005a6091  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 005a6094  03d9                 add ebx, ecx
// 005a6096  8918                 mov dword ptr [eax], ebx
// 005a6098  42                   inc edx
// 005a6099  83c004               add eax, 4
// 005a609c  83c154               add ecx, 0x54
// 005a609f  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 005a60a2  7ced                 jl 0x5a6091
// 005a60a4  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 005a60aa  89be34010000         mov dword ptr [esi + 0x134], edi
// 005a60b0  89be38010000         mov dword ptr [esi + 0x138], edi
// 005a60b6  5f                   pop edi
// 005a60b7  c786300100003f000000 mov dword ptr [esi + 0x130], 0x3f
// 005a60c1  5b                   pop ebx
// 005a60c2  c3                   ret 
// library jpeg-6b/jcmaster.c (function _select_scan_parameters)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
