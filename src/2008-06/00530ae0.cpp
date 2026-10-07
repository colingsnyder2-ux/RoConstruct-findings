// roc 2008-06 00530ae0  unit: seg_00530000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530ae0
//
// 00530ae0  83ec10               sub esp, 0x10
// 00530ae3  53                   push ebx
// 00530ae4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00530ae8  8b8318010000         mov eax, dword ptr [ebx + 0x118]
// 00530aee  55                   push ebp
// 00530aef  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 00530af5  56                   push esi
// 00530af6  33f6                 xor esi, esi
// 00530af8  397324               cmp dword ptr [ebx + 0x24], esi
// 00530afb  57                   push edi
// 00530afc  8bbb84010000         mov edi, dword ptr [ebx + 0x184]
// 00530b02  897c2418             mov dword ptr [esp + 0x18], edi
// 00530b06  8944241c             mov dword ptr [esp + 0x1c], eax
// 00530b0a  89742410             mov dword ptr [esp + 0x10], esi
// 00530b0e  0f8e97000000         jle 0x530bab
// 00530b14  83c50c               add ebp, 0xc
// 00530b17  896c2414             mov dword ptr [esp + 0x14], ebp
// 00530b1b  eb07                 jmp 0x530b24
// 00530b1d  8d4900               lea ecx, [ecx]
// 00530b20  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00530b24  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00530b27  0faf4500             imul eax, dword ptr [ebp]
// 00530b2b  99                   cdq 
// 00530b2c  f7bb18010000         idiv dword ptr [ebx + 0x118]
// 00530b32  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00530b35  8b573c               mov edx, dword ptr [edi + 0x3c]
// 00530b38  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00530b3b  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 00530b3e  85c0                 test eax, eax
// 00530b40  7e54                 jle 0x530b96
// 00530b42  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00530b46  8d5602               lea edx, [esi + 2]
// 00530b49  0fafd0               imul edx, eax
// 00530b4c  46                   inc esi
// 00530b4d  0faff0               imul esi, eax
// 00530b50  8d1c97               lea ebx, [edi + edx*4]
// 00530b53  8d148500000000       lea edx, [eax*4]
// 00530b5a  8bea                 mov ebp, edx
// 00530b5c  8bd7                 mov edx, edi
// 00530b5e  2bd5                 sub edx, ebp
// 00530b60  8d34b7               lea esi, [edi + esi*4]
// 00530b63  2bcf                 sub ecx, edi
// 00530b65  8b2c31               mov ebp, dword ptr [ecx + esi]
// 00530b68  892c11               mov dword ptr [ecx + edx], ebp
// 00530b6b  8b2e                 mov ebp, dword ptr [esi]
// 00530b6d  892a                 mov dword ptr [edx], ebp
// 00530b6f  8b2c39               mov ebp, dword ptr [ecx + edi]
// 00530b72  892c19               mov dword ptr [ecx + ebx], ebp
// 00530b75  8b2f                 mov ebp, dword ptr [edi]
// 00530b77  892b                 mov dword ptr [ebx], ebp
// 00530b79  83c604               add esi, 4
// 00530b7c  83c204               add edx, 4
// 00530b7f  83c704               add edi, 4
// 00530b82  83c304               add ebx, 4
// 00530b85  83e801               sub eax, 1
// 00530b88  75db                 jne 0x530b65
// 00530b8a  8b742410             mov esi, dword ptr [esp + 0x10]
// 00530b8e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00530b92  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00530b96  46                   inc esi
// 00530b97  83c554               add ebp, 0x54
// 00530b9a  3b7324               cmp esi, dword ptr [ebx + 0x24]
// 00530b9d  89742410             mov dword ptr [esp + 0x10], esi
// 00530ba1  896c2414             mov dword ptr [esp + 0x14], ebp
// 00530ba5  0f8c75ffffff         jl 0x530b20
// 00530bab  5f                   pop edi
// 00530bac  5e                   pop esi
// 00530bad  5d                   pop ebp
// 00530bae  5b                   pop ebx
// 00530baf  83c410               add esp, 0x10
// 00530bb2  c3                   ret 
// library jpeg-6b/jdmainct.c (function _set_wraparound_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
