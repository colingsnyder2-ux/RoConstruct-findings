// roc 2012-06 00668230  unit: seg_00660000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00668230
//
// 00668230  83ec0c               sub esp, 0xc
// 00668233  55                   push ebp
// 00668234  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00668238  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0066823b  8b08                 mov ecx, dword ptr [eax]
// 0066823d  56                   push esi
// 0066823e  8bb55c010000         mov esi, dword ptr [ebp + 0x15c]
// 00668244  57                   push edi
// 00668245  8bbd38010000         mov edi, dword ptr [ebp + 0x138]
// 0066824b  894e10               mov dword ptr [esi + 0x10], ecx
// 0066824e  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00668251  8b4204               mov eax, dword ptr [edx + 4]
// 00668254  894614               mov dword ptr [esi + 0x14], eax
// 00668257  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 0066825e  7414                 je 0x668274
// 00668260  837e4400             cmp dword ptr [esi + 0x44], 0
// 00668264  750e                 jne 0x668274
// 00668266  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00668269  51                   push ecx
// 0066826a  8bc6                 mov eax, esi
// 0066826c  e81fffffff           call 0x668190
// 00668271  83c404               add esp, 4
// 00668274  83bd0001000000       cmp dword ptr [ebp + 0x100], 0
// 0066827b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00668283  0f8ed1000000         jle 0x66835a
// 00668289  0fbfd7               movsx edx, di
// 0066828c  8d8504010000         lea eax, [ebp + 0x104]
// 00668292  89542414             mov dword ptr [esp + 0x14], edx
// 00668296  89442410             mov dword ptr [esp + 0x10], eax
// 0066829a  53                   push ebx
// 0066829b  eb03                 jmp 0x6682a0
// 0066829d  8d4900               lea ecx, [ecx]
// 006682a0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006682a4  8b39                 mov edi, dword ptr [ecx]
// 006682a6  8b542424             mov edx, dword ptr [esp + 0x24]
// 006682aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 006682ae  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 006682b1  0fbf11               movsx edx, word ptr [ecx]
// 006682b4  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 006682b8  8b9cbde8000000       mov ebx, dword ptr [ebp + edi*4 + 0xe8]
// 006682bf  d3fa                 sar edx, cl
// 006682c1  8bc2                 mov eax, edx
// 006682c3  2b44be24             sub eax, dword ptr [esi + edi*4 + 0x24]
// 006682c7  8954be24             mov dword ptr [esi + edi*4 + 0x24], edx
// 006682cb  89442420             mov dword ptr [esp + 0x20], eax
// 006682cf  7906                 jns 0x6682d7
// 006682d1  f7d8                 neg eax
// 006682d3  ff4c2420             dec dword ptr [esp + 0x20]
// 006682d7  33ff                 xor edi, edi
// 006682d9  85c0                 test eax, eax
// 006682db  7422                 je 0x6682ff
// 006682dd  8d4900               lea ecx, [ecx]
// 006682e0  47                   inc edi
// 006682e1  d1f8                 sar eax, 1
// 006682e3  75fb                 jne 0x6682e0
// 006682e5  83ff0b               cmp edi, 0xb
// 006682e8  7e15                 jle 0x6682ff
// 006682ea  8b5500               mov edx, dword ptr [ebp]
// 006682ed  c7421406000000       mov dword ptr [edx + 0x14], 6
// 006682f4  8b4500               mov eax, dword ptr [ebp]
// 006682f7  8b08                 mov ecx, dword ptr [eax]
// 006682f9  55                   push ebp
// 006682fa  ffd1                 call ecx
// 006682fc  83c404               add esp, 4
// 006682ff  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00668303  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00668306  740c                 je 0x668314
// 00668308  8b54865c             mov edx, dword ptr [esi + eax*4 + 0x5c]
// 0066830c  ff04ba               inc dword ptr [edx + edi*4]
// 0066830f  8d04ba               lea eax, [edx + edi*4]
// 00668312  eb19                 jmp 0x66832d
// 00668314  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00668318  0fbe8c3800040000     movsx ecx, byte ptr [eax + edi + 0x400]
// 00668320  8b14b8               mov edx, dword ptr [eax + edi*4]
// 00668323  51                   push ecx
// 00668324  52                   push edx
// 00668325  e856fcffff           call 0x667f80
// 0066832a  83c408               add esp, 8
// 0066832d  85ff                 test edi, edi
// 0066832f  740e                 je 0x66833f
// 00668331  8b442420             mov eax, dword ptr [esp + 0x20]
// 00668335  57                   push edi
// 00668336  50                   push eax
// 00668337  e844fcffff           call 0x667f80
// 0066833c  83c408               add esp, 8
// 0066833f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00668343  8344241404           add dword ptr [esp + 0x14], 4
// 00668348  40                   inc eax
// 00668349  3b8500010000         cmp eax, dword ptr [ebp + 0x100]
// 0066834f  89442410             mov dword ptr [esp + 0x10], eax
// 00668353  0f8c47ffffff         jl 0x6682a0
// 00668359  5b                   pop ebx
// 0066835a  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0066835d  8b5610               mov edx, dword ptr [esi + 0x10]
// 00668360  8911                 mov dword ptr [ecx], edx
// 00668362  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00668365  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00668368  894804               mov dword ptr [eax + 4], ecx
// 0066836b  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 00668371  85ed                 test ebp, ebp
// 00668373  7416                 je 0x66838b
// 00668375  837e4400             cmp dword ptr [esi + 0x44], 0
// 00668379  750d                 jne 0x668388
// 0066837b  8b5648               mov edx, dword ptr [esi + 0x48]
// 0066837e  42                   inc edx
// 0066837f  83e207               and edx, 7
// 00668382  896e44               mov dword ptr [esi + 0x44], ebp
// 00668385  895648               mov dword ptr [esi + 0x48], edx
// 00668388  ff4e44               dec dword ptr [esi + 0x44]
// 0066838b  5f                   pop edi
// 0066838c  5e                   pop esi
// 0066838d  b001                 mov al, 1
// 0066838f  5d                   pop ebp
// 00668390  83c40c               add esp, 0xc
// 00668393  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
