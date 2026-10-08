// roc 2007-03 005243b0  unit: seg_00520000  size: 455 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005243b0
//
// 005243b0  81ec28040000         sub esp, 0x428
// 005243b6  53                   push ebx
// 005243b7  55                   push ebp
// 005243b8  8bac2438040000       mov ebp, dword ptr [esp + 0x438]
// 005243bf  56                   push esi
// 005243c0  8b7070               mov esi, dword ptr [eax + 0x70]
// 005243c3  57                   push edi
// 005243c4  8bf9                 mov edi, ecx
// 005243c6  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 005243cd  8d540918             lea edx, [ecx + ecx + 0x18]
// 005243d1  d1fa                 sar edx, 1
// 005243d3  8954242c             mov dword ptr [esp + 0x2c], edx
// 005243d7  8d5f1c               lea ebx, [edi + 0x1c]
// 005243da  8d143b               lea edx, [ebx + edi]
// 005243dd  d1fa                 sar edx, 1
// 005243df  89542418             mov dword ptr [esp + 0x18], edx
// 005243e3  8d542d18             lea edx, [ebp + ebp + 0x18]
// 005243e7  d1fa                 sar edx, 1
// 005243e9  85f6                 test esi, esi
// 005243eb  89742430             mov dword ptr [esp + 0x30], esi
// 005243ef  89542428             mov dword ptr [esp + 0x28], edx
// 005243f3  c7442414ffffff7f     mov dword ptr [esp + 0x14], 0x7fffffff
// 005243fb  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00524403  0f8e3d010000         jle 0x524546
// 00524409  8b4074               mov eax, dword ptr [eax + 0x74]
// 0052440c  8b10                 mov edx, dword ptr [eax]
// 0052440e  89542434             mov dword ptr [esp + 0x34], edx
// 00524412  8b5004               mov edx, dword ptr [eax + 4]
// 00524415  8b4008               mov eax, dword ptr [eax + 8]
// 00524418  89542424             mov dword ptr [esp + 0x24], edx
// 0052441c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00524420  8b542434             mov edx, dword ptr [esp + 0x34]
// 00524424  8b442410             mov eax, dword ptr [esp + 0x10]
// 00524428  0fb60402             movzx eax, byte ptr [edx + eax]
// 0052442c  3bc1                 cmp eax, ecx
// 0052442e  7d3c                 jge 0x52446c
// 00524430  8bd0                 mov edx, eax
// 00524432  2bd1                 sub edx, ecx
// 00524434  03d2                 add edx, edx
// 00524436  0fafd2               imul edx, edx
// 00524439  83c118               add ecx, 0x18
// 0052443c  2bc1                 sub eax, ecx
// 0052443e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00524442  8b742424             mov esi, dword ptr [esp + 0x24]
// 00524446  0fb60c0e             movzx ecx, byte ptr [esi + ecx]
// 0052444a  03c0                 add eax, eax
// 0052444c  0fafc0               imul eax, eax
// 0052444f  3bcf                 cmp ecx, edi
// 00524451  7d37                 jge 0x52448a
// 00524453  8bf1                 mov esi, ecx
// 00524455  2bf7                 sub esi, edi
// 00524457  8d3476               lea esi, [esi + esi*2]
// 0052445a  8bee                 mov ebp, esi
// 0052445c  0fafee               imul ebp, esi
// 0052445f  03d5                 add edx, ebp
// 00524461  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00524468  2bcb                 sub ecx, ebx
// 0052446a  eb39                 jmp 0x5244a5
// 0052446c  8d7118               lea esi, [ecx + 0x18]
// 0052446f  3bc6                 cmp eax, esi
// 00524471  7e0b                 jle 0x52447e
// 00524473  8bd0                 mov edx, eax
// 00524475  2bd6                 sub edx, esi
// 00524477  03d2                 add edx, edx
// 00524479  0fafd2               imul edx, edx
// 0052447c  ebbe                 jmp 0x52443c
// 0052447e  33d2                 xor edx, edx
// 00524480  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00524484  7fb6                 jg 0x52443c
// 00524486  2bc6                 sub eax, esi
// 00524488  ebb4                 jmp 0x52443e
// 0052448a  3bcb                 cmp ecx, ebx
// 0052448c  7e4a                 jle 0x5244d8
// 0052448e  8bf1                 mov esi, ecx
// 00524490  2bf3                 sub esi, ebx
// 00524492  8d3476               lea esi, [esi + esi*2]
// 00524495  8bee                 mov ebp, esi
// 00524497  0fafee               imul ebp, esi
// 0052449a  03d5                 add edx, ebp
// 0052449c  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 005244a3  2bcf                 sub ecx, edi
// 005244a5  8d0c49               lea ecx, [ecx + ecx*2]
// 005244a8  8bf1                 mov esi, ecx
// 005244aa  0faff1               imul esi, ecx
// 005244ad  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005244b1  03c6                 add eax, esi
// 005244b3  8b742410             mov esi, dword ptr [esp + 0x10]
// 005244b7  0fb60c31             movzx ecx, byte ptr [ecx + esi]
// 005244bb  3bcd                 cmp ecx, ebp
// 005244bd  7d23                 jge 0x5244e2
// 005244bf  8bf1                 mov esi, ecx
// 005244c1  2bf5                 sub esi, ebp
// 005244c3  8bee                 mov ebp, esi
// 005244c5  0fafee               imul ebp, esi
// 005244c8  03d5                 add edx, ebp
// 005244ca  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 005244d1  8d7518               lea esi, [ebp + 0x18]
// 005244d4  2bce                 sub ecx, esi
// 005244d6  eb2b                 jmp 0x524503
// 005244d8  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 005244dc  7fc5                 jg 0x5244a3
// 005244de  2bcb                 sub ecx, ebx
// 005244e0  ebc3                 jmp 0x5244a5
// 005244e2  8d7518               lea esi, [ebp + 0x18]
// 005244e5  3bce                 cmp ecx, esi
// 005244e7  89742420             mov dword ptr [esp + 0x20], esi
// 005244eb  7e4f                 jle 0x52453c
// 005244ed  8bf1                 mov esi, ecx
// 005244ef  2b742420             sub esi, dword ptr [esp + 0x20]
// 005244f3  8bee                 mov ebp, esi
// 005244f5  0fafee               imul ebp, esi
// 005244f8  03d5                 add edx, ebp
// 005244fa  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00524501  2bcd                 sub ecx, ebp
// 00524503  8bf1                 mov esi, ecx
// 00524505  0faff1               imul esi, ecx
// 00524508  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 0052450f  03c6                 add eax, esi
// 00524511  8b742410             mov esi, dword ptr [esp + 0x10]
// 00524515  8954b438             mov dword ptr [esp + esi*4 + 0x38], edx
// 00524519  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052451d  3bc2                 cmp eax, edx
// 0052451f  7d06                 jge 0x524527
// 00524521  8bd0                 mov edx, eax
// 00524523  89542414             mov dword ptr [esp + 0x14], edx
// 00524527  8344241001           add dword ptr [esp + 0x10], 1
// 0052452c  8b742430             mov esi, dword ptr [esp + 0x30]
// 00524530  39742410             cmp dword ptr [esp + 0x10], esi
// 00524534  0f8ce6feffff         jl 0x524420
// 0052453a  eb0e                 jmp 0x52454a
// 0052453c  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00524540  7fbf                 jg 0x524501
// 00524542  2bce                 sub ecx, esi
// 00524544  ebbd                 jmp 0x524503
// 00524546  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052454a  33c0                 xor eax, eax
// 0052454c  33c9                 xor ecx, ecx
// 0052454e  85f6                 test esi, esi
// 00524550  7e1a                 jle 0x52456c
// 00524552  39548c38             cmp dword ptr [esp + ecx*4 + 0x38], edx
// 00524556  7f0d                 jg 0x524565
// 00524558  8bbc2444040000       mov edi, dword ptr [esp + 0x444]
// 0052455f  880c38               mov byte ptr [eax + edi], cl
// 00524562  83c001               add eax, 1
// 00524565  83c101               add ecx, 1
// 00524568  3bce                 cmp ecx, esi
// 0052456a  7ce6                 jl 0x524552
// 0052456c  5f                   pop edi
// 0052456d  5e                   pop esi
// 0052456e  5d                   pop ebp
// 0052456f  5b                   pop ebx
// 00524570  81c428040000         add esp, 0x428
// 00524576  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_nearby_colors)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
