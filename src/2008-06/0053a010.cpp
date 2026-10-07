// roc 2008-06 0053a010  unit: seg_00530000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053a010
//
// 0053a010  53                   push ebx
// 0053a011  56                   push esi
// 0053a012  57                   push edi
// 0053a013  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0053a017  8b4704               mov eax, dword ptr [edi + 4]
// 0053a01a  8b08                 mov ecx, dword ptr [eax]
// 0053a01c  6a30                 push 0x30
// 0053a01e  6a01                 push 1
// 0053a020  57                   push edi
// 0053a021  ffd1                 call ecx
// 0053a023  8bf0                 mov esi, eax
// 0053a025  89b758010000         mov dword ptr [edi + 0x158], esi
// 0053a02b  c70660935300         mov dword ptr [esi], 0x539360
// 0053a031  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 0053a037  33db                 xor ebx, ebx
// 0053a039  83c40c               add esp, 0xc
// 0053a03c  2bc3                 sub eax, ebx
// 0053a03e  7438                 je 0x53a078
// 0053a040  83e801               sub eax, 1
// 0053a043  742a                 je 0x53a06f
// 0053a045  83e801               sub eax, 1
// 0053a048  7415                 je 0x53a05f
// 0053a04a  8b17                 mov edx, dword ptr [edi]
// 0053a04c  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 0053a053  8b07                 mov eax, dword ptr [edi]
// 0053a055  8b08                 mov ecx, dword ptr [eax]
// 0053a057  57                   push edi
// 0053a058  ffd1                 call ecx
// 0053a05a  83c404               add esp, 4
// 0053a05d  eb27                 jmp 0x53a086
// 0053a05f  c74604c0995300       mov dword ptr [esi + 4], 0x5399c0
// 0053a066  c7461ce0e05300       mov dword ptr [esi + 0x1c], 0x53e0e0
// 0053a06d  eb17                 jmp 0x53a086
// 0053a06f  c7460810da5300       mov dword ptr [esi + 8], 0x53da10
// 0053a076  eb07                 jmp 0x53a07f
// 0053a078  c74608f0d65300       mov dword ptr [esi + 8], 0x53d6f0
// 0053a07f  c7460440965300       mov dword ptr [esi + 4], 0x539640
// 0053a086  5f                   pop edi
// 0053a087  895e0c               mov dword ptr [esi + 0xc], ebx
// 0053a08a  895e20               mov dword ptr [esi + 0x20], ebx
// 0053a08d  895e10               mov dword ptr [esi + 0x10], ebx
// 0053a090  895e24               mov dword ptr [esi + 0x24], ebx
// 0053a093  895e14               mov dword ptr [esi + 0x14], ebx
// 0053a096  895e28               mov dword ptr [esi + 0x28], ebx
// 0053a099  895e18               mov dword ptr [esi + 0x18], ebx
// 0053a09c  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0053a09f  5e                   pop esi
// 0053a0a0  5b                   pop ebx
// 0053a0a1  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _jinit_forward_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
