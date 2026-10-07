// roc 2007-08 005296e0  unit: seg_00520000  size: 455 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005296e0
//
// 005296e0  81ec28040000         sub esp, 0x428
// 005296e6  53                   push ebx
// 005296e7  55                   push ebp
// 005296e8  8bac2438040000       mov ebp, dword ptr [esp + 0x438]
// 005296ef  56                   push esi
// 005296f0  8b7070               mov esi, dword ptr [eax + 0x70]
// 005296f3  57                   push edi
// 005296f4  8bf9                 mov edi, ecx
// 005296f6  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 005296fd  8d540918             lea edx, [ecx + ecx + 0x18]
// 00529701  d1fa                 sar edx, 1
// 00529703  8954242c             mov dword ptr [esp + 0x2c], edx
// 00529707  8d5f1c               lea ebx, [edi + 0x1c]
// 0052970a  8d143b               lea edx, [ebx + edi]
// 0052970d  d1fa                 sar edx, 1
// 0052970f  89542418             mov dword ptr [esp + 0x18], edx
// 00529713  8d542d18             lea edx, [ebp + ebp + 0x18]
// 00529717  d1fa                 sar edx, 1
// 00529719  85f6                 test esi, esi
// 0052971b  89742430             mov dword ptr [esp + 0x30], esi
// 0052971f  89542428             mov dword ptr [esp + 0x28], edx
// 00529723  c7442414ffffff7f     mov dword ptr [esp + 0x14], 0x7fffffff
// 0052972b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00529733  0f8e3d010000         jle 0x529876
// 00529739  8b4074               mov eax, dword ptr [eax + 0x74]
// 0052973c  8b10                 mov edx, dword ptr [eax]
// 0052973e  89542434             mov dword ptr [esp + 0x34], edx
// 00529742  8b5004               mov edx, dword ptr [eax + 4]
// 00529745  8b4008               mov eax, dword ptr [eax + 8]
// 00529748  89542424             mov dword ptr [esp + 0x24], edx
// 0052974c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00529750  8b542434             mov edx, dword ptr [esp + 0x34]
// 00529754  8b442410             mov eax, dword ptr [esp + 0x10]
// 00529758  0fb60402             movzx eax, byte ptr [edx + eax]
// 0052975c  3bc1                 cmp eax, ecx
// 0052975e  7d3c                 jge 0x52979c
// 00529760  8bd0                 mov edx, eax
// 00529762  2bd1                 sub edx, ecx
// 00529764  03d2                 add edx, edx
// 00529766  0fafd2               imul edx, edx
// 00529769  83c118               add ecx, 0x18
// 0052976c  2bc1                 sub eax, ecx
// 0052976e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00529772  8b742424             mov esi, dword ptr [esp + 0x24]
// 00529776  0fb60c0e             movzx ecx, byte ptr [esi + ecx]
// 0052977a  03c0                 add eax, eax
// 0052977c  0fafc0               imul eax, eax
// 0052977f  3bcf                 cmp ecx, edi
// 00529781  7d37                 jge 0x5297ba
// 00529783  8bf1                 mov esi, ecx
// 00529785  2bf7                 sub esi, edi
// 00529787  8d3476               lea esi, [esi + esi*2]
// 0052978a  8bee                 mov ebp, esi
// 0052978c  0fafee               imul ebp, esi
// 0052978f  03d5                 add edx, ebp
// 00529791  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00529798  2bcb                 sub ecx, ebx
// 0052979a  eb39                 jmp 0x5297d5
// 0052979c  8d7118               lea esi, [ecx + 0x18]
// 0052979f  3bc6                 cmp eax, esi
// 005297a1  7e0b                 jle 0x5297ae
// 005297a3  8bd0                 mov edx, eax
// 005297a5  2bd6                 sub edx, esi
// 005297a7  03d2                 add edx, edx
// 005297a9  0fafd2               imul edx, edx
// 005297ac  ebbe                 jmp 0x52976c
// 005297ae  33d2                 xor edx, edx
// 005297b0  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 005297b4  7fb6                 jg 0x52976c
// 005297b6  2bc6                 sub eax, esi
// 005297b8  ebb4                 jmp 0x52976e
// 005297ba  3bcb                 cmp ecx, ebx
// 005297bc  7e4a                 jle 0x529808
// 005297be  8bf1                 mov esi, ecx
// 005297c0  2bf3                 sub esi, ebx
// 005297c2  8d3476               lea esi, [esi + esi*2]
// 005297c5  8bee                 mov ebp, esi
// 005297c7  0fafee               imul ebp, esi
// 005297ca  03d5                 add edx, ebp
// 005297cc  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 005297d3  2bcf                 sub ecx, edi
// 005297d5  8d0c49               lea ecx, [ecx + ecx*2]
// 005297d8  8bf1                 mov esi, ecx
// 005297da  0faff1               imul esi, ecx
// 005297dd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005297e1  03c6                 add eax, esi
// 005297e3  8b742410             mov esi, dword ptr [esp + 0x10]
// 005297e7  0fb60c31             movzx ecx, byte ptr [ecx + esi]
// 005297eb  3bcd                 cmp ecx, ebp
// 005297ed  7d23                 jge 0x529812
// 005297ef  8bf1                 mov esi, ecx
// 005297f1  2bf5                 sub esi, ebp
// 005297f3  8bee                 mov ebp, esi
// 005297f5  0fafee               imul ebp, esi
// 005297f8  03d5                 add edx, ebp
// 005297fa  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00529801  8d7518               lea esi, [ebp + 0x18]
// 00529804  2bce                 sub ecx, esi
// 00529806  eb2b                 jmp 0x529833
// 00529808  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0052980c  7fc5                 jg 0x5297d3
// 0052980e  2bcb                 sub ecx, ebx
// 00529810  ebc3                 jmp 0x5297d5
// 00529812  8d7518               lea esi, [ebp + 0x18]
// 00529815  3bce                 cmp ecx, esi
// 00529817  89742420             mov dword ptr [esp + 0x20], esi
// 0052981b  7e4f                 jle 0x52986c
// 0052981d  8bf1                 mov esi, ecx
// 0052981f  2b742420             sub esi, dword ptr [esp + 0x20]
// 00529823  8bee                 mov ebp, esi
// 00529825  0fafee               imul ebp, esi
// 00529828  03d5                 add edx, ebp
// 0052982a  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00529831  2bcd                 sub ecx, ebp
// 00529833  8bf1                 mov esi, ecx
// 00529835  0faff1               imul esi, ecx
// 00529838  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 0052983f  03c6                 add eax, esi
// 00529841  8b742410             mov esi, dword ptr [esp + 0x10]
// 00529845  8954b438             mov dword ptr [esp + esi*4 + 0x38], edx
// 00529849  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052984d  3bc2                 cmp eax, edx
// 0052984f  7d06                 jge 0x529857
// 00529851  8bd0                 mov edx, eax
// 00529853  89542414             mov dword ptr [esp + 0x14], edx
// 00529857  8344241001           add dword ptr [esp + 0x10], 1
// 0052985c  8b742430             mov esi, dword ptr [esp + 0x30]
// 00529860  39742410             cmp dword ptr [esp + 0x10], esi
// 00529864  0f8ce6feffff         jl 0x529750
// 0052986a  eb0e                 jmp 0x52987a
// 0052986c  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00529870  7fbf                 jg 0x529831
// 00529872  2bce                 sub ecx, esi
// 00529874  ebbd                 jmp 0x529833
// 00529876  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052987a  33c0                 xor eax, eax
// 0052987c  33c9                 xor ecx, ecx
// 0052987e  85f6                 test esi, esi
// 00529880  7e1a                 jle 0x52989c
// 00529882  39548c38             cmp dword ptr [esp + ecx*4 + 0x38], edx
// 00529886  7f0d                 jg 0x529895
// 00529888  8bbc2444040000       mov edi, dword ptr [esp + 0x444]
// 0052988f  880c38               mov byte ptr [eax + edi], cl
// 00529892  83c001               add eax, 1
// 00529895  83c101               add ecx, 1
// 00529898  3bce                 cmp ecx, esi
// 0052989a  7ce6                 jl 0x529882
// 0052989c  5f                   pop edi
// 0052989d  5e                   pop esi
// 0052989e  5d                   pop ebp
// 0052989f  5b                   pop ebx
// 005298a0  81c428040000         add esp, 0x428
// 005298a6  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_nearby_colors)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
