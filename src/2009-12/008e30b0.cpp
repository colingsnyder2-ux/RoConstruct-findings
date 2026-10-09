// roc 2009-12 008e30b0  unit: CXTShadowWnd  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e30b0
//
// 008e30b0  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 008e30b4  53                   push ebx
// 008e30b5  55                   push ebp
// 008e30b6  56                   push esi
// 008e30b7  57                   push edi
// 008e30b8  0f859d000000         jne 0x8e315b
// 008e30be  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008e30c2  bd03000000           mov ebp, 3
// 008e30c7  896c2414             mov dword ptr [esp + 0x14], ebp
// 008e30cb  eb03                 jmp 0x8e30d0
// 008e30cd  8d4900               lea ecx, [ecx]
// 008e30d0  8b742414             mov esi, dword ptr [esp + 0x14]
// 008e30d4  33ff                 xor edi, edi
// 008e30d6  8b4304               mov eax, dword ptr [ebx + 4]
// 008e30d9  57                   push edi
// 008e30da  55                   push ebp
// 008e30db  50                   push eax
// 008e30dc  ff1518b19800         call dword ptr [0x98b118]
// 008e30e2  8bc8                 mov ecx, eax
// 008e30e4  e8c7fdffff           call 0x8e2eb0
// 008e30e9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008e30ec  50                   push eax
// 008e30ed  57                   push edi
// 008e30ee  55                   push ebp
// 008e30ef  51                   push ecx
// 008e30f0  ff1514b19800         call dword ptr [0x98b114]
// 008e30f6  03742414             add esi, dword ptr [esp + 0x14]
// 008e30fa  47                   inc edi
// 008e30fb  83ff04               cmp edi, 4
// 008e30fe  7cd6                 jl 0x8e30d6
// 008e3100  8344241403           add dword ptr [esp + 0x14], 3
// 008e3105  4d                   dec ebp
// 008e3106  83fdff               cmp ebp, -1
// 008e3109  7fc5                 jg 0x8e30d0
// 008e310b  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e310f  8b420c               mov eax, dword ptr [edx + 0xc]
// 008e3112  33ed                 xor ebp, ebp
// 008e3114  8d753c               lea esi, [ebp + 0x3c]
// 008e3117  bf04000000           mov edi, 4
// 008e311c  3bc7                 cmp eax, edi
// 008e311e  7e2c                 jle 0x8e314c
// 008e3120  8b4304               mov eax, dword ptr [ebx + 4]
// 008e3123  57                   push edi
// 008e3124  55                   push ebp
// 008e3125  50                   push eax
// 008e3126  ff1518b19800         call dword ptr [0x98b118]
// 008e312c  8bc8                 mov ecx, eax
// 008e312e  e87dfdffff           call 0x8e2eb0
// 008e3133  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008e3136  50                   push eax
// 008e3137  57                   push edi
// 008e3138  55                   push ebp
// 008e3139  51                   push ecx
// 008e313a  ff1514b19800         call dword ptr [0x98b114]
// 008e3140  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e3144  8b420c               mov eax, dword ptr [edx + 0xc]
// 008e3147  47                   inc edi
// 008e3148  3bf8                 cmp edi, eax
// 008e314a  7cd4                 jl 0x8e3120
// 008e314c  83ee0f               sub esi, 0xf
// 008e314f  45                   inc ebp
// 008e3150  85f6                 test esi, esi
// 008e3152  7fc3                 jg 0x8e3117
// 008e3154  5f                   pop edi
// 008e3155  5e                   pop esi
// 008e3156  5d                   pop ebp
// 008e3157  5b                   pop ebx
// 008e3158  c20800               ret 8
// 008e315b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008e315f  33ed                 xor ebp, ebp
// 008e3161  c744241403000000     mov dword ptr [esp + 0x14], 3
// 008e3169  8da42400000000       lea esp, [esp]
// 008e3170  8b742414             mov esi, dword ptr [esp + 0x14]
// 008e3174  bb03000000           mov ebx, 3
// 008e3179  8da42400000000       lea esp, [esp]
// 008e3180  8b4704               mov eax, dword ptr [edi + 4]
// 008e3183  53                   push ebx
// 008e3184  55                   push ebp
// 008e3185  50                   push eax
// 008e3186  ff1518b19800         call dword ptr [0x98b118]
// 008e318c  8bc8                 mov ecx, eax
// 008e318e  e81dfdffff           call 0x8e2eb0
// 008e3193  8b4f04               mov ecx, dword ptr [edi + 4]
// 008e3196  50                   push eax
// 008e3197  53                   push ebx
// 008e3198  55                   push ebp
// 008e3199  51                   push ecx
// 008e319a  ff1514b19800         call dword ptr [0x98b114]
// 008e31a0  03742414             add esi, dword ptr [esp + 0x14]
// 008e31a4  4b                   dec ebx
// 008e31a5  83fbff               cmp ebx, -1
// 008e31a8  7fd6                 jg 0x8e3180
// 008e31aa  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e31ae  83c003               add eax, 3
// 008e31b1  45                   inc ebp
// 008e31b2  83f80f               cmp eax, 0xf
// 008e31b5  89442414             mov dword ptr [esp + 0x14], eax
// 008e31b9  7cb5                 jl 0x8e3170
// 008e31bb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008e31bf  8b4508               mov eax, dword ptr [ebp + 8]
// 008e31c2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008e31ca  83c0fc               add eax, -4
// 008e31cd  be3c000000           mov esi, 0x3c
// 008e31d2  bb04000000           mov ebx, 4
// 008e31d7  3bc3                 cmp eax, ebx
// 008e31d9  7e38                 jle 0x8e3213
// 008e31db  eb03                 jmp 0x8e31e0
// 008e31dd  8d4900               lea ecx, [ecx]
// 008e31e0  8b542414             mov edx, dword ptr [esp + 0x14]
// 008e31e4  8b4704               mov eax, dword ptr [edi + 4]
// 008e31e7  52                   push edx
// 008e31e8  53                   push ebx
// 008e31e9  50                   push eax
// 008e31ea  ff1518b19800         call dword ptr [0x98b118]
// 008e31f0  8bc8                 mov ecx, eax
// 008e31f2  e8b9fcffff           call 0x8e2eb0
// 008e31f7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e31fb  8b5704               mov edx, dword ptr [edi + 4]
// 008e31fe  50                   push eax
// 008e31ff  51                   push ecx
// 008e3200  53                   push ebx
// 008e3201  52                   push edx
// 008e3202  ff1514b19800         call dword ptr [0x98b114]
// 008e3208  8b4508               mov eax, dword ptr [ebp + 8]
// 008e320b  43                   inc ebx
// 008e320c  83c0fc               add eax, -4
// 008e320f  3bd8                 cmp ebx, eax
// 008e3211  7ccd                 jl 0x8e31e0
// 008e3213  ff442414             inc dword ptr [esp + 0x14]
// 008e3217  83ee0f               sub esi, 0xf
// 008e321a  85f6                 test esi, esi
// 008e321c  7fb4                 jg 0x8e31d2
// 008e321e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008e3226  c744241403000000     mov dword ptr [esp + 0x14], 3
// 008e322e  8bff                 mov edi, edi
// 008e3230  8b742414             mov esi, dword ptr [esp + 0x14]
// 008e3234  bb03000000           mov ebx, 3
// 008e3239  8da42400000000       lea esp, [esp]
// 008e3240  8b4508               mov eax, dword ptr [ebp + 8]
// 008e3243  2b442418             sub eax, dword ptr [esp + 0x18]
// 008e3247  53                   push ebx
// 008e3248  48                   dec eax
// 008e3249  50                   push eax
// 008e324a  8b4704               mov eax, dword ptr [edi + 4]
// 008e324d  50                   push eax
// 008e324e  ff1518b19800         call dword ptr [0x98b118]
// 008e3254  8bc8                 mov ecx, eax
// 008e3256  e855fcffff           call 0x8e2eb0
// 008e325b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008e325e  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 008e3262  8b5704               mov edx, dword ptr [edi + 4]
// 008e3265  50                   push eax
// 008e3266  53                   push ebx
// 008e3267  49                   dec ecx
// 008e3268  51                   push ecx
// 008e3269  52                   push edx
// 008e326a  ff1514b19800         call dword ptr [0x98b114]
// 008e3270  03742414             add esi, dword ptr [esp + 0x14]
// 008e3274  4b                   dec ebx
// 008e3275  83fbff               cmp ebx, -1
// 008e3278  7fc6                 jg 0x8e3240
// 008e327a  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e327e  ff442418             inc dword ptr [esp + 0x18]
// 008e3282  83c003               add eax, 3
// 008e3285  83f80f               cmp eax, 0xf
// 008e3288  89442414             mov dword ptr [esp + 0x14], eax
// 008e328c  7ca2                 jl 0x8e3230
// 008e328e  5f                   pop edi
// 008e328f  5e                   pop esi
// 008e3290  5d                   pop ebp
// 008e3291  5b                   pop ebx
// 008e3292  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ComputePseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
