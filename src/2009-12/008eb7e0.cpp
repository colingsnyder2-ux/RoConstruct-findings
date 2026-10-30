// roc 2009-12 008eb7e0  unit: CXTPScrollBase  size: 394 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eb7e0
//
// 008eb7e0  6aff                 push -1
// 008eb7e2  6818669600           push 0x966618
// 008eb7e7  64a100000000         mov eax, dword ptr fs:[0]
// 008eb7ed  50                   push eax
// 008eb7ee  83ec10               sub esp, 0x10
// 008eb7f1  53                   push ebx
// 008eb7f2  56                   push esi
// 008eb7f3  57                   push edi
// 008eb7f4  a10052b600           mov eax, dword ptr [0xb65200]
// 008eb7f9  33c4                 xor eax, esp
// 008eb7fb  50                   push eax
// 008eb7fc  8d442420             lea eax, [esp + 0x20]
// 008eb800  64a300000000         mov dword ptr fs:[0], eax
// 008eb806  8bf1                 mov esi, ecx
// 008eb808  33db                 xor ebx, ebx
// 008eb80a  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 008eb80d  0f8542010000         jne 0x8eb955
// 008eb813  8b442430             mov eax, dword ptr [esp + 0x30]
// 008eb817  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008eb81b  c7463c01000000       mov dword ptr [esi + 0x3c], 1
// 008eb822  39461c               cmp dword ptr [esi + 0x1c], eax
// 008eb825  750f                 jne 0x8eb836
// 008eb827  394e20               cmp dword ptr [esi + 0x20], ecx
// 008eb82a  750a                 jne 0x8eb836
// 008eb82c  395c2438             cmp dword ptr [esp + 0x38], ebx
// 008eb830  0f841c010000         je 0x8eb952
// 008eb836  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008eb83a  6a01                 push 1
// 008eb83c  8bce                 mov ecx, esi
// 008eb83e  895c2414             mov dword ptr [esp + 0x14], ebx
// 008eb842  895c2418             mov dword ptr [esp + 0x18], ebx
// 008eb846  8944241c             mov dword ptr [esp + 0x1c], eax
// 008eb84a  e861feffff           call 0x8eb6b0
// 008eb84f  50                   push eax
// 008eb850  53                   push ebx
// 008eb851  53                   push ebx
// 008eb852  8bce                 mov ecx, esi
// 008eb854  e857feffff           call 0x8eb6b0
// 008eb859  50                   push eax
// 008eb85a  8d44241c             lea eax, [esp + 0x1c]
// 008eb85e  50                   push eax
// 008eb85f  ff1590ca9800         call dword ptr [0x98ca90]
// 008eb865  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008eb869  f7d9                 neg ecx
// 008eb86b  894e40               mov dword ptr [esi + 0x40], ecx
// 008eb86e  8bce                 mov ecx, esi
// 008eb870  395e44               cmp dword ptr [esi + 0x44], ebx
// 008eb873  7576                 jne 0x8eb8eb
// 008eb875  33ff                 xor edi, edi
// 008eb877  e884feffff           call 0x8eb700
// 008eb87c  85c0                 test eax, eax
// 008eb87e  755c                 jne 0x8eb8dc
// 008eb880  53                   push ebx
// 008eb881  8bce                 mov ecx, esi
// 008eb883  e828feffff           call 0x8eb6b0
// 008eb888  a900000001           test eax, 0x1000000
// 008eb88d  742d                 je 0x8eb8bc
// 008eb88f  8b4640               mov eax, dword ptr [esi + 0x40]
// 008eb892  8b542434             mov edx, dword ptr [esp + 0x34]
// 008eb896  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008eb89a  2bd0                 sub edx, eax
// 008eb89c  52                   push edx
// 008eb89d  2bc8                 sub ecx, eax
// 008eb89f  51                   push ecx
// 008eb8a0  50                   push eax
// 008eb8a1  50                   push eax
// 008eb8a2  ff150cb19800         call dword ptr [0x98b10c]
// 008eb8a8  8bf8                 mov edi, eax
// 008eb8aa  8b4608               mov eax, dword ptr [esi + 8]
// 008eb8ad  6a01                 push 1
// 008eb8af  57                   push edi
// 008eb8b0  50                   push eax
// 008eb8b1  ff1554cb9800         call dword ptr [0x98cb54]
// 008eb8b7  e988000000           jmp 0x8eb944
// 008eb8bc  8bce                 mov ecx, esi
// 008eb8be  e81dfeffff           call 0x8eb6e0
// 008eb8c3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008eb8c7  8b10                 mov edx, dword ptr [eax]
// 008eb8c9  8b922c010000         mov edx, dword ptr [edx + 0x12c]
// 008eb8cf  51                   push ecx
// 008eb8d0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008eb8d4  51                   push ecx
// 008eb8d5  56                   push esi
// 008eb8d6  8bc8                 mov ecx, eax
// 008eb8d8  ffd2                 call edx
// 008eb8da  8bf8                 mov edi, eax
// 008eb8dc  8b4608               mov eax, dword ptr [esi + 8]
// 008eb8df  6a01                 push 1
// 008eb8e1  57                   push edi
// 008eb8e2  50                   push eax
// 008eb8e3  ff1554cb9800         call dword ptr [0x98cb54]
// 008eb8e9  eb59                 jmp 0x8eb944
// 008eb8eb  53                   push ebx
// 008eb8ec  e8bffdffff           call 0x8eb6b0
// 008eb8f1  a900000001           test eax, 0x1000000
// 008eb8f6  7507                 jne 0x8eb8ff
// 008eb8f8  c7464004000000       mov dword ptr [esi + 0x40], 4
// 008eb8ff  8bce                 mov ecx, esi
// 008eb901  e82afeffff           call 0x8eb730
// 008eb906  85c0                 test eax, eax
// 008eb908  7404                 je 0x8eb90e
// 008eb90a  33ff                 xor edi, edi
// 008eb90c  eb09                 jmp 0x8eb917
// 008eb90e  8bce                 mov ecx, esi
// 008eb910  e89bfeffff           call 0x8eb7b0
// 008eb915  8bf8                 mov edi, eax
// 008eb917  8d4c2438             lea ecx, [esp + 0x38]
// 008eb91b  e85072b3ff           call 0x422b70
// 008eb920  8b4e08               mov ecx, dword ptr [esi + 8]
// 008eb923  53                   push ebx
// 008eb924  53                   push ebx
// 008eb925  57                   push edi
// 008eb926  53                   push ebx
// 008eb927  51                   push ecx
// 008eb928  8bc8                 mov ecx, eax
// 008eb92a  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008eb92e  e86d07f8ff           call 0x86c0a0
// 008eb933  8d4c2438             lea ecx, [esp + 0x38]
// 008eb937  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 008eb93f  e84c91f6ff           call 0x854a90
// 008eb944  8b542430             mov edx, dword ptr [esp + 0x30]
// 008eb948  8b442434             mov eax, dword ptr [esp + 0x34]
// 008eb94c  89561c               mov dword ptr [esi + 0x1c], edx
// 008eb94f  894620               mov dword ptr [esi + 0x20], eax
// 008eb952  895e3c               mov dword ptr [esi + 0x3c], ebx
// 008eb955  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008eb959  64890d00000000       mov dword ptr fs:[0], ecx
// 008eb960  59                   pop ecx
// 008eb961  5f                   pop edi
// 008eb962  5e                   pop esi
// 008eb963  5b                   pop ebx
// 008eb964  83c41c               add esp, 0x1c
// 008eb967  c20c00               ret 0xc
// copied from an identical function in another client (function ?UpdateFrameRegion@CXTPOffice2007FrameHook@@IAEXVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2007FrameHook.cpp