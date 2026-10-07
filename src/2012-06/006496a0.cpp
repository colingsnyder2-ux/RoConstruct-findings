// roc 2012-06 006496a0  unit: seg_00640000  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006496a0
//
// 006496a0  8b542404             mov edx, dword ptr [esp + 4]
// 006496a4  83ec10               sub esp, 0x10
// 006496a7  53                   push ebx
// 006496a8  8a5a08               mov bl, byte ptr [edx + 8]
// 006496ab  80fb03               cmp bl, 3
// 006496ae  0f8496010000         je 0x64984a
// 006496b4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006496b8  55                   push ebp
// 006496b9  8b2a                 mov ebp, dword ptr [edx]
// 006496bb  56                   push esi
// 006496bc  33f6                 xor esi, esi
// 006496be  57                   push edi
// 006496bf  89742424             mov dword ptr [esp + 0x24], esi
// 006496c3  f6c302               test bl, 2
// 006496c6  7430                 je 0x6496f8
// 006496c8  0fb64209             movzx eax, byte ptr [edx + 9]
// 006496cc  0fb631               movzx esi, byte ptr [ecx]
// 006496cf  8bf8                 mov edi, eax
// 006496d1  2bfe                 sub edi, esi
// 006496d3  0fb67101             movzx esi, byte ptr [ecx + 1]
// 006496d7  897c2410             mov dword ptr [esp + 0x10], edi
// 006496db  8bf8                 mov edi, eax
// 006496dd  2bfe                 sub edi, esi
// 006496df  0fb67102             movzx esi, byte ptr [ecx + 2]
// 006496e3  2bc6                 sub eax, esi
// 006496e5  8b742424             mov esi, dword ptr [esp + 0x24]
// 006496e9  897c2414             mov dword ptr [esp + 0x14], edi
// 006496ed  89442418             mov dword ptr [esp + 0x18], eax
// 006496f1  bf03000000           mov edi, 3
// 006496f6  eb13                 jmp 0x64970b
// 006496f8  0fb64103             movzx eax, byte ptr [ecx + 3]
// 006496fc  0fb67a09             movzx edi, byte ptr [edx + 9]
// 00649700  2bf8                 sub edi, eax
// 00649702  897c2410             mov dword ptr [esp + 0x10], edi
// 00649706  bf01000000           mov edi, 1
// 0064970b  f6c304               test bl, 4
// 0064970e  740f                 je 0x64971f
// 00649710  0fb64904             movzx ecx, byte ptr [ecx + 4]
// 00649714  0fb64209             movzx eax, byte ptr [edx + 9]
// 00649718  2bc1                 sub eax, ecx
// 0064971a  8944bc10             mov dword ptr [esp + edi*4 + 0x10], eax
// 0064971e  47                   inc edi
// 0064971f  33c9                 xor ecx, ecx
// 00649721  33c0                 xor eax, eax
// 00649723  3bf9                 cmp edi, ecx
// 00649725  0f8e1c010000         jle 0x649847
// 0064972b  eb03                 jmp 0x649730
// 0064972d  8d4900               lea ecx, [ecx]
// 00649730  394c8410             cmp dword ptr [esp + eax*4 + 0x10], ecx
// 00649734  7f06                 jg 0x64973c
// 00649736  894c8410             mov dword ptr [esp + eax*4 + 0x10], ecx
// 0064973a  eb05                 jmp 0x649741
// 0064973c  be01000000           mov esi, 1
// 00649741  40                   inc eax
// 00649742  3bc7                 cmp eax, edi
// 00649744  7cea                 jl 0x649730
// 00649746  663bf1               cmp si, cx
// 00649749  0f84f8000000         je 0x649847
// 0064974f  0fb64209             movzx eax, byte ptr [edx + 9]
// 00649753  83c0fe               add eax, -2
// 00649756  83f80e               cmp eax, 0xe
// 00649759  0f87e8000000         ja 0x649847
// 0064975f  0fb68064986400       movzx eax, byte ptr [eax + 0x649864]
// 00649766  ff248550986400       jmp dword ptr [eax*4 + 0x649850]
// 0064976d  8b5204               mov edx, dword ptr [edx + 4]
// 00649770  8b442428             mov eax, dword ptr [esp + 0x28]
// 00649774  3bd1                 cmp edx, ecx
// 00649776  0f86cb000000         jbe 0x649847
// 0064977c  8d642400             lea esp, [esp]
// 00649780  8a08                 mov cl, byte ptr [eax]
// 00649782  d0e9                 shr cl, 1
// 00649784  80e155               and cl, 0x55
// 00649787  8808                 mov byte ptr [eax], cl
// 00649789  40                   inc eax
// 0064978a  83ea01               sub edx, 1
// 0064978d  75f1                 jne 0x649780
// 0064978f  5f                   pop edi
// 00649790  5e                   pop esi
// 00649791  5d                   pop ebp
// 00649792  5b                   pop ebx
// 00649793  83c410               add esp, 0x10
// 00649796  c3                   ret 
// 00649797  8b7a04               mov edi, dword ptr [edx + 4]
// 0064979a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064979e  8b742428             mov esi, dword ptr [esp + 0x28]
// 006497a2  8bca                 mov ecx, edx
// 006497a4  b8f0000000           mov eax, 0xf0
// 006497a9  d3f8                 sar eax, cl
// 006497ab  bb0f000000           mov ebx, 0xf
// 006497b0  d3fb                 sar ebx, cl
// 006497b2  24f0                 and al, 0xf0
// 006497b4  0ac3                 or al, bl
// 006497b6  85ff                 test edi, edi
// 006497b8  0f8689000000         jbe 0x649847
// 006497be  8bff                 mov edi, edi
// 006497c0  8a1e                 mov bl, byte ptr [esi]
// 006497c2  8aca                 mov cl, dl
// 006497c4  d2eb                 shr bl, cl
// 006497c6  46                   inc esi
// 006497c7  22d8                 and bl, al
// 006497c9  83ef01               sub edi, 1
// 006497cc  885eff               mov byte ptr [esi - 1], bl
// 006497cf  75ef                 jne 0x6497c0
// 006497d1  5f                   pop edi
// 006497d2  5e                   pop esi
// 006497d3  5d                   pop ebp
// 006497d4  5b                   pop ebx
// 006497d5  83c410               add esp, 0x10
// 006497d8  c3                   ret 
// 006497d9  8b742428             mov esi, dword ptr [esp + 0x28]
// 006497dd  0fafef               imul ebp, edi
// 006497e0  33db                 xor ebx, ebx
// 006497e2  85ed                 test ebp, ebp
// 006497e4  7661                 jbe 0x649847
// 006497e6  8bc3                 mov eax, ebx
// 006497e8  33d2                 xor edx, edx
// 006497ea  f7f7                 div edi
// 006497ec  43                   inc ebx
// 006497ed  46                   inc esi
// 006497ee  8a4c9410             mov cl, byte ptr [esp + edx*4 + 0x10]
// 006497f2  d26eff               shr byte ptr [esi - 1], cl
// 006497f5  3bdd                 cmp ebx, ebp
// 006497f7  72ed                 jb 0x6497e6
// 006497f9  5f                   pop edi
// 006497fa  5e                   pop esi
// 006497fb  5d                   pop ebp
// 006497fc  5b                   pop ebx
// 006497fd  83c410               add esp, 0x10
// 00649800  c3                   ret 
// 00649801  8b742428             mov esi, dword ptr [esp + 0x28]
// 00649805  0fafef               imul ebp, edi
// 00649808  33db                 xor ebx, ebx
// 0064980a  85ed                 test ebp, ebp
// 0064980c  7639                 jbe 0x649847
// 0064980e  8bff                 mov edi, edi
// 00649810  33d2                 xor edx, edx
// 00649812  8bc3                 mov eax, ebx
// 00649814  f7f7                 div edi
// 00649816  660fb606             movzx ax, byte ptr [esi]
// 0064981a  b900010000           mov ecx, 0x100
// 0064981f  660fafc1             imul ax, cx
// 00649823  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00649827  6603c1               add ax, cx
// 0064982a  46                   inc esi
// 0064982b  43                   inc ebx
// 0064982c  46                   inc esi
// 0064982d  0fb74c9410           movzx ecx, word ptr [esp + edx*4 + 0x10]
// 00649832  66d3e8               shr ax, cl
// 00649835  0fb7c0               movzx eax, ax
// 00649838  8bd0                 mov edx, eax
// 0064983a  c1ea08               shr edx, 8
// 0064983d  8856fe               mov byte ptr [esi - 2], dl
// 00649840  8846ff               mov byte ptr [esi - 1], al
// 00649843  3bdd                 cmp ebx, ebp
// 00649845  72c9                 jb 0x649810
// 00649847  5f                   pop edi
// 00649848  5e                   pop esi
// 00649849  5d                   pop ebp
// 0064984a  5b                   pop ebx
// 0064984b  83c410               add esp, 0x10
// 0064984e  c3                   ret 
// 0064984f  90                   nop 
// 00649850  6d                   insd dword ptr es:[edi], dx
// 00649851  97                   xchg edi, eax
// 00649852  640097976400d9       add byte ptr fs:[edi - 0x26ff9b69], dl
// 00649859  97                   xchg edi, eax
// 0064985a  640001               add byte ptr fs:[ecx], al
// 0064985d  98                   cwde 
// 0064985e  64004798             add byte ptr fs:[edi - 0x68], al
// 00649862  640000               add byte ptr fs:[eax], al
// 00649865  0401                 add al, 1
// 00649867  0404                 add al, 4
// 00649869  0402                 add al, 2
// 0064986b  0404                 add al, 4
// 0064986d  0404                 add al, 4
// 0064986f  0404                 add al, 4
// 00649871  0403                 add al, 3
// library libpng-1.2.5/pngrtran.c (function _png_do_unshift)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
