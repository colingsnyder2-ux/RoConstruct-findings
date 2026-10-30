// roc 2009-12 008cde00  unit: CXTPPropertyGridInplaceList  size: 348 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cde00
//
// 008cde00  6aff                 push -1
// 008cde02  68c34d9600           push 0x964dc3
// 008cde07  64a100000000         mov eax, dword ptr fs:[0]
// 008cde0d  50                   push eax
// 008cde0e  83ec10               sub esp, 0x10
// 008cde11  53                   push ebx
// 008cde12  55                   push ebp
// 008cde13  56                   push esi
// 008cde14  57                   push edi
// 008cde15  a10052b600           mov eax, dword ptr [0xb65200]
// 008cde1a  33c4                 xor eax, esp
// 008cde1c  50                   push eax
// 008cde1d  8d442424             lea eax, [esp + 0x24]
// 008cde21  64a300000000         mov dword ptr fs:[0], eax
// 008cde27  8bf9                 mov edi, ecx
// 008cde29  33db                 xor ebx, ebx
// 008cde2b  53                   push ebx
// 008cde2c  53                   push ebx
// 008cde2d  895c2424             mov dword ptr [esp + 0x24], ebx
// 008cde31  8b4720               mov eax, dword ptr [edi + 0x20]
// 008cde34  6888010000           push 0x188
// 008cde39  50                   push eax
// 008cde3a  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008cde40  8be8                 mov ebp, eax
// 008cde42  83fdff               cmp ebp, -1
// 008cde45  0f84cc000000         je 0x8cdf17
// 008cde4b  8b7754               mov esi, dword ptr [edi + 0x54]
// 008cde4e  85f6                 test esi, esi
// 008cde50  0f84c1000000         je 0x8cdf17
// 008cde56  895f54               mov dword ptr [edi + 0x54], ebx
// 008cde59  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 008cde5f  8d4c2418             lea ecx, [esp + 0x18]
// 008cde63  896834               mov dword ptr [eax + 0x34], ebp
// 008cde66  ff1574de9800         call dword ptr [0x98de74]
// 008cde6c  8d4c2418             lea ecx, [esp + 0x18]
// 008cde70  51                   push ecx
// 008cde71  55                   push ebp
// 008cde72  8bcf                 mov ecx, edi
// 008cde74  895c2434             mov dword ptr [esp + 0x34], ebx
// 008cde78  e8ef850500           call 0x92646c
// 008cde7d  8b16                 mov edx, dword ptr [esi]
// 008cde7f  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008cde85  8d442418             lea eax, [esp + 0x18]
// 008cde89  50                   push eax
// 008cde8a  8bce                 mov ecx, esi
// 008cde8c  ffd2                 call edx
// 008cde8e  85c0                 test eax, eax
// 008cde90  7435                 je 0x8cdec7
// 008cde92  8d442420             lea eax, [esp + 0x20]
// 008cde96  50                   push eax
// 008cde97  8bce                 mov ecx, esi
// 008cde99  e88247b6ff           call 0x432620
// 008cde9e  bb01000000           mov ebx, 1
// 008cdea3  8bc8                 mov ecx, eax
// 008cdea5  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008cdeaa  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008cdeae  ff1580de9800         call dword ptr [0x98de80]
// 008cdeb4  50                   push eax
// 008cdeb5  8d4c241c             lea ecx, [esp + 0x1c]
// 008cdeb9  ff1584de9800         call dword ptr [0x98de84]
// 008cdebf  885c2417             mov byte ptr [esp + 0x17], bl
// 008cdec3  85c0                 test eax, eax
// 008cdec5  7505                 jne 0x8cdecc
// 008cdec7  c644241700           mov byte ptr [esp + 0x17], 0
// 008cdecc  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008cded4  f6c301               test bl, 1
// 008cded7  740a                 je 0x8cdee3
// 008cded9  8d4c2420             lea ecx, [esp + 0x20]
// 008cdedd  ff15c0de9800         call dword ptr [0x98dec0]
// 008cdee3  807c241700           cmp byte ptr [esp + 0x17], 0
// 008cdee8  741b                 je 0x8cdf05
// 008cdeea  51                   push ecx
// 008cdeeb  8d54241c             lea edx, [esp + 0x1c]
// 008cdeef  8bcc                 mov ecx, esp
// 008cdef1  89642420             mov dword ptr [esp + 0x20], esp
// 008cdef5  52                   push edx
// 008cdef6  ff1594de9800         call dword ptr [0x98de94]
// 008cdefc  8b06                 mov eax, dword ptr [esi]
// 008cdefe  8b5064               mov edx, dword ptr [eax + 0x64]
// 008cdf01  8bce                 mov ecx, esi
// 008cdf03  ffd2                 call edx
// 008cdf05  8d4c2418             lea ecx, [esp + 0x18]
// 008cdf09  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008cdf11  ff15c0de9800         call dword ptr [0x98dec0]
// 008cdf17  837f2000             cmp dword ptr [edi + 0x20], 0
// 008cdf1b  742b                 je 0x8cdf48
// 008cdf1d  8b7720               mov esi, dword ptr [edi + 0x20]
// 008cdf20  ff15eccb9800         call dword ptr [0x98cbec]
// 008cdf26  3bc6                 cmp eax, esi
// 008cdf28  751e                 jne 0x8cdf48
// 008cdf2a  8b7f38               mov edi, dword ptr [edi + 0x38]
// 008cdf2d  85ff                 test edi, edi
// 008cdf2f  7403                 je 0x8cdf34
// 008cdf31  57                   push edi
// 008cdf32  eb08                 jmp 0x8cdf3c
// 008cdf34  56                   push esi
// 008cdf35  ff15bccb9800         call dword ptr [0x98cbbc]
// 008cdf3b  50                   push eax
// 008cdf3c  e8e95bf2ff           call 0x7f3b2a
// 008cdf41  8bc8                 mov ecx, eax
// 008cdf43  e8ba5cf2ff           call 0x7f3c02
// 008cdf48  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008cdf4c  64890d00000000       mov dword ptr fs:[0], ecx
// 008cdf53  59                   pop ecx
// 008cdf54  5f                   pop edi
// 008cdf55  5e                   pop esi
// 008cdf56  5d                   pop ebp
// 008cdf57  5b                   pop ebx
// 008cdf58  83c41c               add esp, 0x1c
// 008cdf5b  c3                   ret 
// copied from an identical function in another client (function ?Apply@CXTPPropertyGridInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\PropertyGrid\XTPPropertyGridInplaceList.cpp