// roc 2009-12 006277b0  unit: seg_00620000  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006277b0
//
// 006277b0  53                   push ebx
// 006277b1  56                   push esi
// 006277b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006277b6  8b4604               mov eax, dword ptr [esi + 4]
// 006277b9  8b08                 mov ecx, dword ptr [eax]
// 006277bb  57                   push edi
// 006277bc  6a0c                 push 0xc
// 006277be  6a01                 push 1
// 006277c0  56                   push esi
// 006277c1  ffd1                 call ecx
// 006277c3  8bf8                 mov edi, eax
// 006277c5  89be50010000         mov dword ptr [esi + 0x150], edi
// 006277cb  c707904a8500         mov dword ptr [edi], 0x854a90
// 006277d1  8b4628               mov eax, dword ptr [esi + 0x28]
// 006277d4  48                   dec eax
// 006277d5  bb04000000           mov ebx, 4
// 006277da  83c40c               add esp, 0xc
// 006277dd  3bc3                 cmp eax, ebx
// 006277df  771e                 ja 0x6277ff
// 006277e1  ff2485b0796200       jmp dword ptr [eax*4 + 0x6279b0]
// 006277e8  837e2401             cmp dword ptr [esi + 0x24], 1
// 006277ec  742a                 je 0x627818
// 006277ee  eb15                 jmp 0x627805
// 006277f0  837e2403             cmp dword ptr [esi + 0x24], 3
// 006277f4  7422                 je 0x627818
// 006277f6  eb0d                 jmp 0x627805
// 006277f8  395e24               cmp dword ptr [esi + 0x24], ebx
// 006277fb  741b                 je 0x627818
// 006277fd  eb06                 jmp 0x627805
// 006277ff  837e2401             cmp dword ptr [esi + 0x24], 1
// 00627803  7d13                 jge 0x627818
// 00627805  8b16                 mov edx, dword ptr [esi]
// 00627807  c7421409000000       mov dword ptr [edx + 0x14], 9
// 0062780e  8b06                 mov eax, dword ptr [esi]
// 00627810  8b08                 mov ecx, dword ptr [eax]
// 00627812  56                   push esi
// 00627813  ffd1                 call ecx
// 00627815  83c404               add esp, 4
// 00627818  8b4640               mov eax, dword ptr [esi + 0x40]
// 0062781b  8d48ff               lea ecx, [eax - 1]
// 0062781e  3bcb                 cmp ecx, ebx
// 00627820  0f875e010000         ja 0x627984
// 00627826  ff248dc4796200       jmp dword ptr [ecx*4 + 0x6279c4]
// 0062782d  837e3c01             cmp dword ptr [esi + 0x3c], 1
// 00627831  7413                 je 0x627846
// 00627833  8b16                 mov edx, dword ptr [esi]
// 00627835  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0062783c  8b06                 mov eax, dword ptr [esi]
// 0062783e  8b08                 mov ecx, dword ptr [eax]
// 00627840  56                   push esi
// 00627841  ffd1                 call ecx
// 00627843  83c404               add esp, 4
// 00627846  8b4628               mov eax, dword ptr [esi + 0x28]
// 00627849  83f801               cmp eax, 1
// 0062784c  741b                 je 0x627869
// 0062784e  83f802               cmp eax, 2
// 00627851  7511                 jne 0x627864
// 00627853  c707e0726200         mov dword ptr [edi], 0x6272e0
// 00627859  c74704d0746200       mov dword ptr [edi + 4], 0x6274d0
// 00627860  5f                   pop edi
// 00627861  5e                   pop esi
// 00627862  5b                   pop ebx
// 00627863  c3                   ret 
// 00627864  83f803               cmp eax, 3
// 00627867  752e                 jne 0x627897
// 00627869  c74704d0766200       mov dword ptr [edi + 4], 0x6276d0
// 00627870  5f                   pop edi
// 00627871  5e                   pop esi
// 00627872  5b                   pop ebx
// 00627873  c3                   ret 
// 00627874  837e3c03             cmp dword ptr [esi + 0x3c], 3
// 00627878  7413                 je 0x62788d
// 0062787a  8b16                 mov edx, dword ptr [esi]
// 0062787c  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 00627883  8b06                 mov eax, dword ptr [esi]
// 00627885  8b08                 mov ecx, dword ptr [eax]
// 00627887  56                   push esi
// 00627888  ffd1                 call ecx
// 0062788a  83c404               add esp, 4
// 0062788d  837e2802             cmp dword ptr [esi + 0x28], 2
// 00627891  0f840d010000         je 0x6279a4
// 00627897  8b16                 mov edx, dword ptr [esi]
// 00627899  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 006278a0  8b06                 mov eax, dword ptr [esi]
// 006278a2  8b08                 mov ecx, dword ptr [eax]
// 006278a4  56                   push esi
// 006278a5  ffd1                 call ecx
// 006278a7  83c404               add esp, 4
// 006278aa  5f                   pop edi
// 006278ab  5e                   pop esi
// 006278ac  5b                   pop ebx
// 006278ad  c3                   ret 
// 006278ae  837e3c03             cmp dword ptr [esi + 0x3c], 3
// 006278b2  7413                 je 0x6278c7
// 006278b4  8b16                 mov edx, dword ptr [esi]
// 006278b6  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 006278bd  8b06                 mov eax, dword ptr [esi]
// 006278bf  8b08                 mov ecx, dword ptr [eax]
// 006278c1  56                   push esi
// 006278c2  ffd1                 call ecx
// 006278c4  83c404               add esp, 4
// 006278c7  8b4628               mov eax, dword ptr [esi + 0x28]
// 006278ca  83f802               cmp eax, 2
// 006278cd  7511                 jne 0x6278e0
// 006278cf  c707e0726200         mov dword ptr [edi], 0x6272e0
// 006278d5  c74704c0736200       mov dword ptr [edi + 4], 0x6273c0
// 006278dc  5f                   pop edi
// 006278dd  5e                   pop esi
// 006278de  5b                   pop ebx
// 006278df  c3                   ret 
// 006278e0  83f803               cmp eax, 3
// 006278e3  0f84bb000000         je 0x6279a4
// 006278e9  8b16                 mov edx, dword ptr [esi]
// 006278eb  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 006278f2  8b06                 mov eax, dword ptr [esi]
// 006278f4  8b08                 mov ecx, dword ptr [eax]
// 006278f6  56                   push esi
// 006278f7  ffd1                 call ecx
// 006278f9  83c404               add esp, 4
// 006278fc  5f                   pop edi
// 006278fd  5e                   pop esi
// 006278fe  5b                   pop ebx
// 006278ff  c3                   ret 
// 00627900  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 00627903  7413                 je 0x627918
// 00627905  8b16                 mov edx, dword ptr [esi]
// 00627907  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0062790e  8b06                 mov eax, dword ptr [esi]
// 00627910  8b08                 mov ecx, dword ptr [eax]
// 00627912  56                   push esi
// 00627913  ffd1                 call ecx
// 00627915  83c404               add esp, 4
// 00627918  395e28               cmp dword ptr [esi + 0x28], ebx
// 0062791b  0f8483000000         je 0x6279a4
// 00627921  8b16                 mov edx, dword ptr [esi]
// 00627923  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 0062792a  8b06                 mov eax, dword ptr [esi]
// 0062792c  8b08                 mov ecx, dword ptr [eax]
// 0062792e  56                   push esi
// 0062792f  ffd1                 call ecx
// 00627931  83c404               add esp, 4
// 00627934  5f                   pop edi
// 00627935  5e                   pop esi
// 00627936  5b                   pop ebx
// 00627937  c3                   ret 
// 00627938  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0062793b  7413                 je 0x627950
// 0062793d  8b16                 mov edx, dword ptr [esi]
// 0062793f  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 00627946  8b06                 mov eax, dword ptr [esi]
// 00627948  8b08                 mov ecx, dword ptr [eax]
// 0062794a  56                   push esi
// 0062794b  ffd1                 call ecx
// 0062794d  83c404               add esp, 4
// 00627950  8b4628               mov eax, dword ptr [esi + 0x28]
// 00627953  3bc3                 cmp eax, ebx
// 00627955  7511                 jne 0x627968
// 00627957  c707e0726200         mov dword ptr [edi], 0x6272e0
// 0062795d  c7470480756200       mov dword ptr [edi + 4], 0x627580
// 00627964  5f                   pop edi
// 00627965  5e                   pop esi
// 00627966  5b                   pop ebx
// 00627967  c3                   ret 
// 00627968  83f805               cmp eax, 5
// 0062796b  7437                 je 0x6279a4
// 0062796d  8b16                 mov edx, dword ptr [esi]
// 0062796f  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 00627976  8b06                 mov eax, dword ptr [esi]
// 00627978  8b08                 mov ecx, dword ptr [eax]
// 0062797a  56                   push esi
// 0062797b  ffd1                 call ecx
// 0062797d  83c404               add esp, 4
// 00627980  5f                   pop edi
// 00627981  5e                   pop esi
// 00627982  5b                   pop ebx
// 00627983  c3                   ret 
// 00627984  3b4628               cmp eax, dword ptr [esi + 0x28]
// 00627987  7508                 jne 0x627991
// 00627989  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0062798c  3b5624               cmp edx, dword ptr [esi + 0x24]
// 0062798f  7413                 je 0x6279a4
// 00627991  8b06                 mov eax, dword ptr [esi]
// 00627993  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 0062799a  8b0e                 mov ecx, dword ptr [esi]
// 0062799c  8b11                 mov edx, dword ptr [ecx]
// 0062799e  56                   push esi
// 0062799f  ffd2                 call edx
// 006279a1  83c404               add esp, 4
// 006279a4  c7470430776200       mov dword ptr [edi + 4], 0x627730
// 006279ab  5f                   pop edi
// 006279ac  5e                   pop esi
// 006279ad  5b                   pop ebx
// 006279ae  c3                   ret 
// 006279af  90                   nop 
// 006279b0  e8776200f0           call 0xf062dc2c
// 006279b5  7762                 ja 0x627a19
// 006279b7  00f0                 add al, dh
// 006279b9  7762                 ja 0x627a1d
// 006279bb  00f8                 add al, bh
// 006279bd  7762                 ja 0x627a21
// 006279bf  00f8                 add al, bh
// 006279c1  7762                 ja 0x627a25
// 006279c3  002d78620074         add byte ptr [0x74006278], ch
// 006279c9  7862                 js 0x627a2d
// 006279cb  00ae78620000         add byte ptr [esi + 0x6278], ch
// 006279d1  7962                 jns 0x627a35
// 006279d3  0038                 add byte ptr [eax], bh
// 006279d5  7962                 jns 0x627a39
// library jpeg-6b/jccolor.c (function _jinit_color_converter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
