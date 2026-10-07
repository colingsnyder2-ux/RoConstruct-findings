// roc 2009-06 005a62a0  unit: seg_005a0000  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a62a0
//
// 005a62a0  56                   push esi
// 005a62a1  8b742408             mov esi, dword ptr [esp + 8]
// 005a62a5  57                   push edi
// 005a62a6  8bbe3c010000         mov edi, dword ptr [esi + 0x13c]
// 005a62ac  8b4710               mov eax, dword ptr [edi + 0x10]
// 005a62af  83e800               sub eax, 0
// 005a62b2  0f84d4000000         je 0x5a638c
// 005a62b8  83e801               sub eax, 1
// 005a62bb  741d                 je 0x5a62da
// 005a62bd  83e801               sub eax, 1
// 005a62c0  7447                 je 0x5a6309
// 005a62c2  8b06                 mov eax, dword ptr [esi]
// 005a62c4  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 005a62cb  8b0e                 mov ecx, dword ptr [esi]
// 005a62cd  8b11                 mov edx, dword ptr [ecx]
// 005a62cf  56                   push esi
// 005a62d0  ffd2                 call edx
// 005a62d2  83c404               add esp, 4
// 005a62d5  e93f010000           jmp 0x5a6419
// 005a62da  e801fdffff           call 0x5a5fe0
// 005a62df  e8ecfdffff           call 0x5a60d0
// 005a62e4  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 005a62eb  7579                 jne 0x5a6366
// 005a62ed  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 005a62f4  7470                 je 0x5a6366
// 005a62f6  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 005a62fd  7567                 jne 0x5a6366
// 005a62ff  ff4714               inc dword ptr [edi + 0x14]
// 005a6302  c7471002000000       mov dword ptr [edi + 0x10], 2
// 005a6309  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 005a6310  750a                 jne 0x5a631c
// 005a6312  e8c9fcffff           call 0x5a5fe0
// 005a6317  e8b4fdffff           call 0x5a60d0
// 005a631c  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 005a6322  8b08                 mov ecx, dword ptr [eax]
// 005a6324  6a00                 push 0
// 005a6326  56                   push esi
// 005a6327  ffd1                 call ecx
// 005a6329  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 005a632f  8b02                 mov eax, dword ptr [edx]
// 005a6331  6a02                 push 2
// 005a6333  56                   push esi
// 005a6334  ffd0                 call eax
// 005a6336  83c410               add esp, 0x10
// 005a6339  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 005a633d  750f                 jne 0x5a634e
// 005a633f  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 005a6345  8b5104               mov edx, dword ptr [ecx + 4]
// 005a6348  56                   push esi
// 005a6349  ffd2                 call edx
// 005a634b  83c404               add esp, 4
// 005a634e  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 005a6354  8b4808               mov ecx, dword ptr [eax + 8]
// 005a6357  56                   push esi
// 005a6358  ffd1                 call ecx
// 005a635a  83c404               add esp, 4
// 005a635d  c6470c00             mov byte ptr [edi + 0xc], 0
// 005a6361  e9b3000000           jmp 0x5a6419
// 005a6366  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 005a636c  8b02                 mov eax, dword ptr [edx]
// 005a636e  6a01                 push 1
// 005a6370  56                   push esi
// 005a6371  ffd0                 call eax
// 005a6373  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 005a6379  8b11                 mov edx, dword ptr [ecx]
// 005a637b  6a02                 push 2
// 005a637d  56                   push esi
// 005a637e  ffd2                 call edx
// 005a6380  83c410               add esp, 0x10
// 005a6383  c6470c00             mov byte ptr [edi + 0xc], 0
// 005a6387  e98d000000           jmp 0x5a6419
// 005a638c  e84ffcffff           call 0x5a5fe0
// 005a6391  e83afdffff           call 0x5a60d0
// 005a6396  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 005a639d  7526                 jne 0x5a63c5
// 005a639f  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 005a63a5  8b08                 mov ecx, dword ptr [eax]
// 005a63a7  56                   push esi
// 005a63a8  ffd1                 call ecx
// 005a63aa  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 005a63b0  8b02                 mov eax, dword ptr [edx]
// 005a63b2  56                   push esi
// 005a63b3  ffd0                 call eax
// 005a63b5  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 005a63bb  8b11                 mov edx, dword ptr [ecx]
// 005a63bd  6a00                 push 0
// 005a63bf  56                   push esi
// 005a63c0  ffd2                 call edx
// 005a63c2  83c410               add esp, 0x10
// 005a63c5  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 005a63cb  8b08                 mov ecx, dword ptr [eax]
// 005a63cd  56                   push esi
// 005a63ce  ffd1                 call ecx
// 005a63d0  0fb686b2000000       movzx eax, byte ptr [esi + 0xb2]
// 005a63d7  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 005a63dd  8b0a                 mov ecx, dword ptr [edx]
// 005a63df  50                   push eax
// 005a63e0  56                   push esi
// 005a63e1  ffd1                 call ecx
// 005a63e3  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 005a63e9  8b0a                 mov ecx, dword ptr [edx]
// 005a63eb  33c0                 xor eax, eax
// 005a63ed  837f1801             cmp dword ptr [edi + 0x18], 1
// 005a63f1  0f9ec0               setle al
// 005a63f4  48                   dec eax
// 005a63f5  83e003               and eax, 3
// 005a63f8  50                   push eax
// 005a63f9  56                   push esi
// 005a63fa  ffd1                 call ecx
// 005a63fc  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 005a6402  8b02                 mov eax, dword ptr [edx]
// 005a6404  6a00                 push 0
// 005a6406  56                   push esi
// 005a6407  ffd0                 call eax
// 005a6409  83c41c               add esp, 0x1c
// 005a640c  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 005a6413  0f94c1               sete cl
// 005a6416  884f0c               mov byte ptr [edi + 0xc], cl
// 005a6419  8b5718               mov edx, dword ptr [edi + 0x18]
// 005a641c  8b4714               mov eax, dword ptr [edi + 0x14]
// 005a641f  4a                   dec edx
// 005a6420  3bc2                 cmp eax, edx
// 005a6422  0f94c1               sete cl
// 005a6425  884f0d               mov byte ptr [edi + 0xd], cl
// 005a6428  837e0800             cmp dword ptr [esi + 8], 0
// 005a642c  740f                 je 0x5a643d
// 005a642e  8b5608               mov edx, dword ptr [esi + 8]
// 005a6431  89420c               mov dword ptr [edx + 0xc], eax
// 005a6434  8b4608               mov eax, dword ptr [esi + 8]
// 005a6437  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005a643a  894810               mov dword ptr [eax + 0x10], ecx
// 005a643d  5f                   pop edi
// 005a643e  5e                   pop esi
// 005a643f  c3                   ret 
// library jpeg-6b/jcmaster.c (function _prepare_for_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
