// roc 2009-12 00621b30  unit: seg_00620000  size: 450 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00621b30
//
// 00621b30  81ec28040000         sub esp, 0x428
// 00621b36  53                   push ebx
// 00621b37  55                   push ebp
// 00621b38  8bac2438040000       mov ebp, dword ptr [esp + 0x438]
// 00621b3f  56                   push esi
// 00621b40  8b7070               mov esi, dword ptr [eax + 0x70]
// 00621b43  57                   push edi
// 00621b44  8bf9                 mov edi, ecx
// 00621b46  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 00621b4d  8d540918             lea edx, [ecx + ecx + 0x18]
// 00621b51  d1fa                 sar edx, 1
// 00621b53  8954242c             mov dword ptr [esp + 0x2c], edx
// 00621b57  8d5f1c               lea ebx, [edi + 0x1c]
// 00621b5a  8d143b               lea edx, [ebx + edi]
// 00621b5d  d1fa                 sar edx, 1
// 00621b5f  89542418             mov dword ptr [esp + 0x18], edx
// 00621b63  8d542d18             lea edx, [ebp + ebp + 0x18]
// 00621b67  d1fa                 sar edx, 1
// 00621b69  89742430             mov dword ptr [esp + 0x30], esi
// 00621b6d  89542428             mov dword ptr [esp + 0x28], edx
// 00621b71  c7442414ffffff7f     mov dword ptr [esp + 0x14], 0x7fffffff
// 00621b79  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00621b81  85f6                 test esi, esi
// 00621b83  0f8e3c010000         jle 0x621cc5
// 00621b89  8b4074               mov eax, dword ptr [eax + 0x74]
// 00621b8c  8b10                 mov edx, dword ptr [eax]
// 00621b8e  89542434             mov dword ptr [esp + 0x34], edx
// 00621b92  8b5004               mov edx, dword ptr [eax + 4]
// 00621b95  8b4008               mov eax, dword ptr [eax + 8]
// 00621b98  89542424             mov dword ptr [esp + 0x24], edx
// 00621b9c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00621ba0  8b542434             mov edx, dword ptr [esp + 0x34]
// 00621ba4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00621ba8  0fb60402             movzx eax, byte ptr [edx + eax]
// 00621bac  3bc1                 cmp eax, ecx
// 00621bae  7d3c                 jge 0x621bec
// 00621bb0  8bd0                 mov edx, eax
// 00621bb2  2bd1                 sub edx, ecx
// 00621bb4  03d2                 add edx, edx
// 00621bb6  0fafd2               imul edx, edx
// 00621bb9  83c118               add ecx, 0x18
// 00621bbc  2bc1                 sub eax, ecx
// 00621bbe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00621bc2  8b742424             mov esi, dword ptr [esp + 0x24]
// 00621bc6  0fb60c0e             movzx ecx, byte ptr [esi + ecx]
// 00621bca  03c0                 add eax, eax
// 00621bcc  0fafc0               imul eax, eax
// 00621bcf  3bcf                 cmp ecx, edi
// 00621bd1  7d37                 jge 0x621c0a
// 00621bd3  8bf1                 mov esi, ecx
// 00621bd5  2bf7                 sub esi, edi
// 00621bd7  8d3476               lea esi, [esi + esi*2]
// 00621bda  8bee                 mov ebp, esi
// 00621bdc  0fafee               imul ebp, esi
// 00621bdf  03d5                 add edx, ebp
// 00621be1  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00621be8  2bcb                 sub ecx, ebx
// 00621bea  eb39                 jmp 0x621c25
// 00621bec  8d7118               lea esi, [ecx + 0x18]
// 00621bef  3bc6                 cmp eax, esi
// 00621bf1  7e0b                 jle 0x621bfe
// 00621bf3  8bd0                 mov edx, eax
// 00621bf5  2bd6                 sub edx, esi
// 00621bf7  03d2                 add edx, edx
// 00621bf9  0fafd2               imul edx, edx
// 00621bfc  ebbe                 jmp 0x621bbc
// 00621bfe  33d2                 xor edx, edx
// 00621c00  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00621c04  7fb6                 jg 0x621bbc
// 00621c06  2bc6                 sub eax, esi
// 00621c08  ebb4                 jmp 0x621bbe
// 00621c0a  3bcb                 cmp ecx, ebx
// 00621c0c  7e4a                 jle 0x621c58
// 00621c0e  8bf1                 mov esi, ecx
// 00621c10  2bf3                 sub esi, ebx
// 00621c12  8d3476               lea esi, [esi + esi*2]
// 00621c15  8bee                 mov ebp, esi
// 00621c17  0fafee               imul ebp, esi
// 00621c1a  03d5                 add edx, ebp
// 00621c1c  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00621c23  2bcf                 sub ecx, edi
// 00621c25  8d0c49               lea ecx, [ecx + ecx*2]
// 00621c28  8bf1                 mov esi, ecx
// 00621c2a  0faff1               imul esi, ecx
// 00621c2d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00621c31  03c6                 add eax, esi
// 00621c33  8b742410             mov esi, dword ptr [esp + 0x10]
// 00621c37  0fb60c31             movzx ecx, byte ptr [ecx + esi]
// 00621c3b  3bcd                 cmp ecx, ebp
// 00621c3d  7d23                 jge 0x621c62
// 00621c3f  8bf1                 mov esi, ecx
// 00621c41  2bf5                 sub esi, ebp
// 00621c43  8bee                 mov ebp, esi
// 00621c45  0fafee               imul ebp, esi
// 00621c48  03d5                 add edx, ebp
// 00621c4a  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00621c51  8d7518               lea esi, [ebp + 0x18]
// 00621c54  2bce                 sub ecx, esi
// 00621c56  eb2b                 jmp 0x621c83
// 00621c58  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00621c5c  7fc5                 jg 0x621c23
// 00621c5e  2bcb                 sub ecx, ebx
// 00621c60  ebc3                 jmp 0x621c25
// 00621c62  8d7518               lea esi, [ebp + 0x18]
// 00621c65  3bce                 cmp ecx, esi
// 00621c67  89742420             mov dword ptr [esp + 0x20], esi
// 00621c6b  7e4e                 jle 0x621cbb
// 00621c6d  8bf1                 mov esi, ecx
// 00621c6f  2b742420             sub esi, dword ptr [esp + 0x20]
// 00621c73  8bee                 mov ebp, esi
// 00621c75  0fafee               imul ebp, esi
// 00621c78  03d5                 add edx, ebp
// 00621c7a  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00621c81  2bcd                 sub ecx, ebp
// 00621c83  8bf1                 mov esi, ecx
// 00621c85  0faff1               imul esi, ecx
// 00621c88  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 00621c8f  03c6                 add eax, esi
// 00621c91  8b742410             mov esi, dword ptr [esp + 0x10]
// 00621c95  8954b438             mov dword ptr [esp + esi*4 + 0x38], edx
// 00621c99  8b542414             mov edx, dword ptr [esp + 0x14]
// 00621c9d  3bc2                 cmp eax, edx
// 00621c9f  7d06                 jge 0x621ca7
// 00621ca1  8bd0                 mov edx, eax
// 00621ca3  89542414             mov dword ptr [esp + 0x14], edx
// 00621ca7  ff442410             inc dword ptr [esp + 0x10]
// 00621cab  8b742430             mov esi, dword ptr [esp + 0x30]
// 00621caf  39742410             cmp dword ptr [esp + 0x10], esi
// 00621cb3  0f8ce7feffff         jl 0x621ba0
// 00621cb9  eb0e                 jmp 0x621cc9
// 00621cbb  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00621cbf  7fc0                 jg 0x621c81
// 00621cc1  2bce                 sub ecx, esi
// 00621cc3  ebbe                 jmp 0x621c83
// 00621cc5  8b542414             mov edx, dword ptr [esp + 0x14]
// 00621cc9  33c0                 xor eax, eax
// 00621ccb  33c9                 xor ecx, ecx
// 00621ccd  85f6                 test esi, esi
// 00621ccf  7e16                 jle 0x621ce7
// 00621cd1  39548c38             cmp dword ptr [esp + ecx*4 + 0x38], edx
// 00621cd5  7f0b                 jg 0x621ce2
// 00621cd7  8bbc2444040000       mov edi, dword ptr [esp + 0x444]
// 00621cde  880c38               mov byte ptr [eax + edi], cl
// 00621ce1  40                   inc eax
// 00621ce2  41                   inc ecx
// 00621ce3  3bce                 cmp ecx, esi
// 00621ce5  7cea                 jl 0x621cd1
// 00621ce7  5f                   pop edi
// 00621ce8  5e                   pop esi
// 00621ce9  5d                   pop ebp
// 00621cea  5b                   pop ebx
// 00621ceb  81c428040000         add esp, 0x428
// 00621cf1  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_nearby_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
