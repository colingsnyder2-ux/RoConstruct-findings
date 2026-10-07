// roc 2007-08 00612190  unit: seg_00610000  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00612190
//
// 00612190  55                   push ebp
// 00612191  8bec                 mov ebp, esp
// 00612193  83e4f8               and esp, 0xfffffff8
// 00612196  83ec18               sub esp, 0x18
// 00612199  8a4b07               mov cl, byte ptr [ebx + 7]
// 0061219c  56                   push esi
// 0061219d  be01000000           mov esi, 1
// 006121a2  d3e6                 shl esi, cl
// 006121a4  57                   push edi
// 006121a5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006121ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006121b5  85f6                 test esi, esi
// 006121b7  0f8488000000         je 0x612245
// 006121bd  8bfe                 mov edi, esi
// 006121bf  c1e705               shl edi, 5
// 006121c2  8b4310               mov eax, dword ptr [ebx + 0x10]
// 006121c5  83ef20               sub edi, 0x20
// 006121c8  03c7                 add eax, edi
// 006121ca  83ee01               sub esi, 1
// 006121cd  83780800             cmp dword ptr [eax + 8], 0
// 006121d1  745b                 je 0x61222e
// 006121d3  83781803             cmp dword ptr [eax + 0x18], 3
// 006121d7  754a                 jne 0x612223
// 006121d9  dd4010               fld qword ptr [eax + 0x10]
// 006121dc  dd5c2418             fstp qword ptr [esp + 0x18]
// 006121e0  dd442418             fld qword ptr [esp + 0x18]
// 006121e4  db5c2414             fistp dword ptr [esp + 0x14]
// 006121e8  db442414             fild dword ptr [esp + 0x14]
// 006121ec  dc5c2418             fcomp qword ptr [esp + 0x18]
// 006121f0  dfe0                 fnstsw ax
// 006121f2  f6c444               test ah, 0x44
// 006121f5  7a2c                 jp 0x612223
// 006121f7  8b442414             mov eax, dword ptr [esp + 0x14]
// 006121fb  85c0                 test eax, eax
// 006121fd  7e24                 jle 0x612223
// 006121ff  3d00000004           cmp eax, 0x4000000
// 00612204  7f1d                 jg 0x612223
// 00612206  83c0ff               add eax, -1
// 00612209  50                   push eax
// 0061220a  e841c8ffff           call 0x60ea50
// 0061220f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00612212  8d448104             lea eax, [ecx + eax*4 + 4]
// 00612216  83c404               add esp, 4
// 00612219  830001               add dword ptr [eax], 1
// 0061221c  b801000000           mov eax, 1
// 00612221  eb02                 jmp 0x612225
// 00612223  33c0                 xor eax, eax
// 00612225  0144240c             add dword ptr [esp + 0xc], eax
// 00612229  8344241001           add dword ptr [esp + 0x10], 1
// 0061222e  85f6                 test esi, esi
// 00612230  7590                 jne 0x6121c2
// 00612232  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00612235  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00612239  0110                 add dword ptr [eax], edx
// 0061223b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061223f  5f                   pop edi
// 00612240  5e                   pop esi
// 00612241  8be5                 mov esp, ebp
// 00612243  5d                   pop ebp
// 00612244  c3                   ret 
// 00612245  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00612248  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061224c  0108                 add dword ptr [eax], ecx
// 0061224e  5f                   pop edi
// 0061224f  8bc1                 mov eax, ecx
// 00612251  5e                   pop esi
// 00612252  8be5                 mov esp, ebp
// 00612254  5d                   pop ebp
// 00612255  c3                   ret 
// library lua-5.1.4/ltable.c (function _numusehash)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltable.c
