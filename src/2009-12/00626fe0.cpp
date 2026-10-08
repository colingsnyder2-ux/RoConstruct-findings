// roc 2009-12 00626fe0  unit: seg_00620000  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00626fe0
//
// 00626fe0  83ec18               sub esp, 0x18
// 00626fe3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00626fe7  53                   push ebx
// 00626fe8  55                   push ebp
// 00626fe9  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00626fed  56                   push esi
// 00626fee  8b751c               mov esi, dword ptr [ebp + 0x1c]
// 00626ff1  57                   push edi
// 00626ff2  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00626ff6  8b87dc000000         mov eax, dword ptr [edi + 0xdc]
// 00626ffc  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 00626fff  03f6                 add esi, esi
// 00627001  83c002               add eax, 2
// 00627004  03f6                 add esi, esi
// 00627006  50                   push eax
// 00627007  83c1fc               add ecx, -4
// 0062700a  03f6                 add esi, esi
// 0062700c  51                   push ecx
// 0062700d  8bc6                 mov eax, esi
// 0062700f  e83cf9ffff           call 0x626950
// 00627014  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 0062701a  b980000000           mov ecx, 0x80
// 0062701f  2bc8                 sub ecx, eax
// 00627021  c1e109               shl ecx, 9
// 00627024  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00627028  33c9                 xor ecx, ecx
// 0062702a  c1e006               shl eax, 6
// 0062702d  83c408               add esp, 8
// 00627030  394d0c               cmp dword ptr [ebp + 0xc], ecx
// 00627033  89442410             mov dword ptr [esp + 0x10], eax
// 00627037  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0062703b  0f8e0e010000         jle 0x62714f
// 00627041  8b442434             mov eax, dword ptr [esp + 0x34]
// 00627045  83c6fe               add esi, -2
// 00627048  83c004               add eax, 4
// 0062704b  89742424             mov dword ptr [esp + 0x24], esi
// 0062704f  89442420             mov dword ptr [esp + 0x20], eax
// 00627053  8b542438             mov edx, dword ptr [esp + 0x38]
// 00627057  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0062705a  8b78f8               mov edi, dword ptr [eax - 8]
// 0062705d  8b28                 mov ebp, dword ptr [eax]
// 0062705f  0fb617               movzx edx, byte ptr [edi]
// 00627062  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 00627066  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0062706a  8b48fc               mov ecx, dword ptr [eax - 4]
// 0062706d  0fb631               movzx esi, byte ptr [ecx]
// 00627070  0fb64500             movzx eax, byte ptr [ebp]
// 00627074  03c6                 add eax, esi
// 00627076  03d0                 add edx, eax
// 00627078  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0062707c  45                   inc ebp
// 0062707d  47                   inc edi
// 0062707e  89542434             mov dword ptr [esp + 0x34], edx
// 00627082  03c3                 add eax, ebx
// 00627084  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 00627088  03d2                 add edx, edx
// 0062708a  2bd6                 sub edx, esi
// 0062708c  0faf742414           imul esi, dword ptr [esp + 0x14]
// 00627091  41                   inc ecx
// 00627092  03c3                 add eax, ebx
// 00627094  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00627098  03d0                 add edx, eax
// 0062709a  0faf542410           imul edx, dword ptr [esp + 0x10]
// 0062709f  8d943200800000       lea edx, [edx + esi + 0x8000]
// 006270a6  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006270aa  c1fa10               sar edx, 0x10
// 006270ad  8816                 mov byte ptr [esi], dl
// 006270af  8b542434             mov edx, dword ptr [esp + 0x34]
// 006270b3  46                   inc esi
// 006270b4  8974242c             mov dword ptr [esp + 0x2c], esi
// 006270b8  89442434             mov dword ptr [esp + 0x34], eax
// 006270bc  895c2418             mov dword ptr [esp + 0x18], ebx
// 006270c0  85db                 test ebx, ebx
// 006270c2  764b                 jbe 0x62710f
// 006270c4  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 006270c8  0fb631               movzx esi, byte ptr [ecx]
// 006270cb  0fb64501             movzx eax, byte ptr [ebp + 1]
// 006270cf  47                   inc edi
// 006270d0  45                   inc ebp
// 006270d1  2bd6                 sub edx, esi
// 006270d3  0faf742414           imul esi, dword ptr [esp + 0x14]
// 006270d8  41                   inc ecx
// 006270d9  03c3                 add eax, ebx
// 006270db  0fb619               movzx ebx, byte ptr [ecx]
// 006270de  03c3                 add eax, ebx
// 006270e0  03d0                 add edx, eax
// 006270e2  03542434             add edx, dword ptr [esp + 0x34]
// 006270e6  0faf542410           imul edx, dword ptr [esp + 0x10]
// 006270eb  8d943200800000       lea edx, [edx + esi + 0x8000]
// 006270f2  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006270f6  c1fa10               sar edx, 0x10
// 006270f9  8816                 mov byte ptr [esi], dl
// 006270fb  8b542434             mov edx, dword ptr [esp + 0x34]
// 006270ff  46                   inc esi
// 00627100  836c241801           sub dword ptr [esp + 0x18], 1
// 00627105  8974242c             mov dword ptr [esp + 0x2c], esi
// 00627109  89442434             mov dword ptr [esp + 0x34], eax
// 0062710d  75b5                 jne 0x6270c4
// 0062710f  0fb609               movzx ecx, byte ptr [ecx]
// 00627112  03c0                 add eax, eax
// 00627114  2bc1                 sub eax, ecx
// 00627116  0faf4c2414           imul ecx, dword ptr [esp + 0x14]
// 0062711b  03c2                 add eax, edx
// 0062711d  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00627122  8b542430             mov edx, dword ptr [esp + 0x30]
// 00627126  8d8c0800800000       lea ecx, [eax + ecx + 0x8000]
// 0062712d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00627131  c1f910               sar ecx, 0x10
// 00627134  880e                 mov byte ptr [esi], cl
// 00627136  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062713a  41                   inc ecx
// 0062713b  83c004               add eax, 4
// 0062713e  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 00627141  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00627145  89442420             mov dword ptr [esp + 0x20], eax
// 00627149  0f8c04ffffff         jl 0x627053
// 0062714f  5f                   pop edi
// 00627150  5e                   pop esi
// 00627151  5d                   pop ebp
// 00627152  5b                   pop ebx
// 00627153  83c418               add esp, 0x18
// 00627156  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_smooth_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
