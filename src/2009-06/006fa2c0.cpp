// roc 2009-06 006fa2c0  unit: RBX::GroupDragTool  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa2c0
//
// 006fa2c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fa2c4  53                   push ebx
// 006fa2c5  56                   push esi
// 006fa2c6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fa2ca  8b4618               mov eax, dword ptr [esi + 0x18]
// 006fa2cd  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 006fa2d0  57                   push edi
// 006fa2d1  7e0c                 jle 0x6fa2df
// 006fa2d3  85c0                 test eax, eax
// 006fa2d5  752f                 jne 0x6fa306
// 006fa2d7  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 006fa2db  3bc8                 cmp ecx, eax
// 006fa2dd  7d23                 jge 0x6fa302
// 006fa2df  8b560c               mov edx, dword ptr [esi + 0xc]
// 006fa2e2  8b4208               mov eax, dword ptr [edx + 8]
// 006fa2e5  8b542418             mov edx, dword ptr [esp + 0x18]
// 006fa2e9  50                   push eax
// 006fa2ea  8d4411ff             lea eax, [ecx + edx - 1]
// 006fa2ee  c1e011               shl eax, 0x11
// 006fa2f1  0bc1                 or eax, ecx
// 006fa2f3  c1e006               shl eax, 6
// 006fa2f6  83c803               or eax, 3
// 006fa2f9  50                   push eax
// 006fa2fa  e831feffff           call 0x6fa130
// 006fa2ff  83c408               add esp, 8
// 006fa302  5f                   pop edi
// 006fa303  5e                   pop esi
// 006fa304  5b                   pop ebx
// 006fa305  c3                   ret 
// 006fa306  8b16                 mov edx, dword ptr [esi]
// 006fa308  8b520c               mov edx, dword ptr [edx + 0xc]
// 006fa30b  8d7c82fc             lea edi, [edx + eax*4 - 4]
// 006fa30f  8b07                 mov eax, dword ptr [edi]
// 006fa311  8bd0                 mov edx, eax
// 006fa313  83e23f               and edx, 0x3f
// 006fa316  80fa03               cmp dl, 3
// 006fa319  75c4                 jne 0x6fa2df
// 006fa31b  8bd8                 mov ebx, eax
// 006fa31d  c1eb06               shr ebx, 6
// 006fa320  8bd0                 mov edx, eax
// 006fa322  81e3ff000000         and ebx, 0xff
// 006fa328  c1ea17               shr edx, 0x17
// 006fa32b  3bd9                 cmp ebx, ecx
// 006fa32d  7fb0                 jg 0x6fa2df
// 006fa32f  8d5a01               lea ebx, [edx + 1]
// 006fa332  3bcb                 cmp ecx, ebx
// 006fa334  7fa9                 jg 0x6fa2df
// 006fa336  8b742418             mov esi, dword ptr [esp + 0x18]
// 006fa33a  8d5c31ff             lea ebx, [ecx + esi - 1]
// 006fa33e  3bda                 cmp ebx, edx
// 006fa340  7ec0                 jle 0x6fa302
// 006fa342  8d4c31ff             lea ecx, [ecx + esi - 1]
// 006fa346  c1e117               shl ecx, 0x17
// 006fa349  25ffff7f00           and eax, 0x7fffff
// 006fa34e  0bc8                 or ecx, eax
// 006fa350  890f                 mov dword ptr [edi], ecx
// 006fa352  5f                   pop edi
// 006fa353  5e                   pop esi
// 006fa354  5b                   pop ebx
// 006fa355  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_nil)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
