// roc 2008-06 0051ddd0  unit: seg_00510000  size: 915 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051ddd0
//
// 0051ddd0  53                   push ebx
// 0051ddd1  57                   push edi
// 0051ddd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0051ddd6  33db                 xor ebx, ebx
// 0051ddd8  3bfb                 cmp edi, ebx
// 0051ddda  0f8480030000         je 0x51e160
// 0051dde0  56                   push esi
// 0051dde1  8b742414             mov esi, dword ptr [esp + 0x14]
// 0051dde5  3bf3                 cmp esi, ebx
// 0051dde7  0f8472030000         je 0x51e15f
// 0051dded  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0051ddf3  55                   push ebp
// 0051ddf4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0051ddf8  23c5                 and eax, ebp
// 0051ddfa  a900400000           test eax, 0x4000
// 0051ddff  7461                 je 0x51de62
// 0051de01  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051de05  83f9ff               cmp ecx, -1
// 0051de08  7424                 je 0x51de2e
// 0051de0a  8b4638               mov eax, dword ptr [esi + 0x38]
// 0051de0d  3bc3                 cmp eax, ebx
// 0051de0f  7451                 je 0x51de62
// 0051de11  8be9                 mov ebp, ecx
// 0051de13  c1e504               shl ebp, 4
// 0051de16  8b442804             mov eax, dword ptr [eax + ebp + 4]
// 0051de1a  3bc3                 cmp eax, ebx
// 0051de1c  7440                 je 0x51de5e
// 0051de1e  50                   push eax
// 0051de1f  57                   push edi
// 0051de20  e8dbc60000           call 0x52a500
// 0051de25  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0051de28  895c2904             mov dword ptr [ecx + ebp + 4], ebx
// 0051de2c  eb2d                 jmp 0x51de5b
// 0051de2e  33ed                 xor ebp, ebp
// 0051de30  395e30               cmp dword ptr [esi + 0x30], ebx
// 0051de33  7e16                 jle 0x51de4b
// 0051de35  55                   push ebp
// 0051de36  6800400000           push 0x4000
// 0051de3b  56                   push esi
// 0051de3c  57                   push edi
// 0051de3d  e88effffff           call 0x51ddd0
// 0051de42  45                   inc ebp
// 0051de43  83c410               add esp, 0x10
// 0051de46  3b6e30               cmp ebp, dword ptr [esi + 0x30]
// 0051de49  7cea                 jl 0x51de35
// 0051de4b  8b5638               mov edx, dword ptr [esi + 0x38]
// 0051de4e  52                   push edx
// 0051de4f  57                   push edi
// 0051de50  e8abc60000           call 0x52a500
// 0051de55  895e38               mov dword ptr [esi + 0x38], ebx
// 0051de58  895e30               mov dword ptr [esi + 0x30], ebx
// 0051de5b  83c408               add esp, 8
// 0051de5e  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0051de62  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0051de68  23c5                 and eax, ebp
// 0051de6a  a900200000           test eax, 0x2000
// 0051de6f  7414                 je 0x51de85
// 0051de71  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0051de74  51                   push ecx
// 0051de75  57                   push edi
// 0051de76  e885c60000           call 0x52a500
// 0051de7b  83c408               add esp, 8
// 0051de7e  836608ef             and dword ptr [esi + 8], 0xffffffef
// 0051de82  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0051de85  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0051de8b  23c5                 and eax, ebp
// 0051de8d  a900010000           test eax, 0x100
// 0051de92  7407                 je 0x51de9b
// 0051de94  816608ffbfffff       and dword ptr [esi + 8], 0xffffbfff
// 0051de9b  84c0                 test al, al
// 0051de9d  0f8986000000         jns 0x51df29
// 0051dea3  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 0051dea9  52                   push edx
// 0051deaa  57                   push edi
// 0051deab  e850c60000           call 0x52a500
// 0051deb0  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0051deb6  50                   push eax
// 0051deb7  57                   push edi
// 0051deb8  e843c60000           call 0x52a500
// 0051debd  83c410               add esp, 0x10
// 0051dec0  899ea0000000         mov dword ptr [esi + 0xa0], ebx
// 0051dec6  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0051decc  399eb0000000         cmp dword ptr [esi + 0xb0], ebx
// 0051ded2  744e                 je 0x51df22
// 0051ded4  33ed                 xor ebp, ebp
// 0051ded6  389eb5000000         cmp byte ptr [esi + 0xb5], bl
// 0051dedc  762a                 jbe 0x51df08
// 0051dede  8bff                 mov edi, edi
// 0051dee0  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0051dee6  8b14a9               mov edx, dword ptr [ecx + ebp*4]
// 0051dee9  52                   push edx
// 0051deea  57                   push edi
// 0051deeb  e810c60000           call 0x52a500
// 0051def0  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0051def6  891ca8               mov dword ptr [eax + ebp*4], ebx
// 0051def9  0fb68eb5000000       movzx ecx, byte ptr [esi + 0xb5]
// 0051df00  45                   inc ebp
// 0051df01  83c408               add esp, 8
// 0051df04  3be9                 cmp ebp, ecx
// 0051df06  7cd8                 jl 0x51dee0
// 0051df08  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 0051df0e  52                   push edx
// 0051df0f  57                   push edi
// 0051df10  e8ebc50000           call 0x52a500
// 0051df15  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051df19  83c408               add esp, 8
// 0051df1c  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 0051df22  816608fffbffff       and dword ptr [esi + 8], 0xfffffbff
// 0051df29  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0051df2f  23c5                 and eax, ebp
// 0051df31  a810                 test al, 0x10
// 0051df33  7430                 je 0x51df65
// 0051df35  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0051df3b  51                   push ecx
// 0051df3c  57                   push edi
// 0051df3d  e8bec50000           call 0x52a500
// 0051df42  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 0051df48  52                   push edx
// 0051df49  57                   push edi
// 0051df4a  e8b1c50000           call 0x52a500
// 0051df4f  83c410               add esp, 0x10
// 0051df52  816608ffefffff       and dword ptr [esi + 8], 0xffffefff
// 0051df59  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 0051df5f  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0051df65  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0051df6b  23c5                 and eax, ebp
// 0051df6d  a820                 test al, 0x20
// 0051df6f  0f84a0000000         je 0x51e015
// 0051df75  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051df79  83f9ff               cmp ecx, -1
// 0051df7c  744a                 je 0x51dfc8
// 0051df7e  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0051df84  3bc3                 cmp eax, ebx
// 0051df86  0f8489000000         je 0x51e015
// 0051df8c  8be9                 mov ebp, ecx
// 0051df8e  c1e504               shl ebp, 4
// 0051df91  8b0c28               mov ecx, dword ptr [eax + ebp]
// 0051df94  51                   push ecx
// 0051df95  57                   push edi
// 0051df96  e865c50000           call 0x52a500
// 0051df9b  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 0051dfa1  8b442a08             mov eax, dword ptr [edx + ebp + 8]
// 0051dfa5  50                   push eax
// 0051dfa6  57                   push edi
// 0051dfa7  e854c50000           call 0x52a500
// 0051dfac  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0051dfb2  891c29               mov dword ptr [ecx + ebp], ebx
// 0051dfb5  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 0051dfbb  895c2a08             mov dword ptr [edx + ebp + 8], ebx
// 0051dfbf  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0051dfc3  83c410               add esp, 0x10
// 0051dfc6  eb4d                 jmp 0x51e015
// 0051dfc8  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0051dfce  3bc3                 cmp eax, ebx
// 0051dfd0  743c                 je 0x51e00e
// 0051dfd2  33ed                 xor ebp, ebp
// 0051dfd4  3bc3                 cmp eax, ebx
// 0051dfd6  7e16                 jle 0x51dfee
// 0051dfd8  55                   push ebp
// 0051dfd9  6a20                 push 0x20
// 0051dfdb  56                   push esi
// 0051dfdc  57                   push edi
// 0051dfdd  e8eefdffff           call 0x51ddd0
// 0051dfe2  45                   inc ebp
// 0051dfe3  83c410               add esp, 0x10
// 0051dfe6  3baed8000000         cmp ebp, dword ptr [esi + 0xd8]
// 0051dfec  7cea                 jl 0x51dfd8
// 0051dfee  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0051dff4  50                   push eax
// 0051dff5  57                   push edi
// 0051dff6  e805c50000           call 0x52a500
// 0051dffb  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051dfff  83c408               add esp, 8
// 0051e002  899ed4000000         mov dword ptr [esi + 0xd4], ebx
// 0051e008  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 0051e00e  816608ffdfffff       and dword ptr [esi + 8], 0xffffdfff
// 0051e015  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0051e01b  23cd                 and ecx, ebp
// 0051e01d  f7c100020000         test ecx, 0x200
// 0051e023  747a                 je 0x51e09f
// 0051e025  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051e029  83f9ff               cmp ecx, -1
// 0051e02c  7428                 je 0x51e056
// 0051e02e  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0051e034  3bc3                 cmp eax, ebx
// 0051e036  7467                 je 0x51e09f
// 0051e038  8d2c89               lea ebp, [ecx + ecx*4]
// 0051e03b  03ed                 add ebp, ebp
// 0051e03d  03ed                 add ebp, ebp
// 0051e03f  8b542808             mov edx, dword ptr [eax + ebp + 8]
// 0051e043  52                   push edx
// 0051e044  57                   push edi
// 0051e045  e8b6c40000           call 0x52a500
// 0051e04a  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0051e050  895c2808             mov dword ptr [eax + ebp + 8], ebx
// 0051e054  eb42                 jmp 0x51e098
// 0051e056  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0051e05c  3bc3                 cmp eax, ebx
// 0051e05e  743f                 je 0x51e09f
// 0051e060  33ed                 xor ebp, ebp
// 0051e062  3bc3                 cmp eax, ebx
// 0051e064  7e19                 jle 0x51e07f
// 0051e066  55                   push ebp
// 0051e067  6800020000           push 0x200
// 0051e06c  56                   push esi
// 0051e06d  57                   push edi
// 0051e06e  e85dfdffff           call 0x51ddd0
// 0051e073  45                   inc ebp
// 0051e074  83c410               add esp, 0x10
// 0051e077  3baec0000000         cmp ebp, dword ptr [esi + 0xc0]
// 0051e07d  7ce7                 jl 0x51e066
// 0051e07f  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0051e085  51                   push ecx
// 0051e086  57                   push edi
// 0051e087  e874c40000           call 0x52a500
// 0051e08c  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 0051e092  899ec0000000         mov dword ptr [esi + 0xc0], ebx
// 0051e098  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051e09c  83c408               add esp, 8
// 0051e09f  8b96b8000000         mov edx, dword ptr [esi + 0xb8]
// 0051e0a5  23d5                 and edx, ebp
// 0051e0a7  f6c208               test dl, 8
// 0051e0aa  7414                 je 0x51e0c0
// 0051e0ac  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0051e0af  50                   push eax
// 0051e0b0  57                   push edi
// 0051e0b1  e84ac40000           call 0x52a500
// 0051e0b6  83c408               add esp, 8
// 0051e0b9  836608bf             and dword ptr [esi + 8], 0xffffffbf
// 0051e0bd  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0051e0c0  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0051e0c6  23cd                 and ecx, ebp
// 0051e0c8  f7c100100000         test ecx, 0x1000
// 0051e0ce  741a                 je 0x51e0ea
// 0051e0d0  8b5610               mov edx, dword ptr [esi + 0x10]
// 0051e0d3  52                   push edx
// 0051e0d4  57                   push edi
// 0051e0d5  e826c40000           call 0x52a500
// 0051e0da  836608f7             and dword ptr [esi + 8], 0xfffffff7
// 0051e0de  83c408               add esp, 8
// 0051e0e1  33c0                 xor eax, eax
// 0051e0e3  895e10               mov dword ptr [esi + 0x10], ebx
// 0051e0e6  66894614             mov word ptr [esi + 0x14], ax
// 0051e0ea  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0051e0f0  23cd                 and ecx, ebp
// 0051e0f2  f6c140               test cl, 0x40
// 0051e0f5  7452                 je 0x51e149
// 0051e0f7  399ef8000000         cmp dword ptr [esi + 0xf8], ebx
// 0051e0fd  7443                 je 0x51e142
// 0051e0ff  33ed                 xor ebp, ebp
// 0051e101  395e04               cmp dword ptr [esi + 4], ebx
// 0051e104  7e22                 jle 0x51e128
// 0051e106  8b96f8000000         mov edx, dword ptr [esi + 0xf8]
// 0051e10c  8b04aa               mov eax, dword ptr [edx + ebp*4]
// 0051e10f  50                   push eax
// 0051e110  57                   push edi
// 0051e111  e8eac30000           call 0x52a500
// 0051e116  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0051e11c  891ca9               mov dword ptr [ecx + ebp*4], ebx
// 0051e11f  45                   inc ebp
// 0051e120  83c408               add esp, 8
// 0051e123  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0051e126  7cde                 jl 0x51e106
// 0051e128  8b96f8000000         mov edx, dword ptr [esi + 0xf8]
// 0051e12e  52                   push edx
// 0051e12f  57                   push edi
// 0051e130  e8cbc30000           call 0x52a500
// 0051e135  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051e139  83c408               add esp, 8
// 0051e13c  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 0051e142  816608ff7fffff       and dword ptr [esi + 8], 0xffff7fff
// 0051e149  837c2420ff           cmp dword ptr [esp + 0x20], -1
// 0051e14e  7406                 je 0x51e156
// 0051e150  81e5dfbdffff         and ebp, 0xffffbddf
// 0051e156  f7d5                 not ebp
// 0051e158  21aeb8000000         and dword ptr [esi + 0xb8], ebp
// 0051e15e  5d                   pop ebp
// 0051e15f  5e                   pop esi
// 0051e160  5f                   pop edi
// 0051e161  5b                   pop ebx
// 0051e162  c3                   ret 
// library libpng-1.2.5/png.c (function _png_free_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
