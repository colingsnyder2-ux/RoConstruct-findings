// roc 2012-06 009abd00  unit: CXTPReportControl  size: 636 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009abd00
//
// 009abd00  6aff                 push -1
// 009abd02  6874dfad00           push 0xaddf74
// 009abd07  64a100000000         mov eax, dword ptr fs:[0]
// 009abd0d  50                   push eax
// 009abd0e  83ec20               sub esp, 0x20
// 009abd11  53                   push ebx
// 009abd12  55                   push ebp
// 009abd13  56                   push esi
// 009abd14  57                   push edi
// 009abd15  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009abd1a  33c4                 xor eax, esp
// 009abd1c  50                   push eax
// 009abd1d  8d442434             lea eax, [esp + 0x34]
// 009abd21  64a300000000         mov dword ptr fs:[0], eax
// 009abd27  8bf9                 mov edi, ecx
// 009abd29  897c2424             mov dword ptr [esp + 0x24], edi
// 009abd2d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009abd31  33db                 xor ebx, ebx
// 009abd33  895c243c             mov dword ptr [esp + 0x3c], ebx
// 009abd37  3bcb                 cmp ecx, ebx
// 009abd39  7475                 je 0x9abdb0
// 009abd3b  8b01                 mov eax, dword ptr [ecx]
// 009abd3d  8b505c               mov edx, dword ptr [eax + 0x5c]
// 009abd40  ffd2                 call edx
// 009abd42  8d4c2448             lea ecx, [esp + 0x48]
// 009abd46  85c0                 test eax, eax
// 009abd48  0f851e020000         jne 0x9abf6c
// 009abd4e  ff156046b200         call dword ptr [0xb24660]
// 009abd54  84c0                 test al, al
// 009abd56  7558                 jne 0x9abdb0
// 009abd58  8b07                 mov eax, dword ptr [edi]
// 009abd5a  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 009abd60  8bcf                 mov ecx, edi
// 009abd62  ffd2                 call edx
// 009abd64  8a0d4685b600         mov cl, byte ptr [0xb68546]
// 009abd6a  8944242c             mov dword ptr [esp + 0x2c], eax
// 009abd6e  66a14485b600         mov ax, word ptr [0xb68544]
// 009abd74  884c2416             mov byte ptr [esp + 0x16], cl
// 009abd78  8d4c2448             lea ecx, [esp + 0x48]
// 009abd7c  6689442414           mov word ptr [esp + 0x14], ax
// 009abd81  895c2428             mov dword ptr [esp + 0x28], ebx
// 009abd85  ff155846b200         call dword ptr [0xb24658]
// 009abd8b  50                   push eax
// 009abd8c  8d4c244c             lea ecx, [esp + 0x4c]
// 009abd90  ff15ac43b200         call dword ptr [0xb243ac]
// 009abd96  8d542428             lea edx, [esp + 0x28]
// 009abd9a  52                   push edx
// 009abd9b  8d4c2418             lea ecx, [esp + 0x18]
// 009abd9f  51                   push ecx
// 009abda0  50                   push eax
// 009abda1  ff155c2ab200         call dword ptr [0xb22a5c]
// 009abda7  8bf0                 mov esi, eax
// 009abda9  83c40c               add esp, 0xc
// 009abdac  3bf3                 cmp esi, ebx
// 009abdae  7526                 jne 0x9abdd6
// 009abdb0  8d4c2448             lea ecx, [esp + 0x48]
// 009abdb4  ff15d047b200         call dword ptr [0xb247d0]
// 009abdba  33c0                 xor eax, eax
// 009abdbc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009abdc0  64890d00000000       mov dword ptr fs:[0], ecx
// 009abdc7  59                   pop ecx
// 009abdc8  5f                   pop edi
// 009abdc9  5e                   pop esi
// 009abdca  5d                   pop ebp
// 009abdcb  5b                   pop ebx
// 009abdcc  83c42c               add esp, 0x2c
// 009abdcf  c20c00               ret 0xc
// 009abdd2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 009abdd6  56                   push esi
// 009abdd7  8d4c241c             lea ecx, [esp + 0x1c]
// 009abddb  ff15c847b200         call dword ptr [0xb247c8]
// 009abde1  8d4c2418             lea ecx, [esp + 0x18]
// 009abde5  c644243c01           mov byte ptr [esp + 0x3c], 1
// 009abdea  ff158849b200         call dword ptr [0xb24988]
// 009abdf0  8b97ec000000         mov edx, dword ptr [edi + 0xec]
// 009abdf6  8b4230               mov eax, dword ptr [edx + 0x30]
// 009abdf9  33ed                 xor ebp, ebp
// 009abdfb  33ff                 xor edi, edi
// 009abdfd  3bc3                 cmp eax, ebx
// 009abdff  89442430             mov dword ptr [esp + 0x30], eax
// 009abe03  0f8eaf000000         jle 0x9abeb8
// 009abe09  8da42400000000       lea esp, [esp]
// 009abe10  3bfb                 cmp edi, ebx
// 009abe12  8b442424             mov eax, dword ptr [esp + 0x24]
// 009abe16  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 009abe1c  0f8c8b000000         jl 0x9abead
// 009abe22  3b7830               cmp edi, dword ptr [eax + 0x30]
// 009abe25  0f8d82000000         jge 0x9abead
// 009abe2b  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 009abe2e  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 009abe31  8d04b9               lea eax, [ecx + edi*4]
// 009abe34  3bf3                 cmp esi, ebx
// 009abe36  7475                 je 0x9abead
// 009abe38  8bce                 mov ecx, esi
// 009abe3a  e8f1150900           call 0xa3d430
// 009abe3f  85c0                 test eax, eax
// 009abe41  7506                 jne 0x9abe49
// 009abe43  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 009abe47  7464                 je 0x9abead
// 009abe49  395e64               cmp dword ptr [esi + 0x64], ebx
// 009abe4c  745f                 je 0x9abead
// 009abe4e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009abe52  56                   push esi
// 009abe53  e868cf0000           call 0x9b8dc0
// 009abe58  3bc3                 cmp eax, ebx
// 009abe5a  7451                 je 0x9abead
// 009abe5c  8b10                 mov edx, dword ptr [eax]
// 009abe5e  8b526c               mov edx, dword ptr [edx + 0x6c]
// 009abe61  56                   push esi
// 009abe62  8d4c2420             lea ecx, [esp + 0x20]
// 009abe66  51                   push ecx
// 009abe67  8bc8                 mov ecx, eax
// 009abe69  ffd2                 call edx
// 009abe6b  8d4c241c             lea ecx, [esp + 0x1c]
// 009abe6f  c644243c02           mov byte ptr [esp + 0x3c], 2
// 009abe74  ff158849b200         call dword ptr [0xb24988]
// 009abe7a  53                   push ebx
// 009abe7b  8d4c241c             lea ecx, [esp + 0x1c]
// 009abe7f  ff159847b200         call dword ptr [0xb24798]
// 009abe85  50                   push eax
// 009abe86  8d4c2424             lea ecx, [esp + 0x24]
// 009abe8a  ff154c49b200         call dword ptr [0xb2494c]
// 009abe90  33c9                 xor ecx, ecx
// 009abe92  83f8ff               cmp eax, -1
// 009abe95  0f95c1               setne cl
// 009abe98  c644243c01           mov byte ptr [esp + 0x3c], 1
// 009abe9d  8be9                 mov ebp, ecx
// 009abe9f  8d4c241c             lea ecx, [esp + 0x1c]
// 009abea3  ff15d047b200         call dword ptr [0xb247d0]
// 009abea9  3beb                 cmp ebp, ebx
// 009abeab  750b                 jne 0x9abeb8
// 009abead  47                   inc edi
// 009abeae  3b7c2430             cmp edi, dword ptr [esp + 0x30]
// 009abeb2  0f8c58ffffff         jl 0x9abe10
// 009abeb8  395c244c             cmp dword ptr [esp + 0x4c], ebx
// 009abebc  746b                 je 0x9abf29
// 009abebe  3beb                 cmp ebp, ebx
// 009abec0  756b                 jne 0x9abf2d
// 009abec2  8b742444             mov esi, dword ptr [esp + 0x44]
// 009abec6  8bce                 mov ecx, esi
// 009abec8  e8a3e00300           call 0x9e9f70
// 009abecd  85c0                 test eax, eax
// 009abecf  0f8489000000         je 0x9abf5e
// 009abed5  8bce                 mov ecx, esi
// 009abed7  e894e00300           call 0x9e9f70
// 009abedc  8b10                 mov edx, dword ptr [eax]
// 009abede  8b526c               mov edx, dword ptr [edx + 0x6c]
// 009abee1  53                   push ebx
// 009abee2  8d4c2424             lea ecx, [esp + 0x24]
// 009abee6  51                   push ecx
// 009abee7  8bc8                 mov ecx, eax
// 009abee9  ffd2                 call edx
// 009abeeb  8d4c2420             lea ecx, [esp + 0x20]
// 009abeef  c644243c03           mov byte ptr [esp + 0x3c], 3
// 009abef4  ff158849b200         call dword ptr [0xb24988]
// 009abefa  53                   push ebx
// 009abefb  8d4c241c             lea ecx, [esp + 0x1c]
// 009abeff  ff159847b200         call dword ptr [0xb24798]
// 009abf05  50                   push eax
// 009abf06  8d4c2428             lea ecx, [esp + 0x28]
// 009abf0a  ff154c49b200         call dword ptr [0xb2494c]
// 009abf10  33c9                 xor ecx, ecx
// 009abf12  83f8ff               cmp eax, -1
// 009abf15  0f95c1               setne cl
// 009abf18  c644243c01           mov byte ptr [esp + 0x3c], 1
// 009abf1d  8be9                 mov ebp, ecx
// 009abf1f  8d4c2420             lea ecx, [esp + 0x20]
// 009abf23  ff15d047b200         call dword ptr [0xb247d0]
// 009abf29  3beb                 cmp ebp, ebx
// 009abf2b  7431                 je 0x9abf5e
// 009abf2d  8d542428             lea edx, [esp + 0x28]
// 009abf31  52                   push edx
// 009abf32  8d442418             lea eax, [esp + 0x18]
// 009abf36  50                   push eax
// 009abf37  53                   push ebx
// 009abf38  ff155c2ab200         call dword ptr [0xb22a5c]
// 009abf3e  83c40c               add esp, 0xc
// 009abf41  8d4c2418             lea ecx, [esp + 0x18]
// 009abf45  8bf0                 mov esi, eax
// 009abf47  885c243c             mov byte ptr [esp + 0x3c], bl
// 009abf4b  ff15d047b200         call dword ptr [0xb247d0]
// 009abf51  3bf3                 cmp esi, ebx
// 009abf53  0f8579feffff         jne 0x9abdd2
// 009abf59  e952feffff           jmp 0x9abdb0
// 009abf5e  8d4c2418             lea ecx, [esp + 0x18]
// 009abf62  ff15d047b200         call dword ptr [0xb247d0]
// 009abf68  8d4c2448             lea ecx, [esp + 0x48]
// 009abf6c  ff15d047b200         call dword ptr [0xb247d0]
// 009abf72  b801000000           mov eax, 1
// 009abf77  e940feffff           jmp 0x9abdbc
// copied from an identical function in another client (function ?ApplyFilter@CXTPReportControl@@MAEHPAVCXTPReportRecord@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportControl.cpp