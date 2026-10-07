// roc 2010-06 0078fc50  unit: RBX::GroupDragTool  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078fc50
//
// 0078fc50  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0078fc54  53                   push ebx
// 0078fc55  56                   push esi
// 0078fc56  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0078fc5a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0078fc5d  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 0078fc60  57                   push edi
// 0078fc61  7e0c                 jle 0x78fc6f
// 0078fc63  85c0                 test eax, eax
// 0078fc65  752f                 jne 0x78fc96
// 0078fc67  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 0078fc6b  3bc8                 cmp ecx, eax
// 0078fc6d  7d23                 jge 0x78fc92
// 0078fc6f  8b560c               mov edx, dword ptr [esi + 0xc]
// 0078fc72  8b4208               mov eax, dword ptr [edx + 8]
// 0078fc75  8b542418             mov edx, dword ptr [esp + 0x18]
// 0078fc79  50                   push eax
// 0078fc7a  8d4411ff             lea eax, [ecx + edx - 1]
// 0078fc7e  c1e011               shl eax, 0x11
// 0078fc81  0bc1                 or eax, ecx
// 0078fc83  c1e006               shl eax, 6
// 0078fc86  83c803               or eax, 3
// 0078fc89  50                   push eax
// 0078fc8a  e831feffff           call 0x78fac0
// 0078fc8f  83c408               add esp, 8
// 0078fc92  5f                   pop edi
// 0078fc93  5e                   pop esi
// 0078fc94  5b                   pop ebx
// 0078fc95  c3                   ret 
// 0078fc96  8b16                 mov edx, dword ptr [esi]
// 0078fc98  8b520c               mov edx, dword ptr [edx + 0xc]
// 0078fc9b  8d7c82fc             lea edi, [edx + eax*4 - 4]
// 0078fc9f  8b07                 mov eax, dword ptr [edi]
// 0078fca1  8bd0                 mov edx, eax
// 0078fca3  83e23f               and edx, 0x3f
// 0078fca6  80fa03               cmp dl, 3
// 0078fca9  75c4                 jne 0x78fc6f
// 0078fcab  8bd8                 mov ebx, eax
// 0078fcad  c1eb06               shr ebx, 6
// 0078fcb0  8bd0                 mov edx, eax
// 0078fcb2  81e3ff000000         and ebx, 0xff
// 0078fcb8  c1ea17               shr edx, 0x17
// 0078fcbb  3bd9                 cmp ebx, ecx
// 0078fcbd  7fb0                 jg 0x78fc6f
// 0078fcbf  8d5a01               lea ebx, [edx + 1]
// 0078fcc2  3bcb                 cmp ecx, ebx
// 0078fcc4  7fa9                 jg 0x78fc6f
// 0078fcc6  8b742418             mov esi, dword ptr [esp + 0x18]
// 0078fcca  8d5c31ff             lea ebx, [ecx + esi - 1]
// 0078fcce  3bda                 cmp ebx, edx
// 0078fcd0  7ec0                 jle 0x78fc92
// 0078fcd2  8d4c31ff             lea ecx, [ecx + esi - 1]
// 0078fcd6  c1e117               shl ecx, 0x17
// 0078fcd9  25ffff7f00           and eax, 0x7fffff
// 0078fcde  0bc8                 or ecx, eax
// 0078fce0  890f                 mov dword ptr [edi], ecx
// 0078fce2  5f                   pop edi
// 0078fce3  5e                   pop esi
// 0078fce4  5b                   pop ebx
// 0078fce5  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_nil)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
