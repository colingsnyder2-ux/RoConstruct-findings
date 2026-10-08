// from server: 100% by auto
// roc 2007-08 00514f70  unit: G3D::_internal::DialogTemplate  size: 930 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00514f70
//
// 00514f70  53                   push ebx
// 00514f71  57                   push edi
// 00514f72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00514f76  33db                 xor ebx, ebx
// 00514f78  3bfb                 cmp edi, ebx
// 00514f7a  0f848f030000         je 0x51530f
// 00514f80  56                   push esi
// 00514f81  8b742414             mov esi, dword ptr [esp + 0x14]
// 00514f85  3bf3                 cmp esi, ebx
// 00514f87  0f8481030000         je 0x51530e
// 00514f8d  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00514f93  55                   push ebp
// 00514f94  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00514f98  23c5                 and eax, ebp
// 00514f9a  a900400000           test eax, 0x4000
// 00514f9f  7463                 je 0x515004
// 00514fa1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00514fa5  83f9ff               cmp ecx, -1
// 00514fa8  7424                 je 0x514fce
// 00514faa  8b4638               mov eax, dword ptr [esi + 0x38]
// 00514fad  3bc3                 cmp eax, ebx
// 00514faf  7453                 je 0x515004
// 00514fb1  8be9                 mov ebp, ecx
// 00514fb3  c1e504               shl ebp, 4
// 00514fb6  8b442804             mov eax, dword ptr [eax + ebp + 4]
// 00514fba  3bc3                 cmp eax, ebx
// 00514fbc  7442                 je 0x515000
// 00514fbe  50                   push eax
// 00514fbf  57                   push edi
// 00514fc0  e80b9d0000           call 0x51ecd0
// 00514fc5  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00514fc8  895c2904             mov dword ptr [ecx + ebp + 4], ebx
// 00514fcc  eb2f                 jmp 0x514ffd
// 00514fce  33ed                 xor ebp, ebp
// 00514fd0  395e30               cmp dword ptr [esi + 0x30], ebx
// 00514fd3  7e18                 jle 0x514fed
// 00514fd5  55                   push ebp
// 00514fd6  6800400000           push 0x4000
// 00514fdb  56                   push esi
// 00514fdc  57                   push edi
// 00514fdd  e88effffff           call 0x514f70
// 00514fe2  83c501               add ebp, 1
// 00514fe5  83c410               add esp, 0x10
// 00514fe8  3b6e30               cmp ebp, dword ptr [esi + 0x30]
// 00514feb  7ce8                 jl 0x514fd5
// 00514fed  8b5638               mov edx, dword ptr [esi + 0x38]
// 00514ff0  52                   push edx
// 00514ff1  57                   push edi
// 00514ff2  e8d99c0000           call 0x51ecd0
// 00514ff7  895e38               mov dword ptr [esi + 0x38], ebx
// 00514ffa  895e30               mov dword ptr [esi + 0x30], ebx
// 00514ffd  83c408               add esp, 8
// 00515000  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00515004  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0051500a  23c5                 and eax, ebp
// 0051500c  a900200000           test eax, 0x2000
// 00515011  7414                 je 0x515027
// 00515013  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00515016  51                   push ecx
// 00515017  57                   push edi
// 00515018  e8b39c0000           call 0x51ecd0
// 0051501d  83c408               add esp, 8
// 00515020  836608ef             and dword ptr [esi + 8], 0xffffffef
// 00515024  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00515027  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0051502d  23c5                 and eax, ebp
// 0051502f  a900010000           test eax, 0x100
// 00515034  7407                 je 0x51503d
// 00515036  816608ffbfffff       and dword ptr [esi + 8], 0xffffbfff
// 0051503d  84c0                 test al, al
// 0051503f  0f8986000000         jns 0x5150cb
// 00515045  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 0051504b  52                   push edx
// 0051504c  57                   push edi
// 0051504d  e87e9c0000           call 0x51ecd0
// 00515052  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00515058  50                   push eax
// 00515059  57                   push edi
// 0051505a  e8719c0000           call 0x51ecd0
// 0051505f  83c410               add esp, 0x10
// 00515062  399eb0000000         cmp dword ptr [esi + 0xb0], ebx
// 00515068  899ea0000000         mov dword ptr [esi + 0xa0], ebx
// 0051506e  899eac000000         mov dword ptr [esi + 0xac], ebx
// 00515074  744e                 je 0x5150c4
// 00515076  33ed                 xor ebp, ebp
// 00515078  389eb5000000         cmp byte ptr [esi + 0xb5], bl
// 0051507e  762a                 jbe 0x5150aa
// 00515080  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 00515086  8b14a9               mov edx, dword ptr [ecx + ebp*4]
// 00515089  52                   push edx
// 0051508a  57                   push edi
// 0051508b  e8409c0000           call 0x51ecd0
// 00515090  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00515096  891ca8               mov dword ptr [eax + ebp*4], ebx
// 00515099  0fb68eb5000000       movzx ecx, byte ptr [esi + 0xb5]
// 005150a0  83c501               add ebp, 1
// 005150a3  83c408               add esp, 8
// 005150a6  3be9                 cmp ebp, ecx
// 005150a8  7cd6                 jl 0x515080
// 005150aa  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 005150b0  52                   push edx
// 005150b1  57                   push edi
// 005150b2  e8199c0000           call 0x51ecd0
// 005150b7  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005150bb  83c408               add esp, 8
// 005150be  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 005150c4  816608fffbffff       and dword ptr [esi + 8], 0xfffffbff
// 005150cb  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 005150d1  23c5                 and eax, ebp
// 005150d3  a810                 test al, 0x10
// 005150d5  7430                 je 0x515107
// 005150d7  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 005150dd  51                   push ecx
// 005150de  57                   push edi
// 005150df  e8ec9b0000           call 0x51ecd0
// 005150e4  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 005150ea  52                   push edx
// 005150eb  57                   push edi
// 005150ec  e8df9b0000           call 0x51ecd0
// 005150f1  83c410               add esp, 0x10
// 005150f4  816608ffefffff       and dword ptr [esi + 8], 0xffffefff
// 005150fb  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00515101  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 00515107  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0051510d  23c5                 and eax, ebp
// 0051510f  a820                 test al, 0x20
// 00515111  0f84a8000000         je 0x5151bf
// 00515117  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051511b  83f9ff               cmp ecx, -1
// 0051511e  744a                 je 0x51516a
// 00515120  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 00515126  3bc3                 cmp eax, ebx
// 00515128  0f8491000000         je 0x5151bf
// 0051512e  8be9                 mov ebp, ecx
// 00515130  c1e504               shl ebp, 4
// 00515133  8b0c28               mov ecx, dword ptr [eax + ebp]
// 00515136  51                   push ecx
// 00515137  57                   push edi
// 00515138  e8939b0000           call 0x51ecd0
// 0051513d  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 00515143  8b442a08             mov eax, dword ptr [edx + ebp + 8]
// 00515147  50                   push eax
// 00515148  57                   push edi
// 00515149  e8829b0000           call 0x51ecd0
// 0051514e  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00515154  891c29               mov dword ptr [ecx + ebp], ebx
// 00515157  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 0051515d  895c2a08             mov dword ptr [edx + ebp + 8], ebx
// 00515161  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00515165  83c410               add esp, 0x10
// 00515168  eb55                 jmp 0x5151bf
// 0051516a  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00515170  3bc3                 cmp eax, ebx
// 00515172  7444                 je 0x5151b8
// 00515174  33ed                 xor ebp, ebp
// 00515176  3bc3                 cmp eax, ebx
// 00515178  7e1e                 jle 0x515198
// 0051517a  8d9b00000000         lea ebx, [ebx]
// 00515180  55                   push ebp
// 00515181  6a20                 push 0x20
// 00515183  56                   push esi
// 00515184  57                   push edi
// 00515185  e8e6fdffff           call 0x514f70
// 0051518a  83c501               add ebp, 1
// 0051518d  83c410               add esp, 0x10
// 00515190  3baed8000000         cmp ebp, dword ptr [esi + 0xd8]
// 00515196  7ce8                 jl 0x515180
// 00515198  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0051519e  50                   push eax
// 0051519f  57                   push edi
// 005151a0  e82b9b0000           call 0x51ecd0
// 005151a5  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005151a9  83c408               add esp, 8
// 005151ac  899ed4000000         mov dword ptr [esi + 0xd4], ebx
// 005151b2  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 005151b8  816608ffdfffff       and dword ptr [esi + 8], 0xffffdfff
// 005151bf  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 005151c5  23cd                 and ecx, ebp
// 005151c7  f7c100020000         test ecx, 0x200
// 005151cd  0f847c000000         je 0x51524f
// 005151d3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005151d7  83f9ff               cmp ecx, -1
// 005151da  7428                 je 0x515204
// 005151dc  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 005151e2  3bc3                 cmp eax, ebx
// 005151e4  7469                 je 0x51524f
// 005151e6  8d2c89               lea ebp, [ecx + ecx*4]
// 005151e9  03ed                 add ebp, ebp
// 005151eb  03ed                 add ebp, ebp
// 005151ed  8b542808             mov edx, dword ptr [eax + ebp + 8]
// 005151f1  52                   push edx
// 005151f2  57                   push edi
// 005151f3  e8d89a0000           call 0x51ecd0
// 005151f8  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 005151fe  895c2808             mov dword ptr [eax + ebp + 8], ebx
// 00515202  eb44                 jmp 0x515248
// 00515204  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0051520a  3bc3                 cmp eax, ebx
// 0051520c  7441                 je 0x51524f
// 0051520e  33ed                 xor ebp, ebp
// 00515210  3bc3                 cmp eax, ebx
// 00515212  7e1b                 jle 0x51522f
// 00515214  55                   push ebp
// 00515215  6800020000           push 0x200
// 0051521a  56                   push esi
// 0051521b  57                   push edi
// 0051521c  e84ffdffff           call 0x514f70
// 00515221  83c501               add ebp, 1
// 00515224  83c410               add esp, 0x10
// 00515227  3baec0000000         cmp ebp, dword ptr [esi + 0xc0]
// 0051522d  7ce5                 jl 0x515214
// 0051522f  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00515235  51                   push ecx
// 00515236  57                   push edi
// 00515237  e8949a0000           call 0x51ecd0
// 0051523c  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 00515242  899ec0000000         mov dword ptr [esi + 0xc0], ebx
// 00515248  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051524c  83c408               add esp, 8
// 0051524f  8b96b8000000         mov edx, dword ptr [esi + 0xb8]
// 00515255  23d5                 and edx, ebp
// 00515257  f6c208               test dl, 8
// 0051525a  7414                 je 0x515270
// 0051525c  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0051525f  50                   push eax
// 00515260  57                   push edi
// 00515261  e86a9a0000           call 0x51ecd0
// 00515266  83c408               add esp, 8
// 00515269  836608bf             and dword ptr [esi + 8], 0xffffffbf
// 0051526d  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00515270  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 00515276  23cd                 and ecx, ebp
// 00515278  f7c100100000         test ecx, 0x1000
// 0051527e  7418                 je 0x515298
// 00515280  8b5610               mov edx, dword ptr [esi + 0x10]
// 00515283  52                   push edx
// 00515284  57                   push edi
// 00515285  e826fcffff           call 0x514eb0
// 0051528a  83c408               add esp, 8
// 0051528d  836608f7             and dword ptr [esi + 8], 0xfffffff7
// 00515291  895e10               mov dword ptr [esi + 0x10], ebx
// 00515294  66895e14             mov word ptr [esi + 0x14], bx
// 00515298  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0051529e  23c5                 and eax, ebp
// 005152a0  a840                 test al, 0x40
// 005152a2  7454                 je 0x5152f8
// 005152a4  399ef8000000         cmp dword ptr [esi + 0xf8], ebx
// 005152aa  7445                 je 0x5152f1
// 005152ac  33ed                 xor ebp, ebp
// 005152ae  395e04               cmp dword ptr [esi + 4], ebx
// 005152b1  7e24                 jle 0x5152d7
// 005152b3  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 005152b9  8b14a9               mov edx, dword ptr [ecx + ebp*4]
// 005152bc  52                   push edx
// 005152bd  57                   push edi
// 005152be  e80d9a0000           call 0x51ecd0
// 005152c3  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 005152c9  891ca8               mov dword ptr [eax + ebp*4], ebx
// 005152cc  83c501               add ebp, 1
// 005152cf  83c408               add esp, 8
// 005152d2  3b6e04               cmp ebp, dword ptr [esi + 4]
// 005152d5  7cdc                 jl 0x5152b3
// 005152d7  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 005152dd  51                   push ecx
// 005152de  57                   push edi
// 005152df  e8ec990000           call 0x51ecd0
// 005152e4  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005152e8  83c408               add esp, 8
// 005152eb  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 005152f1  816608ff7fffff       and dword ptr [esi + 8], 0xffff7fff
// 005152f8  837c2420ff           cmp dword ptr [esp + 0x20], -1
// 005152fd  7406                 je 0x515305
// 005152ff  81e5dfbdffff         and ebp, 0xffffbddf
// 00515305  f7d5                 not ebp
// 00515307  21aeb8000000         and dword ptr [esi + 0xb8], ebp
// 0051530d  5d                   pop ebp
// 0051530e  5e                   pop esi
// 0051530f  5f                   pop edi
// 00515310  5b                   pop ebx
// 00515311  c3                   ret 
// library libpng-1.2.5/png.c (function _png_free_data)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
