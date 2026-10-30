// from server: 100% by auto
// roc 2008-06 00535820  unit: seg_00530000  size: 450 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00535820
//
// 00535820  81ec28040000         sub esp, 0x428
// 00535826  53                   push ebx
// 00535827  55                   push ebp
// 00535828  8bac2438040000       mov ebp, dword ptr [esp + 0x438]
// 0053582f  56                   push esi
// 00535830  8b7070               mov esi, dword ptr [eax + 0x70]
// 00535833  57                   push edi
// 00535834  8bf9                 mov edi, ecx
// 00535836  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 0053583d  8d540918             lea edx, [ecx + ecx + 0x18]
// 00535841  d1fa                 sar edx, 1
// 00535843  8954242c             mov dword ptr [esp + 0x2c], edx
// 00535847  8d5f1c               lea ebx, [edi + 0x1c]
// 0053584a  8d143b               lea edx, [ebx + edi]
// 0053584d  d1fa                 sar edx, 1
// 0053584f  89542418             mov dword ptr [esp + 0x18], edx
// 00535853  8d542d18             lea edx, [ebp + ebp + 0x18]
// 00535857  d1fa                 sar edx, 1
// 00535859  89742430             mov dword ptr [esp + 0x30], esi
// 0053585d  89542428             mov dword ptr [esp + 0x28], edx
// 00535861  c7442414ffffff7f     mov dword ptr [esp + 0x14], 0x7fffffff
// 00535869  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00535871  85f6                 test esi, esi
// 00535873  0f8e3c010000         jle 0x5359b5
// 00535879  8b4074               mov eax, dword ptr [eax + 0x74]
// 0053587c  8b10                 mov edx, dword ptr [eax]
// 0053587e  89542434             mov dword ptr [esp + 0x34], edx
// 00535882  8b5004               mov edx, dword ptr [eax + 4]
// 00535885  8b4008               mov eax, dword ptr [eax + 8]
// 00535888  89542424             mov dword ptr [esp + 0x24], edx
// 0053588c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00535890  8b542434             mov edx, dword ptr [esp + 0x34]
// 00535894  8b442410             mov eax, dword ptr [esp + 0x10]
// 00535898  0fb60402             movzx eax, byte ptr [edx + eax]
// 0053589c  3bc1                 cmp eax, ecx
// 0053589e  7d3c                 jge 0x5358dc
// 005358a0  8bd0                 mov edx, eax
// 005358a2  2bd1                 sub edx, ecx
// 005358a4  03d2                 add edx, edx
// 005358a6  0fafd2               imul edx, edx
// 005358a9  83c118               add ecx, 0x18
// 005358ac  2bc1                 sub eax, ecx
// 005358ae  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005358b2  8b742424             mov esi, dword ptr [esp + 0x24]
// 005358b6  0fb60c0e             movzx ecx, byte ptr [esi + ecx]
// 005358ba  03c0                 add eax, eax
// 005358bc  0fafc0               imul eax, eax
// 005358bf  3bcf                 cmp ecx, edi
// 005358c1  7d37                 jge 0x5358fa
// 005358c3  8bf1                 mov esi, ecx
// 005358c5  2bf7                 sub esi, edi
// 005358c7  8d3476               lea esi, [esi + esi*2]
// 005358ca  8bee                 mov ebp, esi
// 005358cc  0fafee               imul ebp, esi
// 005358cf  03d5                 add edx, ebp
// 005358d1  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 005358d8  2bcb                 sub ecx, ebx
// 005358da  eb39                 jmp 0x535915
// 005358dc  8d7118               lea esi, [ecx + 0x18]
// 005358df  3bc6                 cmp eax, esi
// 005358e1  7e0b                 jle 0x5358ee
// 005358e3  8bd0                 mov edx, eax
// 005358e5  2bd6                 sub edx, esi
// 005358e7  03d2                 add edx, edx
// 005358e9  0fafd2               imul edx, edx
// 005358ec  ebbe                 jmp 0x5358ac
// 005358ee  33d2                 xor edx, edx
// 005358f0  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 005358f4  7fb6                 jg 0x5358ac
// 005358f6  2bc6                 sub eax, esi
// 005358f8  ebb4                 jmp 0x5358ae
// 005358fa  3bcb                 cmp ecx, ebx
// 005358fc  7e4a                 jle 0x535948
// 005358fe  8bf1                 mov esi, ecx
// 00535900  2bf3                 sub esi, ebx
// 00535902  8d3476               lea esi, [esi + esi*2]
// 00535905  8bee                 mov ebp, esi
// 00535907  0fafee               imul ebp, esi
// 0053590a  03d5                 add edx, ebp
// 0053590c  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00535913  2bcf                 sub ecx, edi
// 00535915  8d0c49               lea ecx, [ecx + ecx*2]
// 00535918  8bf1                 mov esi, ecx
// 0053591a  0faff1               imul esi, ecx
// 0053591d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00535921  03c6                 add eax, esi
// 00535923  8b742410             mov esi, dword ptr [esp + 0x10]
// 00535927  0fb60c31             movzx ecx, byte ptr [ecx + esi]
// 0053592b  3bcd                 cmp ecx, ebp
// 0053592d  7d23                 jge 0x535952
// 0053592f  8bf1                 mov esi, ecx
// 00535931  2bf5                 sub esi, ebp
// 00535933  8bee                 mov ebp, esi
// 00535935  0fafee               imul ebp, esi
// 00535938  03d5                 add edx, ebp
// 0053593a  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00535941  8d7518               lea esi, [ebp + 0x18]
// 00535944  2bce                 sub ecx, esi
// 00535946  eb2b                 jmp 0x535973
// 00535948  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0053594c  7fc5                 jg 0x535913
// 0053594e  2bcb                 sub ecx, ebx
// 00535950  ebc3                 jmp 0x535915
// 00535952  8d7518               lea esi, [ebp + 0x18]
// 00535955  3bce                 cmp ecx, esi
// 00535957  89742420             mov dword ptr [esp + 0x20], esi
// 0053595b  7e4e                 jle 0x5359ab
// 0053595d  8bf1                 mov esi, ecx
// 0053595f  2b742420             sub esi, dword ptr [esp + 0x20]
// 00535963  8bee                 mov ebp, esi
// 00535965  0fafee               imul ebp, esi
// 00535968  03d5                 add edx, ebp
// 0053596a  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00535971  2bcd                 sub ecx, ebp
// 00535973  8bf1                 mov esi, ecx
// 00535975  0faff1               imul esi, ecx
// 00535978  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 0053597f  03c6                 add eax, esi
// 00535981  8b742410             mov esi, dword ptr [esp + 0x10]
// 00535985  8954b438             mov dword ptr [esp + esi*4 + 0x38], edx
// 00535989  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053598d  3bc2                 cmp eax, edx
// 0053598f  7d06                 jge 0x535997
// 00535991  8bd0                 mov edx, eax
// 00535993  89542414             mov dword ptr [esp + 0x14], edx
// 00535997  ff442410             inc dword ptr [esp + 0x10]
// 0053599b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0053599f  39742410             cmp dword ptr [esp + 0x10], esi
// 005359a3  0f8ce7feffff         jl 0x535890
// 005359a9  eb0e                 jmp 0x5359b9
// 005359ab  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 005359af  7fc0                 jg 0x535971
// 005359b1  2bce                 sub ecx, esi
// 005359b3  ebbe                 jmp 0x535973
// 005359b5  8b542414             mov edx, dword ptr [esp + 0x14]
// 005359b9  33c0                 xor eax, eax
// 005359bb  33c9                 xor ecx, ecx
// 005359bd  85f6                 test esi, esi
// 005359bf  7e16                 jle 0x5359d7
// 005359c1  39548c38             cmp dword ptr [esp + ecx*4 + 0x38], edx
// 005359c5  7f0b                 jg 0x5359d2
// 005359c7  8bbc2444040000       mov edi, dword ptr [esp + 0x444]
// 005359ce  880c38               mov byte ptr [eax + edi], cl
// 005359d1  40                   inc eax
// 005359d2  41                   inc ecx
// 005359d3  3bce                 cmp ecx, esi
// 005359d5  7cea                 jl 0x5359c1
// 005359d7  5f                   pop edi
// 005359d8  5e                   pop esi
// 005359d9  5d                   pop ebp
// 005359da  5b                   pop ebx
// 005359db  81c428040000         add esp, 0x428
// 005359e1  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_nearby_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
