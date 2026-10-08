// roc 2009-12 00627f90  unit: seg_00620000  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00627f90
//
// 00627f90  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 00627f96  53                   push ebx
// 00627f97  57                   push edi
// 00627f98  33ff                 xor edi, edi
// 00627f9a  3bcf                 cmp ecx, edi
// 00627f9c  7462                 je 0x628000
// 00627f9e  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00627fa4  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00627fa7  8d14c0               lea edx, [eax + eax*8]
// 00627faa  8d0491               lea eax, [ecx + edx*4]
// 00627fad  8b08                 mov ecx, dword ptr [eax]
// 00627faf  898ee4000000         mov dword ptr [esi + 0xe4], ecx
// 00627fb5  33c9                 xor ecx, ecx
// 00627fb7  3938                 cmp dword ptr [eax], edi
// 00627fb9  7e1e                 jle 0x627fd9
// 00627fbb  8dbee8000000         lea edi, [esi + 0xe8]
// 00627fc1  8d5004               lea edx, [eax + 4]
// 00627fc4  8b1a                 mov ebx, dword ptr [edx]
// 00627fc6  6bdb54               imul ebx, ebx, 0x54
// 00627fc9  035e44               add ebx, dword ptr [esi + 0x44]
// 00627fcc  41                   inc ecx
// 00627fcd  891f                 mov dword ptr [edi], ebx
// 00627fcf  83c204               add edx, 4
// 00627fd2  83c704               add edi, 4
// 00627fd5  3b08                 cmp ecx, dword ptr [eax]
// 00627fd7  7ceb                 jl 0x627fc4
// 00627fd9  8b5014               mov edx, dword ptr [eax + 0x14]
// 00627fdc  89962c010000         mov dword ptr [esi + 0x12c], edx
// 00627fe2  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00627fe5  898e30010000         mov dword ptr [esi + 0x130], ecx
// 00627feb  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00627fee  899634010000         mov dword ptr [esi + 0x134], edx
// 00627ff4  8b4020               mov eax, dword ptr [eax + 0x20]
// 00627ff7  5f                   pop edi
// 00627ff8  898638010000         mov dword ptr [esi + 0x138], eax
// 00627ffe  5b                   pop ebx
// 00627fff  c3                   ret 
// 00628000  837e3c04             cmp dword ptr [esi + 0x3c], 4
// 00628004  7e24                 jle 0x62802a
// 00628006  8b0e                 mov ecx, dword ptr [esi]
// 00628008  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0062800f  8b16                 mov edx, dword ptr [esi]
// 00628011  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00628014  894218               mov dword ptr [edx + 0x18], eax
// 00628017  8b0e                 mov ecx, dword ptr [esi]
// 00628019  c7411c04000000       mov dword ptr [ecx + 0x1c], 4
// 00628020  8b16                 mov edx, dword ptr [esi]
// 00628022  8b02                 mov eax, dword ptr [edx]
// 00628024  56                   push esi
// 00628025  ffd0                 call eax
// 00628027  83c404               add esp, 4
// 0062802a  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0062802d  33d2                 xor edx, edx
// 0062802f  3bc7                 cmp eax, edi
// 00628031  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 00628037  7e1b                 jle 0x628054
// 00628039  33c9                 xor ecx, ecx
// 0062803b  8d86e8000000         lea eax, [esi + 0xe8]
// 00628041  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 00628044  03d9                 add ebx, ecx
// 00628046  8918                 mov dword ptr [eax], ebx
// 00628048  42                   inc edx
// 00628049  83c004               add eax, 4
// 0062804c  83c154               add ecx, 0x54
// 0062804f  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 00628052  7ced                 jl 0x628041
// 00628054  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 0062805a  89be34010000         mov dword ptr [esi + 0x134], edi
// 00628060  89be38010000         mov dword ptr [esi + 0x138], edi
// 00628066  5f                   pop edi
// 00628067  c786300100003f000000 mov dword ptr [esi + 0x130], 0x3f
// 00628071  5b                   pop ebx
// 00628072  c3                   ret 
// library jpeg-6b/jcmaster.c (function _select_scan_parameters)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
