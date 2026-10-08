// from server: 100% by auto
// roc 2012-06 00a784d0  unit: CXTPRibbonSystemPopupBar  size: 1015 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a784d0
//
// 00a784d0  51                   push ecx
// 00a784d1  53                   push ebx
// 00a784d2  55                   push ebp
// 00a784d3  56                   push esi
// 00a784d4  57                   push edi
// 00a784d5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a784d9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a784e1  bd01000000           mov ebp, 1
// 00a784e6  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a784e9  3d06010000           cmp eax, 0x106
// 00a784ee  7323                 jae 0xa78513
// 00a784f0  e8abfaffff           call 0xa77fa0
// 00a784f5  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a784f8  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a784fc  3d06010000           cmp eax, 0x106
// 00a78501  7308                 jae 0xa7850b
// 00a78503  85f6                 test esi, esi
// 00a78505  0f845e020000         je 0xa78769
// 00a7850b  85c0                 test eax, eax
// 00a7850d  0f8409030000         je 0xa7881c
// 00a78513  83f803               cmp eax, 3
// 00a78516  724d                 jb 0xa78565
// 00a78518  8b4748               mov eax, dword ptr [edi + 0x48]
// 00a7851b  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00a7851e  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a78521  8b7734               mov esi, dword ptr [edi + 0x34]
// 00a78524  d3e0                 shl eax, cl
// 00a78526  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00a78529  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 00a7852e  33c1                 xor eax, ecx
// 00a78530  234754               and eax, dword ptr [edi + 0x54]
// 00a78533  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00a78536  894748               mov dword ptr [edi + 0x48], eax
// 00a78539  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 00a7853d  23f2                 and esi, edx
// 00a7853f  8b5740               mov edx, dword ptr [edi + 0x40]
// 00a78542  66890472             mov word ptr [edx + esi*2], ax
// 00a78546  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00a78549  234f34               and ecx, dword ptr [edi + 0x34]
// 00a7854c  8b5740               mov edx, dword ptr [edi + 0x40]
// 00a7854f  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 00a78553  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00a78556  8b5744               mov edx, dword ptr [edi + 0x44]
// 00a78559  89442410             mov dword ptr [esp + 0x10], eax
// 00a7855d  0fb7476c             movzx eax, word ptr [edi + 0x6c]
// 00a78561  6689044a             mov word ptr [edx + ecx*2], ax
// 00a78565  8b5770               mov edx, dword ptr [edi + 0x70]
// 00a78568  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00a7856b  895764               mov dword ptr [edi + 0x64], edx
// 00a7856e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a78572  bb02000000           mov ebx, 2
// 00a78577  894f78               mov dword ptr [edi + 0x78], ecx
// 00a7857a  895f60               mov dword ptr [edi + 0x60], ebx
// 00a7857d  85d2                 test edx, edx
// 00a7857f  7471                 je 0xa785f2
// 00a78581  8bc1                 mov eax, ecx
// 00a78583  3b8780000000         cmp eax, dword ptr [edi + 0x80]
// 00a78589  7367                 jae 0xa785f2
// 00a7858b  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a7858e  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00a78591  2bc2                 sub eax, edx
// 00a78593  81e906010000         sub ecx, 0x106
// 00a78599  3bc1                 cmp eax, ecx
// 00a7859b  7755                 ja 0xa785f2
// 00a7859d  8b8f88000000         mov ecx, dword ptr [edi + 0x88]
// 00a785a3  3bcb                 cmp ecx, ebx
// 00a785a5  740e                 je 0xa785b5
// 00a785a7  83f903               cmp ecx, 3
// 00a785aa  740e                 je 0xa785ba
// 00a785ac  8bc2                 mov eax, edx
// 00a785ae  e82d95bdff           call 0x651ae0
// 00a785b3  eb14                 jmp 0xa785c9
// 00a785b5  83f903               cmp ecx, 3
// 00a785b8  7512                 jne 0xa785cc
// 00a785ba  3bc5                 cmp eax, ebp
// 00a785bc  750e                 jne 0xa785cc
// 00a785be  52                   push edx
// 00a785bf  8bf7                 mov esi, edi
// 00a785c1  e87a96bdff           call 0x651c40
// 00a785c6  83c404               add esp, 4
// 00a785c9  894760               mov dword ptr [edi + 0x60], eax
// 00a785cc  8b4760               mov eax, dword ptr [edi + 0x60]
// 00a785cf  83f805               cmp eax, 5
// 00a785d2  771e                 ja 0xa785f2
// 00a785d4  39af88000000         cmp dword ptr [edi + 0x88], ebp
// 00a785da  7413                 je 0xa785ef
// 00a785dc  83f803               cmp eax, 3
// 00a785df  7511                 jne 0xa785f2
// 00a785e1  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a785e4  2b5770               sub edx, dword ptr [edi + 0x70]
// 00a785e7  81fa00100000         cmp edx, 0x1000
// 00a785ed  7603                 jbe 0xa785f2
// 00a785ef  895f60               mov dword ptr [edi + 0x60], ebx
// 00a785f2  8b4778               mov eax, dword ptr [edi + 0x78]
// 00a785f5  83f803               cmp eax, 3
// 00a785f8  0f8273010000         jb 0xa78771
// 00a785fe  394760               cmp dword ptr [edi + 0x60], eax
// 00a78601  0f876a010000         ja 0xa78771
// 00a78607  668b576c             mov dx, word ptr [edi + 0x6c]
// 00a7860b  662b5764             sub dx, word ptr [edi + 0x64]
// 00a7860f  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a78612  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 00a78615  8b9fa4160000         mov ebx, dword ptr [edi + 0x16a4]
// 00a7861b  8d7408fd             lea esi, [eax + ecx - 3]
// 00a7861f  8a4778               mov al, byte ptr [edi + 0x78]
// 00a78622  662bd5               sub dx, bp
// 00a78625  0fb7ca               movzx ecx, dx
// 00a78628  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 00a7862e  66890c53             mov word ptr [ebx + edx*2], cx
// 00a78632  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 00a78638  8b9fa0160000         mov ebx, dword ptr [edi + 0x16a0]
// 00a7863e  2c03                 sub al, 3
// 00a78640  88041a               mov byte ptr [edx + ebx], al
// 00a78643  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 00a78649  0fb6c0               movzx eax, al
// 00a7864c  0fb69028b9b800       movzx edx, byte ptr [eax + 0xb8b928]
// 00a78653  6601ac9798040000     add word ptr [edi + edx*4 + 0x498], bp
// 00a7865b  8d849798040000       lea eax, [edi + edx*4 + 0x498]
// 00a78662  81c1ffff0000         add ecx, 0xffff
// 00a78668  b800010000           mov eax, 0x100
// 00a7866d  663bc8               cmp cx, ax
// 00a78670  730c                 jae 0xa7867e
// 00a78672  0fb7c9               movzx ecx, cx
// 00a78675  0fb68128b7b800       movzx eax, byte ptr [ecx + 0xb8b728]
// 00a7867c  eb0d                 jmp 0xa7868b
// 00a7867e  0fb7d1               movzx edx, cx
// 00a78681  c1ea07               shr edx, 7
// 00a78684  0fb68228b8b800       movzx eax, byte ptr [edx + 0xb8b828]
// 00a7868b  6601ac8788090000     add word ptr [edi + eax*4 + 0x988], bp
// 00a78693  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 00a78699  2bc5                 sub eax, ebp
// 00a7869b  33db                 xor ebx, ebx
// 00a7869d  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 00a786a3  8b4778               mov eax, dword ptr [edi + 0x78]
// 00a786a6  0f94c3               sete bl
// 00a786a9  8bcd                 mov ecx, ebp
// 00a786ab  2bc8                 sub ecx, eax
// 00a786ad  014f74               add dword ptr [edi + 0x74], ecx
// 00a786b0  83c0fe               add eax, -2
// 00a786b3  894778               mov dword ptr [edi + 0x78], eax
// 00a786b6  016f6c               add dword ptr [edi + 0x6c], ebp
// 00a786b9  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a786bc  3bd6                 cmp edx, esi
// 00a786be  774f                 ja 0xa7870f
// 00a786c0  8b4748               mov eax, dword ptr [edi + 0x48]
// 00a786c3  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00a786c6  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 00a786c9  d3e0                 shl eax, cl
// 00a786cb  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00a786ce  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 00a786d3  33c1                 xor eax, ecx
// 00a786d5  234754               and eax, dword ptr [edi + 0x54]
// 00a786d8  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00a786db  894748               mov dword ptr [edi + 0x48], eax
// 00a786de  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 00a786e2  23ea                 and ebp, edx
// 00a786e4  8b5740               mov edx, dword ptr [edi + 0x40]
// 00a786e7  6689046a             mov word ptr [edx + ebp*2], ax
// 00a786eb  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00a786ee  234f34               and ecx, dword ptr [edi + 0x34]
// 00a786f1  8b5740               mov edx, dword ptr [edi + 0x40]
// 00a786f4  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 00a786f8  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00a786fb  8b5744               mov edx, dword ptr [edi + 0x44]
// 00a786fe  89442410             mov dword ptr [esp + 0x10], eax
// 00a78702  0fb7476c             movzx eax, word ptr [edi + 0x6c]
// 00a78706  6689044a             mov word ptr [edx + ecx*2], ax
// 00a7870a  bd01000000           mov ebp, 1
// 00a7870f  834778ff             add dword ptr [edi + 0x78], -1
// 00a78713  75a1                 jne 0xa786b6
// 00a78715  016f6c               add dword ptr [edi + 0x6c], ebp
// 00a78718  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a7871b  c7476800000000       mov dword ptr [edi + 0x68], 0
// 00a78722  c7476002000000       mov dword ptr [edi + 0x60], 2
// 00a78729  85db                 test ebx, ebx
// 00a7872b  0f84b5fdffff         je 0xa784e6
// 00a78731  8b575c               mov edx, dword ptr [edi + 0x5c]
// 00a78734  85d2                 test edx, edx
// 00a78736  7c07                 jl 0xa7873f
// 00a78738  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00a7873b  03ca                 add ecx, edx
// 00a7873d  eb02                 jmp 0xa78741
// 00a7873f  33c9                 xor ecx, ecx
// 00a78741  6a00                 push 0
// 00a78743  2bc2                 sub eax, edx
// 00a78745  50                   push eax
// 00a78746  51                   push ecx
// 00a78747  57                   push edi
// 00a78748  e81375beff           call 0x65fc60
// 00a7874d  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00a78750  8b07                 mov eax, dword ptr [edi]
// 00a78752  83c410               add esp, 0x10
// 00a78755  894f5c               mov dword ptr [edi + 0x5c], ecx
// 00a78758  e883f7ffff           call 0xa77ee0
// 00a7875d  8b17                 mov edx, dword ptr [edi]
// 00a7875f  837a1000             cmp dword ptr [edx + 0x10], 0
// 00a78763  0f857dfdffff         jne 0xa784e6
// 00a78769  5f                   pop edi
// 00a7876a  5e                   pop esi
// 00a7876b  5d                   pop ebp
// 00a7876c  33c0                 xor eax, eax
// 00a7876e  5b                   pop ebx
// 00a7876f  59                   pop ecx
// 00a78770  c3                   ret 
// 00a78771  837f6800             cmp dword ptr [edi + 0x68], 0
// 00a78775  0f8493000000         je 0xa7880e
// 00a7877b  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a7877e  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00a78781  8a4408ff             mov al, byte ptr [eax + ecx - 1]
// 00a78785  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 00a7878b  8b8fa4160000         mov ecx, dword ptr [edi + 0x16a4]
// 00a78791  33f6                 xor esi, esi
// 00a78793  66893451             mov word ptr [ecx + edx*2], si
// 00a78797  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 00a7879d  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 00a787a3  88040a               mov byte ptr [edx + ecx], al
// 00a787a6  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 00a787ac  0fb6d0               movzx edx, al
// 00a787af  6601ac9794000000     add word ptr [edi + edx*4 + 0x94], bp
// 00a787b7  8d849794000000       lea eax, [edi + edx*4 + 0x94]
// 00a787be  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 00a787c4  2bc5                 sub eax, ebp
// 00a787c6  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 00a787cc  752f                 jne 0xa787fd
// 00a787ce  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 00a787d1  85c9                 test ecx, ecx
// 00a787d3  7c07                 jl 0xa787dc
// 00a787d5  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a787d8  03c1                 add eax, ecx
// 00a787da  eb02                 jmp 0xa787de
// 00a787dc  33c0                 xor eax, eax
// 00a787de  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a787e1  6a00                 push 0
// 00a787e3  2bd1                 sub edx, ecx
// 00a787e5  52                   push edx
// 00a787e6  50                   push eax
// 00a787e7  57                   push edi
// 00a787e8  e87374beff           call 0x65fc60
// 00a787ed  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a787f0  89475c               mov dword ptr [edi + 0x5c], eax
// 00a787f3  8b07                 mov eax, dword ptr [edi]
// 00a787f5  83c410               add esp, 0x10
// 00a787f8  e8e3f6ffff           call 0xa77ee0
// 00a787fd  8b0f                 mov ecx, dword ptr [edi]
// 00a787ff  016f6c               add dword ptr [edi + 0x6c], ebp
// 00a78802  ff4f74               dec dword ptr [edi + 0x74]
// 00a78805  83791000             cmp dword ptr [ecx + 0x10], 0
// 00a78809  e955ffffff           jmp 0xa78763
// 00a7880e  016f6c               add dword ptr [edi + 0x6c], ebp
// 00a78811  ff4f74               dec dword ptr [edi + 0x74]
// 00a78814  896f68               mov dword ptr [edi + 0x68], ebp
// 00a78817  e9cafcffff           jmp 0xa784e6
// 00a7881c  837f6800             cmp dword ptr [edi + 0x68], 0
// 00a78820  7446                 je 0xa78868
// 00a78822  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a78825  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a78828  8a4402ff             mov al, byte ptr [edx + eax - 1]
// 00a7882c  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 00a78832  8b97a4160000         mov edx, dword ptr [edi + 0x16a4]
// 00a78838  33db                 xor ebx, ebx
// 00a7883a  66891c4a             mov word ptr [edx + ecx*2], bx
// 00a7883e  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 00a78844  8b8f98160000         mov ecx, dword ptr [edi + 0x1698]
// 00a7884a  880411               mov byte ptr [ecx + edx], al
// 00a7884d  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 00a78853  0fb6c0               movzx eax, al
// 00a78856  6601ac8794000000     add word ptr [edi + eax*4 + 0x94], bp
// 00a7885e  8d848794000000       lea eax, [edi + eax*4 + 0x94]
// 00a78865  895f68               mov dword ptr [edi + 0x68], ebx
// 00a78868  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 00a7886b  85c9                 test ecx, ecx
// 00a7886d  7c07                 jl 0xa78876
// 00a7886f  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a78872  03c1                 add eax, ecx
// 00a78874  eb02                 jmp 0xa78878
// 00a78876  33c0                 xor eax, eax
// 00a78878  33d2                 xor edx, edx
// 00a7887a  83fe04               cmp esi, 4
// 00a7887d  0f94c2               sete dl
// 00a78880  52                   push edx
// 00a78881  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a78884  2bd1                 sub edx, ecx
// 00a78886  52                   push edx
// 00a78887  50                   push eax
// 00a78888  57                   push edi
// 00a78889  e8d273beff           call 0x65fc60
// 00a7888e  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a78891  89475c               mov dword ptr [edi + 0x5c], eax
// 00a78894  8b07                 mov eax, dword ptr [edi]
// 00a78896  83c410               add esp, 0x10
// 00a78899  e842f6ffff           call 0xa77ee0
// 00a7889e  8b0f                 mov ecx, dword ptr [edi]
// 00a788a0  33c0                 xor eax, eax
// 00a788a2  394110               cmp dword ptr [ecx + 0x10], eax
// 00a788a5  7510                 jne 0xa788b7
// 00a788a7  83fe04               cmp esi, 4
// 00a788aa  0f95c0               setne al
// 00a788ad  5f                   pop edi
// 00a788ae  5e                   pop esi
// 00a788af  5d                   pop ebp
// 00a788b0  5b                   pop ebx
// 00a788b1  48                   dec eax
// 00a788b2  83e002               and eax, 2
// 00a788b5  59                   pop ecx
// 00a788b6  c3                   ret 
// 00a788b7  83fe04               cmp esi, 4
// 00a788ba  0f94c0               sete al
// 00a788bd  5f                   pop edi
// 00a788be  5e                   pop esi
// 00a788bf  5d                   pop ebp
// 00a788c0  5b                   pop ebx
// 00a788c1  8d440001             lea eax, [eax + eax + 1]
// 00a788c5  59                   pop ecx
// 00a788c6  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_slow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
