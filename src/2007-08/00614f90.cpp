// from server: 100% by auto
// roc 2007-08 00614f90  unit: seg_00610000  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614f90
//
// 00614f90  56                   push esi
// 00614f91  8bf0                 mov esi, eax
// 00614f93  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00614f96  83c085               add eax, -0x7b
// 00614f99  3da3000000           cmp eax, 0xa3
// 00614f9e  57                   push edi
// 00614f9f  0f87ec000000         ja 0x615091
// 00614fa5  0fb680c4506100       movzx eax, byte ptr [eax + 0x6150c4]
// 00614fac  ff2485a0506100       jmp dword ptr [eax*4 + 0x6150a0]
// 00614fb3  83c9ff               or ecx, 0xffffffff
// 00614fb6  c7460800000000       mov dword ptr [esi + 8], 0
// 00614fbd  894e10               mov dword ptr [esi + 0x10], ecx
// 00614fc0  894e14               mov dword ptr [esi + 0x14], ecx
// 00614fc3  c70605000000         mov dword ptr [esi], 5
// 00614fc9  dd4318               fld qword ptr [ebx + 0x18]
// 00614fcc  53                   push ebx
// 00614fcd  dd5e08               fstp qword ptr [esi + 8]
// 00614fd0  e81b3a0000           call 0x6189f0
// 00614fd5  83c404               add esp, 4
// 00614fd8  5f                   pop edi
// 00614fd9  5e                   pop esi
// 00614fda  c3                   ret 
// 00614fdb  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00614fde  8bcb                 mov ecx, ebx
// 00614fe0  e8abebffff           call 0x613b90
// 00614fe5  53                   push ebx
// 00614fe6  e8053a0000           call 0x6189f0
// 00614feb  83c404               add esp, 4
// 00614fee  5f                   pop edi
// 00614fef  5e                   pop esi
// 00614ff0  c3                   ret 
// 00614ff1  c70601000000         mov dword ptr [esi], 1
// 00614ff7  c7460800000000       mov dword ptr [esi + 8], 0
// 00614ffe  eb57                 jmp 0x615057
// 00615000  c70602000000         mov dword ptr [esi], 2
// 00615006  c7460800000000       mov dword ptr [esi + 8], 0
// 0061500d  eb48                 jmp 0x615057
// 0061500f  c70603000000         mov dword ptr [esi], 3
// 00615015  c7460800000000       mov dword ptr [esi + 8], 0
// 0061501c  eb39                 jmp 0x615057
// 0061501e  8b7b30               mov edi, dword ptr [ebx + 0x30]
// 00615021  8b0f                 mov ecx, dword ptr [edi]
// 00615023  80794a00             cmp byte ptr [ecx + 0x4a], 0
// 00615027  750e                 jne 0x615037
// 00615029  680c357c00           push 0x7c350c
// 0061502e  53                   push ebx
// 0061502f  e88c250000           call 0x6175c0
// 00615034  83c408               add esp, 8
// 00615037  8b07                 mov eax, dword ptr [edi]
// 00615039  80604afb             and byte ptr [eax + 0x4a], 0xfb
// 0061503d  6a00                 push 0
// 0061503f  6a01                 push 1
// 00615041  6a00                 push 0
// 00615043  6a25                 push 0x25
// 00615045  57                   push edi
// 00615046  e8353d0100           call 0x628d80
// 0061504b  83c414               add esp, 0x14
// 0061504e  c7060e000000         mov dword ptr [esi], 0xe
// 00615054  894608               mov dword ptr [esi + 8], eax
// 00615057  83c9ff               or ecx, 0xffffffff
// 0061505a  53                   push ebx
// 0061505b  894e14               mov dword ptr [esi + 0x14], ecx
// 0061505e  894e10               mov dword ptr [esi + 0x10], ecx
// 00615061  e88a390000           call 0x6189f0
// 00615066  83c404               add esp, 4
// 00615069  5f                   pop edi
// 0061506a  5e                   pop esi
// 0061506b  c3                   ret 
// 0061506c  5f                   pop edi
// 0061506d  8bc6                 mov eax, esi
// 0061506f  8bcb                 mov ecx, ebx
// 00615071  5e                   pop esi
// 00615072  e939f5ffff           jmp 0x6145b0
// 00615077  53                   push ebx
// 00615078  e873390000           call 0x6189f0
// 0061507d  8b5304               mov edx, dword ptr [ebx + 4]
// 00615080  52                   push edx
// 00615081  6a00                 push 0
// 00615083  56                   push esi
// 00615084  8bc3                 mov eax, ebx
// 00615086  e8d5f8ffff           call 0x614960
// 0061508b  83c410               add esp, 0x10
// 0061508e  5f                   pop edi
// 0061508f  5e                   pop esi
// 00615090  c3                   ret 
// 00615091  8bfe                 mov edi, esi
// 00615093  8bf3                 mov esi, ebx
// 00615095  e806fcffff           call 0x614ca0
// 0061509a  5f                   pop edi
// 0061509b  5e                   pop esi
// 0061509c  c3                   ret 
// 0061509d  8d4900               lea ecx, [ecx]
// 006150a0  6c                   insb byte ptr es:[edi], dx
// 006150a1  50                   push eax
// 006150a2  61                   popal 
// 006150a3  000f                 add byte ptr [edi], cl
// 006150a5  50                   push eax
// 006150a6  61                   popal 
// 006150a7  007750               add byte ptr [edi + 0x50], dh
// 006150aa  61                   popal 
// 006150ab  00f1                 add cl, dh
// 006150ad  4f                   dec edi
// 006150ae  61                   popal 
// 006150af  0000                 add byte ptr [eax], al
// 006150b1  50                   push eax
// 006150b2  61                   popal 
// 006150b3  001e                 add byte ptr [esi], bl
// 006150b5  50                   push eax
// 006150b6  61                   popal 
// 006150b7  00b34f6100db         add byte ptr [ebx - 0x24ff9eb1], dh
// 006150bd  4f                   dec edi
// 006150be  61                   popal 
// 006150bf  009150610000         add byte ptr [ecx + 0x6150], dl
// 006150c5  0808                 or byte ptr [eax], cl
// 006150c7  0808                 or byte ptr [eax], cl
// 006150c9  0808                 or byte ptr [eax], cl
// 006150cb  0808                 or byte ptr [eax], cl
// 006150cd  0808                 or byte ptr [eax], cl
// 006150cf  0808                 or byte ptr [eax], cl
// 006150d1  0808                 or byte ptr [eax], cl
// 006150d3  0808                 or byte ptr [eax], cl
// 006150d5  0808                 or byte ptr [eax], cl
// 006150d7  0808                 or byte ptr [eax], cl
// 006150d9  0808                 or byte ptr [eax], cl
// 006150db  0808                 or byte ptr [eax], cl
// 006150dd  0808                 or byte ptr [eax], cl
// 006150df  0808                 or byte ptr [eax], cl
// 006150e1  0808                 or byte ptr [eax], cl
// 006150e3  0808                 or byte ptr [eax], cl
// 006150e5  0808                 or byte ptr [eax], cl
// 006150e7  0808                 or byte ptr [eax], cl
// 006150e9  0808                 or byte ptr [eax], cl
// 006150eb  0808                 or byte ptr [eax], cl
// 006150ed  0808                 or byte ptr [eax], cl
// 006150ef  0808                 or byte ptr [eax], cl
// 006150f1  0808                 or byte ptr [eax], cl
// 006150f3  0808                 or byte ptr [eax], cl
// 006150f5  0808                 or byte ptr [eax], cl
// 006150f7  0808                 or byte ptr [eax], cl
// 006150f9  0808                 or byte ptr [eax], cl
// 006150fb  0808                 or byte ptr [eax], cl
// 006150fd  0808                 or byte ptr [eax], cl
// 006150ff  0808                 or byte ptr [eax], cl
// 00615101  0808                 or byte ptr [eax], cl
// 00615103  0808                 or byte ptr [eax], cl
// 00615105  0808                 or byte ptr [eax], cl
// 00615107  0808                 or byte ptr [eax], cl
// 00615109  0808                 or byte ptr [eax], cl
// 0061510b  0808                 or byte ptr [eax], cl
// 0061510d  0808                 or byte ptr [eax], cl
// 0061510f  0808                 or byte ptr [eax], cl
// 00615111  0808                 or byte ptr [eax], cl
// 00615113  0808                 or byte ptr [eax], cl
// 00615115  0808                 or byte ptr [eax], cl
// 00615117  0808                 or byte ptr [eax], cl
// 00615119  0808                 or byte ptr [eax], cl
// 0061511b  0808                 or byte ptr [eax], cl
// 0061511d  0808                 or byte ptr [eax], cl
// 0061511f  0808                 or byte ptr [eax], cl
// 00615121  0808                 or byte ptr [eax], cl
// 00615123  0808                 or byte ptr [eax], cl
// 00615125  0808                 or byte ptr [eax], cl
// 00615127  0808                 or byte ptr [eax], cl
// 00615129  0808                 or byte ptr [eax], cl
// 0061512b  0808                 or byte ptr [eax], cl
// 0061512d  0808                 or byte ptr [eax], cl
// 0061512f  0808                 or byte ptr [eax], cl
// 00615131  0808                 or byte ptr [eax], cl
// 00615133  0808                 or byte ptr [eax], cl
// 00615135  0808                 or byte ptr [eax], cl
// 00615137  0808                 or byte ptr [eax], cl
// 00615139  0808                 or byte ptr [eax], cl
// 0061513b  0808                 or byte ptr [eax], cl
// 0061513d  0808                 or byte ptr [eax], cl
// 0061513f  0808                 or byte ptr [eax], cl
// 00615141  0808                 or byte ptr [eax], cl
// 00615143  0808                 or byte ptr [eax], cl
// 00615145  0808                 or byte ptr [eax], cl
// 00615147  0808                 or byte ptr [eax], cl
// 00615149  0808                 or byte ptr [eax], cl
// 0061514b  0808                 or byte ptr [eax], cl
// 0061514d  0808                 or byte ptr [eax], cl
// 0061514f  0801                 or byte ptr [ecx], al
// 00615151  0802                 or byte ptr [edx], al
// 00615153  0808                 or byte ptr [eax], cl
// 00615155  0803                 or byte ptr [ebx], al
// 00615157  0808                 or byte ptr [eax], cl
// 00615159  0808                 or byte ptr [eax], cl
// 0061515b  080408               or byte ptr [eax + ecx], al
// 0061515e  0808                 or byte ptr [eax], cl
// 00615160  0508080808           add eax, 0x8080808
// 00615165  06                   push es
// 00615166  0807                 or byte ptr [edi], al
// library lua-5.1.4/lparser.c (function _simpleexp)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
