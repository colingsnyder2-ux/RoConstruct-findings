// roc 2007-03 0051f600  unit: seg_00510000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051f600
//
// 0051f600  51                   push ecx
// 0051f601  53                   push ebx
// 0051f602  55                   push ebp
// 0051f603  56                   push esi
// 0051f604  8b742414             mov esi, dword ptr [esp + 0x14]
// 0051f608  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0051f60e  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 0051f614  33ed                 xor ebp, ebp
// 0051f616  396e24               cmp dword ptr [esi + 0x24], ebp
// 0051f619  8944240c             mov dword ptr [esp + 0xc], eax
// 0051f61d  7e7e                 jle 0x51f69d
// 0051f61f  57                   push edi
// 0051f620  83c30c               add ebx, 0xc
// 0051f623  eb02                 jmp 0x51f627
// 0051f625  8bf1                 mov esi, ecx
// 0051f627  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 0051f62a  0faf0b               imul ecx, dword ptr [ebx]
// 0051f62d  8bc1                 mov eax, ecx
// 0051f62f  99                   cdq 
// 0051f630  f7be18010000         idiv dword ptr [esi + 0x118]
// 0051f636  33d2                 xor edx, edx
// 0051f638  8bf8                 mov edi, eax
// 0051f63a  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0051f63d  f7f1                 div ecx
// 0051f63f  8bf2                 mov esi, edx
// 0051f641  85f6                 test esi, esi
// 0051f643  7502                 jne 0x51f647
// 0051f645  8bf1                 mov esi, ecx
// 0051f647  85ed                 test ebp, ebp
// 0051f649  7514                 jne 0x51f65f
// 0051f64b  8d46ff               lea eax, [esi - 1]
// 0051f64e  99                   cdq 
// 0051f64f  f7ff                 idiv edi
// 0051f651  8bc8                 mov ecx, eax
// 0051f653  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051f657  83c101               add ecx, 1
// 0051f65a  894848               mov dword ptr [eax + 0x48], ecx
// 0051f65d  eb04                 jmp 0x51f663
// 0051f65f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051f663  8b5040               mov edx, dword ptr [eax + 0x40]
// 0051f666  8b449038             mov eax, dword ptr [eax + edx*4 + 0x38]
// 0051f66a  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 0051f66d  8d143f               lea edx, [edi + edi]
// 0051f670  85d2                 test edx, edx
// 0051f672  7e19                 jle 0x51f68d
// 0051f674  8d0cb0               lea ecx, [eax + esi*4]
// 0051f677  8bc1                 mov eax, ecx
// 0051f679  8da42400000000       lea esp, [esp]
// 0051f680  8b71fc               mov esi, dword ptr [ecx - 4]
// 0051f683  8930                 mov dword ptr [eax], esi
// 0051f685  83c004               add eax, 4
// 0051f688  83ea01               sub edx, 1
// 0051f68b  75f3                 jne 0x51f680
// 0051f68d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051f691  83c501               add ebp, 1
// 0051f694  83c354               add ebx, 0x54
// 0051f697  3b6924               cmp ebp, dword ptr [ecx + 0x24]
// 0051f69a  7c89                 jl 0x51f625
// 0051f69c  5f                   pop edi
// 0051f69d  5e                   pop esi
// 0051f69e  5d                   pop ebp
// 0051f69f  5b                   pop ebx
// 0051f6a0  59                   pop ecx
// 0051f6a1  c3                   ret 
// library jpeg-6b/jdmainct.c (function _set_bottom_pointers)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
