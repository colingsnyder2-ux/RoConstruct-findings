// roc 2012-06 00a781b0  unit: CXTPRibbonSystemPopupBar  size: 791 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a781b0
//
// 00a781b0  53                   push ebx
// 00a781b1  55                   push ebp
// 00a781b2  56                   push esi
// 00a781b3  33ed                 xor ebp, ebp
// 00a781b5  57                   push edi
// 00a781b6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a781ba  8d5d01               lea ebx, [ebp + 1]
// 00a781bd  8d4900               lea ecx, [ecx]
// 00a781c0  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a781c3  3d06010000           cmp eax, 0x106
// 00a781c8  7323                 jae 0xa781ed
// 00a781ca  e8d1fdffff           call 0xa77fa0
// 00a781cf  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a781d2  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a781d6  3d06010000           cmp eax, 0x106
// 00a781db  7308                 jae 0xa781e5
// 00a781dd  85f6                 test esi, esi
// 00a781df  0f847e020000         je 0xa78463
// 00a781e5  85c0                 test eax, eax
// 00a781e7  0f847d020000         je 0xa7846a
// 00a781ed  83f803               cmp eax, 3
// 00a781f0  7249                 jb 0xa7823b
// 00a781f2  8b4748               mov eax, dword ptr [edi + 0x48]
// 00a781f5  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00a781f8  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a781fb  8b7734               mov esi, dword ptr [edi + 0x34]
// 00a781fe  d3e0                 shl eax, cl
// 00a78200  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00a78203  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 00a78208  33c1                 xor eax, ecx
// 00a7820a  234754               and eax, dword ptr [edi + 0x54]
// 00a7820d  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00a78210  894748               mov dword ptr [edi + 0x48], eax
// 00a78213  668b0441             mov ax, word ptr [ecx + eax*2]
// 00a78217  23f2                 and esi, edx
// 00a78219  8b5740               mov edx, dword ptr [edi + 0x40]
// 00a7821c  66890472             mov word ptr [edx + esi*2], ax
// 00a78220  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00a78223  234f34               and ecx, dword ptr [edi + 0x34]
// 00a78226  8b5740               mov edx, dword ptr [edi + 0x40]
// 00a78229  0fb72c4a             movzx ebp, word ptr [edx + ecx*2]
// 00a7822d  8b4748               mov eax, dword ptr [edi + 0x48]
// 00a78230  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00a78233  668b576c             mov dx, word ptr [edi + 0x6c]
// 00a78237  66891441             mov word ptr [ecx + eax*2], dx
// 00a7823b  85ed                 test ebp, ebp
// 00a7823d  7442                 je 0xa78281
// 00a7823f  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a78242  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00a78245  2bc5                 sub eax, ebp
// 00a78247  81e906010000         sub ecx, 0x106
// 00a7824d  3bc1                 cmp eax, ecx
// 00a7824f  7730                 ja 0xa78281
// 00a78251  8b8f88000000         mov ecx, dword ptr [edi + 0x88]
// 00a78257  83f902               cmp ecx, 2
// 00a7825a  740e                 je 0xa7826a
// 00a7825c  83f903               cmp ecx, 3
// 00a7825f  740e                 je 0xa7826f
// 00a78261  8bc5                 mov eax, ebp
// 00a78263  e87898bdff           call 0x651ae0
// 00a78268  eb14                 jmp 0xa7827e
// 00a7826a  83f903               cmp ecx, 3
// 00a7826d  7512                 jne 0xa78281
// 00a7826f  3bc3                 cmp eax, ebx
// 00a78271  750e                 jne 0xa78281
// 00a78273  55                   push ebp
// 00a78274  8bf7                 mov esi, edi
// 00a78276  e8c599bdff           call 0x651c40
// 00a7827b  83c404               add esp, 4
// 00a7827e  894760               mov dword ptr [edi + 0x60], eax
// 00a78281  837f6003             cmp dword ptr [edi + 0x60], 3
// 00a78285  0f8238010000         jb 0xa783c3
// 00a7828b  668b576c             mov dx, word ptr [edi + 0x6c]
// 00a7828f  662b5770             sub dx, word ptr [edi + 0x70]
// 00a78293  8a4760               mov al, byte ptr [edi + 0x60]
// 00a78296  8bb7a4160000         mov esi, dword ptr [edi + 0x16a4]
// 00a7829c  0fb7ca               movzx ecx, dx
// 00a7829f  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 00a782a5  66890c56             mov word ptr [esi + edx*2], cx
// 00a782a9  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 00a782af  8bb7a0160000         mov esi, dword ptr [edi + 0x16a0]
// 00a782b5  2c03                 sub al, 3
// 00a782b7  880432               mov byte ptr [edx + esi], al
// 00a782ba  019fa0160000         add dword ptr [edi + 0x16a0], ebx
// 00a782c0  0fb6c0               movzx eax, al
// 00a782c3  0fb69028b9b800       movzx edx, byte ptr [eax + 0xb8b928]
// 00a782ca  66019c9798040000     add word ptr [edi + edx*4 + 0x498], bx
// 00a782d2  8d849798040000       lea eax, [edi + edx*4 + 0x498]
// 00a782d9  81c1ffff0000         add ecx, 0xffff
// 00a782df  b800010000           mov eax, 0x100
// 00a782e4  663bc8               cmp cx, ax
// 00a782e7  730c                 jae 0xa782f5
// 00a782e9  0fb7c9               movzx ecx, cx
// 00a782ec  0fb68128b7b800       movzx eax, byte ptr [ecx + 0xb8b728]
// 00a782f3  eb0d                 jmp 0xa78302
// 00a782f5  0fb7d1               movzx edx, cx
// 00a782f8  c1ea07               shr edx, 7
// 00a782fb  0fb68228b8b800       movzx eax, byte ptr [edx + 0xb8b828]
// 00a78302  66019c8788090000     add word ptr [edi + eax*4 + 0x988], bx
// 00a7830a  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 00a78310  33c9                 xor ecx, ecx
// 00a78312  2bc3                 sub eax, ebx
// 00a78314  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 00a7831a  8b4760               mov eax, dword ptr [edi + 0x60]
// 00a7831d  0f94c1               sete cl
// 00a78320  294774               sub dword ptr [edi + 0x74], eax
// 00a78323  8bf1                 mov esi, ecx
// 00a78325  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 00a78328  3b8780000000         cmp eax, dword ptr [edi + 0x80]
// 00a7832e  7767                 ja 0xa78397
// 00a78330  83f903               cmp ecx, 3
// 00a78333  7262                 jb 0xa78397
// 00a78335  48                   dec eax
// 00a78336  894760               mov dword ptr [edi + 0x60], eax
// 00a78339  8da42400000000       lea esp, [esp]
// 00a78340  015f6c               add dword ptr [edi + 0x6c], ebx
// 00a78343  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a78346  8b6f48               mov ebp, dword ptr [edi + 0x48]
// 00a78349  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00a7834c  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a7834f  0fb6440202           movzx eax, byte ptr [edx + eax + 2]
// 00a78354  d3e5                 shl ebp, cl
// 00a78356  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00a78359  33c5                 xor eax, ebp
// 00a7835b  234754               and eax, dword ptr [edi + 0x54]
// 00a7835e  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 00a78361  23ea                 and ebp, edx
// 00a78363  8b5740               mov edx, dword ptr [edi + 0x40]
// 00a78366  894748               mov dword ptr [edi + 0x48], eax
// 00a78369  668b0441             mov ax, word ptr [ecx + eax*2]
// 00a7836d  6689046a             mov word ptr [edx + ebp*2], ax
// 00a78371  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00a78374  234f34               and ecx, dword ptr [edi + 0x34]
// 00a78377  8b5740               mov edx, dword ptr [edi + 0x40]
// 00a7837a  0fb72c4a             movzx ebp, word ptr [edx + ecx*2]
// 00a7837e  8b4748               mov eax, dword ptr [edi + 0x48]
// 00a78381  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00a78384  668b576c             mov dx, word ptr [edi + 0x6c]
// 00a78388  66891441             mov word ptr [ecx + eax*2], dx
// 00a7838c  834760ff             add dword ptr [edi + 0x60], -1
// 00a78390  75ae                 jne 0xa78340
// 00a78392  e986000000           jmp 0xa7841d
// 00a78397  01476c               add dword ptr [edi + 0x6c], eax
// 00a7839a  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a7839d  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00a783a0  8d1408               lea edx, [eax + ecx]
// 00a783a3  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00a783a6  c7476000000000       mov dword ptr [edi + 0x60], 0
// 00a783ad  0fb602               movzx eax, byte ptr [edx]
// 00a783b0  894748               mov dword ptr [edi + 0x48], eax
// 00a783b3  0fb65201             movzx edx, byte ptr [edx + 1]
// 00a783b7  d3e0                 shl eax, cl
// 00a783b9  33c2                 xor eax, edx
// 00a783bb  234754               and eax, dword ptr [edi + 0x54]
// 00a783be  894748               mov dword ptr [edi + 0x48], eax
// 00a783c1  eb5d                 jmp 0xa78420
// 00a783c3  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a783c6  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00a783c9  8a0408               mov al, byte ptr [eax + ecx]
// 00a783cc  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 00a783d2  8b8fa4160000         mov ecx, dword ptr [edi + 0x16a4]
// 00a783d8  33f6                 xor esi, esi
// 00a783da  66893451             mov word ptr [ecx + edx*2], si
// 00a783de  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 00a783e4  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 00a783ea  88040a               mov byte ptr [edx + ecx], al
// 00a783ed  019fa0160000         add dword ptr [edi + 0x16a0], ebx
// 00a783f3  0fb6d0               movzx edx, al
// 00a783f6  66019c9794000000     add word ptr [edi + edx*4 + 0x94], bx
// 00a783fe  8d849794000000       lea eax, [edi + edx*4 + 0x94]
// 00a78405  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 00a7840b  33c9                 xor ecx, ecx
// 00a7840d  2bc3                 sub eax, ebx
// 00a7840f  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 00a78415  0f94c1               sete cl
// 00a78418  ff4f74               dec dword ptr [edi + 0x74]
// 00a7841b  8bf1                 mov esi, ecx
// 00a7841d  015f6c               add dword ptr [edi + 0x6c], ebx
// 00a78420  85f6                 test esi, esi
// 00a78422  0f8498fdffff         je 0xa781c0
// 00a78428  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 00a7842b  85c9                 test ecx, ecx
// 00a7842d  7c07                 jl 0xa78436
// 00a7842f  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a78432  03c1                 add eax, ecx
// 00a78434  eb02                 jmp 0xa78438
// 00a78436  33c0                 xor eax, eax
// 00a78438  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a7843b  6a00                 push 0
// 00a7843d  2bd1                 sub edx, ecx
// 00a7843f  52                   push edx
// 00a78440  50                   push eax
// 00a78441  57                   push edi
// 00a78442  e81978beff           call 0x65fc60
// 00a78447  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a7844a  89475c               mov dword ptr [edi + 0x5c], eax
// 00a7844d  8b07                 mov eax, dword ptr [edi]
// 00a7844f  83c410               add esp, 0x10
// 00a78452  e889faffff           call 0xa77ee0
// 00a78457  8b0f                 mov ecx, dword ptr [edi]
// 00a78459  83791000             cmp dword ptr [ecx + 0x10], 0
// 00a7845d  0f855dfdffff         jne 0xa781c0
// 00a78463  5f                   pop edi
// 00a78464  5e                   pop esi
// 00a78465  5d                   pop ebp
// 00a78466  33c0                 xor eax, eax
// 00a78468  5b                   pop ebx
// 00a78469  c3                   ret 
// 00a7846a  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 00a7846d  85c9                 test ecx, ecx
// 00a7846f  7c07                 jl 0xa78478
// 00a78471  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a78474  03c1                 add eax, ecx
// 00a78476  eb02                 jmp 0xa7847a
// 00a78478  33c0                 xor eax, eax
// 00a7847a  33d2                 xor edx, edx
// 00a7847c  83fe04               cmp esi, 4
// 00a7847f  0f94c2               sete dl
// 00a78482  52                   push edx
// 00a78483  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a78486  2bd1                 sub edx, ecx
// 00a78488  52                   push edx
// 00a78489  50                   push eax
// 00a7848a  57                   push edi
// 00a7848b  e8d077beff           call 0x65fc60
// 00a78490  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a78493  89475c               mov dword ptr [edi + 0x5c], eax
// 00a78496  8b07                 mov eax, dword ptr [edi]
// 00a78498  83c410               add esp, 0x10
// 00a7849b  e840faffff           call 0xa77ee0
// 00a784a0  8b0f                 mov ecx, dword ptr [edi]
// 00a784a2  33c0                 xor eax, eax
// 00a784a4  394110               cmp dword ptr [ecx + 0x10], eax
// 00a784a7  750f                 jne 0xa784b8
// 00a784a9  83fe04               cmp esi, 4
// 00a784ac  0f95c0               setne al
// 00a784af  5f                   pop edi
// 00a784b0  5e                   pop esi
// 00a784b1  5d                   pop ebp
// 00a784b2  5b                   pop ebx
// 00a784b3  48                   dec eax
// 00a784b4  83e002               and eax, 2
// 00a784b7  c3                   ret 
// 00a784b8  83fe04               cmp esi, 4
// 00a784bb  0f94c0               sete al
// 00a784be  5f                   pop edi
// 00a784bf  5e                   pop esi
// 00a784c0  5d                   pop ebp
// 00a784c1  5b                   pop ebx
// 00a784c2  8d440001             lea eax, [eax + eax + 1]
// 00a784c6  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
