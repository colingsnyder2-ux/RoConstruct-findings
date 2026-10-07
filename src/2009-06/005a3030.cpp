// roc 2009-06 005a3030  unit: seg_005a0000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a3030
//
// 005a3030  56                   push esi
// 005a3031  57                   push edi
// 005a3032  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a3036  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005a3039  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 005a303f  8b11                 mov edx, dword ptr [ecx]
// 005a3041  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 005a3047  895610               mov dword ptr [esi + 0x10], edx
// 005a304a  8944240c             mov dword ptr [esp + 0xc], eax
// 005a304e  8b4718               mov eax, dword ptr [edi + 0x18]
// 005a3051  8b4804               mov ecx, dword ptr [eax + 4]
// 005a3054  894e14               mov dword ptr [esi + 0x14], ecx
// 005a3057  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 005a305e  7414                 je 0x5a3074
// 005a3060  837e4400             cmp dword ptr [esi + 0x44], 0
// 005a3064  750e                 jne 0x5a3074
// 005a3066  8b5648               mov edx, dword ptr [esi + 0x48]
// 005a3069  52                   push edx
// 005a306a  8bc6                 mov eax, esi
// 005a306c  e8cffbffff           call 0x5a2c40
// 005a3071  83c404               add esp, 4
// 005a3074  53                   push ebx
// 005a3075  33db                 xor ebx, ebx
// 005a3077  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 005a307d  7e2c                 jle 0x5a30ab
// 005a307f  55                   push ebp
// 005a3080  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005a3084  8b449d00             mov eax, dword ptr [ebp + ebx*4]
// 005a3088  668b10               mov dx, word ptr [eax]
// 005a308b  668b4c2414           mov cx, word ptr [esp + 0x14]
// 005a3090  66d3fa               sar dx, cl
// 005a3093  6a01                 push 1
// 005a3095  0fbfc2               movsx eax, dx
// 005a3098  50                   push eax
// 005a3099  e892f9ffff           call 0x5a2a30
// 005a309e  43                   inc ebx
// 005a309f  83c408               add esp, 8
// 005a30a2  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 005a30a8  7cda                 jl 0x5a3084
// 005a30aa  5d                   pop ebp
// 005a30ab  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005a30ae  8b5610               mov edx, dword ptr [esi + 0x10]
// 005a30b1  8911                 mov dword ptr [ecx], edx
// 005a30b3  8b4718               mov eax, dword ptr [edi + 0x18]
// 005a30b6  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005a30b9  894804               mov dword ptr [eax + 4], ecx
// 005a30bc  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 005a30c2  5b                   pop ebx
// 005a30c3  85ff                 test edi, edi
// 005a30c5  7416                 je 0x5a30dd
// 005a30c7  837e4400             cmp dword ptr [esi + 0x44], 0
// 005a30cb  750d                 jne 0x5a30da
// 005a30cd  8b5648               mov edx, dword ptr [esi + 0x48]
// 005a30d0  42                   inc edx
// 005a30d1  83e207               and edx, 7
// 005a30d4  897e44               mov dword ptr [esi + 0x44], edi
// 005a30d7  895648               mov dword ptr [esi + 0x48], edx
// 005a30da  ff4e44               dec dword ptr [esi + 0x44]
// 005a30dd  5f                   pop edi
// 005a30de  b001                 mov al, 1
// 005a30e0  5e                   pop esi
// 005a30e1  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
