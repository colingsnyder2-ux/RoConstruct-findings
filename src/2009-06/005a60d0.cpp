// from server: 100% by auto
// roc 2009-06 005a60d0  unit: seg_005a0000  size: 450 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a60d0
//
// 005a60d0  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 005a60d6  83ec08               sub esp, 8
// 005a60d9  53                   push ebx
// 005a60da  bb01000000           mov ebx, 1
// 005a60df  57                   push edi
// 005a60e0  3bc3                 cmp eax, ebx
// 005a60e2  7553                 jne 0x5a6137
// 005a60e4  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 005a60ea  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005a60ed  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 005a60f3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 005a60f6  8996fc000000         mov dword ptr [esi + 0xfc], edx
// 005a60fc  8b790c               mov edi, dword ptr [ecx + 0xc]
// 005a60ff  8b4120               mov eax, dword ptr [ecx + 0x20]
// 005a6102  33d2                 xor edx, edx
// 005a6104  f7f7                 div edi
// 005a6106  895934               mov dword ptr [ecx + 0x34], ebx
// 005a6109  895938               mov dword ptr [ecx + 0x38], ebx
// 005a610c  89593c               mov dword ptr [ecx + 0x3c], ebx
// 005a610f  c7414008000000       mov dword ptr [ecx + 0x40], 8
// 005a6116  895944               mov dword ptr [ecx + 0x44], ebx
// 005a6119  85d2                 test edx, edx
// 005a611b  7502                 jne 0x5a611f
// 005a611d  8bd7                 mov edx, edi
// 005a611f  895148               mov dword ptr [ecx + 0x48], edx
// 005a6122  899e00010000         mov dword ptr [esi + 0x100], ebx
// 005a6128  c7860401000000000000 mov dword ptr [esi + 0x104], 0
// 005a6132  e930010000           jmp 0x5a6267
// 005a6137  33ff                 xor edi, edi
// 005a6139  3bc7                 cmp eax, edi
// 005a613b  7e05                 jle 0x5a6142
// 005a613d  83f804               cmp eax, 4
// 005a6140  7e27                 jle 0x5a6169
// 005a6142  8b06                 mov eax, dword ptr [esi]
// 005a6144  c740141a000000       mov dword ptr [eax + 0x14], 0x1a
// 005a614b  8b0e                 mov ecx, dword ptr [esi]
// 005a614d  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 005a6153  895118               mov dword ptr [ecx + 0x18], edx
// 005a6156  8b06                 mov eax, dword ptr [esi]
// 005a6158  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 005a615f  8b0e                 mov ecx, dword ptr [esi]
// 005a6161  8b11                 mov edx, dword ptr [ecx]
// 005a6163  56                   push esi
// 005a6164  ffd2                 call edx
// 005a6166  83c404               add esp, 4
// 005a6169  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 005a616f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005a6172  03c0                 add eax, eax
// 005a6174  03c0                 add eax, eax
// 005a6176  03c0                 add eax, eax
// 005a6178  50                   push eax
// 005a6179  51                   push ecx
// 005a617a  e8913cfeff           call 0x589e10
// 005a617f  8b96dc000000         mov edx, dword ptr [esi + 0xdc]
// 005a6185  03d2                 add edx, edx
// 005a6187  03d2                 add edx, edx
// 005a6189  03d2                 add edx, edx
// 005a618b  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 005a6191  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a6194  52                   push edx
// 005a6195  50                   push eax
// 005a6196  e8753cfeff           call 0x589e10
// 005a619b  83c410               add esp, 0x10
// 005a619e  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 005a61a4  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 005a61aa  89be00010000         mov dword ptr [esi + 0x100], edi
// 005a61b0  897c2408             mov dword ptr [esp + 8], edi
// 005a61b4  0f8ead000000         jle 0x5a6267
// 005a61ba  8d8ee8000000         lea ecx, [esi + 0xe8]
// 005a61c0  894c240c             mov dword ptr [esp + 0xc], ecx
// 005a61c4  55                   push ebp
// 005a61c5  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a61c9  8b0a                 mov ecx, dword ptr [edx]
// 005a61cb  8b7908               mov edi, dword ptr [ecx + 8]
// 005a61ce  8d04fd00000000       lea eax, [edi*8]
// 005a61d5  8b690c               mov ebp, dword ptr [ecx + 0xc]
// 005a61d8  894140               mov dword ptr [ecx + 0x40], eax
// 005a61db  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005a61de  33d2                 xor edx, edx
// 005a61e0  f7f7                 div edi
// 005a61e2  8bdd                 mov ebx, ebp
// 005a61e4  0fafdf               imul ebx, edi
// 005a61e7  897934               mov dword ptr [ecx + 0x34], edi
// 005a61ea  896938               mov dword ptr [ecx + 0x38], ebp
// 005a61ed  89593c               mov dword ptr [ecx + 0x3c], ebx
// 005a61f0  85d2                 test edx, edx
// 005a61f2  7502                 jne 0x5a61f6
// 005a61f4  8bd7                 mov edx, edi
// 005a61f6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 005a61f9  895144               mov dword ptr [ecx + 0x44], edx
// 005a61fc  33d2                 xor edx, edx
// 005a61fe  f7f5                 div ebp
// 005a6200  85d2                 test edx, edx
// 005a6202  7502                 jne 0x5a6206
// 005a6204  8bd5                 mov edx, ebp
// 005a6206  895148               mov dword ptr [ecx + 0x48], edx
// 005a6209  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 005a620f  8bfb                 mov edi, ebx
// 005a6211  03cf                 add ecx, edi
// 005a6213  83f90a               cmp ecx, 0xa
// 005a6216  7e13                 jle 0x5a622b
// 005a6218  8b16                 mov edx, dword ptr [esi]
// 005a621a  c742140d000000       mov dword ptr [edx + 0x14], 0xd
// 005a6221  8b06                 mov eax, dword ptr [esi]
// 005a6223  8b08                 mov ecx, dword ptr [eax]
// 005a6225  56                   push esi
// 005a6226  ffd1                 call ecx
// 005a6228  83c404               add esp, 4
// 005a622b  85ff                 test edi, edi
// 005a622d  7e1d                 jle 0x5a624c
// 005a622f  90                   nop 
// 005a6230  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 005a6236  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a623a  4f                   dec edi
// 005a623b  89849604010000       mov dword ptr [esi + edx*4 + 0x104], eax
// 005a6242  ff8600010000         inc dword ptr [esi + 0x100]
// 005a6248  85ff                 test edi, edi
// 005a624a  7fe4                 jg 0x5a6230
// 005a624c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a6250  8344241004           add dword ptr [esp + 0x10], 4
// 005a6255  40                   inc eax
// 005a6256  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 005a625c  8944240c             mov dword ptr [esp + 0xc], eax
// 005a6260  0f8c5fffffff         jl 0x5a61c5
// 005a6266  5d                   pop ebp
// 005a6267  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 005a626d  5f                   pop edi
// 005a626e  5b                   pop ebx
// 005a626f  85c9                 test ecx, ecx
// 005a6271  7e1b                 jle 0x5a628e
// 005a6273  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 005a6279  0fafc1               imul eax, ecx
// 005a627c  3dffff0000           cmp eax, 0xffff
// 005a6281  7c05                 jl 0x5a6288
// 005a6283  b8ffff0000           mov eax, 0xffff
// 005a6288  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 005a628e  83c408               add esp, 8
// 005a6291  c3                   ret 
// library jpeg-6b/jcmaster.c (function _per_scan_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
