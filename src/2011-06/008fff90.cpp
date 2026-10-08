// from server: 100% by auto
// roc 2011-06 008fff90  unit: CXTPRibbonSystemPopupBar  size: 791 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fff90
//
// 008fff90  53                   push ebx
// 008fff91  55                   push ebp
// 008fff92  56                   push esi
// 008fff93  33ed                 xor ebp, ebp
// 008fff95  57                   push edi
// 008fff96  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008fff9a  8d5d01               lea ebx, [ebp + 1]
// 008fff9d  8d4900               lea ecx, [ecx]
// 008fffa0  8b4774               mov eax, dword ptr [edi + 0x74]
// 008fffa3  3d06010000           cmp eax, 0x106
// 008fffa8  7323                 jae 0x8fffcd
// 008fffaa  e8d1fdffff           call 0x8ffd80
// 008fffaf  8b4774               mov eax, dword ptr [edi + 0x74]
// 008fffb2  8b742418             mov esi, dword ptr [esp + 0x18]
// 008fffb6  3d06010000           cmp eax, 0x106
// 008fffbb  7308                 jae 0x8fffc5
// 008fffbd  85f6                 test esi, esi
// 008fffbf  0f847e020000         je 0x900243
// 008fffc5  85c0                 test eax, eax
// 008fffc7  0f847d020000         je 0x90024a
// 008fffcd  83f803               cmp eax, 3
// 008fffd0  7249                 jb 0x90001b
// 008fffd2  8b4748               mov eax, dword ptr [edi + 0x48]
// 008fffd5  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 008fffd8  8b576c               mov edx, dword ptr [edi + 0x6c]
// 008fffdb  8b7734               mov esi, dword ptr [edi + 0x34]
// 008fffde  d3e0                 shl eax, cl
// 008fffe0  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 008fffe3  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 008fffe8  33c1                 xor eax, ecx
// 008fffea  234754               and eax, dword ptr [edi + 0x54]
// 008fffed  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 008ffff0  894748               mov dword ptr [edi + 0x48], eax
// 008ffff3  668b0441             mov ax, word ptr [ecx + eax*2]
// 008ffff7  23f2                 and esi, edx
// 008ffff9  8b5740               mov edx, dword ptr [edi + 0x40]
// 008ffffc  66890472             mov word ptr [edx + esi*2], ax
// 00900000  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00900003  234f34               and ecx, dword ptr [edi + 0x34]
// 00900006  8b5740               mov edx, dword ptr [edi + 0x40]
// 00900009  0fb72c4a             movzx ebp, word ptr [edx + ecx*2]
// 0090000d  8b4748               mov eax, dword ptr [edi + 0x48]
// 00900010  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00900013  668b576c             mov dx, word ptr [edi + 0x6c]
// 00900017  66891441             mov word ptr [ecx + eax*2], dx
// 0090001b  85ed                 test ebp, ebp
// 0090001d  7442                 je 0x900061
// 0090001f  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00900022  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00900025  2bc5                 sub eax, ebp
// 00900027  81e906010000         sub ecx, 0x106
// 0090002d  3bc1                 cmp eax, ecx
// 0090002f  7730                 ja 0x900061
// 00900031  8b8f88000000         mov ecx, dword ptr [edi + 0x88]
// 00900037  83f902               cmp ecx, 2
// 0090003a  740e                 je 0x90004a
// 0090003c  83f903               cmp ecx, 3
// 0090003f  740e                 je 0x90004f
// 00900041  8bc5                 mov eax, ebp
// 00900043  e8d8fbffff           call 0x8ffc20
// 00900048  eb14                 jmp 0x90005e
// 0090004a  83f903               cmp ecx, 3
// 0090004d  7512                 jne 0x900061
// 0090004f  3bc3                 cmp eax, ebx
// 00900051  750e                 jne 0x900061
// 00900053  55                   push ebp
// 00900054  8bf7                 mov esi, edi
// 00900056  e8d564c6ff           call 0x566530
// 0090005b  83c404               add esp, 4
// 0090005e  894760               mov dword ptr [edi + 0x60], eax
// 00900061  837f6003             cmp dword ptr [edi + 0x60], 3
// 00900065  0f8238010000         jb 0x9001a3
// 0090006b  668b576c             mov dx, word ptr [edi + 0x6c]
// 0090006f  662b5770             sub dx, word ptr [edi + 0x70]
// 00900073  8a4760               mov al, byte ptr [edi + 0x60]
// 00900076  8bb7a4160000         mov esi, dword ptr [edi + 0x16a4]
// 0090007c  0fb7ca               movzx ecx, dx
// 0090007f  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 00900085  66890c56             mov word ptr [esi + edx*2], cx
// 00900089  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 0090008f  8bb7a0160000         mov esi, dword ptr [edi + 0x16a0]
// 00900095  2c03                 sub al, 3
// 00900097  880432               mov byte ptr [edx + esi], al
// 0090009a  019fa0160000         add dword ptr [edi + 0x16a0], ebx
// 009000a0  0fb6c0               movzx eax, al
// 009000a3  0fb690d87aa800       movzx edx, byte ptr [eax + 0xa87ad8]
// 009000aa  66019c9798040000     add word ptr [edi + edx*4 + 0x498], bx
// 009000b2  8d849798040000       lea eax, [edi + edx*4 + 0x498]
// 009000b9  81c1ffff0000         add ecx, 0xffff
// 009000bf  b800010000           mov eax, 0x100
// 009000c4  663bc8               cmp cx, ax
// 009000c7  730c                 jae 0x9000d5
// 009000c9  0fb7c9               movzx ecx, cx
// 009000cc  0fb681d878a800       movzx eax, byte ptr [ecx + 0xa878d8]
// 009000d3  eb0d                 jmp 0x9000e2
// 009000d5  0fb7d1               movzx edx, cx
// 009000d8  c1ea07               shr edx, 7
// 009000db  0fb682d879a800       movzx eax, byte ptr [edx + 0xa879d8]
// 009000e2  66019c8788090000     add word ptr [edi + eax*4 + 0x988], bx
// 009000ea  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 009000f0  33c9                 xor ecx, ecx
// 009000f2  2bc3                 sub eax, ebx
// 009000f4  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 009000fa  8b4760               mov eax, dword ptr [edi + 0x60]
// 009000fd  0f94c1               sete cl
// 00900100  294774               sub dword ptr [edi + 0x74], eax
// 00900103  8bf1                 mov esi, ecx
// 00900105  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 00900108  3b8780000000         cmp eax, dword ptr [edi + 0x80]
// 0090010e  7767                 ja 0x900177
// 00900110  83f903               cmp ecx, 3
// 00900113  7262                 jb 0x900177
// 00900115  48                   dec eax
// 00900116  894760               mov dword ptr [edi + 0x60], eax
// 00900119  8da42400000000       lea esp, [esp]
// 00900120  015f6c               add dword ptr [edi + 0x6c], ebx
// 00900123  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00900126  8b6f48               mov ebp, dword ptr [edi + 0x48]
// 00900129  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 0090012c  8b4738               mov eax, dword ptr [edi + 0x38]
// 0090012f  0fb6440202           movzx eax, byte ptr [edx + eax + 2]
// 00900134  d3e5                 shl ebp, cl
// 00900136  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00900139  33c5                 xor eax, ebp
// 0090013b  234754               and eax, dword ptr [edi + 0x54]
// 0090013e  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 00900141  23ea                 and ebp, edx
// 00900143  8b5740               mov edx, dword ptr [edi + 0x40]
// 00900146  894748               mov dword ptr [edi + 0x48], eax
// 00900149  668b0441             mov ax, word ptr [ecx + eax*2]
// 0090014d  6689046a             mov word ptr [edx + ebp*2], ax
// 00900151  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00900154  234f34               and ecx, dword ptr [edi + 0x34]
// 00900157  8b5740               mov edx, dword ptr [edi + 0x40]
// 0090015a  0fb72c4a             movzx ebp, word ptr [edx + ecx*2]
// 0090015e  8b4748               mov eax, dword ptr [edi + 0x48]
// 00900161  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00900164  668b576c             mov dx, word ptr [edi + 0x6c]
// 00900168  66891441             mov word ptr [ecx + eax*2], dx
// 0090016c  834760ff             add dword ptr [edi + 0x60], -1
// 00900170  75ae                 jne 0x900120
// 00900172  e986000000           jmp 0x9001fd
// 00900177  01476c               add dword ptr [edi + 0x6c], eax
// 0090017a  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0090017d  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00900180  8d1408               lea edx, [eax + ecx]
// 00900183  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00900186  c7476000000000       mov dword ptr [edi + 0x60], 0
// 0090018d  0fb602               movzx eax, byte ptr [edx]
// 00900190  894748               mov dword ptr [edi + 0x48], eax
// 00900193  0fb65201             movzx edx, byte ptr [edx + 1]
// 00900197  d3e0                 shl eax, cl
// 00900199  33c2                 xor eax, edx
// 0090019b  234754               and eax, dword ptr [edi + 0x54]
// 0090019e  894748               mov dword ptr [edi + 0x48], eax
// 009001a1  eb5d                 jmp 0x900200
// 009001a3  8b476c               mov eax, dword ptr [edi + 0x6c]
// 009001a6  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 009001a9  8a0408               mov al, byte ptr [eax + ecx]
// 009001ac  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 009001b2  8b8fa4160000         mov ecx, dword ptr [edi + 0x16a4]
// 009001b8  33f6                 xor esi, esi
// 009001ba  66893451             mov word ptr [ecx + edx*2], si
// 009001be  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 009001c4  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 009001ca  88040a               mov byte ptr [edx + ecx], al
// 009001cd  019fa0160000         add dword ptr [edi + 0x16a0], ebx
// 009001d3  0fb6d0               movzx edx, al
// 009001d6  66019c9794000000     add word ptr [edi + edx*4 + 0x94], bx
// 009001de  8d849794000000       lea eax, [edi + edx*4 + 0x94]
// 009001e5  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 009001eb  33c9                 xor ecx, ecx
// 009001ed  2bc3                 sub eax, ebx
// 009001ef  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 009001f5  0f94c1               sete cl
// 009001f8  ff4f74               dec dword ptr [edi + 0x74]
// 009001fb  8bf1                 mov esi, ecx
// 009001fd  015f6c               add dword ptr [edi + 0x6c], ebx
// 00900200  85f6                 test esi, esi
// 00900202  0f8498fdffff         je 0x8fffa0
// 00900208  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0090020b  85c9                 test ecx, ecx
// 0090020d  7c07                 jl 0x900216
// 0090020f  8b4738               mov eax, dword ptr [edi + 0x38]
// 00900212  03c1                 add eax, ecx
// 00900214  eb02                 jmp 0x900218
// 00900216  33c0                 xor eax, eax
// 00900218  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0090021b  6a00                 push 0
// 0090021d  2bd1                 sub edx, ecx
// 0090021f  52                   push edx
// 00900220  50                   push eax
// 00900221  57                   push edi
// 00900222  e83943c7ff           call 0x574560
// 00900227  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0090022a  89475c               mov dword ptr [edi + 0x5c], eax
// 0090022d  8b07                 mov eax, dword ptr [edi]
// 0090022f  83c410               add esp, 0x10
// 00900232  e829f9ffff           call 0x8ffb60
// 00900237  8b0f                 mov ecx, dword ptr [edi]
// 00900239  83791000             cmp dword ptr [ecx + 0x10], 0
// 0090023d  0f855dfdffff         jne 0x8fffa0
// 00900243  5f                   pop edi
// 00900244  5e                   pop esi
// 00900245  5d                   pop ebp
// 00900246  33c0                 xor eax, eax
// 00900248  5b                   pop ebx
// 00900249  c3                   ret 
// 0090024a  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0090024d  85c9                 test ecx, ecx
// 0090024f  7c07                 jl 0x900258
// 00900251  8b4738               mov eax, dword ptr [edi + 0x38]
// 00900254  03c1                 add eax, ecx
// 00900256  eb02                 jmp 0x90025a
// 00900258  33c0                 xor eax, eax
// 0090025a  33d2                 xor edx, edx
// 0090025c  83fe04               cmp esi, 4
// 0090025f  0f94c2               sete dl
// 00900262  52                   push edx
// 00900263  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00900266  2bd1                 sub edx, ecx
// 00900268  52                   push edx
// 00900269  50                   push eax
// 0090026a  57                   push edi
// 0090026b  e8f042c7ff           call 0x574560
// 00900270  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00900273  89475c               mov dword ptr [edi + 0x5c], eax
// 00900276  8b07                 mov eax, dword ptr [edi]
// 00900278  83c410               add esp, 0x10
// 0090027b  e8e0f8ffff           call 0x8ffb60
// 00900280  8b0f                 mov ecx, dword ptr [edi]
// 00900282  33c0                 xor eax, eax
// 00900284  394110               cmp dword ptr [ecx + 0x10], eax
// 00900287  750f                 jne 0x900298
// 00900289  83fe04               cmp esi, 4
// 0090028c  0f95c0               setne al
// 0090028f  5f                   pop edi
// 00900290  5e                   pop esi
// 00900291  5d                   pop ebp
// 00900292  5b                   pop ebx
// 00900293  48                   dec eax
// 00900294  83e002               and eax, 2
// 00900297  c3                   ret 
// 00900298  83fe04               cmp esi, 4
// 0090029b  0f94c0               sete al
// 0090029e  5f                   pop edi
// 0090029f  5e                   pop esi
// 009002a0  5d                   pop ebp
// 009002a1  5b                   pop ebx
// 009002a2  8d440001             lea eax, [eax + eax + 1]
// 009002a6  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
