// roc 2009-12 00826f50  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 659 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00826f50
//
// 00826f50  6aff                 push -1
// 00826f52  6851b69500           push 0x95b651
// 00826f57  64a100000000         mov eax, dword ptr fs:[0]
// 00826f5d  50                   push eax
// 00826f5e  51                   push ecx
// 00826f5f  53                   push ebx
// 00826f60  56                   push esi
// 00826f61  57                   push edi
// 00826f62  a10052b600           mov eax, dword ptr [0xb65200]
// 00826f67  33c4                 xor eax, esp
// 00826f69  50                   push eax
// 00826f6a  8d442414             lea eax, [esp + 0x14]
// 00826f6e  64a300000000         mov dword ptr fs:[0], eax
// 00826f74  8bf1                 mov esi, ecx
// 00826f76  89742410             mov dword ptr [esp + 0x10], esi
// 00826f7a  c7064c529f00         mov dword ptr [esi], 0x9f524c
// 00826f80  8dbe34010000         lea edi, [esi + 0x134]
// 00826f86  33db                 xor ebx, ebx
// 00826f88  c744241c04000000     mov dword ptr [esp + 0x1c], 4
// 00826f90  3bfb                 cmp edi, ebx
// 00826f92  7504                 jne 0x826f98
// 00826f94  33c0                 xor eax, eax
// 00826f96  eb03                 jmp 0x826f9b
// 00826f98  8b4720               mov eax, dword ptr [edi + 0x20]
// 00826f9b  50                   push eax
// 00826f9c  ff1584cc9800         call dword ptr [0x98cc84]
// 00826fa2  85c0                 test eax, eax
// 00826fa4  7409                 je 0x826faf
// 00826fa6  8b07                 mov eax, dword ptr [edi]
// 00826fa8  8b5068               mov edx, dword ptr [eax + 0x68]
// 00826fab  8bcf                 mov ecx, edi
// 00826fad  ffd2                 call edx
// 00826faf  53                   push ebx
// 00826fb0  8bce                 mov ecx, esi
// 00826fb2  e879dbffff           call 0x824b30
// 00826fb7  53                   push ebx
// 00826fb8  8bce                 mov ecx, esi
// 00826fba  e8e1e1ffff           call 0x8251a0
// 00826fbf  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00826fc5  3bcb                 cmp ecx, ebx
// 00826fc7  740b                 je 0x826fd4
// 00826fc9  e80ecefcff           call 0x7f3ddc
// 00826fce  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 00826fd4  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 00826fda  3bcb                 cmp ecx, ebx
// 00826fdc  740b                 je 0x826fe9
// 00826fde  e8f9cdfcff           call 0x7f3ddc
// 00826fe3  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 00826fe9  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 00826fef  3bcb                 cmp ecx, ebx
// 00826ff1  740b                 je 0x826ffe
// 00826ff3  e8e4cdfcff           call 0x7f3ddc
// 00826ff8  899e28010000         mov dword ptr [esi + 0x128], ebx
// 00826ffe  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 00827004  3bcb                 cmp ecx, ebx
// 00827006  740b                 je 0x827013
// 00827008  e8cfcdfcff           call 0x7f3ddc
// 0082700d  899ee8000000         mov dword ptr [esi + 0xe8], ebx
// 00827013  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00827019  3bcb                 cmp ecx, ebx
// 0082701b  740b                 je 0x827028
// 0082701d  e8bacdfcff           call 0x7f3ddc
// 00827022  899eec000000         mov dword ptr [esi + 0xec], ebx
// 00827028  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0082702e  3bcb                 cmp ecx, ebx
// 00827030  740b                 je 0x82703d
// 00827032  e8a5cdfcff           call 0x7f3ddc
// 00827037  899e00010000         mov dword ptr [esi + 0x100], ebx
// 0082703d  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00827043  3bcb                 cmp ecx, ebx
// 00827045  740b                 je 0x827052
// 00827047  e890cdfcff           call 0x7f3ddc
// 0082704c  899e04010000         mov dword ptr [esi + 0x104], ebx
// 00827052  8b8ed0010000         mov ecx, dword ptr [esi + 0x1d0]
// 00827058  3bcb                 cmp ecx, ebx
// 0082705a  740b                 je 0x827067
// 0082705c  e87bcdfcff           call 0x7f3ddc
// 00827061  899ed0010000         mov dword ptr [esi + 0x1d0], ebx
// 00827067  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 0082706d  3bcb                 cmp ecx, ebx
// 0082706f  740b                 je 0x82707c
// 00827071  e866cdfcff           call 0x7f3ddc
// 00827076  899e88020000         mov dword ptr [esi + 0x288], ebx
// 0082707c  8b8e1c020000         mov ecx, dword ptr [esi + 0x21c]
// 00827082  3bcb                 cmp ecx, ebx
// 00827084  740b                 je 0x827091
// 00827086  e851cdfcff           call 0x7f3ddc
// 0082708b  899e1c020000         mov dword ptr [esi + 0x21c], ebx
// 00827091  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 00827097  3bc3                 cmp eax, ebx
// 00827099  740f                 je 0x8270aa
// 0082709b  50                   push eax
// 0082709c  e8b9c7fcff           call 0x7f385a
// 008270a1  83c404               add esp, 4
// 008270a4  899ee0020000         mov dword ptr [esi + 0x2e0], ebx
// 008270aa  8b8e24020000         mov ecx, dword ptr [esi + 0x224]
// 008270b0  3bcb                 cmp ecx, ebx
// 008270b2  740f                 je 0x8270c3
// 008270b4  8b01                 mov eax, dword ptr [ecx]
// 008270b6  8b5004               mov edx, dword ptr [eax + 4]
// 008270b9  6a01                 push 1
// 008270bb  ffd2                 call edx
// 008270bd  899e24020000         mov dword ptr [esi + 0x224], ebx
// 008270c3  8b8e28020000         mov ecx, dword ptr [esi + 0x228]
// 008270c9  3bcb                 cmp ecx, ebx
// 008270cb  740f                 je 0x8270dc
// 008270cd  8b01                 mov eax, dword ptr [ecx]
// 008270cf  8b5004               mov edx, dword ptr [eax + 4]
// 008270d2  6a01                 push 1
// 008270d4  ffd2                 call edx
// 008270d6  899e28020000         mov dword ptr [esi + 0x228], ebx
// 008270dc  8b8e2c020000         mov ecx, dword ptr [esi + 0x22c]
// 008270e2  3bcb                 cmp ecx, ebx
// 008270e4  740f                 je 0x8270f5
// 008270e6  8b01                 mov eax, dword ptr [ecx]
// 008270e8  8b5004               mov edx, dword ptr [eax + 4]
// 008270eb  6a01                 push 1
// 008270ed  ffd2                 call edx
// 008270ef  899e2c020000         mov dword ptr [esi + 0x22c], ebx
// 008270f5  8b8e94020000         mov ecx, dword ptr [esi + 0x294]
// 008270fb  3bcb                 cmp ecx, ebx
// 008270fd  740b                 je 0x82710a
// 008270ff  e8d8ccfcff           call 0x7f3ddc
// 00827104  899e94020000         mov dword ptr [esi + 0x294], ebx
// 0082710a  8b8eb4020000         mov ecx, dword ptr [esi + 0x2b4]
// 00827110  3bcb                 cmp ecx, ebx
// 00827112  740b                 je 0x82711f
// 00827114  e8c3ccfcff           call 0x7f3ddc
// 00827119  899eb4020000         mov dword ptr [esi + 0x2b4], ebx
// 0082711f  8b8ef0000000         mov ecx, dword ptr [esi + 0xf0]
// 00827125  3bcb                 cmp ecx, ebx
// 00827127  740b                 je 0x827134
// 00827129  e8aeccfcff           call 0x7f3ddc
// 0082712e  899ef0000000         mov dword ptr [esi + 0xf0], ebx
// 00827134  8b8ef4000000         mov ecx, dword ptr [esi + 0xf4]
// 0082713a  3bcb                 cmp ecx, ebx
// 0082713c  740b                 je 0x827149
// 0082713e  e899ccfcff           call 0x7f3ddc
// 00827143  899ef4000000         mov dword ptr [esi + 0xf4], ebx
// 00827149  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0082714f  3bcb                 cmp ecx, ebx
// 00827151  740b                 je 0x82715e
// 00827153  e884ccfcff           call 0x7f3ddc
// 00827158  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 0082715e  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00827164  3bcb                 cmp ecx, ebx
// 00827166  740b                 je 0x827173
// 00827168  e86fccfcff           call 0x7f3ddc
// 0082716d  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 00827173  8b86bc020000         mov eax, dword ptr [esi + 0x2bc]
// 00827179  3bc3                 cmp eax, ebx
// 0082717b  7407                 je 0x827184
// 0082717d  50                   push eax
// 0082717e  ff153cb19800         call dword ptr [0x98b13c]
// 00827184  8d8e80020000         lea ecx, [esi + 0x280]
// 0082718a  ff15c0de9800         call dword ptr [0x98dec0]
// 00827190  8d8e44020000         lea ecx, [esi + 0x244]
// 00827196  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0082719b  e8c0680000           call 0x82da60
// 008271a0  8d8eb0010000         lea ecx, [esi + 0x1b0]
// 008271a6  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008271ab  c70118229a00         mov dword ptr [ecx], 0x9a2218
// 008271b1  e87a80beff           call 0x40f230
// 008271b6  8bcf                 mov ecx, edi
// 008271b8  885c241c             mov byte ptr [esp + 0x1c], bl
// 008271bc  e87fed0700           call 0x8a5f40
// 008271c1  8bce                 mov ecx, esi
// 008271c3  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008271cb  e846d1fcff           call 0x7f4316
// 008271d0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008271d4  64890d00000000       mov dword ptr fs:[0], ecx
// 008271db  59                   pop ecx
// 008271dc  5f                   pop edi
// 008271dd  5e                   pop esi
// 008271de  5b                   pop ebx
// 008271df  83c410               add esp, 0x10
// 008271e2  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportControl@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp