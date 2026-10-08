// from server: 100% by auto
// roc 2010-06 00583f50  unit: seg_00580000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00583f50
//
// 00583f50  56                   push esi
// 00583f51  8b742408             mov esi, dword ptr [esp + 8]
// 00583f55  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 00583f59  57                   push edi
// 00583f5a  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 00583f60  8b4718               mov eax, dword ptr [edi + 0x18]
// 00583f63  8944240c             mov dword ptr [esp + 0xc], eax
// 00583f67  7407                 je 0x583f70
// 00583f69  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 00583f70  807c241000           cmp byte ptr [esp + 0x10], 0
// 00583f75  7417                 je 0x583f8e
// 00583f77  c74704a02e5800       mov dword ptr [edi + 4], 0x582ea0
// 00583f7e  c74708203f5800       mov dword ptr [edi + 8], 0x583f20
// 00583f85  c6471c01             mov byte ptr [edi + 0x1c], 1
// 00583f89  e9ae000000           jmp 0x58403c
// 00583f8e  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 00583f92  7509                 jne 0x583f9d
// 00583f94  c74704c03b5800       mov dword ptr [edi + 4], 0x583bc0
// 00583f9b  eb07                 jmp 0x583fa4
// 00583f9d  c74704003b5800       mov dword ptr [edi + 4], 0x583b00
// 00583fa4  55                   push ebp
// 00583fa5  c74708b0454500       mov dword ptr [edi + 8], 0x4545b0
// 00583fac  8b6e70               mov ebp, dword ptr [esi + 0x70]
// 00583faf  83fd01               cmp ebp, 1
// 00583fb2  7d1c                 jge 0x583fd0
// 00583fb4  8b0e                 mov ecx, dword ptr [esi]
// 00583fb6  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 00583fbd  8b16                 mov edx, dword ptr [esi]
// 00583fbf  c7421801000000       mov dword ptr [edx + 0x18], 1
// 00583fc6  8b06                 mov eax, dword ptr [esi]
// 00583fc8  8b08                 mov ecx, dword ptr [eax]
// 00583fca  56                   push esi
// 00583fcb  ffd1                 call ecx
// 00583fcd  83c404               add esp, 4
// 00583fd0  81fd00010000         cmp ebp, 0x100
// 00583fd6  7e1c                 jle 0x583ff4
// 00583fd8  8b16                 mov edx, dword ptr [esi]
// 00583fda  c7421439000000       mov dword ptr [edx + 0x14], 0x39
// 00583fe1  8b06                 mov eax, dword ptr [esi]
// 00583fe3  c7401800010000       mov dword ptr [eax + 0x18], 0x100
// 00583fea  8b0e                 mov ecx, dword ptr [esi]
// 00583fec  8b11                 mov edx, dword ptr [ecx]
// 00583fee  56                   push esi
// 00583fef  ffd2                 call edx
// 00583ff1  83c404               add esp, 4
// 00583ff4  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 00583ff8  7541                 jne 0x58403b
// 00583ffa  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00583ffd  83c002               add eax, 2
// 00584000  8d2c40               lea ebp, [eax + eax*2]
// 00584003  03ed                 add ebp, ebp
// 00584005  837f2000             cmp dword ptr [edi + 0x20], 0
// 00584009  7512                 jne 0x58401d
// 0058400b  8b4604               mov eax, dword ptr [esi + 4]
// 0058400e  8b4804               mov ecx, dword ptr [eax + 4]
// 00584011  55                   push ebp
// 00584012  6a01                 push 1
// 00584014  56                   push esi
// 00584015  ffd1                 call ecx
// 00584017  83c40c               add esp, 0xc
// 0058401a  894720               mov dword ptr [edi + 0x20], eax
// 0058401d  8b5720               mov edx, dword ptr [edi + 0x20]
// 00584020  55                   push ebp
// 00584021  52                   push edx
// 00584022  e8b993feff           call 0x56d3e0
// 00584027  83c408               add esp, 8
// 0058402a  837f2800             cmp dword ptr [edi + 0x28], 0
// 0058402e  7507                 jne 0x584037
// 00584030  8bc6                 mov eax, esi
// 00584032  e849feffff           call 0x583e80
// 00584037  c6472400             mov byte ptr [edi + 0x24], 0
// 0058403b  5d                   pop ebp
// 0058403c  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 00584040  7421                 je 0x584063
// 00584042  33f6                 xor esi, esi
// 00584044  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00584048  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0058404b  6800100000           push 0x1000
// 00584050  51                   push ecx
// 00584051  e88a93feff           call 0x56d3e0
// 00584056  46                   inc esi
// 00584057  83c408               add esp, 8
// 0058405a  83fe20               cmp esi, 0x20
// 0058405d  7ce5                 jl 0x584044
// 0058405f  c6471c00             mov byte ptr [edi + 0x1c], 0
// 00584063  5f                   pop edi
// 00584064  5e                   pop esi
// 00584065  c3                   ret 
// library jpeg-6b/jquant2.c (function _start_pass_2_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
