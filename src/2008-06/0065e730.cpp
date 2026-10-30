// from server: 100% by auto
// roc 2008-06 0065e730  unit: seg_00650000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065e730
//
// 0065e730  55                   push ebp
// 0065e731  8bec                 mov ebp, esp
// 0065e733  83e4f8               and esp, 0xfffffff8
// 0065e736  83ec18               sub esp, 0x18
// 0065e739  8a4b07               mov cl, byte ptr [ebx + 7]
// 0065e73c  56                   push esi
// 0065e73d  be01000000           mov esi, 1
// 0065e742  d3e6                 shl esi, cl
// 0065e744  57                   push edi
// 0065e745  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0065e74d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0065e755  85f6                 test esi, esi
// 0065e757  0f8482000000         je 0x65e7df
// 0065e75d  8bfe                 mov edi, esi
// 0065e75f  c1e705               shl edi, 5
// 0065e762  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0065e765  83ef20               sub edi, 0x20
// 0065e768  03c7                 add eax, edi
// 0065e76a  4e                   dec esi
// 0065e76b  83780800             cmp dword ptr [eax + 8], 0
// 0065e76f  7457                 je 0x65e7c8
// 0065e771  83781803             cmp dword ptr [eax + 0x18], 3
// 0065e775  7547                 jne 0x65e7be
// 0065e777  dd4010               fld qword ptr [eax + 0x10]
// 0065e77a  dd5c2418             fstp qword ptr [esp + 0x18]
// 0065e77e  dd442418             fld qword ptr [esp + 0x18]
// 0065e782  db5c2414             fistp dword ptr [esp + 0x14]
// 0065e786  db442414             fild dword ptr [esp + 0x14]
// 0065e78a  dc5c2418             fcomp qword ptr [esp + 0x18]
// 0065e78e  dfe0                 fnstsw ax
// 0065e790  f6c444               test ah, 0x44
// 0065e793  7a29                 jp 0x65e7be
// 0065e795  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065e799  85c0                 test eax, eax
// 0065e79b  7e21                 jle 0x65e7be
// 0065e79d  3d00000004           cmp eax, 0x4000000
// 0065e7a2  7f1a                 jg 0x65e7be
// 0065e7a4  48                   dec eax
// 0065e7a5  50                   push eax
// 0065e7a6  e8953efcff           call 0x622640
// 0065e7ab  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0065e7ae  8d448104             lea eax, [ecx + eax*4 + 4]
// 0065e7b2  83c404               add esp, 4
// 0065e7b5  ff00                 inc dword ptr [eax]
// 0065e7b7  b801000000           mov eax, 1
// 0065e7bc  eb02                 jmp 0x65e7c0
// 0065e7be  33c0                 xor eax, eax
// 0065e7c0  0144240c             add dword ptr [esp + 0xc], eax
// 0065e7c4  ff442410             inc dword ptr [esp + 0x10]
// 0065e7c8  85f6                 test esi, esi
// 0065e7ca  7596                 jne 0x65e762
// 0065e7cc  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0065e7cf  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0065e7d3  0110                 add dword ptr [eax], edx
// 0065e7d5  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065e7d9  5f                   pop edi
// 0065e7da  5e                   pop esi
// 0065e7db  8be5                 mov esp, ebp
// 0065e7dd  5d                   pop ebp
// 0065e7de  c3                   ret 
// 0065e7df  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0065e7e2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065e7e6  0108                 add dword ptr [eax], ecx
// 0065e7e8  5f                   pop edi
// 0065e7e9  8bc1                 mov eax, ecx
// 0065e7eb  5e                   pop esi
// 0065e7ec  8be5                 mov esp, ebp
// 0065e7ee  5d                   pop ebp
// 0065e7ef  c3                   ret 
// library lua-5.1.4/ltable.c (function _numusehash)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltable.c
