// roc 2012-06 00665050  unit: seg_00660000  size: 450 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00665050
//
// 00665050  81ec28040000         sub esp, 0x428
// 00665056  53                   push ebx
// 00665057  55                   push ebp
// 00665058  8bac2438040000       mov ebp, dword ptr [esp + 0x438]
// 0066505f  56                   push esi
// 00665060  8b7070               mov esi, dword ptr [eax + 0x70]
// 00665063  57                   push edi
// 00665064  8bf9                 mov edi, ecx
// 00665066  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 0066506d  8d540918             lea edx, [ecx + ecx + 0x18]
// 00665071  d1fa                 sar edx, 1
// 00665073  8954242c             mov dword ptr [esp + 0x2c], edx
// 00665077  8d5f1c               lea ebx, [edi + 0x1c]
// 0066507a  8d143b               lea edx, [ebx + edi]
// 0066507d  d1fa                 sar edx, 1
// 0066507f  89542418             mov dword ptr [esp + 0x18], edx
// 00665083  8d542d18             lea edx, [ebp + ebp + 0x18]
// 00665087  d1fa                 sar edx, 1
// 00665089  89742430             mov dword ptr [esp + 0x30], esi
// 0066508d  89542428             mov dword ptr [esp + 0x28], edx
// 00665091  c7442414ffffff7f     mov dword ptr [esp + 0x14], 0x7fffffff
// 00665099  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006650a1  85f6                 test esi, esi
// 006650a3  0f8e3c010000         jle 0x6651e5
// 006650a9  8b4074               mov eax, dword ptr [eax + 0x74]
// 006650ac  8b10                 mov edx, dword ptr [eax]
// 006650ae  89542434             mov dword ptr [esp + 0x34], edx
// 006650b2  8b5004               mov edx, dword ptr [eax + 4]
// 006650b5  8b4008               mov eax, dword ptr [eax + 8]
// 006650b8  89542424             mov dword ptr [esp + 0x24], edx
// 006650bc  8944241c             mov dword ptr [esp + 0x1c], eax
// 006650c0  8b542434             mov edx, dword ptr [esp + 0x34]
// 006650c4  8b442410             mov eax, dword ptr [esp + 0x10]
// 006650c8  0fb60402             movzx eax, byte ptr [edx + eax]
// 006650cc  3bc1                 cmp eax, ecx
// 006650ce  7d3c                 jge 0x66510c
// 006650d0  8bd0                 mov edx, eax
// 006650d2  2bd1                 sub edx, ecx
// 006650d4  03d2                 add edx, edx
// 006650d6  0fafd2               imul edx, edx
// 006650d9  83c118               add ecx, 0x18
// 006650dc  2bc1                 sub eax, ecx
// 006650de  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006650e2  8b742424             mov esi, dword ptr [esp + 0x24]
// 006650e6  0fb60c0e             movzx ecx, byte ptr [esi + ecx]
// 006650ea  03c0                 add eax, eax
// 006650ec  0fafc0               imul eax, eax
// 006650ef  3bcf                 cmp ecx, edi
// 006650f1  7d37                 jge 0x66512a
// 006650f3  8bf1                 mov esi, ecx
// 006650f5  2bf7                 sub esi, edi
// 006650f7  8d3476               lea esi, [esi + esi*2]
// 006650fa  8bee                 mov ebp, esi
// 006650fc  0fafee               imul ebp, esi
// 006650ff  03d5                 add edx, ebp
// 00665101  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00665108  2bcb                 sub ecx, ebx
// 0066510a  eb39                 jmp 0x665145
// 0066510c  8d7118               lea esi, [ecx + 0x18]
// 0066510f  3bc6                 cmp eax, esi
// 00665111  7e0b                 jle 0x66511e
// 00665113  8bd0                 mov edx, eax
// 00665115  2bd6                 sub edx, esi
// 00665117  03d2                 add edx, edx
// 00665119  0fafd2               imul edx, edx
// 0066511c  ebbe                 jmp 0x6650dc
// 0066511e  33d2                 xor edx, edx
// 00665120  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00665124  7fb6                 jg 0x6650dc
// 00665126  2bc6                 sub eax, esi
// 00665128  ebb4                 jmp 0x6650de
// 0066512a  3bcb                 cmp ecx, ebx
// 0066512c  7e4a                 jle 0x665178
// 0066512e  8bf1                 mov esi, ecx
// 00665130  2bf3                 sub esi, ebx
// 00665132  8d3476               lea esi, [esi + esi*2]
// 00665135  8bee                 mov ebp, esi
// 00665137  0fafee               imul ebp, esi
// 0066513a  03d5                 add edx, ebp
// 0066513c  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00665143  2bcf                 sub ecx, edi
// 00665145  8d0c49               lea ecx, [ecx + ecx*2]
// 00665148  8bf1                 mov esi, ecx
// 0066514a  0faff1               imul esi, ecx
// 0066514d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00665151  03c6                 add eax, esi
// 00665153  8b742410             mov esi, dword ptr [esp + 0x10]
// 00665157  0fb60c31             movzx ecx, byte ptr [ecx + esi]
// 0066515b  3bcd                 cmp ecx, ebp
// 0066515d  7d23                 jge 0x665182
// 0066515f  8bf1                 mov esi, ecx
// 00665161  2bf5                 sub esi, ebp
// 00665163  8bee                 mov ebp, esi
// 00665165  0fafee               imul ebp, esi
// 00665168  03d5                 add edx, ebp
// 0066516a  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00665171  8d7518               lea esi, [ebp + 0x18]
// 00665174  2bce                 sub ecx, esi
// 00665176  eb2b                 jmp 0x6651a3
// 00665178  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0066517c  7fc5                 jg 0x665143
// 0066517e  2bcb                 sub ecx, ebx
// 00665180  ebc3                 jmp 0x665145
// 00665182  8d7518               lea esi, [ebp + 0x18]
// 00665185  3bce                 cmp ecx, esi
// 00665187  89742420             mov dword ptr [esp + 0x20], esi
// 0066518b  7e4e                 jle 0x6651db
// 0066518d  8bf1                 mov esi, ecx
// 0066518f  2b742420             sub esi, dword ptr [esp + 0x20]
// 00665193  8bee                 mov ebp, esi
// 00665195  0fafee               imul ebp, esi
// 00665198  03d5                 add edx, ebp
// 0066519a  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 006651a1  2bcd                 sub ecx, ebp
// 006651a3  8bf1                 mov esi, ecx
// 006651a5  0faff1               imul esi, ecx
// 006651a8  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 006651af  03c6                 add eax, esi
// 006651b1  8b742410             mov esi, dword ptr [esp + 0x10]
// 006651b5  8954b438             mov dword ptr [esp + esi*4 + 0x38], edx
// 006651b9  8b542414             mov edx, dword ptr [esp + 0x14]
// 006651bd  3bc2                 cmp eax, edx
// 006651bf  7d06                 jge 0x6651c7
// 006651c1  8bd0                 mov edx, eax
// 006651c3  89542414             mov dword ptr [esp + 0x14], edx
// 006651c7  ff442410             inc dword ptr [esp + 0x10]
// 006651cb  8b742430             mov esi, dword ptr [esp + 0x30]
// 006651cf  39742410             cmp dword ptr [esp + 0x10], esi
// 006651d3  0f8ce7feffff         jl 0x6650c0
// 006651d9  eb0e                 jmp 0x6651e9
// 006651db  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 006651df  7fc0                 jg 0x6651a1
// 006651e1  2bce                 sub ecx, esi
// 006651e3  ebbe                 jmp 0x6651a3
// 006651e5  8b542414             mov edx, dword ptr [esp + 0x14]
// 006651e9  33c0                 xor eax, eax
// 006651eb  33c9                 xor ecx, ecx
// 006651ed  85f6                 test esi, esi
// 006651ef  7e16                 jle 0x665207
// 006651f1  39548c38             cmp dword ptr [esp + ecx*4 + 0x38], edx
// 006651f5  7f0b                 jg 0x665202
// 006651f7  8bbc2444040000       mov edi, dword ptr [esp + 0x444]
// 006651fe  880c38               mov byte ptr [eax + edi], cl
// 00665201  40                   inc eax
// 00665202  41                   inc ecx
// 00665203  3bce                 cmp ecx, esi
// 00665205  7cea                 jl 0x6651f1
// 00665207  5f                   pop edi
// 00665208  5e                   pop esi
// 00665209  5d                   pop ebp
// 0066520a  5b                   pop ebx
// 0066520b  81c428040000         add esp, 0x428
// 00665211  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_nearby_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
