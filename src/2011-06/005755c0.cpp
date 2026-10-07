// roc 2011-06 005755c0  unit: seg_00570000  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005755c0
//
// 005755c0  83ec20               sub esp, 0x20
// 005755c3  55                   push ebp
// 005755c4  57                   push edi
// 005755c5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005755c9  8b871c010000         mov eax, dword ptr [edi + 0x11c]
// 005755cf  8baf88010000         mov ebp, dword ptr [edi + 0x188]
// 005755d5  48                   dec eax
// 005755d6  8944241c             mov dword ptr [esp + 0x1c], eax
// 005755da  8d9b00000000         lea ebx, [ebx]
// 005755e0  8b477c               mov eax, dword ptr [edi + 0x7c]
// 005755e3  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 005755e9  3bc1                 cmp eax, ecx
// 005755eb  7c10                 jl 0x5755fd
// 005755ed  7526                 jne 0x575615
// 005755ef  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 005755f5  3b8788000000         cmp eax, dword ptr [edi + 0x88]
// 005755fb  7718                 ja 0x575615
// 005755fd  8b8f90010000         mov ecx, dword ptr [edi + 0x190]
// 00575603  8b11                 mov edx, dword ptr [ecx]
// 00575605  57                   push edi
// 00575606  ffd2                 call edx
// 00575608  83c404               add esp, 4
// 0057560b  85c0                 test eax, eax
// 0057560d  75d1                 jne 0x5755e0
// 0057560f  5f                   pop edi
// 00575610  5d                   pop ebp
// 00575611  83c420               add esp, 0x20
// 00575614  c3                   ret 
// 00575615  53                   push ebx
// 00575616  33db                 xor ebx, ebx
// 00575618  395f24               cmp dword ptr [edi + 0x24], ebx
// 0057561b  56                   push esi
// 0057561c  8bb7c4000000         mov esi, dword ptr [edi + 0xc4]
// 00575622  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00575626  0f8efa000000         jle 0x575726
// 0057562c  83c548               add ebp, 0x48
// 0057562f  896c2420             mov dword ptr [esp + 0x20], ebp
// 00575633  807e3000             cmp byte ptr [esi + 0x30], 0
// 00575637  0f84cd000000         je 0x57570a
// 0057563d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00575640  8b9788000000         mov edx, dword ptr [edi + 0x88]
// 00575646  8b4f04               mov ecx, dword ptr [edi + 4]
// 00575649  0fafd0               imul edx, eax
// 0057564c  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0057564f  6a00                 push 0
// 00575651  50                   push eax
// 00575652  8b4500               mov eax, dword ptr [ebp]
// 00575655  52                   push edx
// 00575656  50                   push eax
// 00575657  57                   push edi
// 00575658  ffd1                 call ecx
// 0057565a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0057565e  83c414               add esp, 0x14
// 00575661  89442428             mov dword ptr [esp + 0x28], eax
// 00575665  399788000000         cmp dword ptr [edi + 0x88], edx
// 0057566b  7309                 jae 0x575676
// 0057566d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00575670  89442410             mov dword ptr [esp + 0x10], eax
// 00575674  eb16                 jmp 0x57568c
// 00575676  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00575679  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057567c  33d2                 xor edx, edx
// 0057567e  f7f1                 div ecx
// 00575680  89542410             mov dword ptr [esp + 0x10], edx
// 00575684  85d2                 test edx, edx
// 00575686  7504                 jne 0x57568c
// 00575688  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057568c  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 00575692  8b549904             mov edx, dword ptr [ecx + ebx*4 + 4]
// 00575696  8b442438             mov eax, dword ptr [esp + 0x38]
// 0057569a  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 0057569d  894c2414             mov dword ptr [esp + 0x14], ecx
// 005756a1  33c9                 xor ecx, ecx
// 005756a3  394c2410             cmp dword ptr [esp + 0x10], ecx
// 005756a7  8954242c             mov dword ptr [esp + 0x2c], edx
// 005756ab  894c2418             mov dword ptr [esp + 0x18], ecx
// 005756af  7e59                 jle 0x57570a
// 005756b1  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005756b4  8b542428             mov edx, dword ptr [esp + 0x28]
// 005756b8  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 005756bb  33ff                 xor edi, edi
// 005756bd  33ed                 xor ebp, ebp
// 005756bf  85c0                 test eax, eax
// 005756c1  7626                 jbe 0x5756e9
// 005756c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005756c7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005756cb  57                   push edi
// 005756cc  50                   push eax
// 005756cd  53                   push ebx
// 005756ce  56                   push esi
// 005756cf  51                   push ecx
// 005756d0  ff542440             call dword ptr [esp + 0x40]
// 005756d4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005756d7  037e24               add edi, dword ptr [esi + 0x24]
// 005756da  45                   inc ebp
// 005756db  83c414               add esp, 0x14
// 005756de  83eb80               sub ebx, -0x80
// 005756e1  3be8                 cmp ebp, eax
// 005756e3  72de                 jb 0x5756c3
// 005756e5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005756e9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005756ed  8b5624               mov edx, dword ptr [esi + 0x24]
// 005756f0  41                   inc ecx
// 005756f1  3b4c2410             cmp ecx, dword ptr [esp + 0x10]
// 005756f5  8d1497               lea edx, [edi + edx*4]
// 005756f8  89542414             mov dword ptr [esp + 0x14], edx
// 005756fc  894c2418             mov dword ptr [esp + 0x18], ecx
// 00575700  7cb2                 jl 0x5756b4
// 00575702  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00575706  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0057570a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0057570e  43                   inc ebx
// 0057570f  83c504               add ebp, 4
// 00575712  83c654               add esi, 0x54
// 00575715  3b5f24               cmp ebx, dword ptr [edi + 0x24]
// 00575718  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0057571c  896c2420             mov dword ptr [esp + 0x20], ebp
// 00575720  0f8c0dffffff         jl 0x575633
// 00575726  ff8788000000         inc dword ptr [edi + 0x88]
// 0057572c  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 00575732  3b871c010000         cmp eax, dword ptr [edi + 0x11c]
// 00575738  5e                   pop esi
// 00575739  5b                   pop ebx
// 0057573a  1bc0                 sbb eax, eax
// 0057573c  5f                   pop edi
// 0057573d  83c004               add eax, 4
// 00575740  5d                   pop ebp
// 00575741  83c420               add esp, 0x20
// 00575744  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
