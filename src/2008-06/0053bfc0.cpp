// from server: 100% by auto
// roc 2008-06 0053bfc0  unit: seg_00530000  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053bfc0
//
// 0053bfc0  56                   push esi
// 0053bfc1  8b742408             mov esi, dword ptr [esp + 8]
// 0053bfc5  57                   push edi
// 0053bfc6  8bbe3c010000         mov edi, dword ptr [esi + 0x13c]
// 0053bfcc  8b4710               mov eax, dword ptr [edi + 0x10]
// 0053bfcf  83e800               sub eax, 0
// 0053bfd2  0f84d4000000         je 0x53c0ac
// 0053bfd8  83e801               sub eax, 1
// 0053bfdb  741d                 je 0x53bffa
// 0053bfdd  83e801               sub eax, 1
// 0053bfe0  7447                 je 0x53c029
// 0053bfe2  8b06                 mov eax, dword ptr [esi]
// 0053bfe4  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 0053bfeb  8b0e                 mov ecx, dword ptr [esi]
// 0053bfed  8b11                 mov edx, dword ptr [ecx]
// 0053bfef  56                   push esi
// 0053bff0  ffd2                 call edx
// 0053bff2  83c404               add esp, 4
// 0053bff5  e93f010000           jmp 0x53c139
// 0053bffa  e801fdffff           call 0x53bd00
// 0053bfff  e8ecfdffff           call 0x53bdf0
// 0053c004  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0053c00b  7579                 jne 0x53c086
// 0053c00d  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 0053c014  7470                 je 0x53c086
// 0053c016  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0053c01d  7567                 jne 0x53c086
// 0053c01f  ff4714               inc dword ptr [edi + 0x14]
// 0053c022  c7471002000000       mov dword ptr [edi + 0x10], 2
// 0053c029  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0053c030  750a                 jne 0x53c03c
// 0053c032  e8c9fcffff           call 0x53bd00
// 0053c037  e8b4fdffff           call 0x53bdf0
// 0053c03c  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0053c042  8b08                 mov ecx, dword ptr [eax]
// 0053c044  6a00                 push 0
// 0053c046  56                   push esi
// 0053c047  ffd1                 call ecx
// 0053c049  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0053c04f  8b02                 mov eax, dword ptr [edx]
// 0053c051  6a02                 push 2
// 0053c053  56                   push esi
// 0053c054  ffd0                 call eax
// 0053c056  83c410               add esp, 0x10
// 0053c059  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 0053c05d  750f                 jne 0x53c06e
// 0053c05f  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 0053c065  8b5104               mov edx, dword ptr [ecx + 4]
// 0053c068  56                   push esi
// 0053c069  ffd2                 call edx
// 0053c06b  83c404               add esp, 4
// 0053c06e  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0053c074  8b4808               mov ecx, dword ptr [eax + 8]
// 0053c077  56                   push esi
// 0053c078  ffd1                 call ecx
// 0053c07a  83c404               add esp, 4
// 0053c07d  c6470c00             mov byte ptr [edi + 0xc], 0
// 0053c081  e9b3000000           jmp 0x53c139
// 0053c086  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 0053c08c  8b02                 mov eax, dword ptr [edx]
// 0053c08e  6a01                 push 1
// 0053c090  56                   push esi
// 0053c091  ffd0                 call eax
// 0053c093  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 0053c099  8b11                 mov edx, dword ptr [ecx]
// 0053c09b  6a02                 push 2
// 0053c09d  56                   push esi
// 0053c09e  ffd2                 call edx
// 0053c0a0  83c410               add esp, 0x10
// 0053c0a3  c6470c00             mov byte ptr [edi + 0xc], 0
// 0053c0a7  e98d000000           jmp 0x53c139
// 0053c0ac  e84ffcffff           call 0x53bd00
// 0053c0b1  e83afdffff           call 0x53bdf0
// 0053c0b6  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0053c0bd  7526                 jne 0x53c0e5
// 0053c0bf  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 0053c0c5  8b08                 mov ecx, dword ptr [eax]
// 0053c0c7  56                   push esi
// 0053c0c8  ffd1                 call ecx
// 0053c0ca  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 0053c0d0  8b02                 mov eax, dword ptr [edx]
// 0053c0d2  56                   push esi
// 0053c0d3  ffd0                 call eax
// 0053c0d5  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0053c0db  8b11                 mov edx, dword ptr [ecx]
// 0053c0dd  6a00                 push 0
// 0053c0df  56                   push esi
// 0053c0e0  ffd2                 call edx
// 0053c0e2  83c410               add esp, 0x10
// 0053c0e5  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 0053c0eb  8b08                 mov ecx, dword ptr [eax]
// 0053c0ed  56                   push esi
// 0053c0ee  ffd1                 call ecx
// 0053c0f0  0fb686b2000000       movzx eax, byte ptr [esi + 0xb2]
// 0053c0f7  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 0053c0fd  8b0a                 mov ecx, dword ptr [edx]
// 0053c0ff  50                   push eax
// 0053c100  56                   push esi
// 0053c101  ffd1                 call ecx
// 0053c103  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0053c109  8b0a                 mov ecx, dword ptr [edx]
// 0053c10b  33c0                 xor eax, eax
// 0053c10d  837f1801             cmp dword ptr [edi + 0x18], 1
// 0053c111  0f9ec0               setle al
// 0053c114  48                   dec eax
// 0053c115  83e003               and eax, 3
// 0053c118  50                   push eax
// 0053c119  56                   push esi
// 0053c11a  ffd1                 call ecx
// 0053c11c  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 0053c122  8b02                 mov eax, dword ptr [edx]
// 0053c124  6a00                 push 0
// 0053c126  56                   push esi
// 0053c127  ffd0                 call eax
// 0053c129  83c41c               add esp, 0x1c
// 0053c12c  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0053c133  0f94c1               sete cl
// 0053c136  884f0c               mov byte ptr [edi + 0xc], cl
// 0053c139  8b5718               mov edx, dword ptr [edi + 0x18]
// 0053c13c  8b4714               mov eax, dword ptr [edi + 0x14]
// 0053c13f  4a                   dec edx
// 0053c140  3bc2                 cmp eax, edx
// 0053c142  0f94c1               sete cl
// 0053c145  884f0d               mov byte ptr [edi + 0xd], cl
// 0053c148  837e0800             cmp dword ptr [esi + 8], 0
// 0053c14c  740f                 je 0x53c15d
// 0053c14e  8b5608               mov edx, dword ptr [esi + 8]
// 0053c151  89420c               mov dword ptr [edx + 0xc], eax
// 0053c154  8b4608               mov eax, dword ptr [esi + 8]
// 0053c157  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0053c15a  894810               mov dword ptr [eax + 0x10], ecx
// 0053c15d  5f                   pop edi
// 0053c15e  5e                   pop esi
// 0053c15f  c3                   ret 
// library jpeg-6b/jcmaster.c (function _prepare_for_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
