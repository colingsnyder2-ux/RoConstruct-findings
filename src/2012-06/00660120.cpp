// roc 2012-06 00660120  unit: seg_00660000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00660120
//
// 00660120  83ec0c               sub esp, 0xc
// 00660123  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00660126  8b4604               mov eax, dword ptr [esi + 4]
// 00660129  8b10                 mov edx, dword ptr [eax]
// 0066012b  53                   push ebx
// 0066012c  55                   push ebp
// 0066012d  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 00660133  03c9                 add ecx, ecx
// 00660135  57                   push edi
// 00660136  8bbe84010000         mov edi, dword ptr [esi + 0x184]
// 0066013c  03c9                 add ecx, ecx
// 0066013e  03c9                 add ecx, ecx
// 00660140  51                   push ecx
// 00660141  6a01                 push 1
// 00660143  56                   push esi
// 00660144  897c2420             mov dword ptr [esp + 0x20], edi
// 00660148  ffd2                 call edx
// 0066014a  894738               mov dword ptr [edi + 0x38], eax
// 0066014d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00660150  8d1488               lea edx, [eax + ecx*4]
// 00660153  89573c               mov dword ptr [edi + 0x3c], edx
// 00660156  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0066015c  33db                 xor ebx, ebx
// 0066015e  83c40c               add esp, 0xc
// 00660161  395e24               cmp dword ptr [esi + 0x24], ebx
// 00660164  7e5b                 jle 0x6601c1
// 00660166  83c504               add ebp, 4
// 00660169  896c240c             mov dword ptr [esp + 0xc], ebp
// 0066016d  8d680c               lea ebp, [eax + 0xc]
// 00660170  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00660173  0faf4500             imul eax, dword ptr [ebp]
// 00660177  99                   cdq 
// 00660178  f7be18010000         idiv dword ptr [esi + 0x118]
// 0066017e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00660182  0faff8               imul edi, eax
// 00660185  8d0cfd00000000       lea ecx, [edi*8]
// 0066018c  51                   push ecx
// 0066018d  89442414             mov dword ptr [esp + 0x14], eax
// 00660191  8b4604               mov eax, dword ptr [esi + 4]
// 00660194  8b10                 mov edx, dword ptr [eax]
// 00660196  6a01                 push 1
// 00660198  56                   push esi
// 00660199  ffd2                 call edx
// 0066019b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066019f  8d0488               lea eax, [eax + ecx*4]
// 006601a2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006601a6  8b5138               mov edx, dword ptr [ecx + 0x38]
// 006601a9  89049a               mov dword ptr [edx + ebx*4], eax
// 006601ac  8b493c               mov ecx, dword ptr [ecx + 0x3c]
// 006601af  8d04b8               lea eax, [eax + edi*4]
// 006601b2  890499               mov dword ptr [ecx + ebx*4], eax
// 006601b5  43                   inc ebx
// 006601b6  83c40c               add esp, 0xc
// 006601b9  83c554               add ebp, 0x54
// 006601bc  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 006601bf  7caf                 jl 0x660170
// 006601c1  5f                   pop edi
// 006601c2  5d                   pop ebp
// 006601c3  5b                   pop ebx
// 006601c4  83c40c               add esp, 0xc
// 006601c7  c3                   ret 
// library jpeg-6b/jdmainct.c (function _alloc_funny_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
