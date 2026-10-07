// roc 2011-06 0057fda0  unit: seg_00570000  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057fda0
//
// 0057fda0  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0057fda6  53                   push ebx
// 0057fda7  57                   push edi
// 0057fda8  33ff                 xor edi, edi
// 0057fdaa  3bcf                 cmp ecx, edi
// 0057fdac  7462                 je 0x57fe10
// 0057fdae  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0057fdb4  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0057fdb7  8d14c0               lea edx, [eax + eax*8]
// 0057fdba  8d0491               lea eax, [ecx + edx*4]
// 0057fdbd  8b08                 mov ecx, dword ptr [eax]
// 0057fdbf  898ee4000000         mov dword ptr [esi + 0xe4], ecx
// 0057fdc5  33c9                 xor ecx, ecx
// 0057fdc7  3938                 cmp dword ptr [eax], edi
// 0057fdc9  7e1e                 jle 0x57fde9
// 0057fdcb  8dbee8000000         lea edi, [esi + 0xe8]
// 0057fdd1  8d5004               lea edx, [eax + 4]
// 0057fdd4  8b1a                 mov ebx, dword ptr [edx]
// 0057fdd6  6bdb54               imul ebx, ebx, 0x54
// 0057fdd9  035e44               add ebx, dword ptr [esi + 0x44]
// 0057fddc  41                   inc ecx
// 0057fddd  891f                 mov dword ptr [edi], ebx
// 0057fddf  83c204               add edx, 4
// 0057fde2  83c704               add edi, 4
// 0057fde5  3b08                 cmp ecx, dword ptr [eax]
// 0057fde7  7ceb                 jl 0x57fdd4
// 0057fde9  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057fdec  89962c010000         mov dword ptr [esi + 0x12c], edx
// 0057fdf2  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0057fdf5  898e30010000         mov dword ptr [esi + 0x130], ecx
// 0057fdfb  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0057fdfe  899634010000         mov dword ptr [esi + 0x134], edx
// 0057fe04  8b4020               mov eax, dword ptr [eax + 0x20]
// 0057fe07  5f                   pop edi
// 0057fe08  898638010000         mov dword ptr [esi + 0x138], eax
// 0057fe0e  5b                   pop ebx
// 0057fe0f  c3                   ret 
// 0057fe10  837e3c04             cmp dword ptr [esi + 0x3c], 4
// 0057fe14  7e24                 jle 0x57fe3a
// 0057fe16  8b0e                 mov ecx, dword ptr [esi]
// 0057fe18  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0057fe1f  8b16                 mov edx, dword ptr [esi]
// 0057fe21  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0057fe24  894218               mov dword ptr [edx + 0x18], eax
// 0057fe27  8b0e                 mov ecx, dword ptr [esi]
// 0057fe29  c7411c04000000       mov dword ptr [ecx + 0x1c], 4
// 0057fe30  8b16                 mov edx, dword ptr [esi]
// 0057fe32  8b02                 mov eax, dword ptr [edx]
// 0057fe34  56                   push esi
// 0057fe35  ffd0                 call eax
// 0057fe37  83c404               add esp, 4
// 0057fe3a  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0057fe3d  33d2                 xor edx, edx
// 0057fe3f  3bc7                 cmp eax, edi
// 0057fe41  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 0057fe47  7e1b                 jle 0x57fe64
// 0057fe49  33c9                 xor ecx, ecx
// 0057fe4b  8d86e8000000         lea eax, [esi + 0xe8]
// 0057fe51  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 0057fe54  03d9                 add ebx, ecx
// 0057fe56  8918                 mov dword ptr [eax], ebx
// 0057fe58  42                   inc edx
// 0057fe59  83c004               add eax, 4
// 0057fe5c  83c154               add ecx, 0x54
// 0057fe5f  3b563c               cmp edx, dword ptr [esi + 0x3c]
// 0057fe62  7ced                 jl 0x57fe51
// 0057fe64  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 0057fe6a  89be34010000         mov dword ptr [esi + 0x134], edi
// 0057fe70  89be38010000         mov dword ptr [esi + 0x138], edi
// 0057fe76  5f                   pop edi
// 0057fe77  c786300100003f000000 mov dword ptr [esi + 0x130], 0x3f
// 0057fe81  5b                   pop ebx
// 0057fe82  c3                   ret 
// library jpeg-6b/jcmaster.c (function _select_scan_parameters)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
