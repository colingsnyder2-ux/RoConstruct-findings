// roc 2011-06 007f28a0  unit: RBX::AdvLuaDragTool  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f28a0
//
// 007f28a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f28a4  53                   push ebx
// 007f28a5  56                   push esi
// 007f28a6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007f28aa  8b4618               mov eax, dword ptr [esi + 0x18]
// 007f28ad  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 007f28b0  57                   push edi
// 007f28b1  7e0c                 jle 0x7f28bf
// 007f28b3  85c0                 test eax, eax
// 007f28b5  752f                 jne 0x7f28e6
// 007f28b7  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 007f28bb  3bc8                 cmp ecx, eax
// 007f28bd  7d23                 jge 0x7f28e2
// 007f28bf  8b560c               mov edx, dword ptr [esi + 0xc]
// 007f28c2  8b4208               mov eax, dword ptr [edx + 8]
// 007f28c5  8b542418             mov edx, dword ptr [esp + 0x18]
// 007f28c9  50                   push eax
// 007f28ca  8d4411ff             lea eax, [ecx + edx - 1]
// 007f28ce  c1e011               shl eax, 0x11
// 007f28d1  0bc1                 or eax, ecx
// 007f28d3  c1e006               shl eax, 6
// 007f28d6  83c803               or eax, 3
// 007f28d9  50                   push eax
// 007f28da  e831feffff           call 0x7f2710
// 007f28df  83c408               add esp, 8
// 007f28e2  5f                   pop edi
// 007f28e3  5e                   pop esi
// 007f28e4  5b                   pop ebx
// 007f28e5  c3                   ret 
// 007f28e6  8b16                 mov edx, dword ptr [esi]
// 007f28e8  8b520c               mov edx, dword ptr [edx + 0xc]
// 007f28eb  8d7c82fc             lea edi, [edx + eax*4 - 4]
// 007f28ef  8b07                 mov eax, dword ptr [edi]
// 007f28f1  8bd0                 mov edx, eax
// 007f28f3  83e23f               and edx, 0x3f
// 007f28f6  80fa03               cmp dl, 3
// 007f28f9  75c4                 jne 0x7f28bf
// 007f28fb  8bd8                 mov ebx, eax
// 007f28fd  c1eb06               shr ebx, 6
// 007f2900  8bd0                 mov edx, eax
// 007f2902  81e3ff000000         and ebx, 0xff
// 007f2908  c1ea17               shr edx, 0x17
// 007f290b  3bd9                 cmp ebx, ecx
// 007f290d  7fb0                 jg 0x7f28bf
// 007f290f  8d5a01               lea ebx, [edx + 1]
// 007f2912  3bcb                 cmp ecx, ebx
// 007f2914  7fa9                 jg 0x7f28bf
// 007f2916  8b742418             mov esi, dword ptr [esp + 0x18]
// 007f291a  8d5c31ff             lea ebx, [ecx + esi - 1]
// 007f291e  3bda                 cmp ebx, edx
// 007f2920  7ec0                 jle 0x7f28e2
// 007f2922  8d4c31ff             lea ecx, [ecx + esi - 1]
// 007f2926  c1e117               shl ecx, 0x17
// 007f2929  25ffff7f00           and eax, 0x7fffff
// 007f292e  0bc8                 or ecx, eax
// 007f2930  890f                 mov dword ptr [edi], ecx
// 007f2932  5f                   pop edi
// 007f2933  5e                   pop esi
// 007f2934  5b                   pop ebx
// 007f2935  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_nil)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
