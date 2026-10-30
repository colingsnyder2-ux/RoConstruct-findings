// from server: 100% by auto
// roc 2012-06 0066b770  unit: seg_00660000  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066b770
//
// 0066b770  56                   push esi
// 0066b771  8b742408             mov esi, dword ptr [esp + 8]
// 0066b775  57                   push edi
// 0066b776  8bbe3c010000         mov edi, dword ptr [esi + 0x13c]
// 0066b77c  8b4710               mov eax, dword ptr [edi + 0x10]
// 0066b77f  83e800               sub eax, 0
// 0066b782  0f84d4000000         je 0x66b85c
// 0066b788  83e801               sub eax, 1
// 0066b78b  741d                 je 0x66b7aa
// 0066b78d  83e801               sub eax, 1
// 0066b790  7447                 je 0x66b7d9
// 0066b792  8b06                 mov eax, dword ptr [esi]
// 0066b794  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 0066b79b  8b0e                 mov ecx, dword ptr [esi]
// 0066b79d  8b11                 mov edx, dword ptr [ecx]
// 0066b79f  56                   push esi
// 0066b7a0  ffd2                 call edx
// 0066b7a2  83c404               add esp, 4
// 0066b7a5  e93f010000           jmp 0x66b8e9
// 0066b7aa  e801fdffff           call 0x66b4b0
// 0066b7af  e8ecfdffff           call 0x66b5a0
// 0066b7b4  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0066b7bb  7579                 jne 0x66b836
// 0066b7bd  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 0066b7c4  7470                 je 0x66b836
// 0066b7c6  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0066b7cd  7567                 jne 0x66b836
// 0066b7cf  ff4714               inc dword ptr [edi + 0x14]
// 0066b7d2  c7471002000000       mov dword ptr [edi + 0x10], 2
// 0066b7d9  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0066b7e0  750a                 jne 0x66b7ec
// 0066b7e2  e8c9fcffff           call 0x66b4b0
// 0066b7e7  e8b4fdffff           call 0x66b5a0
// 0066b7ec  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0066b7f2  8b08                 mov ecx, dword ptr [eax]
// 0066b7f4  6a00                 push 0
// 0066b7f6  56                   push esi
// 0066b7f7  ffd1                 call ecx
// 0066b7f9  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0066b7ff  8b02                 mov eax, dword ptr [edx]
// 0066b801  6a02                 push 2
// 0066b803  56                   push esi
// 0066b804  ffd0                 call eax
// 0066b806  83c410               add esp, 0x10
// 0066b809  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 0066b80d  750f                 jne 0x66b81e
// 0066b80f  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 0066b815  8b5104               mov edx, dword ptr [ecx + 4]
// 0066b818  56                   push esi
// 0066b819  ffd2                 call edx
// 0066b81b  83c404               add esp, 4
// 0066b81e  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0066b824  8b4808               mov ecx, dword ptr [eax + 8]
// 0066b827  56                   push esi
// 0066b828  ffd1                 call ecx
// 0066b82a  83c404               add esp, 4
// 0066b82d  c6470c00             mov byte ptr [edi + 0xc], 0
// 0066b831  e9b3000000           jmp 0x66b8e9
// 0066b836  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 0066b83c  8b02                 mov eax, dword ptr [edx]
// 0066b83e  6a01                 push 1
// 0066b840  56                   push esi
// 0066b841  ffd0                 call eax
// 0066b843  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 0066b849  8b11                 mov edx, dword ptr [ecx]
// 0066b84b  6a02                 push 2
// 0066b84d  56                   push esi
// 0066b84e  ffd2                 call edx
// 0066b850  83c410               add esp, 0x10
// 0066b853  c6470c00             mov byte ptr [edi + 0xc], 0
// 0066b857  e98d000000           jmp 0x66b8e9
// 0066b85c  e84ffcffff           call 0x66b4b0
// 0066b861  e83afdffff           call 0x66b5a0
// 0066b866  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0066b86d  7526                 jne 0x66b895
// 0066b86f  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 0066b875  8b08                 mov ecx, dword ptr [eax]
// 0066b877  56                   push esi
// 0066b878  ffd1                 call ecx
// 0066b87a  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 0066b880  8b02                 mov eax, dword ptr [edx]
// 0066b882  56                   push esi
// 0066b883  ffd0                 call eax
// 0066b885  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0066b88b  8b11                 mov edx, dword ptr [ecx]
// 0066b88d  6a00                 push 0
// 0066b88f  56                   push esi
// 0066b890  ffd2                 call edx
// 0066b892  83c410               add esp, 0x10
// 0066b895  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 0066b89b  8b08                 mov ecx, dword ptr [eax]
// 0066b89d  56                   push esi
// 0066b89e  ffd1                 call ecx
// 0066b8a0  0fb686b2000000       movzx eax, byte ptr [esi + 0xb2]
// 0066b8a7  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 0066b8ad  8b0a                 mov ecx, dword ptr [edx]
// 0066b8af  50                   push eax
// 0066b8b0  56                   push esi
// 0066b8b1  ffd1                 call ecx
// 0066b8b3  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0066b8b9  8b0a                 mov ecx, dword ptr [edx]
// 0066b8bb  33c0                 xor eax, eax
// 0066b8bd  837f1801             cmp dword ptr [edi + 0x18], 1
// 0066b8c1  0f9ec0               setle al
// 0066b8c4  48                   dec eax
// 0066b8c5  83e003               and eax, 3
// 0066b8c8  50                   push eax
// 0066b8c9  56                   push esi
// 0066b8ca  ffd1                 call ecx
// 0066b8cc  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 0066b8d2  8b02                 mov eax, dword ptr [edx]
// 0066b8d4  6a00                 push 0
// 0066b8d6  56                   push esi
// 0066b8d7  ffd0                 call eax
// 0066b8d9  83c41c               add esp, 0x1c
// 0066b8dc  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0066b8e3  0f94c1               sete cl
// 0066b8e6  884f0c               mov byte ptr [edi + 0xc], cl
// 0066b8e9  8b5718               mov edx, dword ptr [edi + 0x18]
// 0066b8ec  8b4714               mov eax, dword ptr [edi + 0x14]
// 0066b8ef  4a                   dec edx
// 0066b8f0  3bc2                 cmp eax, edx
// 0066b8f2  0f94c1               sete cl
// 0066b8f5  884f0d               mov byte ptr [edi + 0xd], cl
// 0066b8f8  837e0800             cmp dword ptr [esi + 8], 0
// 0066b8fc  740f                 je 0x66b90d
// 0066b8fe  8b5608               mov edx, dword ptr [esi + 8]
// 0066b901  89420c               mov dword ptr [edx + 0xc], eax
// 0066b904  8b4608               mov eax, dword ptr [esi + 8]
// 0066b907  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0066b90a  894810               mov dword ptr [eax + 0x10], ecx
// 0066b90d  5f                   pop edi
// 0066b90e  5e                   pop esi
// 0066b90f  c3                   ret 
// library jpeg-6b/jcmaster.c (function _prepare_for_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
