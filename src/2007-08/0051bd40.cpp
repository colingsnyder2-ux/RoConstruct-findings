// from server: 100% by auto
// roc 2007-08 0051bd40  unit: seg_00510000  size: 1815 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051bd40
//
// 0051bd40  55                   push ebp
// 0051bd41  8bec                 mov ebp, esp
// 0051bd43  83e4f8               and esp, 0xfffffff8
// 0051bd46  d9ee                 fldz 
// 0051bd48  83ec34               sub esp, 0x34
// 0051bd4b  53                   push ebx
// 0051bd4c  56                   push esi
// 0051bd4d  8b7508               mov esi, dword ptr [ebp + 8]
// 0051bd50  d89e5c010000         fcomp dword ptr [esi + 0x15c]
// 0051bd56  57                   push edi
// 0051bd57  dfe0                 fnstsw ax
// 0051bd59  f6c444               test ah, 0x44
// 0051bd5c  0f8bee060000         jnp 0x51c450
// 0051bd62  ba08000000           mov edx, 8
// 0051bd67  389627010000         cmp byte ptr [esi + 0x127], dl
// 0051bd6d  0f87e0010000         ja 0x51bf53
// 0051bd73  d98660010000         fld dword ptr [esi + 0x160]
// 0051bd79  dd05802d7a00         fld qword ptr [0x7a2d80]
// 0051bd7f  d8d9                 fcomp st(1)
// 0051bd81  dfe0                 fnstsw ax
// 0051bd83  f6c405               test ah, 5
// 0051bd86  7a0c                 jp 0x51bd94
// 0051bd88  d88e5c010000         fmul dword ptr [esi + 0x15c]
// 0051bd8e  d9e8                 fld1 
// 0051bd90  def1                 fdivrp st(1)
// 0051bd92  eb04                 jmp 0x51bd98
// 0051bd94  ddd8                 fstp st(0)
// 0051bd96  d9e8                 fld1 
// 0051bd98  6800010000           push 0x100
// 0051bd9d  dd5c2434             fstp qword ptr [esp + 0x34]
// 0051bda1  56                   push esi
// 0051bda2  e8d92e0000           call 0x51ec80
// 0051bda7  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0051bdad  83c408               add esp, 8
// 0051bdb0  33ff                 xor edi, edi
// 0051bdb2  898664010000         mov dword ptr [esi + 0x164], eax
// 0051bdb8  897c2418             mov dword ptr [esp + 0x18], edi
// 0051bdbc  da7c2418             fidivr dword ptr [esp + 0x18]
// 0051bdc0  dd442430             fld qword ptr [esp + 0x30]
// 0051bdc4  e8d5531100           call 0x63119e
// 0051bdc9  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0051bdcf  8b8e64010000         mov ecx, dword ptr [esi + 0x164]
// 0051bdd5  d97c240c             fnstcw word ptr [esp + 0xc]
// 0051bdd9  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0051bdde  dcc9                 fmul st(1), st(0)
// 0051bde0  0d000c0000           or eax, 0xc00
// 0051bde5  d9c9                 fxch st(1)
// 0051bde7  89442420             mov dword ptr [esp + 0x20], eax
// 0051bdeb  83c701               add edi, 1
// 0051bdee  81ff00010000         cmp edi, 0x100
// 0051bdf4  dc05485b7900         fadd qword ptr [0x795b48]
// 0051bdfa  d96c2420             fldcw word ptr [esp + 0x20]
// 0051bdfe  897c2418             mov dword ptr [esp + 0x18], edi
// 0051be02  db5c2420             fistp dword ptr [esp + 0x20]
// 0051be06  8a442420             mov al, byte ptr [esp + 0x20]
// 0051be0a  88440fff             mov byte ptr [edi + ecx - 1], al
// 0051be0e  d96c240c             fldcw word ptr [esp + 0xc]
// 0051be12  7ca8                 jl 0x51bdbc
// 0051be14  f7467080006000       test dword ptr [esi + 0x70], 0x600080
// 0051be1b  ddd8                 fstp st(0)
// 0051be1d  0f842d060000         je 0x51c450
// 0051be23  d9865c010000         fld dword ptr [esi + 0x15c]
// 0051be29  6800010000           push 0x100
// 0051be2e  d9e8                 fld1 
// 0051be30  56                   push esi
// 0051be31  def1                 fdivrp st(1)
// 0051be33  dd5c2438             fstp qword ptr [esp + 0x38]
// 0051be37  e8442e0000           call 0x51ec80
// 0051be3c  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0051be42  83c408               add esp, 8
// 0051be45  33ff                 xor edi, edi
// 0051be47  89866c010000         mov dword ptr [esi + 0x16c], eax
// 0051be4d  897c2418             mov dword ptr [esp + 0x18], edi
// 0051be51  da7c2418             fidivr dword ptr [esp + 0x18]
// 0051be55  dd442430             fld qword ptr [esp + 0x30]
// 0051be59  e840531100           call 0x63119e
// 0051be5e  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0051be64  d97c240c             fnstcw word ptr [esp + 0xc]
// 0051be68  83c701               add edi, 1
// 0051be6b  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0051be70  dcc9                 fmul st(1), st(0)
// 0051be72  0d000c0000           or eax, 0xc00
// 0051be77  d9c9                 fxch st(1)
// 0051be79  81ff00010000         cmp edi, 0x100
// 0051be7f  89442420             mov dword ptr [esp + 0x20], eax
// 0051be83  dc05485b7900         fadd qword ptr [0x795b48]
// 0051be89  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 0051be8f  897c2418             mov dword ptr [esp + 0x18], edi
// 0051be93  d96c2420             fldcw word ptr [esp + 0x20]
// 0051be97  db5c2420             fistp dword ptr [esp + 0x20]
// 0051be9b  8a542420             mov dl, byte ptr [esp + 0x20]
// 0051be9f  885407ff             mov byte ptr [edi + eax - 1], dl
// 0051bea3  d96c240c             fldcw word ptr [esp + 0xc]
// 0051bea7  7ca8                 jl 0x51be51
// 0051bea9  6800010000           push 0x100
// 0051beae  ddd8                 fstp st(0)
// 0051beb0  56                   push esi
// 0051beb1  e8ca2d0000           call 0x51ec80
// 0051beb6  d98660010000         fld dword ptr [esi + 0x160]
// 0051bebc  dd05802d7a00         fld qword ptr [0x7a2d80]
// 0051bec2  898668010000         mov dword ptr [esi + 0x168], eax
// 0051bec8  d8d9                 fcomp st(1)
// 0051beca  83c408               add esp, 8
// 0051becd  dfe0                 fnstsw ax
// 0051becf  f6c405               test ah, 5
// 0051bed2  7a06                 jp 0x51beda
// 0051bed4  d9e8                 fld1 
// 0051bed6  def1                 fdivrp st(1)
// 0051bed8  eb08                 jmp 0x51bee2
// 0051beda  ddd8                 fstp st(0)
// 0051bedc  d9865c010000         fld dword ptr [esi + 0x15c]
// 0051bee2  33ff                 xor edi, edi
// 0051bee4  dd5c2430             fstp qword ptr [esp + 0x30]
// 0051bee8  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0051beee  897c2418             mov dword ptr [esp + 0x18], edi
// 0051bef2  da7c2418             fidivr dword ptr [esp + 0x18]
// 0051bef6  dd442430             fld qword ptr [esp + 0x30]
// 0051befa  e89f521100           call 0x63119e
// 0051beff  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0051bf05  8b9668010000         mov edx, dword ptr [esi + 0x168]
// 0051bf0b  d97c240c             fnstcw word ptr [esp + 0xc]
// 0051bf0f  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0051bf14  dcc9                 fmul st(1), st(0)
// 0051bf16  d9c9                 fxch st(1)
// 0051bf18  0d000c0000           or eax, 0xc00
// 0051bf1d  89442420             mov dword ptr [esp + 0x20], eax
// 0051bf21  83c701               add edi, 1
// 0051bf24  81ff00010000         cmp edi, 0x100
// 0051bf2a  dc05485b7900         fadd qword ptr [0x795b48]
// 0051bf30  d96c2420             fldcw word ptr [esp + 0x20]
// 0051bf34  897c2418             mov dword ptr [esp + 0x18], edi
// 0051bf38  db5c2420             fistp dword ptr [esp + 0x20]
// 0051bf3c  8a4c2420             mov cl, byte ptr [esp + 0x20]
// 0051bf40  884c17ff             mov byte ptr [edi + edx - 1], cl
// 0051bf44  d96c240c             fldcw word ptr [esp + 0xc]
// 0051bf48  7ca8                 jl 0x51bef2
// 0051bf4a  ddd8                 fstp st(0)
// 0051bf4c  5f                   pop edi
// 0051bf4d  5e                   pop esi
// 0051bf4e  5b                   pop ebx
// 0051bf4f  8be5                 mov esp, ebp
// 0051bf51  5d                   pop ebp
// 0051bf52  c3                   ret 
// 0051bf53  f6862601000002       test byte ptr [esi + 0x126], 2
// 0051bf5a  7423                 je 0x51bf7f
// 0051bf5c  0fb68e7c010000       movzx ecx, byte ptr [esi + 0x17c]
// 0051bf63  0fb6867d010000       movzx eax, byte ptr [esi + 0x17d]
// 0051bf6a  3bc1                 cmp eax, ecx
// 0051bf6c  7e02                 jle 0x51bf70
// 0051bf6e  8bc8                 mov ecx, eax
// 0051bf70  0fb6867e010000       movzx eax, byte ptr [esi + 0x17e]
// 0051bf77  3bc1                 cmp eax, ecx
// 0051bf79  7e0b                 jle 0x51bf86
// 0051bf7b  8bc8                 mov ecx, eax
// 0051bf7d  eb07                 jmp 0x51bf86
// 0051bf7f  0fb68e7f010000       movzx ecx, byte ptr [esi + 0x17f]
// 0051bf86  33ff                 xor edi, edi
// 0051bf88  3bcf                 cmp ecx, edi
// 0051bf8a  7e0d                 jle 0x51bf99
// 0051bf8c  b810000000           mov eax, 0x10
// 0051bf91  2bc1                 sub eax, ecx
// 0051bf93  89442410             mov dword ptr [esp + 0x10], eax
// 0051bf97  eb06                 jmp 0x51bf9f
// 0051bf99  897c2410             mov dword ptr [esp + 0x10], edi
// 0051bf9d  8bc7                 mov eax, edi
// 0051bf9f  f7467000040000       test dword ptr [esi + 0x70], 0x400
// 0051bfa6  740f                 je 0x51bfb7
// 0051bfa8  83f805               cmp eax, 5
// 0051bfab  7d0a                 jge 0x51bfb7
// 0051bfad  c744241005000000     mov dword ptr [esp + 0x10], 5
// 0051bfb5  eb12                 jmp 0x51bfc9
// 0051bfb7  3bc2                 cmp eax, edx
// 0051bfb9  7e06                 jle 0x51bfc1
// 0051bfbb  89542410             mov dword ptr [esp + 0x10], edx
// 0051bfbf  eb08                 jmp 0x51bfc9
// 0051bfc1  3bc7                 cmp eax, edi
// 0051bfc3  7d08                 jge 0x51bfcd
// 0051bfc5  897c2410             mov dword ptr [esp + 0x10], edi
// 0051bfc9  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051bfcd  d98660010000         fld dword ptr [esi + 0x160]
// 0051bfd3  0fb6c8               movzx ecx, al
// 0051bfd6  dd05802d7a00         fld qword ptr [0x7a2d80]
// 0051bfdc  898e58010000         mov dword ptr [esi + 0x158], ecx
// 0051bfe2  8bca                 mov ecx, edx
// 0051bfe4  d8d9                 fcomp st(1)
// 0051bfe6  2bc8                 sub ecx, eax
// 0051bfe8  bb01000000           mov ebx, 1
// 0051bfed  d3e3                 shl ebx, cl
// 0051bfef  dfe0                 fnstsw ax
// 0051bff1  f6c405               test ah, 5
// 0051bff4  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0051bff8  895c2418             mov dword ptr [esp + 0x18], ebx
// 0051bffc  7a0c                 jp 0x51c00a
// 0051bffe  d88e5c010000         fmul dword ptr [esi + 0x15c]
// 0051c004  d9e8                 fld1 
// 0051c006  def1                 fdivrp st(1)
// 0051c008  eb04                 jmp 0x51c00e
// 0051c00a  ddd8                 fstp st(0)
// 0051c00c  d9e8                 fld1 
// 0051c00e  8d049d00000000       lea eax, [ebx*4]
// 0051c015  dd5c2430             fstp qword ptr [esp + 0x30]
// 0051c019  50                   push eax
// 0051c01a  56                   push esi
// 0051c01b  e8602c0000           call 0x51ec80
// 0051c020  83c408               add esp, 8
// 0051c023  f7467080040000       test dword ptr [esi + 0x70], 0x480
// 0051c02a  898670010000         mov dword ptr [esi + 0x170], eax
// 0051c030  0f8455010000         je 0x51c18b
// 0051c036  85db                 test ebx, ebx
// 0051c038  7e24                 jle 0x51c05e
// 0051c03a  8d9b00000000         lea ebx, [ebx]
// 0051c040  6800020000           push 0x200
// 0051c045  56                   push esi
// 0051c046  e8352c0000           call 0x51ec80
// 0051c04b  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 0051c051  8904ba               mov dword ptr [edx + edi*4], eax
// 0051c054  83c701               add edi, 1
// 0051c057  83c408               add esp, 8
// 0051c05a  3bfb                 cmp edi, ebx
// 0051c05c  7ce2                 jl 0x51c040
// 0051c05e  d9e8                 fld1 
// 0051c060  8bc3                 mov eax, ebx
// 0051c062  dc742430             fdiv qword ptr [esp + 0x30]
// 0051c066  c1e008               shl eax, 8
// 0051c069  33ff                 xor edi, edi
// 0051c06b  85c0                 test eax, eax
// 0051c06d  89442428             mov dword ptr [esp + 0x28], eax
// 0051c071  897c2414             mov dword ptr [esp + 0x14], edi
// 0051c075  89442420             mov dword ptr [esp + 0x20], eax
// 0051c079  dd5c2430             fstp qword ptr [esp + 0x30]
// 0051c07d  db442428             fild dword ptr [esp + 0x28]
// 0051c081  7d06                 jge 0x51c089
// 0051c083  dc0530b17800         fadd qword ptr [0x78b130]
// 0051c089  dd5c2438             fstp qword ptr [esp + 0x38]
// 0051c08d  db442414             fild dword ptr [esp + 0x14]
// 0051c091  dc05485b7900         fadd qword ptr [0x795b48]
// 0051c097  dc0df07e7900         fmul qword ptr [0x797ef0]
// 0051c09d  dd442430             fld qword ptr [esp + 0x30]
// 0051c0a1  e8f8501100           call 0x63119e
// 0051c0a6  dc4c2438             fmul qword ptr [esp + 0x38]
// 0051c0aa  d97c240c             fnstcw word ptr [esp + 0xc]
// 0051c0ae  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0051c0b3  0d000c0000           or eax, 0xc00
// 0051c0b8  89442424             mov dword ptr [esp + 0x24], eax
// 0051c0bc  d96c2424             fldcw word ptr [esp + 0x24]
// 0051c0c0  df7c2428             fistp qword ptr [esp + 0x28]
// 0051c0c4  8b442428             mov eax, dword ptr [esp + 0x28]
// 0051c0c8  3bf8                 cmp edi, eax
// 0051c0ca  89442428             mov dword ptr [esp + 0x28], eax
// 0051c0ce  d96c240c             fldcw word ptr [esp + 0xc]
// 0051c0d2  7759                 ja 0x51c12d
// 0051c0d4  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 0051c0d9  33c9                 xor ecx, ecx
// 0051c0db  8ae8                 mov ch, al
// 0051c0dd  0bc8                 or ecx, eax
// 0051c0df  894c2424             mov dword ptr [esp + 0x24], ecx
// 0051c0e3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051c0e7  b8ff000000           mov eax, 0xff
// 0051c0ec  d3f8                 sar eax, cl
// 0051c0ee  8944240c             mov dword ptr [esp + 0xc], eax
// 0051c0f2  eb10                 jmp 0x51c104
// 0051c0f4  eb0a                 jmp 0x51c100
// 0051c0f6  8da42400000000       lea esp, [esp]
// 0051c0fd  8d4900               lea ecx, [ecx]
// 0051c100  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0051c104  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051c108  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 0051c10e  8bdf                 mov ebx, edi
// 0051c110  d3eb                 shr ebx, cl
// 0051c112  668b4c2424           mov cx, word ptr [esp + 0x24]
// 0051c117  23c7                 and eax, edi
// 0051c119  8b0482               mov eax, dword ptr [edx + eax*4]
// 0051c11c  83c701               add edi, 1
// 0051c11f  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0051c123  66890c58             mov word ptr [eax + ebx*2], cx
// 0051c127  76d7                 jbe 0x51c100
// 0051c129  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0051c12d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051c131  83c001               add eax, 1
// 0051c134  3d00010000           cmp eax, 0x100
// 0051c139  89442414             mov dword ptr [esp + 0x14], eax
// 0051c13d  0f8c4affffff         jl 0x51c08d
// 0051c143  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 0051c147  0f8315010000         jae 0x51c262
// 0051c14d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051c151  b8ff000000           mov eax, 0xff
// 0051c156  d3f8                 sar eax, cl
// 0051c158  8944240c             mov dword ptr [esp + 0xc], eax
// 0051c15c  eb06                 jmp 0x51c164
// 0051c15e  8bff                 mov edi, edi
// 0051c160  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0051c164  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051c168  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 0051c16e  8bdf                 mov ebx, edi
// 0051c170  23c7                 and eax, edi
// 0051c172  8b0482               mov eax, dword ptr [edx + eax*4]
// 0051c175  d3eb                 shr ebx, cl
// 0051c177  83c701               add edi, 1
// 0051c17a  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 0051c17e  66c70458ffff         mov word ptr [eax + ebx*2], 0xffff
// 0051c184  72da                 jb 0x51c160
// 0051c186  e9d3000000           jmp 0x51c25e
// 0051c18b  85db                 test ebx, ebx
// 0051c18d  897c2414             mov dword ptr [esp + 0x14], edi
// 0051c191  0f8ecb000000         jle 0x51c262
// 0051c197  eb0b                 jmp 0x51c1a4
// 0051c199  8da42400000000       lea esp, [esp]
// 0051c1a0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051c1a4  6800020000           push 0x200
// 0051c1a9  56                   push esi
// 0051c1aa  e8d12a0000           call 0x51ec80
// 0051c1af  dd05e87e7900         fld qword ptr [0x797ee8]
// 0051c1b5  8b8e70010000         mov ecx, dword ptr [esi + 0x170]
// 0051c1bb  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051c1bf  8904b9               mov dword ptr [ecx + edi*4], eax
// 0051c1c2  8b049518878900       mov eax, dword ptr [edx*4 + 0x898718]
// 0051c1c9  0fafc7               imul eax, edi
// 0051c1cc  c1e804               shr eax, 4
// 0051c1cf  83c408               add esp, 8
// 0051c1d2  33ff                 xor edi, edi
// 0051c1d4  8bd8                 mov ebx, eax
// 0051c1d6  8bc3                 mov eax, ebx
// 0051c1d8  85c0                 test eax, eax
// 0051c1da  89442428             mov dword ptr [esp + 0x28], eax
// 0051c1de  db442428             fild dword ptr [esp + 0x28]
// 0051c1e2  7d06                 jge 0x51c1ea
// 0051c1e4  dc0530b17800         fadd qword ptr [0x78b130]
// 0051c1ea  def1                 fdivrp st(1)
// 0051c1ec  dd442430             fld qword ptr [esp + 0x30]
// 0051c1f0  e8a94f1100           call 0x63119e
// 0051c1f5  dd05e87e7900         fld qword ptr [0x797ee8]
// 0051c1fb  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 0051c201  d97c240c             fnstcw word ptr [esp + 0xc]
// 0051c205  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0051c20a  dcc9                 fmul st(1), st(0)
// 0051c20c  0d000c0000           or eax, 0xc00
// 0051c211  d9c9                 fxch st(1)
// 0051c213  89442428             mov dword ptr [esp + 0x28], eax
// 0051c217  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051c21b  dc05485b7900         fadd qword ptr [0x795b48]
// 0051c221  8b1482               mov edx, dword ptr [edx + eax*4]
// 0051c224  d96c2428             fldcw word ptr [esp + 0x28]
// 0051c228  83c702               add edi, 2
// 0051c22b  81c300010000         add ebx, 0x100
// 0051c231  81ff00020000         cmp edi, 0x200
// 0051c237  db5c2428             fistp dword ptr [esp + 0x28]
// 0051c23b  668b4c2428           mov cx, word ptr [esp + 0x28]
// 0051c240  66894c17fe           mov word ptr [edi + edx - 2], cx
// 0051c245  d96c240c             fldcw word ptr [esp + 0xc]
// 0051c249  7c8b                 jl 0x51c1d6
// 0051c24b  83c001               add eax, 1
// 0051c24e  ddd8                 fstp st(0)
// 0051c250  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0051c254  89442414             mov dword ptr [esp + 0x14], eax
// 0051c258  0f8c42ffffff         jl 0x51c1a0
// 0051c25e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0051c262  f7467080006000       test dword ptr [esi + 0x70], 0x600080
// 0051c269  0f84e1010000         je 0x51c450
// 0051c26f  d9865c010000         fld dword ptr [esi + 0x15c]
// 0051c275  03db                 add ebx, ebx
// 0051c277  d9e8                 fld1 
// 0051c279  03db                 add ebx, ebx
// 0051c27b  def1                 fdivrp st(1)
// 0051c27d  53                   push ebx
// 0051c27e  56                   push esi
// 0051c27f  dd5c2438             fstp qword ptr [esp + 0x38]
// 0051c283  e8f8290000           call 0x51ec80
// 0051c288  33db                 xor ebx, ebx
// 0051c28a  83c408               add esp, 8
// 0051c28d  395c2418             cmp dword ptr [esp + 0x18], ebx
// 0051c291  898678010000         mov dword ptr [esi + 0x178], eax
// 0051c297  0f8eb4000000         jle 0x51c351
// 0051c29d  6800020000           push 0x200
// 0051c2a2  56                   push esi
// 0051c2a3  e8d8290000           call 0x51ec80
// 0051c2a8  dd05e87e7900         fld qword ptr [0x797ee8]
// 0051c2ae  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0051c2b4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051c2b8  890499               mov dword ptr [ecx + ebx*4], eax
// 0051c2bb  8b049518878900       mov eax, dword ptr [edx*4 + 0x898718]
// 0051c2c2  0fafc3               imul eax, ebx
// 0051c2c5  c1e804               shr eax, 4
// 0051c2c8  83c408               add esp, 8
// 0051c2cb  33ff                 xor edi, edi
// 0051c2cd  89442414             mov dword ptr [esp + 0x14], eax
// 0051c2d1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051c2d5  db442414             fild dword ptr [esp + 0x14]
// 0051c2d9  85c0                 test eax, eax
// 0051c2db  7d06                 jge 0x51c2e3
// 0051c2dd  dc0530b17800         fadd qword ptr [0x78b130]
// 0051c2e3  def1                 fdivrp st(1)
// 0051c2e5  dd442430             fld qword ptr [esp + 0x30]
// 0051c2e9  e8b04e1100           call 0x63119e
// 0051c2ee  dd05e87e7900         fld qword ptr [0x797ee8]
// 0051c2f4  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 0051c2fa  d97c240c             fnstcw word ptr [esp + 0xc]
// 0051c2fe  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0051c303  dcc9                 fmul st(1), st(0)
// 0051c305  8144241400010000     add dword ptr [esp + 0x14], 0x100
// 0051c30d  d9c9                 fxch st(1)
// 0051c30f  0d000c0000           or eax, 0xc00
// 0051c314  89442428             mov dword ptr [esp + 0x28], eax
// 0051c318  dc05485b7900         fadd qword ptr [0x795b48]
// 0051c31e  8b049a               mov eax, dword ptr [edx + ebx*4]
// 0051c321  83c702               add edi, 2
// 0051c324  81ff00020000         cmp edi, 0x200
// 0051c32a  d96c2428             fldcw word ptr [esp + 0x28]
// 0051c32e  db5c2428             fistp dword ptr [esp + 0x28]
// 0051c332  668b4c2428           mov cx, word ptr [esp + 0x28]
// 0051c337  66894c07fe           mov word ptr [edi + eax - 2], cx
// 0051c33c  d96c240c             fldcw word ptr [esp + 0xc]
// 0051c340  7c8f                 jl 0x51c2d1
// 0051c342  83c301               add ebx, 1
// 0051c345  ddd8                 fstp st(0)
// 0051c347  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 0051c34b  0f8c4cffffff         jl 0x51c29d
// 0051c351  d98660010000         fld dword ptr [esi + 0x160]
// 0051c357  dd05802d7a00         fld qword ptr [0x7a2d80]
// 0051c35d  d8d9                 fcomp st(1)
// 0051c35f  dfe0                 fnstsw ax
// 0051c361  f6c405               test ah, 5
// 0051c364  7a06                 jp 0x51c36c
// 0051c366  d9e8                 fld1 
// 0051c368  def1                 fdivrp st(1)
// 0051c36a  eb08                 jmp 0x51c374
// 0051c36c  ddd8                 fstp st(0)
// 0051c36e  d9865c010000         fld dword ptr [esi + 0x15c]
// 0051c374  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051c378  dd5c2430             fstp qword ptr [esp + 0x30]
// 0051c37c  03c0                 add eax, eax
// 0051c37e  03c0                 add eax, eax
// 0051c380  50                   push eax
// 0051c381  56                   push esi
// 0051c382  e8f9280000           call 0x51ec80
// 0051c387  33db                 xor ebx, ebx
// 0051c389  83c408               add esp, 8
// 0051c38c  395c2418             cmp dword ptr [esp + 0x18], ebx
// 0051c390  898674010000         mov dword ptr [esi + 0x174], eax
// 0051c396  0f8eb4000000         jle 0x51c450
// 0051c39c  6800020000           push 0x200
// 0051c3a1  56                   push esi
// 0051c3a2  e8d9280000           call 0x51ec80
// 0051c3a7  dd05e87e7900         fld qword ptr [0x797ee8]
// 0051c3ad  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0051c3b3  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051c3b7  890499               mov dword ptr [ecx + ebx*4], eax
// 0051c3ba  8b049518878900       mov eax, dword ptr [edx*4 + 0x898718]
// 0051c3c1  0fafc3               imul eax, ebx
// 0051c3c4  c1e804               shr eax, 4
// 0051c3c7  83c408               add esp, 8
// 0051c3ca  33ff                 xor edi, edi
// 0051c3cc  89442414             mov dword ptr [esp + 0x14], eax
// 0051c3d0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051c3d4  db442414             fild dword ptr [esp + 0x14]
// 0051c3d8  85c0                 test eax, eax
// 0051c3da  7d06                 jge 0x51c3e2
// 0051c3dc  dc0530b17800         fadd qword ptr [0x78b130]
// 0051c3e2  def1                 fdivrp st(1)
// 0051c3e4  dd442430             fld qword ptr [esp + 0x30]
// 0051c3e8  e8b14d1100           call 0x63119e
// 0051c3ed  dd05e87e7900         fld qword ptr [0x797ee8]
// 0051c3f3  8b9674010000         mov edx, dword ptr [esi + 0x174]
// 0051c3f9  d97c240c             fnstcw word ptr [esp + 0xc]
// 0051c3fd  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0051c402  dcc9                 fmul st(1), st(0)
// 0051c404  8144241400010000     add dword ptr [esp + 0x14], 0x100
// 0051c40c  d9c9                 fxch st(1)
// 0051c40e  0d000c0000           or eax, 0xc00
// 0051c413  89442428             mov dword ptr [esp + 0x28], eax
// 0051c417  dc05485b7900         fadd qword ptr [0x795b48]
// 0051c41d  8b049a               mov eax, dword ptr [edx + ebx*4]
// 0051c420  83c702               add edi, 2
// 0051c423  81ff00020000         cmp edi, 0x200
// 0051c429  d96c2428             fldcw word ptr [esp + 0x28]
// 0051c42d  db5c2428             fistp dword ptr [esp + 0x28]
// 0051c431  668b4c2428           mov cx, word ptr [esp + 0x28]
// 0051c436  66894c07fe           mov word ptr [edi + eax - 2], cx
// 0051c43b  d96c240c             fldcw word ptr [esp + 0xc]
// 0051c43f  7c8f                 jl 0x51c3d0
// 0051c441  83c301               add ebx, 1
// 0051c444  ddd8                 fstp st(0)
// 0051c446  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 0051c44a  0f8c4cffffff         jl 0x51c39c
// 0051c450  5f                   pop edi
// 0051c451  5e                   pop esi
// 0051c452  5b                   pop ebx
// 0051c453  8be5                 mov esp, ebp
// 0051c455  5d                   pop ebp
// 0051c456  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_build_gamma_table)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
