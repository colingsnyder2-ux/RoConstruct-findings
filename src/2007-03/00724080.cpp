// roc 2007-03 00724080  unit: seg_00720000  size: 626 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00724080
//
// 00724080  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00724084  53                   push ebx
// 00724085  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00724089  57                   push edi
// 0072408a  8bf9                 mov edi, ecx
// 0072408c  c1ef10               shr edi, 0x10
// 0072408f  81e1ffff0000         and ecx, 0xffff
// 00724095  83fb01               cmp ebx, 1
// 00724098  7531                 jne 0x7240cb
// 0072409a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0072409e  0fb610               movzx edx, byte ptr [eax]
// 007240a1  03ca                 add ecx, edx
// 007240a3  81f9f1ff0000         cmp ecx, 0xfff1
// 007240a9  7206                 jb 0x7240b1
// 007240ab  81e9f1ff0000         sub ecx, 0xfff1
// 007240b1  03f9                 add edi, ecx
// 007240b3  81fff1ff0000         cmp edi, 0xfff1
// 007240b9  7206                 jb 0x7240c1
// 007240bb  81eff1ff0000         sub edi, 0xfff1
// 007240c1  8bc7                 mov eax, edi
// 007240c3  c1e010               shl eax, 0x10
// 007240c6  5f                   pop edi
// 007240c7  0bc1                 or eax, ecx
// 007240c9  5b                   pop ebx
// 007240ca  c3                   ret 
// 007240cb  56                   push esi
// 007240cc  8b742414             mov esi, dword ptr [esp + 0x14]
// 007240d0  85f6                 test esi, esi
// 007240d2  7509                 jne 0x7240dd
// 007240d4  5e                   pop esi
// 007240d5  5f                   pop edi
// 007240d6  b801000000           mov eax, 1
// 007240db  5b                   pop ebx
// 007240dc  c3                   ret 
// 007240dd  83fb10               cmp ebx, 0x10
// 007240e0  733f                 jae 0x724121
// 007240e2  85db                 test ebx, ebx
// 007240e4  7411                 je 0x7240f7
// 007240e6  0fb606               movzx eax, byte ptr [esi]
// 007240e9  03c8                 add ecx, eax
// 007240eb  83eb01               sub ebx, 1
// 007240ee  83c601               add esi, 1
// 007240f1  03f9                 add edi, ecx
// 007240f3  85db                 test ebx, ebx
// 007240f5  75ef                 jne 0x7240e6
// 007240f7  81f9f1ff0000         cmp ecx, 0xfff1
// 007240fd  7206                 jb 0x724105
// 007240ff  81e9f1ff0000         sub ecx, 0xfff1
// 00724105  b871800780           mov eax, 0x80078071
// 0072410a  f7e7                 mul edi
// 0072410c  c1ea0f               shr edx, 0xf
// 0072410f  8bc2                 mov eax, edx
// 00724111  c1e004               shl eax, 4
// 00724114  2bc2                 sub eax, edx
// 00724116  03c7                 add eax, edi
// 00724118  5e                   pop esi
// 00724119  c1e010               shl eax, 0x10
// 0072411c  5f                   pop edi
// 0072411d  0bc1                 or eax, ecx
// 0072411f  5b                   pop ebx
// 00724120  c3                   ret 
// 00724121  81fbb0150000         cmp ebx, 0x15b0
// 00724127  0f82dc000000         jb 0x724209
// 0072412d  b8afa96e5e           mov eax, 0x5e6ea9af
// 00724132  f7e3                 mul ebx
// 00724134  55                   push ebp
// 00724135  8bea                 mov ebp, edx
// 00724137  c1ed0b               shr ebp, 0xb
// 0072413a  8d9b00000000         lea ebx, [ebx]
// 00724140  81ebb0150000         sub ebx, 0x15b0
// 00724146  b85b010000           mov eax, 0x15b
// 0072414b  eb03                 jmp 0x724150
// 0072414d  8d4900               lea ecx, [ecx]
// 00724150  0fb616               movzx edx, byte ptr [esi]
// 00724153  03ca                 add ecx, edx
// 00724155  0fb65601             movzx edx, byte ptr [esi + 1]
// 00724159  03f9                 add edi, ecx
// 0072415b  03ca                 add ecx, edx
// 0072415d  0fb65602             movzx edx, byte ptr [esi + 2]
// 00724161  03f9                 add edi, ecx
// 00724163  03ca                 add ecx, edx
// 00724165  0fb65603             movzx edx, byte ptr [esi + 3]
// 00724169  03f9                 add edi, ecx
// 0072416b  03ca                 add ecx, edx
// 0072416d  0fb65604             movzx edx, byte ptr [esi + 4]
// 00724171  03f9                 add edi, ecx
// 00724173  03ca                 add ecx, edx
// 00724175  0fb65605             movzx edx, byte ptr [esi + 5]
// 00724179  03f9                 add edi, ecx
// 0072417b  03ca                 add ecx, edx
// 0072417d  0fb65606             movzx edx, byte ptr [esi + 6]
// 00724181  03f9                 add edi, ecx
// 00724183  03ca                 add ecx, edx
// 00724185  0fb65607             movzx edx, byte ptr [esi + 7]
// 00724189  03f9                 add edi, ecx
// 0072418b  03ca                 add ecx, edx
// 0072418d  0fb65608             movzx edx, byte ptr [esi + 8]
// 00724191  03f9                 add edi, ecx
// 00724193  03ca                 add ecx, edx
// 00724195  0fb65609             movzx edx, byte ptr [esi + 9]
// 00724199  03f9                 add edi, ecx
// 0072419b  03ca                 add ecx, edx
// 0072419d  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 007241a1  03f9                 add edi, ecx
// 007241a3  03ca                 add ecx, edx
// 007241a5  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 007241a9  03f9                 add edi, ecx
// 007241ab  03ca                 add ecx, edx
// 007241ad  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 007241b1  03f9                 add edi, ecx
// 007241b3  03ca                 add ecx, edx
// 007241b5  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 007241b9  03f9                 add edi, ecx
// 007241bb  03ca                 add ecx, edx
// 007241bd  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 007241c1  03f9                 add edi, ecx
// 007241c3  03ca                 add ecx, edx
// 007241c5  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 007241c9  03f9                 add edi, ecx
// 007241cb  03ca                 add ecx, edx
// 007241cd  03f9                 add edi, ecx
// 007241cf  83c610               add esi, 0x10
// 007241d2  83e801               sub eax, 1
// 007241d5  0f8575ffffff         jne 0x724150
// 007241db  b871800780           mov eax, 0x80078071
// 007241e0  f7e1                 mul ecx
// 007241e2  c1ea0f               shr edx, 0xf
// 007241e5  69d20f00ffff         imul edx, edx, 0xffff000f
// 007241eb  03ca                 add ecx, edx
// 007241ed  b871800780           mov eax, 0x80078071
// 007241f2  f7e7                 mul edi
// 007241f4  c1ea0f               shr edx, 0xf
// 007241f7  69d20f00ffff         imul edx, edx, 0xffff000f
// 007241fd  03fa                 add edi, edx
// 007241ff  83ed01               sub ebp, 1
// 00724202  0f8538ffffff         jne 0x724140
// 00724208  5d                   pop ebp
// 00724209  85db                 test ebx, ebx
// 0072420b  0f84d6000000         je 0x7242e7
// 00724211  83fb10               cmp ebx, 0x10
// 00724214  0f8294000000         jb 0x7242ae
// 0072421a  8bc3                 mov eax, ebx
// 0072421c  c1e804               shr eax, 4
// 0072421f  90                   nop 
// 00724220  0fb616               movzx edx, byte ptr [esi]
// 00724223  03ca                 add ecx, edx
// 00724225  0fb65601             movzx edx, byte ptr [esi + 1]
// 00724229  03f9                 add edi, ecx
// 0072422b  03ca                 add ecx, edx
// 0072422d  0fb65602             movzx edx, byte ptr [esi + 2]
// 00724231  03f9                 add edi, ecx
// 00724233  03ca                 add ecx, edx
// 00724235  0fb65603             movzx edx, byte ptr [esi + 3]
// 00724239  03f9                 add edi, ecx
// 0072423b  03ca                 add ecx, edx
// 0072423d  0fb65604             movzx edx, byte ptr [esi + 4]
// 00724241  03f9                 add edi, ecx
// 00724243  03ca                 add ecx, edx
// 00724245  0fb65605             movzx edx, byte ptr [esi + 5]
// 00724249  03f9                 add edi, ecx
// 0072424b  03ca                 add ecx, edx
// 0072424d  0fb65606             movzx edx, byte ptr [esi + 6]
// 00724251  03f9                 add edi, ecx
// 00724253  03ca                 add ecx, edx
// 00724255  0fb65607             movzx edx, byte ptr [esi + 7]
// 00724259  03f9                 add edi, ecx
// 0072425b  03ca                 add ecx, edx
// 0072425d  0fb65608             movzx edx, byte ptr [esi + 8]
// 00724261  03f9                 add edi, ecx
// 00724263  03ca                 add ecx, edx
// 00724265  0fb65609             movzx edx, byte ptr [esi + 9]
// 00724269  03f9                 add edi, ecx
// 0072426b  03ca                 add ecx, edx
// 0072426d  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 00724271  03f9                 add edi, ecx
// 00724273  03ca                 add ecx, edx
// 00724275  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 00724279  03f9                 add edi, ecx
// 0072427b  03ca                 add ecx, edx
// 0072427d  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 00724281  03f9                 add edi, ecx
// 00724283  03ca                 add ecx, edx
// 00724285  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 00724289  03f9                 add edi, ecx
// 0072428b  03ca                 add ecx, edx
// 0072428d  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 00724291  03f9                 add edi, ecx
// 00724293  03ca                 add ecx, edx
// 00724295  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 00724299  03f9                 add edi, ecx
// 0072429b  03ca                 add ecx, edx
// 0072429d  83eb10               sub ebx, 0x10
// 007242a0  03f9                 add edi, ecx
// 007242a2  83c610               add esi, 0x10
// 007242a5  83e801               sub eax, 1
// 007242a8  0f8572ffffff         jne 0x724220
// 007242ae  85db                 test ebx, ebx
// 007242b0  7411                 je 0x7242c3
// 007242b2  0fb606               movzx eax, byte ptr [esi]
// 007242b5  03c8                 add ecx, eax
// 007242b7  83eb01               sub ebx, 1
// 007242ba  83c601               add esi, 1
// 007242bd  03f9                 add edi, ecx
// 007242bf  85db                 test ebx, ebx
// 007242c1  75ef                 jne 0x7242b2
// 007242c3  b871800780           mov eax, 0x80078071
// 007242c8  f7e1                 mul ecx
// 007242ca  c1ea0f               shr edx, 0xf
// 007242cd  69d20f00ffff         imul edx, edx, 0xffff000f
// 007242d3  03ca                 add ecx, edx
// 007242d5  b871800780           mov eax, 0x80078071
// 007242da  f7e7                 mul edi
// 007242dc  c1ea0f               shr edx, 0xf
// 007242df  69d20f00ffff         imul edx, edx, 0xffff000f
// 007242e5  03fa                 add edi, edx
// 007242e7  8bc7                 mov eax, edi
// 007242e9  5e                   pop esi
// 007242ea  c1e010               shl eax, 0x10
// 007242ed  5f                   pop edi
// 007242ee  0bc1                 or eax, ecx
// 007242f0  5b                   pop ebx
// 007242f1  c3                   ret 
// library zlib-1.2.3/adler32.c (function _adler32)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 adler32.c
