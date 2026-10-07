// roc 2008-06 0053bd00  unit: seg_00530000  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053bd00
//
// 0053bd00  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0053bd06  53                   push ebx
// 0053bd07  57                   push edi
// 0053bd08  33ff                 xor edi, edi
// 0053bd0a  3bcf                 cmp ecx, edi
// 0053bd0c  7462                 je 0x53bd70
// 0053bd0e  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0053bd14  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0053bd17  8d14c0               lea edx, [eax + eax*8]
// 0053bd1a  8d0491               lea eax, [ecx + edx*4]
// 0053bd1d  8b08                 mov ecx, dword ptr [eax]
// 0053bd1f  898ee4000000         mov dword ptr [esi + 0xe4], ecx
// 0053bd25  33c9                 xor ecx, ecx
// 0053bd27  3938                 cmp dword ptr [eax], edi
// 0053bd29  7e1e                 jle 0x53bd49
// 0053bd2b  8dbee8000000         lea edi, [esi + 0xe8]
// 0053bd31  8d5004               lea edx, [eax + 4]
// 0053bd34  8b1a                 mov ebx, dword ptr [edx]
// 0053bd36  6bdb54               imul ebx, ebx, 0x54
// 0053bd39  035e44               add ebx, dword ptr [esi + 0x44]
// 0053bd3c  41                   inc ecx
// 0053bd3d  891f                 mov dword ptr [edi], ebx
// 0053bd3f  83c204               add edx, 4
// 0053bd42  83c704               add edi, 4
// 0053bd45  3b08                 cmp ecx, dword ptr [eax]
// 0053bd47  7ceb                 jl 0x53bd34
// 0053bd49  8b5014               mov edx, dword ptr [eax + 0x14]
// 0053bd4c  89962c010000         mov dword ptr [esi + 0x12c], edx
// 0053bd52  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0053bd55  898e30010000         mov dword ptr [esi + 0x130], ecx
// 0053bd5b  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0053bd5e  899634010000         mov dword ptr [esi + 0x134], edx
// 0053bd64  8b4020               mov eax, dword ptr [eax + 0x20]
// 0053bd67  5f                   pop edi
// 0053bd68  898638010000         mov dword ptr [esi + 0x138], eax
// 0053bd6e  5b                   pop ebx
// 0053bd6f  c3                   ret 
// 0053bd70  837e3c04             cmp dword ptr [esi + 0x3c], 4
// 0053bd74  7e24                 jle 0x53bd9a
// 0053bd76  8b0e                 mov ecx, dword ptr [esi]
// 0053bd78  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0053bd7f  8b16                 mov edx, dword ptr [esi]
// 0053bd81  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0053bd84  894218               mov dword ptr [edx + 0x18], eax
// 0053bd87  8b0e                 mov ecx, dword ptr [esi]
// 0053bd89  c7411c04000000       mov dword ptr [ecx + 0x1c], 4
// 0053bd90  8b16                 mov edx, dword ptr [esi]
// 0053bd92  8b02                 mov eax, dword ptr [edx]
// 0053bd94  56                   push esi
// 0053bd95  ffd0                 call eax
// 0053bd97  83c404               add esp, 4
// 0053bd9a  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0053bd9d  33d2                 xor edx, edx
// 0053bd9f  3bc7                 cmp eax, edi
// 0053bda1  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 0053bda7  7e1b                 jle 0x53bdc4
// 0053bda9  33c9                 xor ecx, ecx
// 0053bdab  8d86e8000000         lea eax, [esi + 0xe8]
// 0053bdb1  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 0053bdb4  03d9                 add ebx, ecx
// 0053bdb6  8918                 mov dword ptr [eax], ebx
// 0053bdb8  42                   inc edx
// 0053bdb9  83c004               add eax, 4
// 0053bdbc  83c154               add ecx, 0x54
// 0053bdbf  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0053bdc2  7ced                 jl 0x53bdb1
// 0053bdc4  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 0053bdca  89be34010000         mov dword ptr [esi + 0x134], edi
// 0053bdd0  89be38010000         mov dword ptr [esi + 0x138], edi
// 0053bdd6  5f                   pop edi
// 0053bdd7  c786300100003f000000 mov dword ptr [esi + 0x130], 0x3f
// 0053bde1  5b                   pop ebx
// 0053bde2  c3                   ret 
// library jpeg-6b/jcmaster.c (function _select_scan_parameters)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
