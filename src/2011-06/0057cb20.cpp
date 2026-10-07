// roc 2011-06 0057cb20  unit: seg_00570000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057cb20
//
// 0057cb20  83ec0c               sub esp, 0xc
// 0057cb23  55                   push ebp
// 0057cb24  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0057cb28  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0057cb2b  8b08                 mov ecx, dword ptr [eax]
// 0057cb2d  56                   push esi
// 0057cb2e  8bb55c010000         mov esi, dword ptr [ebp + 0x15c]
// 0057cb34  57                   push edi
// 0057cb35  8bbd38010000         mov edi, dword ptr [ebp + 0x138]
// 0057cb3b  894e10               mov dword ptr [esi + 0x10], ecx
// 0057cb3e  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0057cb41  8b4204               mov eax, dword ptr [edx + 4]
// 0057cb44  894614               mov dword ptr [esi + 0x14], eax
// 0057cb47  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 0057cb4e  7414                 je 0x57cb64
// 0057cb50  837e4400             cmp dword ptr [esi + 0x44], 0
// 0057cb54  750e                 jne 0x57cb64
// 0057cb56  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0057cb59  51                   push ecx
// 0057cb5a  8bc6                 mov eax, esi
// 0057cb5c  e81fffffff           call 0x57ca80
// 0057cb61  83c404               add esp, 4
// 0057cb64  83bd0001000000       cmp dword ptr [ebp + 0x100], 0
// 0057cb6b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057cb73  0f8ed1000000         jle 0x57cc4a
// 0057cb79  0fbfd7               movsx edx, di
// 0057cb7c  8d8504010000         lea eax, [ebp + 0x104]
// 0057cb82  89542414             mov dword ptr [esp + 0x14], edx
// 0057cb86  89442410             mov dword ptr [esp + 0x10], eax
// 0057cb8a  53                   push ebx
// 0057cb8b  eb03                 jmp 0x57cb90
// 0057cb8d  8d4900               lea ecx, [ecx]
// 0057cb90  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057cb94  8b39                 mov edi, dword ptr [ecx]
// 0057cb96  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057cb9a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057cb9e  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 0057cba1  0fbf11               movsx edx, word ptr [ecx]
// 0057cba4  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 0057cba8  8b9cbde8000000       mov ebx, dword ptr [ebp + edi*4 + 0xe8]
// 0057cbaf  d3fa                 sar edx, cl
// 0057cbb1  8bc2                 mov eax, edx
// 0057cbb3  2b44be24             sub eax, dword ptr [esi + edi*4 + 0x24]
// 0057cbb7  8954be24             mov dword ptr [esi + edi*4 + 0x24], edx
// 0057cbbb  89442420             mov dword ptr [esp + 0x20], eax
// 0057cbbf  7906                 jns 0x57cbc7
// 0057cbc1  f7d8                 neg eax
// 0057cbc3  ff4c2420             dec dword ptr [esp + 0x20]
// 0057cbc7  33ff                 xor edi, edi
// 0057cbc9  85c0                 test eax, eax
// 0057cbcb  7422                 je 0x57cbef
// 0057cbcd  8d4900               lea ecx, [ecx]
// 0057cbd0  47                   inc edi
// 0057cbd1  d1f8                 sar eax, 1
// 0057cbd3  75fb                 jne 0x57cbd0
// 0057cbd5  83ff0b               cmp edi, 0xb
// 0057cbd8  7e15                 jle 0x57cbef
// 0057cbda  8b5500               mov edx, dword ptr [ebp]
// 0057cbdd  c7421406000000       mov dword ptr [edx + 0x14], 6
// 0057cbe4  8b4500               mov eax, dword ptr [ebp]
// 0057cbe7  8b08                 mov ecx, dword ptr [eax]
// 0057cbe9  55                   push ebp
// 0057cbea  ffd1                 call ecx
// 0057cbec  83c404               add esp, 4
// 0057cbef  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0057cbf3  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0057cbf6  740c                 je 0x57cc04
// 0057cbf8  8b54865c             mov edx, dword ptr [esi + eax*4 + 0x5c]
// 0057cbfc  ff04ba               inc dword ptr [edx + edi*4]
// 0057cbff  8d04ba               lea eax, [edx + edi*4]
// 0057cc02  eb19                 jmp 0x57cc1d
// 0057cc04  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 0057cc08  0fbe8c3800040000     movsx ecx, byte ptr [eax + edi + 0x400]
// 0057cc10  8b14b8               mov edx, dword ptr [eax + edi*4]
// 0057cc13  51                   push ecx
// 0057cc14  52                   push edx
// 0057cc15  e856fcffff           call 0x57c870
// 0057cc1a  83c408               add esp, 8
// 0057cc1d  85ff                 test edi, edi
// 0057cc1f  740e                 je 0x57cc2f
// 0057cc21  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057cc25  57                   push edi
// 0057cc26  50                   push eax
// 0057cc27  e844fcffff           call 0x57c870
// 0057cc2c  83c408               add esp, 8
// 0057cc2f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057cc33  8344241404           add dword ptr [esp + 0x14], 4
// 0057cc38  40                   inc eax
// 0057cc39  3b8500010000         cmp eax, dword ptr [ebp + 0x100]
// 0057cc3f  89442410             mov dword ptr [esp + 0x10], eax
// 0057cc43  0f8c47ffffff         jl 0x57cb90
// 0057cc49  5b                   pop ebx
// 0057cc4a  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0057cc4d  8b5610               mov edx, dword ptr [esi + 0x10]
// 0057cc50  8911                 mov dword ptr [ecx], edx
// 0057cc52  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0057cc55  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0057cc58  894804               mov dword ptr [eax + 4], ecx
// 0057cc5b  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 0057cc61  85ed                 test ebp, ebp
// 0057cc63  7416                 je 0x57cc7b
// 0057cc65  837e4400             cmp dword ptr [esi + 0x44], 0
// 0057cc69  750d                 jne 0x57cc78
// 0057cc6b  8b5648               mov edx, dword ptr [esi + 0x48]
// 0057cc6e  42                   inc edx
// 0057cc6f  83e207               and edx, 7
// 0057cc72  896e44               mov dword ptr [esi + 0x44], ebp
// 0057cc75  895648               mov dword ptr [esi + 0x48], edx
// 0057cc78  ff4e44               dec dword ptr [esi + 0x44]
// 0057cc7b  5f                   pop edi
// 0057cc7c  5e                   pop esi
// 0057cc7d  b001                 mov al, 1
// 0057cc7f  5d                   pop ebp
// 0057cc80  83c40c               add esp, 0xc
// 0057cc83  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
