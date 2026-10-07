// roc 2010-06 00583690  unit: seg_00580000  size: 450 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00583690
//
// 00583690  81ec28040000         sub esp, 0x428
// 00583696  53                   push ebx
// 00583697  55                   push ebp
// 00583698  8bac2438040000       mov ebp, dword ptr [esp + 0x438]
// 0058369f  56                   push esi
// 005836a0  8b7070               mov esi, dword ptr [eax + 0x70]
// 005836a3  57                   push edi
// 005836a4  8bf9                 mov edi, ecx
// 005836a6  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 005836ad  8d540918             lea edx, [ecx + ecx + 0x18]
// 005836b1  d1fa                 sar edx, 1
// 005836b3  8954242c             mov dword ptr [esp + 0x2c], edx
// 005836b7  8d5f1c               lea ebx, [edi + 0x1c]
// 005836ba  8d143b               lea edx, [ebx + edi]
// 005836bd  d1fa                 sar edx, 1
// 005836bf  89542418             mov dword ptr [esp + 0x18], edx
// 005836c3  8d542d18             lea edx, [ebp + ebp + 0x18]
// 005836c7  d1fa                 sar edx, 1
// 005836c9  89742430             mov dword ptr [esp + 0x30], esi
// 005836cd  89542428             mov dword ptr [esp + 0x28], edx
// 005836d1  c7442414ffffff7f     mov dword ptr [esp + 0x14], 0x7fffffff
// 005836d9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005836e1  85f6                 test esi, esi
// 005836e3  0f8e3c010000         jle 0x583825
// 005836e9  8b4074               mov eax, dword ptr [eax + 0x74]
// 005836ec  8b10                 mov edx, dword ptr [eax]
// 005836ee  89542434             mov dword ptr [esp + 0x34], edx
// 005836f2  8b5004               mov edx, dword ptr [eax + 4]
// 005836f5  8b4008               mov eax, dword ptr [eax + 8]
// 005836f8  89542424             mov dword ptr [esp + 0x24], edx
// 005836fc  8944241c             mov dword ptr [esp + 0x1c], eax
// 00583700  8b542434             mov edx, dword ptr [esp + 0x34]
// 00583704  8b442410             mov eax, dword ptr [esp + 0x10]
// 00583708  0fb60402             movzx eax, byte ptr [edx + eax]
// 0058370c  3bc1                 cmp eax, ecx
// 0058370e  7d3c                 jge 0x58374c
// 00583710  8bd0                 mov edx, eax
// 00583712  2bd1                 sub edx, ecx
// 00583714  03d2                 add edx, edx
// 00583716  0fafd2               imul edx, edx
// 00583719  83c118               add ecx, 0x18
// 0058371c  2bc1                 sub eax, ecx
// 0058371e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00583722  8b742424             mov esi, dword ptr [esp + 0x24]
// 00583726  0fb60c0e             movzx ecx, byte ptr [esi + ecx]
// 0058372a  03c0                 add eax, eax
// 0058372c  0fafc0               imul eax, eax
// 0058372f  3bcf                 cmp ecx, edi
// 00583731  7d37                 jge 0x58376a
// 00583733  8bf1                 mov esi, ecx
// 00583735  2bf7                 sub esi, edi
// 00583737  8d3476               lea esi, [esi + esi*2]
// 0058373a  8bee                 mov ebp, esi
// 0058373c  0fafee               imul ebp, esi
// 0058373f  03d5                 add edx, ebp
// 00583741  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00583748  2bcb                 sub ecx, ebx
// 0058374a  eb39                 jmp 0x583785
// 0058374c  8d7118               lea esi, [ecx + 0x18]
// 0058374f  3bc6                 cmp eax, esi
// 00583751  7e0b                 jle 0x58375e
// 00583753  8bd0                 mov edx, eax
// 00583755  2bd6                 sub edx, esi
// 00583757  03d2                 add edx, edx
// 00583759  0fafd2               imul edx, edx
// 0058375c  ebbe                 jmp 0x58371c
// 0058375e  33d2                 xor edx, edx
// 00583760  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00583764  7fb6                 jg 0x58371c
// 00583766  2bc6                 sub eax, esi
// 00583768  ebb4                 jmp 0x58371e
// 0058376a  3bcb                 cmp ecx, ebx
// 0058376c  7e4a                 jle 0x5837b8
// 0058376e  8bf1                 mov esi, ecx
// 00583770  2bf3                 sub esi, ebx
// 00583772  8d3476               lea esi, [esi + esi*2]
// 00583775  8bee                 mov ebp, esi
// 00583777  0fafee               imul ebp, esi
// 0058377a  03d5                 add edx, ebp
// 0058377c  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00583783  2bcf                 sub ecx, edi
// 00583785  8d0c49               lea ecx, [ecx + ecx*2]
// 00583788  8bf1                 mov esi, ecx
// 0058378a  0faff1               imul esi, ecx
// 0058378d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00583791  03c6                 add eax, esi
// 00583793  8b742410             mov esi, dword ptr [esp + 0x10]
// 00583797  0fb60c31             movzx ecx, byte ptr [ecx + esi]
// 0058379b  3bcd                 cmp ecx, ebp
// 0058379d  7d23                 jge 0x5837c2
// 0058379f  8bf1                 mov esi, ecx
// 005837a1  2bf5                 sub esi, ebp
// 005837a3  8bee                 mov ebp, esi
// 005837a5  0fafee               imul ebp, esi
// 005837a8  03d5                 add edx, ebp
// 005837aa  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 005837b1  8d7518               lea esi, [ebp + 0x18]
// 005837b4  2bce                 sub ecx, esi
// 005837b6  eb2b                 jmp 0x5837e3
// 005837b8  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 005837bc  7fc5                 jg 0x583783
// 005837be  2bcb                 sub ecx, ebx
// 005837c0  ebc3                 jmp 0x583785
// 005837c2  8d7518               lea esi, [ebp + 0x18]
// 005837c5  3bce                 cmp ecx, esi
// 005837c7  89742420             mov dword ptr [esp + 0x20], esi
// 005837cb  7e4e                 jle 0x58381b
// 005837cd  8bf1                 mov esi, ecx
// 005837cf  2b742420             sub esi, dword ptr [esp + 0x20]
// 005837d3  8bee                 mov ebp, esi
// 005837d5  0fafee               imul ebp, esi
// 005837d8  03d5                 add edx, ebp
// 005837da  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 005837e1  2bcd                 sub ecx, ebp
// 005837e3  8bf1                 mov esi, ecx
// 005837e5  0faff1               imul esi, ecx
// 005837e8  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 005837ef  03c6                 add eax, esi
// 005837f1  8b742410             mov esi, dword ptr [esp + 0x10]
// 005837f5  8954b438             mov dword ptr [esp + esi*4 + 0x38], edx
// 005837f9  8b542414             mov edx, dword ptr [esp + 0x14]
// 005837fd  3bc2                 cmp eax, edx
// 005837ff  7d06                 jge 0x583807
// 00583801  8bd0                 mov edx, eax
// 00583803  89542414             mov dword ptr [esp + 0x14], edx
// 00583807  ff442410             inc dword ptr [esp + 0x10]
// 0058380b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0058380f  39742410             cmp dword ptr [esp + 0x10], esi
// 00583813  0f8ce7feffff         jl 0x583700
// 00583819  eb0e                 jmp 0x583829
// 0058381b  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 0058381f  7fc0                 jg 0x5837e1
// 00583821  2bce                 sub ecx, esi
// 00583823  ebbe                 jmp 0x5837e3
// 00583825  8b542414             mov edx, dword ptr [esp + 0x14]
// 00583829  33c0                 xor eax, eax
// 0058382b  33c9                 xor ecx, ecx
// 0058382d  85f6                 test esi, esi
// 0058382f  7e16                 jle 0x583847
// 00583831  39548c38             cmp dword ptr [esp + ecx*4 + 0x38], edx
// 00583835  7f0b                 jg 0x583842
// 00583837  8bbc2444040000       mov edi, dword ptr [esp + 0x444]
// 0058383e  880c38               mov byte ptr [eax + edi], cl
// 00583841  40                   inc eax
// 00583842  41                   inc ecx
// 00583843  3bce                 cmp ecx, esi
// 00583845  7cea                 jl 0x583831
// 00583847  5f                   pop edi
// 00583848  5e                   pop esi
// 00583849  5d                   pop ebp
// 0058384a  5b                   pop ebx
// 0058384b  81c428040000         add esp, 0x428
// 00583851  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_nearby_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
