// roc 2009-12 0081fe60  unit: CXTPReportControl  size: 930 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081fe60
//
// 0081fe60  6aff                 push -1
// 0081fe62  6800af9500           push 0x95af00
// 0081fe67  64a100000000         mov eax, dword ptr fs:[0]
// 0081fe6d  50                   push eax
// 0081fe6e  83ec5c               sub esp, 0x5c
// 0081fe71  53                   push ebx
// 0081fe72  55                   push ebp
// 0081fe73  56                   push esi
// 0081fe74  57                   push edi
// 0081fe75  a10052b600           mov eax, dword ptr [0xb65200]
// 0081fe7a  33c4                 xor eax, esp
// 0081fe7c  50                   push eax
// 0081fe7d  8d442470             lea eax, [esp + 0x70]
// 0081fe81  64a300000000         mov dword ptr fs:[0], eax
// 0081fe87  8bf1                 mov esi, ecx
// 0081fe89  33ed                 xor ebp, ebp
// 0081fe8b  3bf5                 cmp esi, ebp
// 0081fe8d  0f845b030000         je 0x8201ee
// 0081fe93  396e20               cmp dword ptr [esi + 0x20], ebp
// 0081fe96  0f8452030000         je 0x8201ee
// 0081fe9c  56                   push esi
// 0081fe9d  8d4c243c             lea ecx, [esp + 0x3c]
// 0081fea1  e82ab40200           call 0x84b2d0
// 0081fea6  8b4678               mov eax, dword ptr [esi + 0x78]
// 0081fea9  2b4670               sub eax, dword ptr [esi + 0x70]
// 0081feac  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 0081feb2  8d7e70               lea edi, [esi + 0x70]
// 0081feb5  897c242c             mov dword ptr [esp + 0x2c], edi
// 0081feb9  89442430             mov dword ptr [esp + 0x30], eax
// 0081febd  894c2434             mov dword ptr [esp + 0x34], ecx
// 0081fec1  39aeb8010000         cmp dword ptr [esi + 0x1b8], ebp
// 0081fec7  740f                 je 0x81fed8
// 0081fec9  3bcd                 cmp ecx, ebp
// 0081fecb  740b                 je 0x81fed8
// 0081fecd  e8ce840000           call 0x8283a0
// 0081fed2  89442428             mov dword ptr [esp + 0x28], eax
// 0081fed6  eb04                 jmp 0x81fedc
// 0081fed8  896c2428             mov dword ptr [esp + 0x28], ebp
// 0081fedc  8b442440             mov eax, dword ptr [esp + 0x40]
// 0081fee0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081fee4  2b442438             sub eax, dword ptr [esp + 0x38]
// 0081fee8  8b1d38ca9800         mov ebx, dword ptr [0x98ca38]
// 0081feee  51                   push ecx
// 0081feef  50                   push eax
// 0081fef0  55                   push ebp
// 0081fef1  55                   push ebp
// 0081fef2  8d5660               lea edx, [esi + 0x60]
// 0081fef5  52                   push edx
// 0081fef6  ffd3                 call ebx
// 0081fef8  896c2424             mov dword ptr [esp + 0x24], ebp
// 0081fefc  896c2414             mov dword ptr [esp + 0x14], ebp
// 0081ff00  896c2420             mov dword ptr [esp + 0x20], ebp
// 0081ff04  896c2418             mov dword ptr [esp + 0x18], ebp
// 0081ff08  39aeec010000         cmp dword ptr [esi + 0x1ec], ebp
// 0081ff0e  743a                 je 0x81ff4a
// 0081ff10  56                   push esi
// 0081ff11  8d4c244c             lea ecx, [esp + 0x4c]
// 0081ff15  e870651000           call 0x92648a
// 0081ff1a  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0081ff20  8b01                 mov eax, dword ptr [ecx]
// 0081ff22  8b4064               mov eax, dword ptr [eax + 0x64]
// 0081ff25  55                   push ebp
// 0081ff26  8d54244c             lea edx, [esp + 0x4c]
// 0081ff2a  52                   push edx
// 0081ff2b  56                   push esi
// 0081ff2c  89ac2484000000       mov dword ptr [esp + 0x84], ebp
// 0081ff33  ffd0                 call eax
// 0081ff35  8d4c2448             lea ecx, [esp + 0x48]
// 0081ff39  89442424             mov dword ptr [esp + 0x24], eax
// 0081ff3d  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 0081ff45  e83a651000           call 0x926484
// 0081ff4a  39aef0010000         cmp dword ptr [esi + 0x1f0], ebp
// 0081ff50  743e                 je 0x81ff90
// 0081ff52  56                   push esi
// 0081ff53  8d4c2460             lea ecx, [esp + 0x60]
// 0081ff57  e82e651000           call 0x92648a
// 0081ff5c  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0081ff62  8b11                 mov edx, dword ptr [ecx]
// 0081ff64  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0081ff67  55                   push ebp
// 0081ff68  8d442460             lea eax, [esp + 0x60]
// 0081ff6c  50                   push eax
// 0081ff6d  56                   push esi
// 0081ff6e  c784248400000001000000 mov dword ptr [esp + 0x84], 1
// 0081ff79  ffd2                 call edx
// 0081ff7b  8d4c245c             lea ecx, [esp + 0x5c]
// 0081ff7f  89442414             mov dword ptr [esp + 0x14], eax
// 0081ff83  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 0081ff8b  e8f4641000           call 0x926484
// 0081ff90  8b06                 mov eax, dword ptr [esi]
// 0081ff92  8b9024020000         mov edx, dword ptr [eax + 0x224]
// 0081ff98  8bce                 mov ecx, esi
// 0081ff9a  ffd2                 call edx
// 0081ff9c  8be8                 mov ebp, eax
// 0081ff9e  8b06                 mov eax, dword ptr [esi]
// 0081ffa0  8b9028020000         mov edx, dword ptr [eax + 0x228]
// 0081ffa6  8bce                 mov ecx, esi
// 0081ffa8  ffd2                 call edx
// 0081ffaa  83bef401000000       cmp dword ptr [esi + 0x1f4], 0
// 0081ffb1  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081ffb5  7424                 je 0x81ffdb
// 0081ffb7  8b442440             mov eax, dword ptr [esp + 0x40]
// 0081ffbb  2b442438             sub eax, dword ptr [esp + 0x38]
// 0081ffbf  8b16                 mov edx, dword ptr [esi]
// 0081ffc1  8b9220020000         mov edx, dword ptr [edx + 0x220]
// 0081ffc7  6aff                 push -1
// 0081ffc9  50                   push eax
// 0081ffca  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0081ffd0  50                   push eax
// 0081ffd1  8bce                 mov ecx, esi
// 0081ffd3  ffd2                 call edx
// 0081ffd5  89442420             mov dword ptr [esp + 0x20], eax
// 0081ffd9  eb02                 jmp 0x81ffdd
// 0081ffdb  33ed                 xor ebp, ebp
// 0081ffdd  83bef801000000       cmp dword ptr [esi + 0x1f8], 0
// 0081ffe4  7422                 je 0x820008
// 0081ffe6  8b442440             mov eax, dword ptr [esp + 0x40]
// 0081ffea  2b442438             sub eax, dword ptr [esp + 0x38]
// 0081ffee  8b16                 mov edx, dword ptr [esi]
// 0081fff0  8b9220020000         mov edx, dword ptr [edx + 0x220]
// 0081fff6  6aff                 push -1
// 0081fff8  50                   push eax
// 0081fff9  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0081ffff  50                   push eax
// 00820000  8bce                 mov ecx, esi
// 00820002  ffd2                 call edx
// 00820004  89442418             mov dword ptr [esp + 0x18], eax
// 00820008  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0082000b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0082000f  8d1408               lea edx, [eax + ecx]
// 00820012  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00820016  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 0082001a  52                   push edx
// 0082001b  51                   push ecx
// 0082001c  50                   push eax
// 0082001d  6a00                 push 0
// 0082001f  57                   push edi
// 00820020  ffd3                 call ebx
// 00820022  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00820025  8b542420             mov edx, dword ptr [esp + 0x20]
// 00820029  8d0c10               lea ecx, [eax + edx]
// 0082002c  8b542440             mov edx, dword ptr [esp + 0x40]
// 00820030  2b542438             sub edx, dword ptr [esp + 0x38]
// 00820034  51                   push ecx
// 00820035  52                   push edx
// 00820036  50                   push eax
// 00820037  6a00                 push 0
// 00820039  8d86a0000000         lea eax, [esi + 0xa0]
// 0082003f  50                   push eax
// 00820040  ffd3                 call ebx
// 00820042  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00820048  8b542440             mov edx, dword ptr [esp + 0x40]
// 0082004c  2b542438             sub edx, dword ptr [esp + 0x38]
// 00820050  8d0c28               lea ecx, [eax + ebp]
// 00820053  51                   push ecx
// 00820054  52                   push edx
// 00820055  50                   push eax
// 00820056  6a00                 push 0
// 00820058  8d86c0000000         lea eax, [esi + 0xc0]
// 0082005e  50                   push eax
// 0082005f  ffd3                 call ebx
// 00820061  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00820065  2b7c243c             sub edi, dword ptr [esp + 0x3c]
// 00820069  8b542418             mov edx, dword ptr [esp + 0x18]
// 0082006d  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 00820071  2bfd                 sub edi, ebp
// 00820073  2bfa                 sub edi, edx
// 00820075  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 00820079  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0082007d  2b7c2424             sub edi, dword ptr [esp + 0x24]
// 00820081  2b7c2428             sub edi, dword ptr [esp + 0x28]
// 00820085  83bef801000000       cmp dword ptr [esi + 0x1f8], 0
// 0082008c  7478                 je 0x820106
// 0082008e  83befc01000000       cmp dword ptr [esi + 0x1fc], 0
// 00820095  746f                 je 0x820106
// 00820097  8b442440             mov eax, dword ptr [esp + 0x40]
// 0082009b  2b442438             sub eax, dword ptr [esp + 0x38]
// 0082009f  8b16                 mov edx, dword ptr [esi]
// 008200a1  8b9220020000         mov edx, dword ptr [edx + 0x220]
// 008200a7  57                   push edi
// 008200a8  50                   push eax
// 008200a9  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 008200af  50                   push eax
// 008200b0  8bce                 mov ecx, esi
// 008200b2  ffd2                 call edx
// 008200b4  3bc7                 cmp eax, edi
// 008200b6  8b542418             mov edx, dword ptr [esp + 0x18]
// 008200ba  7d4a                 jge 0x820106
// 008200bc  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 008200c2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008200c6  03c8                 add ecx, eax
// 008200c8  03cf                 add ecx, edi
// 008200ca  8d0429               lea eax, [ecx + ebp]
// 008200cd  8d0c10               lea ecx, [eax + edx]
// 008200d0  8b542440             mov edx, dword ptr [esp + 0x40]
// 008200d4  2b542438             sub edx, dword ptr [esp + 0x38]
// 008200d8  51                   push ecx
// 008200d9  52                   push edx
// 008200da  50                   push eax
// 008200db  6a00                 push 0
// 008200dd  8d86b0000000         lea eax, [esi + 0xb0]
// 008200e3  50                   push eax
// 008200e4  ffd3                 call ebx
// 008200e6  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 008200ec  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008200f0  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 008200f4  50                   push eax
// 008200f5  51                   push ecx
// 008200f6  2bc7                 sub eax, edi
// 008200f8  50                   push eax
// 008200f9  6a00                 push 0
// 008200fb  8d96d0000000         lea edx, [esi + 0xd0]
// 00820101  52                   push edx
// 00820102  ffd3                 call ebx
// 00820104  eb7c                 jmp 0x820182
// 00820106  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0082010a  2b4c243c             sub ecx, dword ptr [esp + 0x3c]
// 0082010e  8bbeac000000         mov edi, dword ptr [esi + 0xac]
// 00820114  8bc1                 mov eax, ecx
// 00820116  2bc2                 sub eax, edx
// 00820118  2b442414             sub eax, dword ptr [esp + 0x14]
// 0082011c  03fd                 add edi, ebp
// 0082011e  3bc7                 cmp eax, edi
// 00820120  7e1a                 jle 0x82013c
// 00820122  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00820126  8d96b0000000         lea edx, [esi + 0xb0]
// 0082012c  51                   push ecx
// 0082012d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00820131  2b4c243c             sub ecx, dword ptr [esp + 0x3c]
// 00820135  51                   push ecx
// 00820136  50                   push eax
// 00820137  6a00                 push 0
// 00820139  52                   push edx
// 0082013a  eb1f                 jmp 0x82015b
// 0082013c  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00820142  03c5                 add eax, ebp
// 00820144  8d0c10               lea ecx, [eax + edx]
// 00820147  8b542440             mov edx, dword ptr [esp + 0x40]
// 0082014b  2b542438             sub edx, dword ptr [esp + 0x38]
// 0082014f  51                   push ecx
// 00820150  52                   push edx
// 00820151  50                   push eax
// 00820152  6a00                 push 0
// 00820154  8d86b0000000         lea eax, [esi + 0xb0]
// 0082015a  50                   push eax
// 0082015b  ffd3                 call ebx
// 0082015d  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00820163  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00820167  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 0082016b  50                   push eax
// 0082016c  2b442420             sub eax, dword ptr [esp + 0x20]
// 00820170  51                   push ecx
// 00820171  48                   dec eax
// 00820172  50                   push eax
// 00820173  6a00                 push 0
// 00820175  8d96d0000000         lea edx, [esi + 0xd0]
// 0082017b  52                   push edx
// 0082017c  ffd3                 call ebx
// 0082017e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00820182  8b442444             mov eax, dword ptr [esp + 0x44]
// 00820186  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 0082018a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0082018e  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 00820192  50                   push eax
// 00820193  2b442418             sub eax, dword ptr [esp + 0x18]
// 00820197  51                   push ecx
// 00820198  50                   push eax
// 00820199  6a00                 push 0
// 0082019b  8d9680000000         lea edx, [esi + 0x80]
// 008201a1  52                   push edx
// 008201a2  ffd3                 call ebx
// 008201a4  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 008201aa  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008201ae  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 008201b2  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008201b8  2bc7                 sub eax, edi
// 008201ba  50                   push eax
// 008201bb  51                   push ecx
// 008201bc  03d5                 add edx, ebp
// 008201be  52                   push edx
// 008201bf  6a00                 push 0
// 008201c1  81c690000000         add esi, 0x90
// 008201c7  56                   push esi
// 008201c8  ffd3                 call ebx
// 008201ca  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008201ce  8b4808               mov ecx, dword ptr [eax + 8]
// 008201d1  2b08                 sub ecx, dword ptr [eax]
// 008201d3  394c2430             cmp dword ptr [esp + 0x30], ecx
// 008201d7  7415                 je 0x8201ee
// 008201d9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008201dd  85c9                 test ecx, ecx
// 008201df  740d                 je 0x8201ee
// 008201e1  8b5008               mov edx, dword ptr [eax + 8]
// 008201e4  2b10                 sub edx, dword ptr [eax]
// 008201e6  6a00                 push 0
// 008201e8  52                   push edx
// 008201e9  e832880000           call 0x828a20
// 008201ee  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008201f2  64890d00000000       mov dword ptr fs:[0], ecx
// 008201f9  59                   pop ecx
// 008201fa  5f                   pop edi
// 008201fb  5e                   pop esi
// 008201fc  5d                   pop ebp
// 008201fd  5b                   pop ebx
// 008201fe  83c468               add esp, 0x68
// 00820201  c3                   ret 
// copied from an identical function in another client (function ?AdjustLayout@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp