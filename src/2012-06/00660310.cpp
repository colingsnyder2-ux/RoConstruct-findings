// from server: 100% by auto
// roc 2012-06 00660310  unit: seg_00660000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00660310
//
// 00660310  83ec10               sub esp, 0x10
// 00660313  53                   push ebx
// 00660314  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00660318  8b8318010000         mov eax, dword ptr [ebx + 0x118]
// 0066031e  55                   push ebp
// 0066031f  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 00660325  56                   push esi
// 00660326  33f6                 xor esi, esi
// 00660328  397324               cmp dword ptr [ebx + 0x24], esi
// 0066032b  57                   push edi
// 0066032c  8bbb84010000         mov edi, dword ptr [ebx + 0x184]
// 00660332  897c2418             mov dword ptr [esp + 0x18], edi
// 00660336  8944241c             mov dword ptr [esp + 0x1c], eax
// 0066033a  89742410             mov dword ptr [esp + 0x10], esi
// 0066033e  0f8e97000000         jle 0x6603db
// 00660344  83c50c               add ebp, 0xc
// 00660347  896c2414             mov dword ptr [esp + 0x14], ebp
// 0066034b  eb07                 jmp 0x660354
// 0066034d  8d4900               lea ecx, [ecx]
// 00660350  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00660354  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00660357  0faf4500             imul eax, dword ptr [ebp]
// 0066035b  99                   cdq 
// 0066035c  f7bb18010000         idiv dword ptr [ebx + 0x118]
// 00660362  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00660365  8b573c               mov edx, dword ptr [edi + 0x3c]
// 00660368  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0066036b  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 0066036e  85c0                 test eax, eax
// 00660370  7e54                 jle 0x6603c6
// 00660372  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00660376  8d5602               lea edx, [esi + 2]
// 00660379  0fafd0               imul edx, eax
// 0066037c  46                   inc esi
// 0066037d  0faff0               imul esi, eax
// 00660380  8d1c97               lea ebx, [edi + edx*4]
// 00660383  8d148500000000       lea edx, [eax*4]
// 0066038a  8bea                 mov ebp, edx
// 0066038c  8bd7                 mov edx, edi
// 0066038e  2bd5                 sub edx, ebp
// 00660390  8d34b7               lea esi, [edi + esi*4]
// 00660393  2bcf                 sub ecx, edi
// 00660395  8b2c31               mov ebp, dword ptr [ecx + esi]
// 00660398  892c11               mov dword ptr [ecx + edx], ebp
// 0066039b  8b2e                 mov ebp, dword ptr [esi]
// 0066039d  892a                 mov dword ptr [edx], ebp
// 0066039f  8b2c39               mov ebp, dword ptr [ecx + edi]
// 006603a2  892c19               mov dword ptr [ecx + ebx], ebp
// 006603a5  8b2f                 mov ebp, dword ptr [edi]
// 006603a7  892b                 mov dword ptr [ebx], ebp
// 006603a9  83c604               add esi, 4
// 006603ac  83c204               add edx, 4
// 006603af  83c704               add edi, 4
// 006603b2  83c304               add ebx, 4
// 006603b5  83e801               sub eax, 1
// 006603b8  75db                 jne 0x660395
// 006603ba  8b742410             mov esi, dword ptr [esp + 0x10]
// 006603be  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006603c2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006603c6  46                   inc esi
// 006603c7  83c554               add ebp, 0x54
// 006603ca  3b7324               cmp esi, dword ptr [ebx + 0x24]
// 006603cd  89742410             mov dword ptr [esp + 0x10], esi
// 006603d1  896c2414             mov dword ptr [esp + 0x14], ebp
// 006603d5  0f8c75ffffff         jl 0x660350
// 006603db  5f                   pop edi
// 006603dc  5e                   pop esi
// 006603dd  5d                   pop ebp
// 006603de  5b                   pop ebx
// 006603df  83c410               add esp, 0x10
// 006603e2  c3                   ret 
// library jpeg-6b/jdmainct.c (function _set_wraparound_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
