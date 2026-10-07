// roc 2011-06 00573160  unit: seg_00570000  size: 1291 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00573160
//
// 00573160  83ec18               sub esp, 0x18
// 00573163  53                   push ebx
// 00573164  55                   push ebp
// 00573165  0fb76a02             movzx ebp, word ptr [edx + 2]
// 00573169  56                   push esi
// 0057316a  33f6                 xor esi, esi
// 0057316c  57                   push edi
// 0057316d  8bd9                 mov ebx, ecx
// 0057316f  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00573177  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057317b  8d4e07               lea ecx, [esi + 7]
// 0057317e  8d7e04               lea edi, [esi + 4]
// 00573181  85ed                 test ebp, ebp
// 00573183  7508                 jne 0x57318d
// 00573185  b98a000000           mov ecx, 0x8a
// 0057318a  8d7d03               lea edi, [ebp + 3]
// 0057318d  85db                 test ebx, ebx
// 0057318f  0f8cce040000         jl 0x573663
// 00573195  83c206               add edx, 6
// 00573198  43                   inc ebx
// 00573199  89542418             mov dword ptr [esp + 0x18], edx
// 0057319d  895c2420             mov dword ptr [esp + 0x20], ebx
// 005731a1  bd01000000           mov ebp, 1
// 005731a6  eb08                 jmp 0x5731b0
// 005731a8  8da42400000000       lea esp, [esp]
// 005731af  90                   nop 
// 005731b0  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005731b4  0fb71b               movzx ebx, word ptr [ebx]
// 005731b7  8b542414             mov edx, dword ptr [esp + 0x14]
// 005731bb  03f5                 add esi, ebp
// 005731bd  3bf1                 cmp esi, ecx
// 005731bf  89542424             mov dword ptr [esp + 0x24], edx
// 005731c3  895c2414             mov dword ptr [esp + 0x14], ebx
// 005731c7  89742410             mov dword ptr [esp + 0x10], esi
// 005731cb  7d08                 jge 0x5731d5
// 005731cd  3bd3                 cmp edx, ebx
// 005731cf  0f847f040000         je 0x573654
// 005731d5  3bf7                 cmp esi, edi
// 005731d7  0f8da2000000         jge 0x57327f
// 005731dd  8d4900               lea ecx, [ecx]
// 005731e0  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 005731e8  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 005731ee  bb10000000           mov ebx, 0x10
// 005731f3  2bdf                 sub ebx, edi
// 005731f5  3bcb                 cmp ecx, ebx
// 005731f7  7e5b                 jle 0x573254
// 005731f9  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 00573201  8bd6                 mov edx, esi
// 00573203  d3e2                 shl edx, cl
// 00573205  8b4808               mov ecx, dword ptr [eax + 8]
// 00573208  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057320f  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00573216  8b5014               mov edx, dword ptr [eax + 0x14]
// 00573219  881c11               mov byte ptr [ecx + edx], bl
// 0057321c  016814               add dword ptr [eax + 0x14], ebp
// 0057321f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00573222  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00573229  8b5008               mov edx, dword ptr [eax + 8]
// 0057322c  881c11               mov byte ptr [ecx + edx], bl
// 0057322f  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00573235  016814               add dword ptr [eax + 0x14], ebp
// 00573238  b110                 mov cl, 0x10
// 0057323a  2aca                 sub cl, dl
// 0057323c  66d3ee               shr si, cl
// 0057323f  8d4c3af0             lea ecx, [edx + edi - 0x10]
// 00573243  8b542424             mov edx, dword ptr [esp + 0x24]
// 00573247  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057324e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00573252  eb14                 jmp 0x573268
// 00573254  668b9c907c0a0000     mov bx, word ptr [eax + edx*4 + 0xa7c]
// 0057325c  66d3e3               shl bx, cl
// 0057325f  660998b8160000       or word ptr [eax + 0x16b8], bx
// 00573266  03cf                 add ecx, edi
// 00573268  2bf5                 sub esi, ebp
// 0057326a  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00573270  89742410             mov dword ptr [esp + 0x10], esi
// 00573274  0f8566ffffff         jne 0x5731e0
// 0057327a  e9a7030000           jmp 0x573626
// 0057327f  85d2                 test edx, edx
// 00573281  0f84a5010000         je 0x57342c
// 00573287  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0057328b  0f849c000000         je 0x57332d
// 00573291  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 00573299  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057329f  bb10000000           mov ebx, 0x10
// 005732a4  2bdf                 sub ebx, edi
// 005732a6  3bcb                 cmp ecx, ebx
// 005732a8  897c241c             mov dword ptr [esp + 0x1c], edi
// 005732ac  7e5b                 jle 0x573309
// 005732ae  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 005732b6  8bfe                 mov edi, esi
// 005732b8  d3e7                 shl edi, cl
// 005732ba  8b4808               mov ecx, dword ptr [eax + 8]
// 005732bd  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 005732c4  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 005732cb  8b7814               mov edi, dword ptr [eax + 0x14]
// 005732ce  881c39               mov byte ptr [ecx + edi], bl
// 005732d1  016814               add dword ptr [eax + 0x14], ebp
// 005732d4  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 005732db  8b4808               mov ecx, dword ptr [eax + 8]
// 005732de  8b7814               mov edi, dword ptr [eax + 0x14]
// 005732e1  881c0f               mov byte ptr [edi + ecx], bl
// 005732e4  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 005732ea  016814               add dword ptr [eax + 0x14], ebp
// 005732ed  b110                 mov cl, 0x10
// 005732ef  2acb                 sub cl, bl
// 005732f1  66d3ee               shr si, cl
// 005732f4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005732f8  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 005732fc  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00573303  8b742410             mov esi, dword ptr [esp + 0x10]
// 00573307  eb18                 jmp 0x573321
// 00573309  668bbc907c0a0000     mov di, word ptr [eax + edx*4 + 0xa7c]
// 00573311  66d3e7               shl di, cl
// 00573314  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057331b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0057331f  03cf                 add ecx, edi
// 00573321  2bf5                 sub esi, ebp
// 00573323  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00573329  89742410             mov dword ptr [esp + 0x10], esi
// 0057332d  0fb7b8be0a0000       movzx edi, word ptr [eax + 0xabe]
// 00573334  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057333a  bb10000000           mov ebx, 0x10
// 0057333f  2bdf                 sub ebx, edi
// 00573341  3bcb                 cmp ecx, ebx
// 00573343  897c241c             mov dword ptr [esp + 0x1c], edi
// 00573347  7e5a                 jle 0x5733a3
// 00573349  0fb7b0bc0a0000       movzx esi, word ptr [eax + 0xabc]
// 00573350  8bfe                 mov edi, esi
// 00573352  d3e7                 shl edi, cl
// 00573354  8b4808               mov ecx, dword ptr [eax + 8]
// 00573357  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057335e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00573365  8b7814               mov edi, dword ptr [eax + 0x14]
// 00573368  881c39               mov byte ptr [ecx + edi], bl
// 0057336b  016814               add dword ptr [eax + 0x14], ebp
// 0057336e  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00573375  8b4808               mov ecx, dword ptr [eax + 8]
// 00573378  8b7814               mov edi, dword ptr [eax + 0x14]
// 0057337b  881c0f               mov byte ptr [edi + ecx], bl
// 0057337e  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00573384  016814               add dword ptr [eax + 0x14], ebp
// 00573387  b110                 mov cl, 0x10
// 00573389  2acb                 sub cl, bl
// 0057338b  66d3ee               shr si, cl
// 0057338e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00573392  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 00573396  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057339d  8b742410             mov esi, dword ptr [esp + 0x10]
// 005733a1  eb17                 jmp 0x5733ba
// 005733a3  668bb8bc0a0000       mov di, word ptr [eax + 0xabc]
// 005733aa  66d3e7               shl di, cl
// 005733ad  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 005733b4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005733b8  03cf                 add ecx, edi
// 005733ba  83c6fd               add esi, -3
// 005733bd  83f90e               cmp ecx, 0xe
// 005733c0  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 005733c6  7e53                 jle 0x57341b
// 005733c8  8bfe                 mov edi, esi
// 005733ca  d3e7                 shl edi, cl
// 005733cc  8b4808               mov ecx, dword ptr [eax + 8]
// 005733cf  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 005733d6  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 005733dd  8b7814               mov edi, dword ptr [eax + 0x14]
// 005733e0  881c39               mov byte ptr [ecx + edi], bl
// 005733e3  016814               add dword ptr [eax + 0x14], ebp
// 005733e6  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 005733ed  8b7814               mov edi, dword ptr [eax + 0x14]
// 005733f0  8b4808               mov ecx, dword ptr [eax + 8]
// 005733f3  881c0f               mov byte ptr [edi + ecx], bl
// 005733f6  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 005733fc  016814               add dword ptr [eax + 0x14], ebp
// 005733ff  b110                 mov cl, 0x10
// 00573401  2acb                 sub cl, bl
// 00573403  66d3ee               shr si, cl
// 00573406  83c3f2               add ebx, -0xe
// 00573409  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 0057340f  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00573416  e90b020000           jmp 0x573626
// 0057341b  d3e6                 shl esi, cl
// 0057341d  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 00573424  83c102               add ecx, 2
// 00573427  e9f4010000           jmp 0x573620
// 0057342c  83fe0a               cmp esi, 0xa
// 0057342f  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00573435  bb10000000           mov ebx, 0x10
// 0057343a  0f8ff4000000         jg 0x573534
// 00573440  0fb7b8c20a0000       movzx edi, word ptr [eax + 0xac2]
// 00573447  2bdf                 sub ebx, edi
// 00573449  3bcb                 cmp ecx, ebx
// 0057344b  897c241c             mov dword ptr [esp + 0x1c], edi
// 0057344f  7e5a                 jle 0x5734ab
// 00573451  0fb7b0c00a0000       movzx esi, word ptr [eax + 0xac0]
// 00573458  8bfe                 mov edi, esi
// 0057345a  d3e7                 shl edi, cl
// 0057345c  8b4808               mov ecx, dword ptr [eax + 8]
// 0057345f  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 00573466  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057346d  8b7814               mov edi, dword ptr [eax + 0x14]
// 00573470  881c39               mov byte ptr [ecx + edi], bl
// 00573473  016814               add dword ptr [eax + 0x14], ebp
// 00573476  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057347d  8b4808               mov ecx, dword ptr [eax + 8]
// 00573480  8b7814               mov edi, dword ptr [eax + 0x14]
// 00573483  881c0f               mov byte ptr [edi + ecx], bl
// 00573486  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0057348c  016814               add dword ptr [eax + 0x14], ebp
// 0057348f  b110                 mov cl, 0x10
// 00573491  2acb                 sub cl, bl
// 00573493  66d3ee               shr si, cl
// 00573496  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057349a  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0057349e  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 005734a5  8b742410             mov esi, dword ptr [esp + 0x10]
// 005734a9  eb17                 jmp 0x5734c2
// 005734ab  668bb8c00a0000       mov di, word ptr [eax + 0xac0]
// 005734b2  66d3e7               shl di, cl
// 005734b5  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 005734bc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005734c0  03cf                 add ecx, edi
// 005734c2  83c6fd               add esi, -3
// 005734c5  83f90d               cmp ecx, 0xd
// 005734c8  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 005734ce  7e53                 jle 0x573523
// 005734d0  8bfe                 mov edi, esi
// 005734d2  d3e7                 shl edi, cl
// 005734d4  8b4808               mov ecx, dword ptr [eax + 8]
// 005734d7  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 005734de  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 005734e5  8b7814               mov edi, dword ptr [eax + 0x14]
// 005734e8  881c39               mov byte ptr [ecx + edi], bl
// 005734eb  016814               add dword ptr [eax + 0x14], ebp
// 005734ee  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 005734f5  8b7814               mov edi, dword ptr [eax + 0x14]
// 005734f8  8b4808               mov ecx, dword ptr [eax + 8]
// 005734fb  881c0f               mov byte ptr [edi + ecx], bl
// 005734fe  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00573504  016814               add dword ptr [eax + 0x14], ebp
// 00573507  b110                 mov cl, 0x10
// 00573509  2acb                 sub cl, bl
// 0057350b  66d3ee               shr si, cl
// 0057350e  83c3f3               add ebx, -0xd
// 00573511  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 00573517  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057351e  e903010000           jmp 0x573626
// 00573523  d3e6                 shl esi, cl
// 00573525  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 0057352c  83c103               add ecx, 3
// 0057352f  e9ec000000           jmp 0x573620
// 00573534  0fb7b8c60a0000       movzx edi, word ptr [eax + 0xac6]
// 0057353b  2bdf                 sub ebx, edi
// 0057353d  3bcb                 cmp ecx, ebx
// 0057353f  897c241c             mov dword ptr [esp + 0x1c], edi
// 00573543  7e5a                 jle 0x57359f
// 00573545  0fb7b0c40a0000       movzx esi, word ptr [eax + 0xac4]
// 0057354c  8bfe                 mov edi, esi
// 0057354e  d3e7                 shl edi, cl
// 00573550  8b4808               mov ecx, dword ptr [eax + 8]
// 00573553  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0057355a  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00573561  8b7814               mov edi, dword ptr [eax + 0x14]
// 00573564  881c39               mov byte ptr [ecx + edi], bl
// 00573567  016814               add dword ptr [eax + 0x14], ebp
// 0057356a  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00573571  8b4808               mov ecx, dword ptr [eax + 8]
// 00573574  8b7814               mov edi, dword ptr [eax + 0x14]
// 00573577  881c0f               mov byte ptr [edi + ecx], bl
// 0057357a  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 00573580  016814               add dword ptr [eax + 0x14], ebp
// 00573583  b110                 mov cl, 0x10
// 00573585  2acb                 sub cl, bl
// 00573587  66d3ee               shr si, cl
// 0057358a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057358e  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 00573592  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00573599  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057359d  eb17                 jmp 0x5735b6
// 0057359f  668bb8c40a0000       mov di, word ptr [eax + 0xac4]
// 005735a6  66d3e7               shl di, cl
// 005735a9  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 005735b0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005735b4  03cf                 add ecx, edi
// 005735b6  83c6f5               add esi, -0xb
// 005735b9  83f909               cmp ecx, 9
// 005735bc  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 005735c2  7e50                 jle 0x573614
// 005735c4  8bfe                 mov edi, esi
// 005735c6  d3e7                 shl edi, cl
// 005735c8  8b4808               mov ecx, dword ptr [eax + 8]
// 005735cb  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 005735d2  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 005735d9  8b7814               mov edi, dword ptr [eax + 0x14]
// 005735dc  881c39               mov byte ptr [ecx + edi], bl
// 005735df  016814               add dword ptr [eax + 0x14], ebp
// 005735e2  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 005735e9  8b7814               mov edi, dword ptr [eax + 0x14]
// 005735ec  8b4808               mov ecx, dword ptr [eax + 8]
// 005735ef  881c0f               mov byte ptr [edi + ecx], bl
// 005735f2  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 005735f8  016814               add dword ptr [eax + 0x14], ebp
// 005735fb  b110                 mov cl, 0x10
// 005735fd  2acb                 sub cl, bl
// 005735ff  66d3ee               shr si, cl
// 00573602  83c3f7               add ebx, -9
// 00573605  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 0057360b  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00573612  eb12                 jmp 0x573626
// 00573614  d3e6                 shl esi, cl
// 00573616  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 0057361d  83c107               add ecx, 7
// 00573620  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00573626  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057362a  33f6                 xor esi, esi
// 0057362c  8954241c             mov dword ptr [esp + 0x1c], edx
// 00573630  85c9                 test ecx, ecx
// 00573632  750a                 jne 0x57363e
// 00573634  b98a000000           mov ecx, 0x8a
// 00573639  8d7e03               lea edi, [esi + 3]
// 0057363c  eb16                 jmp 0x573654
// 0057363e  3bd1                 cmp edx, ecx
// 00573640  750a                 jne 0x57364c
// 00573642  b906000000           mov ecx, 6
// 00573647  8d79fd               lea edi, [ecx - 3]
// 0057364a  eb08                 jmp 0x573654
// 0057364c  b907000000           mov ecx, 7
// 00573651  8d79fd               lea edi, [ecx - 3]
// 00573654  8344241804           add dword ptr [esp + 0x18], 4
// 00573659  296c2420             sub dword ptr [esp + 0x20], ebp
// 0057365d  0f854dfbffff         jne 0x5731b0
// 00573663  5f                   pop edi
// 00573664  5e                   pop esi
// 00573665  5d                   pop ebp
// 00573666  5b                   pop ebx
// 00573667  83c418               add esp, 0x18
// 0057366a  c3                   ret 
// library zlib-1.2.3/trees.c (function _send_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
