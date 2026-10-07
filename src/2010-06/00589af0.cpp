// roc 2010-06 00589af0  unit: seg_00580000  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00589af0
//
// 00589af0  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 00589af6  53                   push ebx
// 00589af7  57                   push edi
// 00589af8  33ff                 xor edi, edi
// 00589afa  3bcf                 cmp ecx, edi
// 00589afc  7462                 je 0x589b60
// 00589afe  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00589b04  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00589b07  8d14c0               lea edx, [eax + eax*8]
// 00589b0a  8d0491               lea eax, [ecx + edx*4]
// 00589b0d  8b08                 mov ecx, dword ptr [eax]
// 00589b0f  898ee4000000         mov dword ptr [esi + 0xe4], ecx
// 00589b15  33c9                 xor ecx, ecx
// 00589b17  3938                 cmp dword ptr [eax], edi
// 00589b19  7e1e                 jle 0x589b39
// 00589b1b  8dbee8000000         lea edi, [esi + 0xe8]
// 00589b21  8d5004               lea edx, [eax + 4]
// 00589b24  8b1a                 mov ebx, dword ptr [edx]
// 00589b26  6bdb54               imul ebx, ebx, 0x54
// 00589b29  035e44               add ebx, dword ptr [esi + 0x44]
// 00589b2c  41                   inc ecx
// 00589b2d  891f                 mov dword ptr [edi], ebx
// 00589b2f  83c204               add edx, 4
// 00589b32  83c704               add edi, 4
// 00589b35  3b08                 cmp ecx, dword ptr [eax]
// 00589b37  7ceb                 jl 0x589b24
// 00589b39  8b5014               mov edx, dword ptr [eax + 0x14]
// 00589b3c  89962c010000         mov dword ptr [esi + 0x12c], edx
// 00589b42  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00589b45  898e30010000         mov dword ptr [esi + 0x130], ecx
// 00589b4b  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00589b4e  899634010000         mov dword ptr [esi + 0x134], edx
// 00589b54  8b4020               mov eax, dword ptr [eax + 0x20]
// 00589b57  5f                   pop edi
// 00589b58  898638010000         mov dword ptr [esi + 0x138], eax
// 00589b5e  5b                   pop ebx
// 00589b5f  c3                   ret 
// 00589b60  837e3c04             cmp dword ptr [esi + 0x3c], 4
// 00589b64  7e24                 jle 0x589b8a
// 00589b66  8b0e                 mov ecx, dword ptr [esi]
// 00589b68  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 00589b6f  8b16                 mov edx, dword ptr [esi]
// 00589b71  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00589b74  894218               mov dword ptr [edx + 0x18], eax
// 00589b77  8b0e                 mov ecx, dword ptr [esi]
// 00589b79  c7411c04000000       mov dword ptr [ecx + 0x1c], 4
// 00589b80  8b16                 mov edx, dword ptr [esi]
// 00589b82  8b02                 mov eax, dword ptr [edx]
// 00589b84  56                   push esi
// 00589b85  ffd0                 call eax
// 00589b87  83c404               add esp, 4
// 00589b8a  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00589b8d  33d2                 xor edx, edx
// 00589b8f  3bc7                 cmp eax, edi
// 00589b91  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 00589b97  7e1b                 jle 0x589bb4
// 00589b99  33c9                 xor ecx, ecx
// 00589b9b  8d86e8000000         lea eax, [esi + 0xe8]
// 00589ba1  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 00589ba4  03d9                 add ebx, ecx
// 00589ba6  8918                 mov dword ptr [eax], ebx
// 00589ba8  42                   inc edx
// 00589ba9  83c004               add eax, 4
// 00589bac  83c154               add ecx, 0x54
// 00589baf  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 00589bb2  7ced                 jl 0x589ba1
// 00589bb4  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 00589bba  89be34010000         mov dword ptr [esi + 0x134], edi
// 00589bc0  89be38010000         mov dword ptr [esi + 0x138], edi
// 00589bc6  5f                   pop edi
// 00589bc7  c786300100003f000000 mov dword ptr [esi + 0x130], 0x3f
// 00589bd1  5b                   pop ebx
// 00589bd2  c3                   ret 
// library jpeg-6b/jcmaster.c (function _select_scan_parameters)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
