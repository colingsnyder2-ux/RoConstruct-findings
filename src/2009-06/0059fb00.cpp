// from server: 100% by auto
// roc 2009-06 0059fb00  unit: seg_00590000  size: 450 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059fb00
//
// 0059fb00  81ec28040000         sub esp, 0x428
// 0059fb06  53                   push ebx
// 0059fb07  55                   push ebp
// 0059fb08  8bac2438040000       mov ebp, dword ptr [esp + 0x438]
// 0059fb0f  56                   push esi
// 0059fb10  8b7070               mov esi, dword ptr [eax + 0x70]
// 0059fb13  57                   push edi
// 0059fb14  8bf9                 mov edi, ecx
// 0059fb16  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 0059fb1d  8d540918             lea edx, [ecx + ecx + 0x18]
// 0059fb21  d1fa                 sar edx, 1
// 0059fb23  8954242c             mov dword ptr [esp + 0x2c], edx
// 0059fb27  8d5f1c               lea ebx, [edi + 0x1c]
// 0059fb2a  8d143b               lea edx, [ebx + edi]
// 0059fb2d  d1fa                 sar edx, 1
// 0059fb2f  89542418             mov dword ptr [esp + 0x18], edx
// 0059fb33  8d542d18             lea edx, [ebp + ebp + 0x18]
// 0059fb37  d1fa                 sar edx, 1
// 0059fb39  89742430             mov dword ptr [esp + 0x30], esi
// 0059fb3d  89542428             mov dword ptr [esp + 0x28], edx
// 0059fb41  c7442414ffffff7f     mov dword ptr [esp + 0x14], 0x7fffffff
// 0059fb49  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059fb51  85f6                 test esi, esi
// 0059fb53  0f8e3c010000         jle 0x59fc95
// 0059fb59  8b4074               mov eax, dword ptr [eax + 0x74]
// 0059fb5c  8b10                 mov edx, dword ptr [eax]
// 0059fb5e  89542434             mov dword ptr [esp + 0x34], edx
// 0059fb62  8b5004               mov edx, dword ptr [eax + 4]
// 0059fb65  8b4008               mov eax, dword ptr [eax + 8]
// 0059fb68  89542424             mov dword ptr [esp + 0x24], edx
// 0059fb6c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0059fb70  8b542434             mov edx, dword ptr [esp + 0x34]
// 0059fb74  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059fb78  0fb60402             movzx eax, byte ptr [edx + eax]
// 0059fb7c  3bc1                 cmp eax, ecx
// 0059fb7e  7d3c                 jge 0x59fbbc
// 0059fb80  8bd0                 mov edx, eax
// 0059fb82  2bd1                 sub edx, ecx
// 0059fb84  03d2                 add edx, edx
// 0059fb86  0fafd2               imul edx, edx
// 0059fb89  83c118               add ecx, 0x18
// 0059fb8c  2bc1                 sub eax, ecx
// 0059fb8e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059fb92  8b742424             mov esi, dword ptr [esp + 0x24]
// 0059fb96  0fb60c0e             movzx ecx, byte ptr [esi + ecx]
// 0059fb9a  03c0                 add eax, eax
// 0059fb9c  0fafc0               imul eax, eax
// 0059fb9f  3bcf                 cmp ecx, edi
// 0059fba1  7d37                 jge 0x59fbda
// 0059fba3  8bf1                 mov esi, ecx
// 0059fba5  2bf7                 sub esi, edi
// 0059fba7  8d3476               lea esi, [esi + esi*2]
// 0059fbaa  8bee                 mov ebp, esi
// 0059fbac  0fafee               imul ebp, esi
// 0059fbaf  03d5                 add edx, ebp
// 0059fbb1  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 0059fbb8  2bcb                 sub ecx, ebx
// 0059fbba  eb39                 jmp 0x59fbf5
// 0059fbbc  8d7118               lea esi, [ecx + 0x18]
// 0059fbbf  3bc6                 cmp eax, esi
// 0059fbc1  7e0b                 jle 0x59fbce
// 0059fbc3  8bd0                 mov edx, eax
// 0059fbc5  2bd6                 sub edx, esi
// 0059fbc7  03d2                 add edx, edx
// 0059fbc9  0fafd2               imul edx, edx
// 0059fbcc  ebbe                 jmp 0x59fb8c
// 0059fbce  33d2                 xor edx, edx
// 0059fbd0  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 0059fbd4  7fb6                 jg 0x59fb8c
// 0059fbd6  2bc6                 sub eax, esi
// 0059fbd8  ebb4                 jmp 0x59fb8e
// 0059fbda  3bcb                 cmp ecx, ebx
// 0059fbdc  7e4a                 jle 0x59fc28
// 0059fbde  8bf1                 mov esi, ecx
// 0059fbe0  2bf3                 sub esi, ebx
// 0059fbe2  8d3476               lea esi, [esi + esi*2]
// 0059fbe5  8bee                 mov ebp, esi
// 0059fbe7  0fafee               imul ebp, esi
// 0059fbea  03d5                 add edx, ebp
// 0059fbec  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 0059fbf3  2bcf                 sub ecx, edi
// 0059fbf5  8d0c49               lea ecx, [ecx + ecx*2]
// 0059fbf8  8bf1                 mov esi, ecx
// 0059fbfa  0faff1               imul esi, ecx
// 0059fbfd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059fc01  03c6                 add eax, esi
// 0059fc03  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059fc07  0fb60c31             movzx ecx, byte ptr [ecx + esi]
// 0059fc0b  3bcd                 cmp ecx, ebp
// 0059fc0d  7d23                 jge 0x59fc32
// 0059fc0f  8bf1                 mov esi, ecx
// 0059fc11  2bf5                 sub esi, ebp
// 0059fc13  8bee                 mov ebp, esi
// 0059fc15  0fafee               imul ebp, esi
// 0059fc18  03d5                 add edx, ebp
// 0059fc1a  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 0059fc21  8d7518               lea esi, [ebp + 0x18]
// 0059fc24  2bce                 sub ecx, esi
// 0059fc26  eb2b                 jmp 0x59fc53
// 0059fc28  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0059fc2c  7fc5                 jg 0x59fbf3
// 0059fc2e  2bcb                 sub ecx, ebx
// 0059fc30  ebc3                 jmp 0x59fbf5
// 0059fc32  8d7518               lea esi, [ebp + 0x18]
// 0059fc35  3bce                 cmp ecx, esi
// 0059fc37  89742420             mov dword ptr [esp + 0x20], esi
// 0059fc3b  7e4e                 jle 0x59fc8b
// 0059fc3d  8bf1                 mov esi, ecx
// 0059fc3f  2b742420             sub esi, dword ptr [esp + 0x20]
// 0059fc43  8bee                 mov ebp, esi
// 0059fc45  0fafee               imul ebp, esi
// 0059fc48  03d5                 add edx, ebp
// 0059fc4a  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 0059fc51  2bcd                 sub ecx, ebp
// 0059fc53  8bf1                 mov esi, ecx
// 0059fc55  0faff1               imul esi, ecx
// 0059fc58  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 0059fc5f  03c6                 add eax, esi
// 0059fc61  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059fc65  8954b438             mov dword ptr [esp + esi*4 + 0x38], edx
// 0059fc69  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059fc6d  3bc2                 cmp eax, edx
// 0059fc6f  7d06                 jge 0x59fc77
// 0059fc71  8bd0                 mov edx, eax
// 0059fc73  89542414             mov dword ptr [esp + 0x14], edx
// 0059fc77  ff442410             inc dword ptr [esp + 0x10]
// 0059fc7b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059fc7f  39742410             cmp dword ptr [esp + 0x10], esi
// 0059fc83  0f8ce7feffff         jl 0x59fb70
// 0059fc89  eb0e                 jmp 0x59fc99
// 0059fc8b  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 0059fc8f  7fc0                 jg 0x59fc51
// 0059fc91  2bce                 sub ecx, esi
// 0059fc93  ebbe                 jmp 0x59fc53
// 0059fc95  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059fc99  33c0                 xor eax, eax
// 0059fc9b  33c9                 xor ecx, ecx
// 0059fc9d  85f6                 test esi, esi
// 0059fc9f  7e16                 jle 0x59fcb7
// 0059fca1  39548c38             cmp dword ptr [esp + ecx*4 + 0x38], edx
// 0059fca5  7f0b                 jg 0x59fcb2
// 0059fca7  8bbc2444040000       mov edi, dword ptr [esp + 0x444]
// 0059fcae  880c38               mov byte ptr [eax + edi], cl
// 0059fcb1  40                   inc eax
// 0059fcb2  41                   inc ecx
// 0059fcb3  3bce                 cmp ecx, esi
// 0059fcb5  7cea                 jl 0x59fca1
// 0059fcb7  5f                   pop edi
// 0059fcb8  5e                   pop esi
// 0059fcb9  5d                   pop ebp
// 0059fcba  5b                   pop ebx
// 0059fcbb  81c428040000         add esp, 0x428
// 0059fcc1  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_nearby_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
