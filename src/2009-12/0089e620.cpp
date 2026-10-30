// roc 2009-12 0089e620  unit: CXTPReportPaintManager  size: 711 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089e620
//
// 0089e620  6aff                 push -1
// 0089e622  68161e9600           push 0x961e16
// 0089e627  64a100000000         mov eax, dword ptr fs:[0]
// 0089e62d  50                   push eax
// 0089e62e  83ec1c               sub esp, 0x1c
// 0089e631  53                   push ebx
// 0089e632  55                   push ebp
// 0089e633  56                   push esi
// 0089e634  57                   push edi
// 0089e635  a10052b600           mov eax, dword ptr [0xb65200]
// 0089e63a  33c4                 xor eax, esp
// 0089e63c  50                   push eax
// 0089e63d  8d442430             lea eax, [esp + 0x30]
// 0089e641  64a300000000         mov dword ptr fs:[0], eax
// 0089e647  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0089e64b  33ff                 xor edi, edi
// 0089e64d  33c0                 xor eax, eax
// 0089e64f  83fe10               cmp esi, 0x10
// 0089e652  0f8719020000         ja 0x89e871
// 0089e658  7453                 je 0x89e6ad
// 0089e65a  83fe02               cmp esi, 2
// 0089e65d  0f876e020000         ja 0x89e8d1
// 0089e663  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0089e667  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0089e66b  57                   push edi
// 0089e66c  55                   push ebp
// 0089e66d  e87ec4ffff           call 0x89aaf0
// 0089e672  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0089e676  0101                 add dword ptr [ecx], eax
// 0089e678  8b09                 mov ecx, dword ptr [ecx]
// 0089e67a  83c408               add esp, 8
// 0089e67d  3b4c2454             cmp ecx, dword ptr [esp + 0x54]
// 0089e681  7c05                 jl 0x89e688
// 0089e683  83cbff               or ebx, 0xffffffff
// 0089e686  eb0a                 jmp 0x89e692
// 0089e688  8bcf                 mov ecx, edi
// 0089e68a  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089e690  8bd8                 mov ebx, eax
// 0089e692  81ce00080000         or esi, 0x800
// 0089e698  56                   push esi
// 0089e699  8d442450             lea eax, [esp + 0x50]
// 0089e69d  50                   push eax
// 0089e69e  57                   push edi
// 0089e69f  8bcd                 mov ecx, ebp
// 0089e6a1  e87ab4f5ff           call 0x7f9b20
// 0089e6a6  8bc3                 mov eax, ebx
// 0089e6a8  e924020000           jmp 0x89e8d1
// 0089e6ad  6856fd9900           push 0x99fd56
// 0089e6b2  8d4c2460             lea ecx, [esp + 0x60]
// 0089e6b6  c744242020090a00     mov dword ptr [esp + 0x20], 0xa0920
// 0089e6be  897c241c             mov dword ptr [esp + 0x1c], edi
// 0089e6c2  ff15b8de9800         call dword ptr [0x98deb8]
// 0089e6c8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0089e6cc  51                   push ecx
// 0089e6cd  8d4c2418             lea ecx, [esp + 0x18]
// 0089e6d1  897c243c             mov dword ptr [esp + 0x3c], edi
// 0089e6d5  ff1594de9800         call dword ptr [0x98de94]
// 0089e6db  8d4c2414             lea ecx, [esp + 0x14]
// 0089e6df  c644243801           mov byte ptr [esp + 0x38], 1
// 0089e6e4  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089e6ea  50                   push eax
// 0089e6eb  8d4c2418             lea ecx, [esp + 0x18]
// 0089e6ef  ff155cd29800         call dword ptr [0x98d25c]
// 0089e6f5  8b1d00ba9800         mov ebx, dword ptr [0x98ba00]
// 0089e6fb  8d542418             lea edx, [esp + 0x18]
// 0089e6ff  52                   push edx
// 0089e700  8d4c2420             lea ecx, [esp + 0x20]
// 0089e704  51                   push ecx
// 0089e705  50                   push eax
// 0089e706  ffd3                 call ebx
// 0089e708  83c40c               add esp, 0xc
// 0089e70b  8bf0                 mov esi, eax
// 0089e70d  56                   push esi
// 0089e70e  8d4c2424             lea ecx, [esp + 0x24]
// 0089e712  ff15b8de9800         call dword ptr [0x98deb8]
// 0089e718  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0089e71c  50                   push eax
// 0089e71d  55                   push ebp
// 0089e71e  c644244002           mov byte ptr [esp + 0x40], 2
// 0089e723  e8c8c3ffff           call 0x89aaf0
// 0089e728  83c408               add esp, 8
// 0089e72b  8d4c2420             lea ecx, [esp + 0x20]
// 0089e72f  8bf8                 mov edi, eax
// 0089e731  c644243801           mov byte ptr [esp + 0x38], 1
// 0089e736  ff15c0de9800         call dword ptr [0x98dec0]
// 0089e73c  8b442454             mov eax, dword ptr [esp + 0x54]
// 0089e740  8bd0                 mov edx, eax
// 0089e742  2b54244c             sub edx, dword ptr [esp + 0x4c]
// 0089e746  3bfa                 cmp edi, edx
// 0089e748  7e10                 jle 0x89e75a
// 0089e74a  56                   push esi
// 0089e74b  8d4c2460             lea ecx, [esp + 0x60]
// 0089e74f  ff155cde9800         call dword ptr [0x98de5c]
// 0089e755  e9b3000000           jmp 0x89e80d
// 0089e75a  85f6                 test esi, esi
// 0089e75c  0f84ab000000         je 0x89e80d
// 0089e762  eb04                 jmp 0x89e768
// 0089e764  8b442454             mov eax, dword ptr [esp + 0x54]
// 0089e768  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 0089e76c  3bf8                 cmp edi, eax
// 0089e76e  0f8d99000000         jge 0x89e80d
// 0089e774  56                   push esi
// 0089e775  8d442460             lea eax, [esp + 0x60]
// 0089e779  50                   push eax
// 0089e77a  8d4c2430             lea ecx, [esp + 0x30]
// 0089e77e  51                   push ecx
// 0089e77f  e85ce6b6ff           call 0x40cde0
// 0089e784  6868619a00           push 0x9a6168
// 0089e789  50                   push eax
// 0089e78a  8d542438             lea edx, [esp + 0x38]
// 0089e78e  52                   push edx
// 0089e78f  c644245003           mov byte ptr [esp + 0x50], 3
// 0089e794  e847e6b6ff           call 0x40cde0
// 0089e799  83c418               add esp, 0x18
// 0089e79c  50                   push eax
// 0089e79d  8d4c2460             lea ecx, [esp + 0x60]
// 0089e7a1  c644243c04           mov byte ptr [esp + 0x3c], 4
// 0089e7a6  ff1538d59800         call dword ptr [0x98d538]
// 0089e7ac  8d4c2424             lea ecx, [esp + 0x24]
// 0089e7b0  ff15c0de9800         call dword ptr [0x98dec0]
// 0089e7b6  8d4c2428             lea ecx, [esp + 0x28]
// 0089e7ba  c644243801           mov byte ptr [esp + 0x38], 1
// 0089e7bf  ff15c0de9800         call dword ptr [0x98dec0]
// 0089e7c5  8d442418             lea eax, [esp + 0x18]
// 0089e7c9  50                   push eax
// 0089e7ca  8d4c2420             lea ecx, [esp + 0x20]
// 0089e7ce  51                   push ecx
// 0089e7cf  6a00                 push 0
// 0089e7d1  ffd3                 call ebx
// 0089e7d3  8bf0                 mov esi, eax
// 0089e7d5  56                   push esi
// 0089e7d6  8d54246c             lea edx, [esp + 0x6c]
// 0089e7da  52                   push edx
// 0089e7db  8d442440             lea eax, [esp + 0x40]
// 0089e7df  50                   push eax
// 0089e7e0  e8fbe5b6ff           call 0x40cde0
// 0089e7e5  50                   push eax
// 0089e7e6  55                   push ebp
// 0089e7e7  c644245805           mov byte ptr [esp + 0x58], 5
// 0089e7ec  e8ffc2ffff           call 0x89aaf0
// 0089e7f1  83c420               add esp, 0x20
// 0089e7f4  8d4c242c             lea ecx, [esp + 0x2c]
// 0089e7f8  8bf8                 mov edi, eax
// 0089e7fa  c644243801           mov byte ptr [esp + 0x38], 1
// 0089e7ff  ff15c0de9800         call dword ptr [0x98dec0]
// 0089e805  85f6                 test esi, esi
// 0089e807  0f8557ffffff         jne 0x89e764
// 0089e80d  8d4c245c             lea ecx, [esp + 0x5c]
// 0089e811  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089e817  8d4c245c             lea ecx, [esp + 0x5c]
// 0089e81b  51                   push ecx
// 0089e81c  55                   push ebp
// 0089e81d  8bf8                 mov edi, eax
// 0089e81f  e8ccc2ffff           call 0x89aaf0
// 0089e824  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0089e828  0101                 add dword ptr [ecx], eax
// 0089e82a  8b7500               mov esi, dword ptr [ebp]
// 0089e82d  83c408               add esp, 8
// 0089e830  6800080000           push 0x800
// 0089e835  8d542450             lea edx, [esp + 0x50]
// 0089e839  52                   push edx
// 0089e83a  8d4c2464             lea ecx, [esp + 0x64]
// 0089e83e  83c670               add esi, 0x70
// 0089e841  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089e847  50                   push eax
// 0089e848  8d4c2468             lea ecx, [esp + 0x68]
// 0089e84c  ff1580de9800         call dword ptr [0x98de80]
// 0089e852  50                   push eax
// 0089e853  8b06                 mov eax, dword ptr [esi]
// 0089e855  8bcd                 mov ecx, ebp
// 0089e857  ffd0                 call eax
// 0089e859  8d4c2414             lea ecx, [esp + 0x14]
// 0089e85d  ff15c0de9800         call dword ptr [0x98dec0]
// 0089e863  8d4c245c             lea ecx, [esp + 0x5c]
// 0089e867  ff15c0de9800         call dword ptr [0x98dec0]
// 0089e86d  8bc7                 mov eax, edi
// 0089e86f  eb60                 jmp 0x89e8d1
// 0089e871  81fe00800000         cmp esi, 0x8000
// 0089e877  7558                 jne 0x89e8d1
// 0089e879  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0089e87d  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0089e881  57                   push edi
// 0089e882  53                   push ebx
// 0089e883  e868c2ffff           call 0x89aaf0
// 0089e888  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0089e88c  0101                 add dword ptr [ecx], eax
// 0089e88e  8b09                 mov ecx, dword ptr [ecx]
// 0089e890  83c408               add esp, 8
// 0089e893  3b4c2454             cmp ecx, dword ptr [esp + 0x54]
// 0089e897  7c05                 jl 0x89e89e
// 0089e899  83cdff               or ebp, 0xffffffff
// 0089e89c  eb0a                 jmp 0x89e8a8
// 0089e89e  8bcf                 mov ecx, edi
// 0089e8a0  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089e8a6  8be8                 mov ebp, eax
// 0089e8a8  8b33                 mov esi, dword ptr [ebx]
// 0089e8aa  6800880000           push 0x8800
// 0089e8af  8d4c2450             lea ecx, [esp + 0x50]
// 0089e8b3  51                   push ecx
// 0089e8b4  8bcf                 mov ecx, edi
// 0089e8b6  83c670               add esi, 0x70
// 0089e8b9  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089e8bf  50                   push eax
// 0089e8c0  8bcf                 mov ecx, edi
// 0089e8c2  ff1580de9800         call dword ptr [0x98de80]
// 0089e8c8  8b16                 mov edx, dword ptr [esi]
// 0089e8ca  50                   push eax
// 0089e8cb  8bcb                 mov ecx, ebx
// 0089e8cd  ffd2                 call edx
// 0089e8cf  8bc5                 mov eax, ebp
// 0089e8d1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089e8d5  64890d00000000       mov dword ptr fs:[0], ecx
// 0089e8dc  59                   pop ecx
// 0089e8dd  5f                   pop edi
// 0089e8de  5e                   pop esi
// 0089e8df  5d                   pop ebp
// 0089e8e0  5b                   pop ebx
// 0089e8e1  83c428               add esp, 0x28
// 0089e8e4  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawString@CXTPReportPaintManager@@MAEHPAHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp