// roc 2009-06 0059c5f0  unit: seg_00590000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059c5f0
//
// 0059c5f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0059c5f4  53                   push ebx
// 0059c5f5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0059c5f9  3bc3                 cmp eax, ebx
// 0059c5fb  57                   push edi
// 0059c5fc  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0059c600  7d22                 jge 0x59c624
// 0059c602  53                   push ebx
// 0059c603  50                   push eax
// 0059c604  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059c608  50                   push eax
// 0059c609  57                   push edi
// 0059c60a  e8c1feffff           call 0x59c4d0
// 0059c60f  83c410               add esp, 0x10
// 0059c612  84c0                 test al, al
// 0059c614  7506                 jne 0x59c61c
// 0059c616  5f                   pop edi
// 0059c617  83c8ff               or eax, 0xffffffff
// 0059c61a  5b                   pop ebx
// 0059c61b  c3                   ret 
// 0059c61c  8b5708               mov edx, dword ptr [edi + 8]
// 0059c61f  8b470c               mov eax, dword ptr [edi + 0xc]
// 0059c622  eb04                 jmp 0x59c628
// 0059c624  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059c628  55                   push ebp
// 0059c629  56                   push esi
// 0059c62a  2bc3                 sub eax, ebx
// 0059c62c  8bc8                 mov ecx, eax
// 0059c62e  8bf2                 mov esi, edx
// 0059c630  d3fe                 sar esi, cl
// 0059c632  8bcb                 mov ecx, ebx
// 0059c634  bd01000000           mov ebp, 1
// 0059c639  d3e5                 shl ebp, cl
// 0059c63b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059c63f  4d                   dec ebp
// 0059c640  23f5                 and esi, ebp
// 0059c642  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 0059c645  7e34                 jle 0x59c67b
// 0059c647  03f6                 add esi, esi
// 0059c649  83f801               cmp eax, 1
// 0059c64c  7d17                 jge 0x59c665
// 0059c64e  6a01                 push 1
// 0059c650  50                   push eax
// 0059c651  52                   push edx
// 0059c652  57                   push edi
// 0059c653  e878feffff           call 0x59c4d0
// 0059c658  83c410               add esp, 0x10
// 0059c65b  84c0                 test al, al
// 0059c65d  744a                 je 0x59c6a9
// 0059c65f  8b5708               mov edx, dword ptr [edi + 8]
// 0059c662  8b470c               mov eax, dword ptr [edi + 0xc]
// 0059c665  48                   dec eax
// 0059c666  8bc8                 mov ecx, eax
// 0059c668  8bea                 mov ebp, edx
// 0059c66a  d3fd                 sar ebp, cl
// 0059c66c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059c670  43                   inc ebx
// 0059c671  83e501               and ebp, 1
// 0059c674  0bf5                 or esi, ebp
// 0059c676  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 0059c679  7fcc                 jg 0x59c647
// 0059c67b  83fb10               cmp ebx, 0x10
// 0059c67e  895708               mov dword ptr [edi + 8], edx
// 0059c681  89470c               mov dword ptr [edi + 0xc], eax
// 0059c684  7e2b                 jle 0x59c6b1
// 0059c686  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0059c689  8b11                 mov edx, dword ptr [ecx]
// 0059c68b  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 0059c692  8b7f10               mov edi, dword ptr [edi + 0x10]
// 0059c695  8b07                 mov eax, dword ptr [edi]
// 0059c697  8b4804               mov ecx, dword ptr [eax + 4]
// 0059c69a  6aff                 push -1
// 0059c69c  57                   push edi
// 0059c69d  ffd1                 call ecx
// 0059c69f  83c408               add esp, 8
// 0059c6a2  5e                   pop esi
// 0059c6a3  5d                   pop ebp
// 0059c6a4  5f                   pop edi
// 0059c6a5  33c0                 xor eax, eax
// 0059c6a7  5b                   pop ebx
// 0059c6a8  c3                   ret 
// 0059c6a9  5e                   pop esi
// 0059c6aa  5d                   pop ebp
// 0059c6ab  5f                   pop edi
// 0059c6ac  83c8ff               or eax, 0xffffffff
// 0059c6af  5b                   pop ebx
// 0059c6b0  c3                   ret 
// 0059c6b1  8b549948             mov edx, dword ptr [ecx + ebx*4 + 0x48]
// 0059c6b5  03918c000000         add edx, dword ptr [ecx + 0x8c]
// 0059c6bb  0fb6443211           movzx eax, byte ptr [edx + esi + 0x11]
// 0059c6c0  5e                   pop esi
// 0059c6c1  5d                   pop ebp
// 0059c6c2  5f                   pop edi
// 0059c6c3  5b                   pop ebx
// 0059c6c4  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_huff_decode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
