// roc 2012-06 00967840  unit: RBX::CellContact  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00967840
//
// 00967840  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00967844  53                   push ebx
// 00967845  56                   push esi
// 00967846  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0096784a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0096784d  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 00967850  57                   push edi
// 00967851  7e0c                 jle 0x96785f
// 00967853  85c0                 test eax, eax
// 00967855  752f                 jne 0x967886
// 00967857  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 0096785b  3bc8                 cmp ecx, eax
// 0096785d  7d23                 jge 0x967882
// 0096785f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00967862  8b4208               mov eax, dword ptr [edx + 8]
// 00967865  8b542418             mov edx, dword ptr [esp + 0x18]
// 00967869  50                   push eax
// 0096786a  8d4411ff             lea eax, [ecx + edx - 1]
// 0096786e  c1e011               shl eax, 0x11
// 00967871  0bc1                 or eax, ecx
// 00967873  c1e006               shl eax, 6
// 00967876  83c803               or eax, 3
// 00967879  50                   push eax
// 0096787a  e831feffff           call 0x9676b0
// 0096787f  83c408               add esp, 8
// 00967882  5f                   pop edi
// 00967883  5e                   pop esi
// 00967884  5b                   pop ebx
// 00967885  c3                   ret 
// 00967886  8b16                 mov edx, dword ptr [esi]
// 00967888  8b520c               mov edx, dword ptr [edx + 0xc]
// 0096788b  8d7c82fc             lea edi, [edx + eax*4 - 4]
// 0096788f  8b07                 mov eax, dword ptr [edi]
// 00967891  8bd0                 mov edx, eax
// 00967893  83e23f               and edx, 0x3f
// 00967896  80fa03               cmp dl, 3
// 00967899  75c4                 jne 0x96785f
// 0096789b  8bd8                 mov ebx, eax
// 0096789d  c1eb06               shr ebx, 6
// 009678a0  8bd0                 mov edx, eax
// 009678a2  81e3ff000000         and ebx, 0xff
// 009678a8  c1ea17               shr edx, 0x17
// 009678ab  3bd9                 cmp ebx, ecx
// 009678ad  7fb0                 jg 0x96785f
// 009678af  8d5a01               lea ebx, [edx + 1]
// 009678b2  3bcb                 cmp ecx, ebx
// 009678b4  7fa9                 jg 0x96785f
// 009678b6  8b742418             mov esi, dword ptr [esp + 0x18]
// 009678ba  8d5c31ff             lea ebx, [ecx + esi - 1]
// 009678be  3bda                 cmp ebx, edx
// 009678c0  7ec0                 jle 0x967882
// 009678c2  8d4c31ff             lea ecx, [ecx + esi - 1]
// 009678c6  c1e117               shl ecx, 0x17
// 009678c9  25ffff7f00           and eax, 0x7fffff
// 009678ce  0bc8                 or ecx, eax
// 009678d0  890f                 mov dword ptr [edi], ecx
// 009678d2  5f                   pop edi
// 009678d3  5e                   pop esi
// 009678d4  5b                   pop ebx
// 009678d5  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_nil)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
