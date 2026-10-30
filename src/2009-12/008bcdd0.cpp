// roc 2009-12 008bcdd0  unit: CXTPDockingPaneContext  size: 589 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bcdd0
//
// 008bcdd0  6aff                 push -1
// 008bcdd2  68383b9600           push 0x963b38
// 008bcdd7  64a100000000         mov eax, dword ptr fs:[0]
// 008bcddd  50                   push eax
// 008bcdde  83ec48               sub esp, 0x48
// 008bcde1  53                   push ebx
// 008bcde2  55                   push ebp
// 008bcde3  56                   push esi
// 008bcde4  57                   push edi
// 008bcde5  a10052b600           mov eax, dword ptr [0xb65200]
// 008bcdea  33c4                 xor eax, esp
// 008bcdec  50                   push eax
// 008bcded  8d44245c             lea eax, [esp + 0x5c]
// 008bcdf1  64a300000000         mov dword ptr fs:[0], eax
// 008bcdf7  8bf1                 mov esi, ecx
// 008bcdf9  33db                 xor ebx, ebx
// 008bcdfb  399c2484000000       cmp dword ptr [esp + 0x84], ebx
// 008bce02  7419                 je 0x8bce1d
// 008bce04  53                   push ebx
// 008bce05  53                   push ebx
// 008bce06  53                   push ebx
// 008bce07  53                   push ebx
// 008bce08  ff150cb19800         call dword ptr [0x98b10c]
// 008bce0e  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008bce12  50                   push eax
// 008bce13  e81270f3ff           call 0x7f3e2a
// 008bce18  e9ea010000           jmp 0x8bd007
// 008bce1d  399c2480000000       cmp dword ptr [esp + 0x80], ebx
// 008bce24  0f84ab010000         je 0x8bcfd5
// 008bce2a  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 008bce2e  8bc7                 mov eax, edi
// 008bce30  2b442474             sub eax, dword ptr [esp + 0x74]
// 008bce34  bd14000000           mov ebp, 0x14
// 008bce39  99                   cdq 
// 008bce3a  2bc2                 sub eax, edx
// 008bce3c  d1f8                 sar eax, 1
// 008bce3e  83f814               cmp eax, 0x14
// 008bce41  7f02                 jg 0x8bce45
// 008bce43  8be8                 mov ebp, eax
// 008bce45  8b542478             mov edx, dword ptr [esp + 0x78]
// 008bce49  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008bce4d  2bd1                 sub edx, ecx
// 008bce4f  83c2fb               add edx, -5
// 008bce52  83fa32               cmp edx, 0x32
// 008bce55  7e05                 jle 0x8bce5c
// 008bce57  ba32000000           mov edx, 0x32
// 008bce5c  8bc7                 mov eax, edi
// 008bce5e  2bc5                 sub eax, ebp
// 008bce60  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 008bce64  8d540a05             lea edx, [edx + ecx + 5]
// 008bce68  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008bce6c  896c2430             mov dword ptr [esp + 0x30], ebp
// 008bce70  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 008bce74  89442438             mov dword ptr [esp + 0x38], eax
// 008bce78  897c2448             mov dword ptr [esp + 0x48], edi
// 008bce7c  83c0fc               add eax, -4
// 008bce7f  83c105               add ecx, 5
// 008bce82  bff82a9f00           mov edi, 0x9f2af8
// 008bce87  896c2434             mov dword ptr [esp + 0x34], ebp
// 008bce8b  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008bce8f  89442440             mov dword ptr [esp + 0x40], eax
// 008bce93  89542444             mov dword ptr [esp + 0x44], edx
// 008bce97  895c2428             mov dword ptr [esp + 0x28], ebx
// 008bce9b  897c2424             mov dword ptr [esp + 0x24], edi
// 008bce9f  895c2464             mov dword ptr [esp + 0x64], ebx
// 008bcea3  895c2420             mov dword ptr [esp + 0x20], ebx
// 008bcea7  897c241c             mov dword ptr [esp + 0x1c], edi
// 008bceab  895c2418             mov dword ptr [esp + 0x18], ebx
// 008bceaf  897c2414             mov dword ptr [esp + 0x14], edi
// 008bceb3  8d44243c             lea eax, [esp + 0x3c]
// 008bceb7  50                   push eax
// 008bceb8  8d4c2430             lea ecx, [esp + 0x30]
// 008bcebc  51                   push ecx
// 008bcebd  8d542454             lea edx, [esp + 0x54]
// 008bcec1  52                   push edx
// 008bcec2  c644247002           mov byte ptr [esp + 0x70], 2
// 008bcec7  ff15dcca9800         call dword ptr [0x98cadc]
// 008bcecd  53                   push ebx
// 008bcece  6afc                 push -4
// 008bced0  8d442454             lea eax, [esp + 0x54]
// 008bced4  50                   push eax
// 008bced5  ff1558ca9800         call dword ptr [0x98ca58]
// 008bcedb  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008bcedf  8b542430             mov edx, dword ptr [esp + 0x30]
// 008bcee3  83ec10               sub esp, 0x10
// 008bcee6  8bc4                 mov eax, esp
// 008bcee8  8908                 mov dword ptr [eax], ecx
// 008bceea  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008bceee  895004               mov dword ptr [eax + 4], edx
// 008bcef1  8b542448             mov edx, dword ptr [esp + 0x48]
// 008bcef5  894808               mov dword ptr [eax + 8], ecx
// 008bcef8  89500c               mov dword ptr [eax + 0xc], edx
// 008bcefb  8d442434             lea eax, [esp + 0x34]
// 008bceff  50                   push eax
// 008bcf00  8bce                 mov ecx, esi
// 008bcf02  e8a9fdffff           call 0x8bccb0
// 008bcf07  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008bcf0b  8b542440             mov edx, dword ptr [esp + 0x40]
// 008bcf0f  83ec10               sub esp, 0x10
// 008bcf12  8bc4                 mov eax, esp
// 008bcf14  8908                 mov dword ptr [eax], ecx
// 008bcf16  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008bcf1a  895004               mov dword ptr [eax + 4], edx
// 008bcf1d  8b542458             mov edx, dword ptr [esp + 0x58]
// 008bcf21  894808               mov dword ptr [eax + 8], ecx
// 008bcf24  89500c               mov dword ptr [eax + 0xc], edx
// 008bcf27  8d44242c             lea eax, [esp + 0x2c]
// 008bcf2b  50                   push eax
// 008bcf2c  8bce                 mov ecx, esi
// 008bcf2e  e87dfdffff           call 0x8bccb0
// 008bcf33  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008bcf37  8b542450             mov edx, dword ptr [esp + 0x50]
// 008bcf3b  83ec10               sub esp, 0x10
// 008bcf3e  8bc4                 mov eax, esp
// 008bcf40  8908                 mov dword ptr [eax], ecx
// 008bcf42  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008bcf46  895004               mov dword ptr [eax + 4], edx
// 008bcf49  8b542468             mov edx, dword ptr [esp + 0x68]
// 008bcf4d  894808               mov dword ptr [eax + 8], ecx
// 008bcf50  89500c               mov dword ptr [eax + 0xc], edx
// 008bcf53  8d442424             lea eax, [esp + 0x24]
// 008bcf57  50                   push eax
// 008bcf58  8bce                 mov ecx, esi
// 008bcf5a  e851fdffff           call 0x8bccb0
// 008bcf5f  53                   push ebx
// 008bcf60  53                   push ebx
// 008bcf61  53                   push ebx
// 008bcf62  53                   push ebx
// 008bcf63  ff150cb19800         call dword ptr [0x98b10c]
// 008bcf69  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008bcf6d  50                   push eax
// 008bcf6e  8bce                 mov ecx, esi
// 008bcf70  e8b56ef3ff           call 0x7f3e2a
// 008bcf75  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008bcf79  8b542420             mov edx, dword ptr [esp + 0x20]
// 008bcf7d  8b4604               mov eax, dword ptr [esi + 4]
// 008bcf80  8b2dacb09800         mov ebp, dword ptr [0x98b0ac]
// 008bcf86  6a02                 push 2
// 008bcf88  51                   push ecx
// 008bcf89  52                   push edx
// 008bcf8a  50                   push eax
// 008bcf8b  ffd5                 call ebp
// 008bcf8d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bcf91  8b7604               mov esi, dword ptr [esi + 4]
// 008bcf94  6a03                 push 3
// 008bcf96  51                   push ecx
// 008bcf97  56                   push esi
// 008bcf98  56                   push esi
// 008bcf99  ffd5                 call ebp
// 008bcf9b  8d4c2414             lea ecx, [esp + 0x14]
// 008bcf9f  c644246401           mov byte ptr [esp + 0x64], 1
// 008bcfa4  897c2414             mov dword ptr [esp + 0x14], edi
// 008bcfa8  e88322b5ff           call 0x40f230
// 008bcfad  8d4c241c             lea ecx, [esp + 0x1c]
// 008bcfb1  885c2464             mov byte ptr [esp + 0x64], bl
// 008bcfb5  897c241c             mov dword ptr [esp + 0x1c], edi
// 008bcfb9  e87222b5ff           call 0x40f230
// 008bcfbe  8d4c2424             lea ecx, [esp + 0x24]
// 008bcfc2  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008bcfca  897c2424             mov dword ptr [esp + 0x24], edi
// 008bcfce  e85d22b5ff           call 0x40f230
// 008bcfd3  eb32                 jmp 0x8bd007
// 008bcfd5  8b542470             mov edx, dword ptr [esp + 0x70]
// 008bcfd9  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008bcfdd  83ec10               sub esp, 0x10
// 008bcfe0  8bc4                 mov eax, esp
// 008bcfe2  8910                 mov dword ptr [eax], edx
// 008bcfe4  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008bcfeb  894804               mov dword ptr [eax + 4], ecx
// 008bcfee  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008bcff5  895008               mov dword ptr [eax + 8], edx
// 008bcff8  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008bcffc  89480c               mov dword ptr [eax + 0xc], ecx
// 008bcfff  52                   push edx
// 008bd000  8bce                 mov ecx, esi
// 008bd002  e8a9fcffff           call 0x8bccb0
// 008bd007  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008bd00b  64890d00000000       mov dword ptr fs:[0], ecx
// 008bd012  59                   pop ecx
// 008bd013  5f                   pop edi
// 008bd014  5e                   pop esi
// 008bd015  5d                   pop ebp
// 008bd016  5b                   pop ebx
// 008bd017  83c454               add esp, 0x54
// 008bd01a  c21c00               ret 0x1c
// copied from an identical function in another client (function ?_CreateRgn@CXTPDockingPaneContext@@IAEXAAVCRgn@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp