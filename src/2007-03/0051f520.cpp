// roc 2007-03 0051f520  unit: seg_00510000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051f520
//
// 0051f520  83ec10               sub esp, 0x10
// 0051f523  53                   push ebx
// 0051f524  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0051f528  8b8318010000         mov eax, dword ptr [ebx + 0x118]
// 0051f52e  55                   push ebp
// 0051f52f  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 0051f535  56                   push esi
// 0051f536  33f6                 xor esi, esi
// 0051f538  397324               cmp dword ptr [ebx + 0x24], esi
// 0051f53b  57                   push edi
// 0051f53c  8bbb84010000         mov edi, dword ptr [ebx + 0x184]
// 0051f542  897c2418             mov dword ptr [esp + 0x18], edi
// 0051f546  8944241c             mov dword ptr [esp + 0x1c], eax
// 0051f54a  89742410             mov dword ptr [esp + 0x10], esi
// 0051f54e  0f8e9b000000         jle 0x51f5ef
// 0051f554  83c50c               add ebp, 0xc
// 0051f557  896c2414             mov dword ptr [esp + 0x14], ebp
// 0051f55b  eb07                 jmp 0x51f564
// 0051f55d  8d4900               lea ecx, [ecx]
// 0051f560  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0051f564  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0051f567  0faf4500             imul eax, dword ptr [ebp]
// 0051f56b  99                   cdq 
// 0051f56c  f7bb18010000         idiv dword ptr [ebx + 0x118]
// 0051f572  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0051f575  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0051f578  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0051f57b  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 0051f57e  85c0                 test eax, eax
// 0051f580  7e56                 jle 0x51f5d8
// 0051f582  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0051f586  8d5602               lea edx, [esi + 2]
// 0051f589  0fafd0               imul edx, eax
// 0051f58c  83c601               add esi, 1
// 0051f58f  0faff0               imul esi, eax
// 0051f592  8d1c97               lea ebx, [edi + edx*4]
// 0051f595  8d148500000000       lea edx, [eax*4]
// 0051f59c  8bea                 mov ebp, edx
// 0051f59e  8bd7                 mov edx, edi
// 0051f5a0  2bd5                 sub edx, ebp
// 0051f5a2  8d34b7               lea esi, [edi + esi*4]
// 0051f5a5  2bcf                 sub ecx, edi
// 0051f5a7  8b2c31               mov ebp, dword ptr [ecx + esi]
// 0051f5aa  892c11               mov dword ptr [ecx + edx], ebp
// 0051f5ad  8b2e                 mov ebp, dword ptr [esi]
// 0051f5af  892a                 mov dword ptr [edx], ebp
// 0051f5b1  8b2c39               mov ebp, dword ptr [ecx + edi]
// 0051f5b4  892c19               mov dword ptr [ecx + ebx], ebp
// 0051f5b7  8b2f                 mov ebp, dword ptr [edi]
// 0051f5b9  892b                 mov dword ptr [ebx], ebp
// 0051f5bb  83c604               add esi, 4
// 0051f5be  83c204               add edx, 4
// 0051f5c1  83c704               add edi, 4
// 0051f5c4  83c304               add ebx, 4
// 0051f5c7  83e801               sub eax, 1
// 0051f5ca  75db                 jne 0x51f5a7
// 0051f5cc  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051f5d0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0051f5d4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0051f5d8  83c601               add esi, 1
// 0051f5db  83c554               add ebp, 0x54
// 0051f5de  3b7324               cmp esi, dword ptr [ebx + 0x24]
// 0051f5e1  89742410             mov dword ptr [esp + 0x10], esi
// 0051f5e5  896c2414             mov dword ptr [esp + 0x14], ebp
// 0051f5e9  0f8c71ffffff         jl 0x51f560
// 0051f5ef  5f                   pop edi
// 0051f5f0  5e                   pop esi
// 0051f5f1  5d                   pop ebp
// 0051f5f2  5b                   pop ebx
// 0051f5f3  83c410               add esp, 0x10
// 0051f5f6  c3                   ret 
// library jpeg-6b/jdmainct.c (function _set_wraparound_pointers)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
