// roc 2007-08 004e1780  unit: PBBBuilder  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e1780
//
// 004e1780  6aff                 push -1
// 004e1782  68fbcd7400           push 0x74cdfb
// 004e1787  64a100000000         mov eax, dword ptr fs:[0]
// 004e178d  50                   push eax
// 004e178e  64892500000000       mov dword ptr fs:[0], esp
// 004e1795  83ec38               sub esp, 0x38
// 004e1798  53                   push ebx
// 004e1799  56                   push esi
// 004e179a  8bf1                 mov esi, ecx
// 004e179c  57                   push edi
// 004e179d  89742414             mov dword ptr [esp + 0x14], esi
// 004e17a1  e8da490100           call 0x4f6180
// 004e17a6  33ff                 xor edi, edi
// 004e17a8  6a1c                 push 0x1c
// 004e17aa  897c2450             mov dword ptr [esp + 0x50], edi
// 004e17ae  c70654f37900         mov dword ptr [esi], 0x79f354
// 004e17b4  e83de71400           call 0x62fef6
// 004e17b9  83c404               add esp, 4
// 004e17bc  3bc7                 cmp eax, edi
// 004e17be  7424                 je 0x4e17e4
// 004e17c0  c70084797900         mov dword ptr [eax], 0x797984
// 004e17c6  897804               mov dword ptr [eax + 4], edi
// 004e17c9  897808               mov dword ptr [eax + 8], edi
// 004e17cc  c70004f37900         mov dword ptr [eax], 0x79f304
// 004e17d2  897810               mov dword ptr [eax + 0x10], edi
// 004e17d5  897814               mov dword ptr [eax + 0x14], edi
// 004e17d8  89780c               mov dword ptr [eax + 0xc], edi
// 004e17db  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004e17e2  eb02                 jmp 0x4e17e6
// 004e17e4  33c0                 xor eax, eax
// 004e17e6  3bc7                 cmp eax, edi
// 004e17e8  897c2410             mov dword ptr [esp + 0x10], edi
// 004e17ec  740e                 je 0x4e17fc
// 004e17ee  89442410             mov dword ptr [esp + 0x10], eax
// 004e17f2  83c004               add eax, 4
// 004e17f5  50                   push eax
// 004e17f6  ff15ecd27700         call dword ptr [0x77d2ec]
// 004e17fc  8d442410             lea eax, [esp + 0x10]
// 004e1800  b303                 mov bl, 3
// 004e1802  50                   push eax
// 004e1803  8d4e0c               lea ecx, [esi + 0xc]
// 004e1806  885c2450             mov byte ptr [esp + 0x50], bl
// 004e180a  e841baffff           call 0x4dd250
// 004e180f  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004e1813  d901                 fld dword ptr [ecx]
// 004e1815  33c0                 xor eax, eax
// 004e1817  50                   push eax
// 004e1818  83ec0c               sub esp, 0xc
// 004e181b  8bc4                 mov eax, esp
// 004e181d  d918                 fstp dword ptr [eax]
// 004e181f  89642428             mov dword ptr [esp + 0x28], esp
// 004e1823  d94104               fld dword ptr [ecx + 4]
// 004e1826  d95804               fstp dword ptr [eax + 4]
// 004e1829  d94108               fld dword ptr [ecx + 8]
// 004e182c  8d4c2420             lea ecx, [esp + 0x20]
// 004e1830  51                   push ecx
// 004e1831  d95808               fstp dword ptr [eax + 8]
// 004e1834  8d4c2430             lea ecx, [esp + 0x30]
// 004e1838  e803d0ffff           call 0x4de840
// 004e183d  8b542458             mov edx, dword ptr [esp + 0x58]
// 004e1841  6a01                 push 1
// 004e1843  52                   push edx
// 004e1844  8d4c2424             lea ecx, [esp + 0x24]
// 004e1848  c644245404           mov byte ptr [esp + 0x54], 4
// 004e184d  e8ced30000           call 0x4eec20
// 004e1852  8b442430             mov eax, dword ptr [esp + 0x30]
// 004e1856  3bc7                 cmp eax, edi
// 004e1858  885c244c             mov byte ptr [esp + 0x4c], bl
// 004e185c  8b1de8d27700         mov ebx, dword ptr [0x77d2e8]
// 004e1862  7427                 je 0x4e188b
// 004e1864  83c004               add eax, 4
// 004e1867  50                   push eax
// 004e1868  ffd3                 call ebx
// 004e186a  85c0                 test eax, eax
// 004e186c  7519                 jne 0x4e1887
// 004e186e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004e1872  e85965f7ff           call 0x457dd0
// 004e1877  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004e187b  3bcf                 cmp ecx, edi
// 004e187d  7408                 je 0x4e1887
// 004e187f  8b01                 mov eax, dword ptr [ecx]
// 004e1881  8b10                 mov edx, dword ptr [eax]
// 004e1883  6a01                 push 1
// 004e1885  ffd2                 call edx
// 004e1887  897c2430             mov dword ptr [esp + 0x30], edi
// 004e188b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e188f  3bc7                 cmp eax, edi
// 004e1891  c644244c00           mov byte ptr [esp + 0x4c], 0
// 004e1896  7423                 je 0x4e18bb
// 004e1898  83c004               add eax, 4
// 004e189b  50                   push eax
// 004e189c  ffd3                 call ebx
// 004e189e  85c0                 test eax, eax
// 004e18a0  7519                 jne 0x4e18bb
// 004e18a2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e18a6  e82565f7ff           call 0x457dd0
// 004e18ab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e18af  3bcf                 cmp ecx, edi
// 004e18b1  7408                 je 0x4e18bb
// 004e18b3  8b01                 mov eax, dword ptr [ecx]
// 004e18b5  8b10                 mov edx, dword ptr [eax]
// 004e18b7  6a01                 push 1
// 004e18b9  ffd2                 call edx
// 004e18bb  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004e18bf  5f                   pop edi
// 004e18c0  8bc6                 mov eax, esi
// 004e18c2  5e                   pop esi
// 004e18c3  64890d00000000       mov dword ptr fs:[0], ecx
// 004e18ca  5b                   pop ebx
// 004e18cb  83c444               add esp, 0x44
// 004e18ce  c20800               ret 8
// library rbxgs-view/PBBMesh.cpp (function ??0PBBMesh@View@RBX@@AAE@ABVVector3@G3D@@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
