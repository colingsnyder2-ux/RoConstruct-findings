// roc 2008-06 0051e8f0  unit: seg_00510000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e8f0
//
// 0051e8f0  56                   push esi
// 0051e8f1  8b742408             mov esi, dword ptr [esp + 8]
// 0051e8f5  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 0051e8fc  7521                 jne 0x51e91f
// 0051e8fe  56                   push esi
// 0051e8ff  e82cd50000           call 0x52be30
// 0051e904  83c404               add esp, 4
// 0051e907  807e4000             cmp byte ptr [esi + 0x40], 0
// 0051e90b  740b                 je 0x51e918
// 0051e90d  c74614cf000000       mov dword ptr [esi + 0x14], 0xcf
// 0051e914  b001                 mov al, 1
// 0051e916  5e                   pop esi
// 0051e917  c3                   ret 
// 0051e918  c74614cb000000       mov dword ptr [esi + 0x14], 0xcb
// 0051e91f  8b4614               mov eax, dword ptr [esi + 0x14]
// 0051e922  3dcb000000           cmp eax, 0xcb
// 0051e927  7570                 jne 0x51e999
// 0051e929  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0051e92f  80781000             cmp byte ptr [eax + 0x10], 0
// 0051e933  7454                 je 0x51e989
// 0051e935  8b4608               mov eax, dword ptr [esi + 8]
// 0051e938  85c0                 test eax, eax
// 0051e93a  7408                 je 0x51e944
// 0051e93c  8b08                 mov ecx, dword ptr [eax]
// 0051e93e  56                   push esi
// 0051e93f  ffd1                 call ecx
// 0051e941  83c404               add esp, 4
// 0051e944  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0051e94a  8b02                 mov eax, dword ptr [edx]
// 0051e94c  56                   push esi
// 0051e94d  ffd0                 call eax
// 0051e94f  83c404               add esp, 4
// 0051e952  85c0                 test eax, eax
// 0051e954  742f                 je 0x51e985
// 0051e956  83f802               cmp eax, 2
// 0051e959  742e                 je 0x51e989
// 0051e95b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0051e95e  85c9                 test ecx, ecx
// 0051e960  74d3                 je 0x51e935
// 0051e962  83f803               cmp eax, 3
// 0051e965  7405                 je 0x51e96c
// 0051e967  83f801               cmp eax, 1
// 0051e96a  75c9                 jne 0x51e935
// 0051e96c  ff4104               inc dword ptr [ecx + 4]
// 0051e96f  8b4608               mov eax, dword ptr [esi + 8]
// 0051e972  8b4804               mov ecx, dword ptr [eax + 4]
// 0051e975  3b4808               cmp ecx, dword ptr [eax + 8]
// 0051e978  7cbb                 jl 0x51e935
// 0051e97a  8b961c010000         mov edx, dword ptr [esi + 0x11c]
// 0051e980  015008               add dword ptr [eax + 8], edx
// 0051e983  ebb0                 jmp 0x51e935
// 0051e985  32c0                 xor al, al
// 0051e987  5e                   pop esi
// 0051e988  c3                   ret 
// 0051e989  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0051e98c  898684000000         mov dword ptr [esi + 0x84], eax
// 0051e992  e8e9fdffff           call 0x51e780
// 0051e997  5e                   pop esi
// 0051e998  c3                   ret 
// 0051e999  3dcc000000           cmp eax, 0xcc
// 0051e99e  741b                 je 0x51e9bb
// 0051e9a0  8b0e                 mov ecx, dword ptr [esi]
// 0051e9a2  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 0051e9a9  8b16                 mov edx, dword ptr [esi]
// 0051e9ab  8b4614               mov eax, dword ptr [esi + 0x14]
// 0051e9ae  894218               mov dword ptr [edx + 0x18], eax
// 0051e9b1  8b0e                 mov ecx, dword ptr [esi]
// 0051e9b3  8b11                 mov edx, dword ptr [ecx]
// 0051e9b5  56                   push esi
// 0051e9b6  ffd2                 call edx
// 0051e9b8  83c404               add esp, 4
// 0051e9bb  e8c0fdffff           call 0x51e780
// 0051e9c0  5e                   pop esi
// 0051e9c1  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_start_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
