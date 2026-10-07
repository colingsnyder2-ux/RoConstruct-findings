// roc 2010-06 00586870  unit: seg_00580000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00586870
//
// 00586870  83ec0c               sub esp, 0xc
// 00586873  55                   push ebp
// 00586874  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00586878  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0058687b  8b08                 mov ecx, dword ptr [eax]
// 0058687d  56                   push esi
// 0058687e  8bb55c010000         mov esi, dword ptr [ebp + 0x15c]
// 00586884  57                   push edi
// 00586885  8bbd38010000         mov edi, dword ptr [ebp + 0x138]
// 0058688b  894e10               mov dword ptr [esi + 0x10], ecx
// 0058688e  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00586891  8b4204               mov eax, dword ptr [edx + 4]
// 00586894  894614               mov dword ptr [esi + 0x14], eax
// 00586897  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 0058689e  7414                 je 0x5868b4
// 005868a0  837e4400             cmp dword ptr [esi + 0x44], 0
// 005868a4  750e                 jne 0x5868b4
// 005868a6  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 005868a9  51                   push ecx
// 005868aa  8bc6                 mov eax, esi
// 005868ac  e81fffffff           call 0x5867d0
// 005868b1  83c404               add esp, 4
// 005868b4  83bd0001000000       cmp dword ptr [ebp + 0x100], 0
// 005868bb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005868c3  0f8ed1000000         jle 0x58699a
// 005868c9  0fbfd7               movsx edx, di
// 005868cc  8d8504010000         lea eax, [ebp + 0x104]
// 005868d2  89542414             mov dword ptr [esp + 0x14], edx
// 005868d6  89442410             mov dword ptr [esp + 0x10], eax
// 005868da  53                   push ebx
// 005868db  eb03                 jmp 0x5868e0
// 005868dd  8d4900               lea ecx, [ecx]
// 005868e0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005868e4  8b39                 mov edi, dword ptr [ecx]
// 005868e6  8b542424             mov edx, dword ptr [esp + 0x24]
// 005868ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 005868ee  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 005868f1  0fbf11               movsx edx, word ptr [ecx]
// 005868f4  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 005868f8  8b9cbde8000000       mov ebx, dword ptr [ebp + edi*4 + 0xe8]
// 005868ff  d3fa                 sar edx, cl
// 00586901  8bc2                 mov eax, edx
// 00586903  2b44be24             sub eax, dword ptr [esi + edi*4 + 0x24]
// 00586907  8954be24             mov dword ptr [esi + edi*4 + 0x24], edx
// 0058690b  89442420             mov dword ptr [esp + 0x20], eax
// 0058690f  7906                 jns 0x586917
// 00586911  f7d8                 neg eax
// 00586913  ff4c2420             dec dword ptr [esp + 0x20]
// 00586917  33ff                 xor edi, edi
// 00586919  85c0                 test eax, eax
// 0058691b  7422                 je 0x58693f
// 0058691d  8d4900               lea ecx, [ecx]
// 00586920  47                   inc edi
// 00586921  d1f8                 sar eax, 1
// 00586923  75fb                 jne 0x586920
// 00586925  83ff0b               cmp edi, 0xb
// 00586928  7e15                 jle 0x58693f
// 0058692a  8b5500               mov edx, dword ptr [ebp]
// 0058692d  c7421406000000       mov dword ptr [edx + 0x14], 6
// 00586934  8b4500               mov eax, dword ptr [ebp]
// 00586937  8b08                 mov ecx, dword ptr [eax]
// 00586939  55                   push ebp
// 0058693a  ffd1                 call ecx
// 0058693c  83c404               add esp, 4
// 0058693f  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00586943  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00586946  740c                 je 0x586954
// 00586948  8b54865c             mov edx, dword ptr [esi + eax*4 + 0x5c]
// 0058694c  ff04ba               inc dword ptr [edx + edi*4]
// 0058694f  8d04ba               lea eax, [edx + edi*4]
// 00586952  eb19                 jmp 0x58696d
// 00586954  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00586958  0fbe8c3800040000     movsx ecx, byte ptr [eax + edi + 0x400]
// 00586960  8b14b8               mov edx, dword ptr [eax + edi*4]
// 00586963  51                   push ecx
// 00586964  52                   push edx
// 00586965  e856fcffff           call 0x5865c0
// 0058696a  83c408               add esp, 8
// 0058696d  85ff                 test edi, edi
// 0058696f  740e                 je 0x58697f
// 00586971  8b442420             mov eax, dword ptr [esp + 0x20]
// 00586975  57                   push edi
// 00586976  50                   push eax
// 00586977  e844fcffff           call 0x5865c0
// 0058697c  83c408               add esp, 8
// 0058697f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00586983  8344241404           add dword ptr [esp + 0x14], 4
// 00586988  40                   inc eax
// 00586989  3b8500010000         cmp eax, dword ptr [ebp + 0x100]
// 0058698f  89442410             mov dword ptr [esp + 0x10], eax
// 00586993  0f8c47ffffff         jl 0x5868e0
// 00586999  5b                   pop ebx
// 0058699a  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0058699d  8b5610               mov edx, dword ptr [esi + 0x10]
// 005869a0  8911                 mov dword ptr [ecx], edx
// 005869a2  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005869a5  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005869a8  894804               mov dword ptr [eax + 4], ecx
// 005869ab  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 005869b1  85ed                 test ebp, ebp
// 005869b3  7416                 je 0x5869cb
// 005869b5  837e4400             cmp dword ptr [esi + 0x44], 0
// 005869b9  750d                 jne 0x5869c8
// 005869bb  8b5648               mov edx, dword ptr [esi + 0x48]
// 005869be  42                   inc edx
// 005869bf  83e207               and edx, 7
// 005869c2  896e44               mov dword ptr [esi + 0x44], ebp
// 005869c5  895648               mov dword ptr [esi + 0x48], edx
// 005869c8  ff4e44               dec dword ptr [esi + 0x44]
// 005869cb  5f                   pop edi
// 005869cc  5e                   pop esi
// 005869cd  b001                 mov al, 1
// 005869cf  5d                   pop ebp
// 005869d0  83c40c               add esp, 0xc
// 005869d3  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
