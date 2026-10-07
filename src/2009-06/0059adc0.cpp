// roc 2009-06 0059adc0  unit: seg_00590000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059adc0
//
// 0059adc0  83ec10               sub esp, 0x10
// 0059adc3  53                   push ebx
// 0059adc4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0059adc8  8b8318010000         mov eax, dword ptr [ebx + 0x118]
// 0059adce  55                   push ebp
// 0059adcf  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 0059add5  56                   push esi
// 0059add6  33f6                 xor esi, esi
// 0059add8  397324               cmp dword ptr [ebx + 0x24], esi
// 0059addb  57                   push edi
// 0059addc  8bbb84010000         mov edi, dword ptr [ebx + 0x184]
// 0059ade2  897c2418             mov dword ptr [esp + 0x18], edi
// 0059ade6  8944241c             mov dword ptr [esp + 0x1c], eax
// 0059adea  89742410             mov dword ptr [esp + 0x10], esi
// 0059adee  0f8e97000000         jle 0x59ae8b
// 0059adf4  83c50c               add ebp, 0xc
// 0059adf7  896c2414             mov dword ptr [esp + 0x14], ebp
// 0059adfb  eb07                 jmp 0x59ae04
// 0059adfd  8d4900               lea ecx, [ecx]
// 0059ae00  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0059ae04  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0059ae07  0faf4500             imul eax, dword ptr [ebp]
// 0059ae0b  99                   cdq 
// 0059ae0c  f7bb18010000         idiv dword ptr [ebx + 0x118]
// 0059ae12  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0059ae15  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0059ae18  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0059ae1b  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 0059ae1e  85c0                 test eax, eax
// 0059ae20  7e54                 jle 0x59ae76
// 0059ae22  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0059ae26  8d5602               lea edx, [esi + 2]
// 0059ae29  0fafd0               imul edx, eax
// 0059ae2c  46                   inc esi
// 0059ae2d  0faff0               imul esi, eax
// 0059ae30  8d1c97               lea ebx, [edi + edx*4]
// 0059ae33  8d148500000000       lea edx, [eax*4]
// 0059ae3a  8bea                 mov ebp, edx
// 0059ae3c  8bd7                 mov edx, edi
// 0059ae3e  2bd5                 sub edx, ebp
// 0059ae40  8d34b7               lea esi, [edi + esi*4]
// 0059ae43  2bcf                 sub ecx, edi
// 0059ae45  8b2c31               mov ebp, dword ptr [ecx + esi]
// 0059ae48  892c11               mov dword ptr [ecx + edx], ebp
// 0059ae4b  8b2e                 mov ebp, dword ptr [esi]
// 0059ae4d  892a                 mov dword ptr [edx], ebp
// 0059ae4f  8b2c39               mov ebp, dword ptr [ecx + edi]
// 0059ae52  892c19               mov dword ptr [ecx + ebx], ebp
// 0059ae55  8b2f                 mov ebp, dword ptr [edi]
// 0059ae57  892b                 mov dword ptr [ebx], ebp
// 0059ae59  83c604               add esi, 4
// 0059ae5c  83c204               add edx, 4
// 0059ae5f  83c704               add edi, 4
// 0059ae62  83c304               add ebx, 4
// 0059ae65  83e801               sub eax, 1
// 0059ae68  75db                 jne 0x59ae45
// 0059ae6a  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059ae6e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0059ae72  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0059ae76  46                   inc esi
// 0059ae77  83c554               add ebp, 0x54
// 0059ae7a  3b7324               cmp esi, dword ptr [ebx + 0x24]
// 0059ae7d  89742410             mov dword ptr [esp + 0x10], esi
// 0059ae81  896c2414             mov dword ptr [esp + 0x14], ebp
// 0059ae85  0f8c75ffffff         jl 0x59ae00
// 0059ae8b  5f                   pop edi
// 0059ae8c  5e                   pop esi
// 0059ae8d  5d                   pop ebp
// 0059ae8e  5b                   pop ebx
// 0059ae8f  83c410               add esp, 0x10
// 0059ae92  c3                   ret 
// library jpeg-6b/jdmainct.c (function _set_wraparound_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
