// roc 2008-06 00532310  unit: seg_00530000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00532310
//
// 00532310  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00532314  53                   push ebx
// 00532315  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00532319  3bc3                 cmp eax, ebx
// 0053231b  57                   push edi
// 0053231c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00532320  7d22                 jge 0x532344
// 00532322  53                   push ebx
// 00532323  50                   push eax
// 00532324  8b442418             mov eax, dword ptr [esp + 0x18]
// 00532328  50                   push eax
// 00532329  57                   push edi
// 0053232a  e8c1feffff           call 0x5321f0
// 0053232f  83c410               add esp, 0x10
// 00532332  84c0                 test al, al
// 00532334  7506                 jne 0x53233c
// 00532336  5f                   pop edi
// 00532337  83c8ff               or eax, 0xffffffff
// 0053233a  5b                   pop ebx
// 0053233b  c3                   ret 
// 0053233c  8b5708               mov edx, dword ptr [edi + 8]
// 0053233f  8b470c               mov eax, dword ptr [edi + 0xc]
// 00532342  eb04                 jmp 0x532348
// 00532344  8b542410             mov edx, dword ptr [esp + 0x10]
// 00532348  55                   push ebp
// 00532349  56                   push esi
// 0053234a  2bc3                 sub eax, ebx
// 0053234c  8bc8                 mov ecx, eax
// 0053234e  8bf2                 mov esi, edx
// 00532350  d3fe                 sar esi, cl
// 00532352  8bcb                 mov ecx, ebx
// 00532354  bd01000000           mov ebp, 1
// 00532359  d3e5                 shl ebp, cl
// 0053235b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053235f  4d                   dec ebp
// 00532360  23f5                 and esi, ebp
// 00532362  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 00532365  7e34                 jle 0x53239b
// 00532367  03f6                 add esi, esi
// 00532369  83f801               cmp eax, 1
// 0053236c  7d17                 jge 0x532385
// 0053236e  6a01                 push 1
// 00532370  50                   push eax
// 00532371  52                   push edx
// 00532372  57                   push edi
// 00532373  e878feffff           call 0x5321f0
// 00532378  83c410               add esp, 0x10
// 0053237b  84c0                 test al, al
// 0053237d  744a                 je 0x5323c9
// 0053237f  8b5708               mov edx, dword ptr [edi + 8]
// 00532382  8b470c               mov eax, dword ptr [edi + 0xc]
// 00532385  48                   dec eax
// 00532386  8bc8                 mov ecx, eax
// 00532388  8bea                 mov ebp, edx
// 0053238a  d3fd                 sar ebp, cl
// 0053238c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00532390  43                   inc ebx
// 00532391  83e501               and ebp, 1
// 00532394  0bf5                 or esi, ebp
// 00532396  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 00532399  7fcc                 jg 0x532367
// 0053239b  83fb10               cmp ebx, 0x10
// 0053239e  895708               mov dword ptr [edi + 8], edx
// 005323a1  89470c               mov dword ptr [edi + 0xc], eax
// 005323a4  7e2b                 jle 0x5323d1
// 005323a6  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005323a9  8b11                 mov edx, dword ptr [ecx]
// 005323ab  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 005323b2  8b7f10               mov edi, dword ptr [edi + 0x10]
// 005323b5  8b07                 mov eax, dword ptr [edi]
// 005323b7  8b4804               mov ecx, dword ptr [eax + 4]
// 005323ba  6aff                 push -1
// 005323bc  57                   push edi
// 005323bd  ffd1                 call ecx
// 005323bf  83c408               add esp, 8
// 005323c2  5e                   pop esi
// 005323c3  5d                   pop ebp
// 005323c4  5f                   pop edi
// 005323c5  33c0                 xor eax, eax
// 005323c7  5b                   pop ebx
// 005323c8  c3                   ret 
// 005323c9  5e                   pop esi
// 005323ca  5d                   pop ebp
// 005323cb  5f                   pop edi
// 005323cc  83c8ff               or eax, 0xffffffff
// 005323cf  5b                   pop ebx
// 005323d0  c3                   ret 
// 005323d1  8b549948             mov edx, dword ptr [ecx + ebx*4 + 0x48]
// 005323d5  03918c000000         add edx, dword ptr [ecx + 0x8c]
// 005323db  0fb6443211           movzx eax, byte ptr [edx + esi + 0x11]
// 005323e0  5e                   pop esi
// 005323e1  5d                   pop ebp
// 005323e2  5f                   pop edi
// 005323e3  5b                   pop ebx
// 005323e4  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_huff_decode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
