// roc 2008-06 0050b700  unit: G3D::Log  size: 809 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050b700
//
// 0050b700  64a100000000         mov eax, dword ptr fs:[0]
// 0050b706  6aff                 push -1
// 0050b708  6870bf7c00           push 0x7cbf70
// 0050b70d  50                   push eax
// 0050b70e  64892500000000       mov dword ptr fs:[0], esp
// 0050b715  81ec40010000         sub esp, 0x140
// 0050b71b  56                   push esi
// 0050b71c  8bf1                 mov esi, ecx
// 0050b71e  817e0cffffff3f       cmp dword ptr [esi + 0xc], 0x3fffffff
// 0050b725  7e51                 jle 0x50b778
// 0050b727  68007f8200           push 0x827f00
// 0050b72c  8d4c2418             lea ecx, [esp + 0x18]
// 0050b730  ff1558248000         call dword ptr [0x802458]
// 0050b736  8b8c2454010000       mov ecx, dword ptr [esp + 0x154]
// 0050b73d  8d442430             lea eax, [esp + 0x30]
// 0050b741  50                   push eax
// 0050b742  c784245001000000000000 mov dword ptr [esp + 0x150], 0
// 0050b74d  e80ef4ffff           call 0x50ab60
// 0050b752  50                   push eax
// 0050b753  8d4c2418             lea ecx, [esp + 0x18]
// 0050b757  51                   push ecx
// 0050b758  8d4c2470             lea ecx, [esp + 0x70]
// 0050b75c  c684245401000001     mov byte ptr [esp + 0x154], 1
// 0050b764  e84771f6ff           call 0x4728b0
// 0050b769  6878c48d00           push 0x8dc478
// 0050b76e  8d54246c             lea edx, [esp + 0x6c]
// 0050b772  52                   push edx
// 0050b773  e8145e1900           call 0x6a158c
// 0050b778  57                   push edi
// 0050b779  8bbc2458010000       mov edi, dword ptr [esp + 0x158]
// 0050b780  6a01                 push 1
// 0050b782  8bcf                 mov ecx, edi
// 0050b784  e887e00000           call 0x519810
// 0050b789  68a0b65000           push 0x50b6a0
// 0050b78e  6820b65000           push 0x50b620
// 0050b793  6a00                 push 0
// 0050b795  68f87e8200           push 0x827ef8
// 0050b79a  e8a10f0100           call 0x51c740
// 0050b79f  83c410               add esp, 0x10
// 0050b7a2  89442408             mov dword ptr [esp + 8], eax
// 0050b7a6  85c0                 test eax, eax
// 0050b7a8  754c                 jne 0x50b7f6
// 0050b7aa  68d47e8200           push 0x827ed4
// 0050b7af  8d4c241c             lea ecx, [esp + 0x1c]
// 0050b7b3  ff1558248000         call dword ptr [0x802458]
// 0050b7b9  8d442434             lea eax, [esp + 0x34]
// 0050b7bd  50                   push eax
// 0050b7be  8bcf                 mov ecx, edi
// 0050b7c0  c784245401000002000000 mov dword ptr [esp + 0x154], 2
// 0050b7cb  e890f3ffff           call 0x50ab60
// 0050b7d0  50                   push eax
// 0050b7d1  8d4c241c             lea ecx, [esp + 0x1c]
// 0050b7d5  51                   push ecx
// 0050b7d6  8d4c2474             lea ecx, [esp + 0x74]
// 0050b7da  c684245801000003     mov byte ptr [esp + 0x158], 3
// 0050b7e2  e8c970f6ff           call 0x4728b0
// 0050b7e7  6878c48d00           push 0x8dc478
// 0050b7ec  8d542470             lea edx, [esp + 0x70]
// 0050b7f0  52                   push edx
// 0050b7f1  e8965d1900           call 0x6a158c
// 0050b7f6  50                   push eax
// 0050b7f7  e8442a0100           call 0x51e240
// 0050b7fc  83c404               add esp, 4
// 0050b7ff  8944240c             mov dword ptr [esp + 0xc], eax
// 0050b803  85c0                 test eax, eax
// 0050b805  755e                 jne 0x50b865
// 0050b807  8d44240c             lea eax, [esp + 0xc]
// 0050b80b  50                   push eax
// 0050b80c  8d4c240c             lea ecx, [esp + 0xc]
// 0050b810  51                   push ecx
// 0050b811  e88a0e0100           call 0x51c6a0
// 0050b816  83c408               add esp, 8
// 0050b819  68d47e8200           push 0x827ed4
// 0050b81e  8d4c241c             lea ecx, [esp + 0x1c]
// 0050b822  ff1558248000         call dword ptr [0x802458]
// 0050b828  8d542434             lea edx, [esp + 0x34]
// 0050b82c  52                   push edx
// 0050b82d  8bcf                 mov ecx, edi
// 0050b82f  c784245401000004000000 mov dword ptr [esp + 0x154], 4
// 0050b83a  e821f3ffff           call 0x50ab60
// 0050b83f  50                   push eax
// 0050b840  8d44241c             lea eax, [esp + 0x1c]
// 0050b844  50                   push eax
// 0050b845  8d4c2474             lea ecx, [esp + 0x74]
// 0050b849  c684245801000005     mov byte ptr [esp + 0x158], 5
// 0050b851  e85a70f6ff           call 0x4728b0
// 0050b856  6878c48d00           push 0x8dc478
// 0050b85b  8d4c2470             lea ecx, [esp + 0x70]
// 0050b85f  51                   push ecx
// 0050b860  e8275d1900           call 0x6a158c
// 0050b865  8b542408             mov edx, dword ptr [esp + 8]
// 0050b869  6810d44700           push 0x47d410
// 0050b86e  68d0b55000           push 0x50b5d0
// 0050b873  57                   push edi
// 0050b874  52                   push edx
// 0050b875  e8d6220100           call 0x51db50
// 0050b87a  8b4610               mov eax, dword ptr [esi + 0x10]
// 0050b87d  83c410               add esp, 0x10
// 0050b880  83f803               cmp eax, 3
// 0050b883  751e                 jne 0x50b8a3
// 0050b885  8b460c               mov eax, dword ptr [esi + 0xc]
// 0050b888  8b4e08               mov ecx, dword ptr [esi + 8]
// 0050b88b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0050b88f  6a00                 push 0
// 0050b891  6a00                 push 0
// 0050b893  6a00                 push 0
// 0050b895  6a02                 push 2
// 0050b897  6a08                 push 8
// 0050b899  50                   push eax
// 0050b89a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0050b89e  51                   push ecx
// 0050b89f  52                   push edx
// 0050b8a0  50                   push eax
// 0050b8a1  eb48                 jmp 0x50b8eb
// 0050b8a3  83f804               cmp eax, 4
// 0050b8a6  751e                 jne 0x50b8c6
// 0050b8a8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0050b8ab  8b5608               mov edx, dword ptr [esi + 8]
// 0050b8ae  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050b8b2  6a00                 push 0
// 0050b8b4  6a00                 push 0
// 0050b8b6  6a00                 push 0
// 0050b8b8  6a06                 push 6
// 0050b8ba  6a08                 push 8
// 0050b8bc  51                   push ecx
// 0050b8bd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050b8c1  52                   push edx
// 0050b8c2  50                   push eax
// 0050b8c3  51                   push ecx
// 0050b8c4  eb25                 jmp 0x50b8eb
// 0050b8c6  83f801               cmp eax, 1
// 0050b8c9  0f85f3000000         jne 0x50b9c2
// 0050b8cf  8b560c               mov edx, dword ptr [esi + 0xc]
// 0050b8d2  8b4608               mov eax, dword ptr [esi + 8]
// 0050b8d5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050b8d9  6a00                 push 0
// 0050b8db  6a00                 push 0
// 0050b8dd  6a00                 push 0
// 0050b8df  6a00                 push 0
// 0050b8e1  6a08                 push 8
// 0050b8e3  52                   push edx
// 0050b8e4  8b542420             mov edx, dword ptr [esp + 0x20]
// 0050b8e8  50                   push eax
// 0050b8e9  51                   push ecx
// 0050b8ea  52                   push edx
// 0050b8eb  e890150100           call 0x51ce80
// 0050b8f0  8b542430             mov edx, dword ptr [esp + 0x30]
// 0050b8f4  83c424               add esp, 0x24
// 0050b8f7  837e1004             cmp dword ptr [esi + 0x10], 4
// 0050b8fb  8d4c2410             lea ecx, [esp + 0x10]
// 0050b8ff  0f95c0               setne al
// 0050b902  fec8                 dec al
// 0050b904  2408                 and al, 8
// 0050b906  51                   push ecx
// 0050b907  88442418             mov byte ptr [esp + 0x18], al
// 0050b90b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050b90f  52                   push edx
// 0050b910  50                   push eax
// 0050b911  c644241c08           mov byte ptr [esp + 0x1c], 8
// 0050b916  c644241d08           mov byte ptr [esp + 0x1d], 8
// 0050b91b  c644241e08           mov byte ptr [esp + 0x1e], 8
// 0050b920  e85b1a0100           call 0x51d380
// 0050b925  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050b929  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050b92d  51                   push ecx
// 0050b92e  52                   push edx
// 0050b92f  e8bcff0000           call 0x51b8f0
// 0050b934  8b460c               mov eax, dword ptr [esi + 0xc]
// 0050b937  33c9                 xor ecx, ecx
// 0050b939  ba04000000           mov edx, 4
// 0050b93e  f7e2                 mul edx
// 0050b940  0f90c1               seto cl
// 0050b943  f7d9                 neg ecx
// 0050b945  0bc8                 or ecx, eax
// 0050b947  51                   push ecx
// 0050b948  e809501900           call 0x6a0956
// 0050b94d  8bf8                 mov edi, eax
// 0050b94f  33c0                 xor eax, eax
// 0050b951  83c418               add esp, 0x18
// 0050b954  39460c               cmp dword ptr [esi + 0xc], eax
// 0050b957  7e1e                 jle 0x50b977
// 0050b959  8da42400000000       lea esp, [esp]
// 0050b960  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0050b963  0faf4e08             imul ecx, dword ptr [esi + 8]
// 0050b967  0fafc8               imul ecx, eax
// 0050b96a  034e04               add ecx, dword ptr [esi + 4]
// 0050b96d  40                   inc eax
// 0050b96e  894c87fc             mov dword ptr [edi + eax*4 - 4], ecx
// 0050b972  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0050b975  7ce9                 jl 0x50b960
// 0050b977  8b542408             mov edx, dword ptr [esp + 8]
// 0050b97b  57                   push edi
// 0050b97c  52                   push edx
// 0050b97d  e8be0c0100           call 0x51c640
// 0050b982  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050b986  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050b98a  50                   push eax
// 0050b98b  51                   push ecx
// 0050b98c  e82f020100           call 0x51bbc0
// 0050b991  57                   push edi
// 0050b992  e8b34f1900           call 0x6a094a
// 0050b997  8d542420             lea edx, [esp + 0x20]
// 0050b99b  52                   push edx
// 0050b99c  8d442420             lea eax, [esp + 0x20]
// 0050b9a0  50                   push eax
// 0050b9a1  e8fa0c0100           call 0x51c6a0
// 0050b9a6  8b8c2464010000       mov ecx, dword ptr [esp + 0x164]
// 0050b9ad  83c41c               add esp, 0x1c
// 0050b9b0  5f                   pop edi
// 0050b9b1  5e                   pop esi
// 0050b9b2  64890d00000000       mov dword ptr fs:[0], ecx
// 0050b9b9  81c44c010000         add esp, 0x14c
// 0050b9bf  c20400               ret 4
// 0050b9c2  8d4c240c             lea ecx, [esp + 0xc]
// 0050b9c6  51                   push ecx
// 0050b9c7  8d54240c             lea edx, [esp + 0xc]
// 0050b9cb  52                   push edx
// 0050b9cc  e8cf0c0100           call 0x51c6a0
// 0050b9d1  83c408               add esp, 8
// 0050b9d4  68ac7e8200           push 0x827eac
// 0050b9d9  8d4c2454             lea ecx, [esp + 0x54]
// 0050b9dd  ff1558248000         call dword ptr [0x802458]
// 0050b9e3  8d8424cc000000       lea eax, [esp + 0xcc]
// 0050b9ea  50                   push eax
// 0050b9eb  8bcf                 mov ecx, edi
// 0050b9ed  c784245401000006000000 mov dword ptr [esp + 0x154], 6
// 0050b9f8  e863f1ffff           call 0x50ab60
// 0050b9fd  50                   push eax
// 0050b9fe  8d4c2454             lea ecx, [esp + 0x54]
// 0050ba02  51                   push ecx
// 0050ba03  8d8c24f0000000       lea ecx, [esp + 0xf0]
// 0050ba0a  c684245801000007     mov byte ptr [esp + 0x158], 7
// 0050ba12  e8996ef6ff           call 0x4728b0
// 0050ba17  6878c48d00           push 0x8dc478
// 0050ba1c  8d9424ec000000       lea edx, [esp + 0xec]
// 0050ba23  52                   push edx
// 0050ba24  e8635b1900           call 0x6a158c
// library g3d-6.09-rbx2008/G3Dcpp\GImage_png.cpp (function ?encodePNG@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_png.cpp
