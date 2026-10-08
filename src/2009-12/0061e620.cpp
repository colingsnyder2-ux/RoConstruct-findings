// roc 2009-12 0061e620  unit: seg_00610000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061e620
//
// 0061e620  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061e624  53                   push ebx
// 0061e625  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0061e629  3bc3                 cmp eax, ebx
// 0061e62b  57                   push edi
// 0061e62c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061e630  7d22                 jge 0x61e654
// 0061e632  53                   push ebx
// 0061e633  50                   push eax
// 0061e634  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061e638  50                   push eax
// 0061e639  57                   push edi
// 0061e63a  e8c1feffff           call 0x61e500
// 0061e63f  83c410               add esp, 0x10
// 0061e642  84c0                 test al, al
// 0061e644  7506                 jne 0x61e64c
// 0061e646  5f                   pop edi
// 0061e647  83c8ff               or eax, 0xffffffff
// 0061e64a  5b                   pop ebx
// 0061e64b  c3                   ret 
// 0061e64c  8b5708               mov edx, dword ptr [edi + 8]
// 0061e64f  8b470c               mov eax, dword ptr [edi + 0xc]
// 0061e652  eb04                 jmp 0x61e658
// 0061e654  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061e658  55                   push ebp
// 0061e659  56                   push esi
// 0061e65a  2bc3                 sub eax, ebx
// 0061e65c  8bc8                 mov ecx, eax
// 0061e65e  8bf2                 mov esi, edx
// 0061e660  d3fe                 sar esi, cl
// 0061e662  8bcb                 mov ecx, ebx
// 0061e664  bd01000000           mov ebp, 1
// 0061e669  d3e5                 shl ebp, cl
// 0061e66b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061e66f  4d                   dec ebp
// 0061e670  23f5                 and esi, ebp
// 0061e672  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 0061e675  7e34                 jle 0x61e6ab
// 0061e677  03f6                 add esi, esi
// 0061e679  83f801               cmp eax, 1
// 0061e67c  7d17                 jge 0x61e695
// 0061e67e  6a01                 push 1
// 0061e680  50                   push eax
// 0061e681  52                   push edx
// 0061e682  57                   push edi
// 0061e683  e878feffff           call 0x61e500
// 0061e688  83c410               add esp, 0x10
// 0061e68b  84c0                 test al, al
// 0061e68d  744a                 je 0x61e6d9
// 0061e68f  8b5708               mov edx, dword ptr [edi + 8]
// 0061e692  8b470c               mov eax, dword ptr [edi + 0xc]
// 0061e695  48                   dec eax
// 0061e696  8bc8                 mov ecx, eax
// 0061e698  8bea                 mov ebp, edx
// 0061e69a  d3fd                 sar ebp, cl
// 0061e69c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061e6a0  43                   inc ebx
// 0061e6a1  83e501               and ebp, 1
// 0061e6a4  0bf5                 or esi, ebp
// 0061e6a6  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 0061e6a9  7fcc                 jg 0x61e677
// 0061e6ab  83fb10               cmp ebx, 0x10
// 0061e6ae  895708               mov dword ptr [edi + 8], edx
// 0061e6b1  89470c               mov dword ptr [edi + 0xc], eax
// 0061e6b4  7e2b                 jle 0x61e6e1
// 0061e6b6  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0061e6b9  8b11                 mov edx, dword ptr [ecx]
// 0061e6bb  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 0061e6c2  8b7f10               mov edi, dword ptr [edi + 0x10]
// 0061e6c5  8b07                 mov eax, dword ptr [edi]
// 0061e6c7  8b4804               mov ecx, dword ptr [eax + 4]
// 0061e6ca  6aff                 push -1
// 0061e6cc  57                   push edi
// 0061e6cd  ffd1                 call ecx
// 0061e6cf  83c408               add esp, 8
// 0061e6d2  5e                   pop esi
// 0061e6d3  5d                   pop ebp
// 0061e6d4  5f                   pop edi
// 0061e6d5  33c0                 xor eax, eax
// 0061e6d7  5b                   pop ebx
// 0061e6d8  c3                   ret 
// 0061e6d9  5e                   pop esi
// 0061e6da  5d                   pop ebp
// 0061e6db  5f                   pop edi
// 0061e6dc  83c8ff               or eax, 0xffffffff
// 0061e6df  5b                   pop ebx
// 0061e6e0  c3                   ret 
// 0061e6e1  8b549948             mov edx, dword ptr [ecx + ebx*4 + 0x48]
// 0061e6e5  03918c000000         add edx, dword ptr [ecx + 0x8c]
// 0061e6eb  0fb6443211           movzx eax, byte ptr [edx + esi + 0x11]
// 0061e6f0  5e                   pop esi
// 0061e6f1  5d                   pop ebp
// 0061e6f2  5f                   pop edi
// 0061e6f3  5b                   pop ebx
// 0061e6f4  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_huff_decode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
