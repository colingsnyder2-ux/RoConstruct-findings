// roc 2007-03 0052aad0  unit: seg_00520000  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052aad0
//
// 0052aad0  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0052aad6  53                   push ebx
// 0052aad7  57                   push edi
// 0052aad8  33ff                 xor edi, edi
// 0052aada  3bcf                 cmp ecx, edi
// 0052aadc  7464                 je 0x52ab42
// 0052aade  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0052aae4  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0052aae7  8d14c0               lea edx, [eax + eax*8]
// 0052aaea  8d0491               lea eax, [ecx + edx*4]
// 0052aaed  8b08                 mov ecx, dword ptr [eax]
// 0052aaef  898ee4000000         mov dword ptr [esi + 0xe4], ecx
// 0052aaf5  33c9                 xor ecx, ecx
// 0052aaf7  3938                 cmp dword ptr [eax], edi
// 0052aaf9  7e20                 jle 0x52ab1b
// 0052aafb  8dbee8000000         lea edi, [esi + 0xe8]
// 0052ab01  8d5004               lea edx, [eax + 4]
// 0052ab04  8b1a                 mov ebx, dword ptr [edx]
// 0052ab06  6bdb54               imul ebx, ebx, 0x54
// 0052ab09  035e44               add ebx, dword ptr [esi + 0x44]
// 0052ab0c  83c101               add ecx, 1
// 0052ab0f  891f                 mov dword ptr [edi], ebx
// 0052ab11  83c204               add edx, 4
// 0052ab14  83c704               add edi, 4
// 0052ab17  3b08                 cmp ecx, dword ptr [eax]
// 0052ab19  7ce9                 jl 0x52ab04
// 0052ab1b  8b5014               mov edx, dword ptr [eax + 0x14]
// 0052ab1e  89962c010000         mov dword ptr [esi + 0x12c], edx
// 0052ab24  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0052ab27  898e30010000         mov dword ptr [esi + 0x130], ecx
// 0052ab2d  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0052ab30  899634010000         mov dword ptr [esi + 0x134], edx
// 0052ab36  8b4020               mov eax, dword ptr [eax + 0x20]
// 0052ab39  5f                   pop edi
// 0052ab3a  898638010000         mov dword ptr [esi + 0x138], eax
// 0052ab40  5b                   pop ebx
// 0052ab41  c3                   ret 
// 0052ab42  837e3c04             cmp dword ptr [esi + 0x3c], 4
// 0052ab46  7e24                 jle 0x52ab6c
// 0052ab48  8b0e                 mov ecx, dword ptr [esi]
// 0052ab4a  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0052ab51  8b16                 mov edx, dword ptr [esi]
// 0052ab53  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0052ab56  894218               mov dword ptr [edx + 0x18], eax
// 0052ab59  8b0e                 mov ecx, dword ptr [esi]
// 0052ab5b  c7411c04000000       mov dword ptr [ecx + 0x1c], 4
// 0052ab62  8b16                 mov edx, dword ptr [esi]
// 0052ab64  8b02                 mov eax, dword ptr [edx]
// 0052ab66  56                   push esi
// 0052ab67  ffd0                 call eax
// 0052ab69  83c404               add esp, 4
// 0052ab6c  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0052ab6f  33d2                 xor edx, edx
// 0052ab71  3bc7                 cmp eax, edi
// 0052ab73  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 0052ab79  7e1d                 jle 0x52ab98
// 0052ab7b  33c9                 xor ecx, ecx
// 0052ab7d  8d86e8000000         lea eax, [esi + 0xe8]
// 0052ab83  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 0052ab86  03d9                 add ebx, ecx
// 0052ab88  8918                 mov dword ptr [eax], ebx
// 0052ab8a  83c201               add edx, 1
// 0052ab8d  83c004               add eax, 4
// 0052ab90  83c154               add ecx, 0x54
// 0052ab93  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0052ab96  7ceb                 jl 0x52ab83
// 0052ab98  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 0052ab9e  89be34010000         mov dword ptr [esi + 0x134], edi
// 0052aba4  89be38010000         mov dword ptr [esi + 0x138], edi
// 0052abaa  5f                   pop edi
// 0052abab  c786300100003f000000 mov dword ptr [esi + 0x130], 0x3f
// 0052abb5  5b                   pop ebx
// 0052abb6  c3                   ret 
// library jpeg-6b/jcmaster.c (function _select_scan_parameters)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
