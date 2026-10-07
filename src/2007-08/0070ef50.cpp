// roc 2007-08 0070ef50  unit: CXTPRichRender  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ef50
//
// 0070ef50  83ec30               sub esp, 0x30
// 0070ef53  53                   push ebx
// 0070ef54  8bd9                 mov ebx, ecx
// 0070ef56  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 0070ef59  55                   push ebp
// 0070ef5a  33ed                 xor ebp, ebp
// 0070ef5c  3bcd                 cmp ecx, ebp
// 0070ef5e  7511                 jne 0x70ef71
// 0070ef60  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0070ef64  8928                 mov dword ptr [eax], ebp
// 0070ef66  896804               mov dword ptr [eax + 4], ebp
// 0070ef69  5d                   pop ebp
// 0070ef6a  5b                   pop ebx
// 0070ef6b  83c430               add esp, 0x30
// 0070ef6e  c20c00               ret 0xc
// 0070ef71  56                   push esi
// 0070ef72  8d542414             lea edx, [esp + 0x14]
// 0070ef76  52                   push edx
// 0070ef77  6800000400           push 0x40000
// 0070ef7c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0070ef80  8b01                 mov eax, dword ptr [ecx]
// 0070ef82  8b400c               mov eax, dword ptr [eax + 0xc]
// 0070ef85  55                   push ebp
// 0070ef86  6845040000           push 0x445
// 0070ef8b  ffd0                 call eax
// 0070ef8d  8b442448             mov eax, dword ptr [esp + 0x48]
// 0070ef91  33f6                 xor esi, esi
// 0070ef93  03c0                 add eax, eax
// 0070ef95  89ab28010000         mov dword ptr [ebx + 0x128], ebp
// 0070ef9b  89ab24010000         mov dword ptr [ebx + 0x124], ebp
// 0070efa1  89742410             mov dword ptr [esp + 0x10], esi
// 0070efa5  896c240c             mov dword ptr [esp + 0xc], ebp
// 0070efa9  89442448             mov dword ptr [esp + 0x48], eax
// 0070efad  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0070efb1  896c2420             mov dword ptr [esp + 0x20], ebp
// 0070efb5  896c2424             mov dword ptr [esp + 0x24], ebp
// 0070efb9  896c2428             mov dword ptr [esp + 0x28], ebp
// 0070efbd  57                   push edi
// 0070efbe  8bff                 mov edi, edi
// 0070efc0  8b7b24               mov edi, dword ptr [ebx + 0x24]
// 0070efc3  55                   push ebp
// 0070efc4  55                   push ebp
// 0070efc5  03c6                 add eax, esi
// 0070efc7  55                   push ebp
// 0070efc8  99                   cdq 
// 0070efc9  8d4c242c             lea ecx, [esp + 0x2c]
// 0070efcd  51                   push ecx
// 0070efce  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0070efd2  2bc2                 sub eax, edx
// 0070efd4  55                   push ebp
// 0070efd5  8d542444             lea edx, [esp + 0x44]
// 0070efd9  8bf0                 mov esi, eax
// 0070efdb  52                   push edx
// 0070efdc  d1fe                 sar esi, 1
// 0070efde  55                   push ebp
// 0070efdf  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0070efe3  896c2450             mov dword ptr [esp + 0x50], ebp
// 0070efe7  89742454             mov dword ptr [esp + 0x54], esi
// 0070efeb  c744245801000000     mov dword ptr [esp + 0x58], 1
// 0070eff3  e878e7f2ff           call 0x63d770
// 0070eff8  50                   push eax
// 0070eff9  8b07                 mov eax, dword ptr [edi]
// 0070effb  8b4010               mov eax, dword ptr [eax + 0x10]
// 0070effe  33ed                 xor ebp, ebp
// 0070f000  55                   push ebp
// 0070f001  55                   push ebp
// 0070f002  55                   push ebp
// 0070f003  6a01                 push 1
// 0070f005  8bcf                 mov ecx, edi
// 0070f007  ffd0                 call eax
// 0070f009  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070f00d  3bcd                 cmp ecx, ebp
// 0070f00f  750a                 jne 0x70f01b
// 0070f011  8b8b28010000         mov ecx, dword ptr [ebx + 0x128]
// 0070f017  894c2410             mov dword ptr [esp + 0x10], ecx
// 0070f01b  398b28010000         cmp dword ptr [ebx + 0x128], ecx
// 0070f021  7e0d                 jle 0x70f030
// 0070f023  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0070f027  83c601               add esi, 1
// 0070f02a  89742414             mov dword ptr [esp + 0x14], esi
// 0070f02e  eb0b                 jmp 0x70f03b
// 0070f030  8d46ff               lea eax, [esi - 1]
// 0070f033  8b742414             mov esi, dword ptr [esp + 0x14]
// 0070f037  8944244c             mov dword ptr [esp + 0x4c], eax
// 0070f03b  3bf0                 cmp esi, eax
// 0070f03d  7c81                 jl 0x70efc0
// 0070f03f  398b28010000         cmp dword ptr [ebx + 0x128], ecx
// 0070f045  5f                   pop edi
// 0070f046  7e45                 jle 0x70f08d
// 0070f048  83c001               add eax, 1
// 0070f04b  89442434             mov dword ptr [esp + 0x34], eax
// 0070f04f  8b442444             mov eax, dword ptr [esp + 0x44]
// 0070f053  3bc5                 cmp eax, ebp
// 0070f055  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0070f059  896c2430             mov dword ptr [esp + 0x30], ebp
// 0070f05d  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0070f065  7504                 jne 0x70f06b
// 0070f067  33c0                 xor eax, eax
// 0070f069  eb03                 jmp 0x70f06e
// 0070f06b  8b4004               mov eax, dword ptr [eax + 4]
// 0070f06e  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 0070f071  8b11                 mov edx, dword ptr [ecx]
// 0070f073  55                   push ebp
// 0070f074  55                   push ebp
// 0070f075  55                   push ebp
// 0070f076  8d742428             lea esi, [esp + 0x28]
// 0070f07a  56                   push esi
// 0070f07b  55                   push ebp
// 0070f07c  8d742440             lea esi, [esp + 0x40]
// 0070f080  56                   push esi
// 0070f081  55                   push ebp
// 0070f082  50                   push eax
// 0070f083  8b4210               mov eax, dword ptr [edx + 0x10]
// 0070f086  55                   push ebp
// 0070f087  55                   push ebp
// 0070f088  55                   push ebp
// 0070f089  6a01                 push 1
// 0070f08b  ffd0                 call eax
// 0070f08d  8b8b24010000         mov ecx, dword ptr [ebx + 0x124]
// 0070f093  8b442440             mov eax, dword ptr [esp + 0x40]
// 0070f097  8b9328010000         mov edx, dword ptr [ebx + 0x128]
// 0070f09d  5e                   pop esi
// 0070f09e  5d                   pop ebp
// 0070f09f  8908                 mov dword ptr [eax], ecx
// 0070f0a1  895004               mov dword ptr [eax + 4], edx
// 0070f0a4  5b                   pop ebx
// 0070f0a5  83c430               add esp, 0x30
// 0070f0a8  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Common\XTPRichRender.cpp (function ?GetTextExtent@CXTPRichRender@@QAE?AVCSize@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPRichRender.cpp
