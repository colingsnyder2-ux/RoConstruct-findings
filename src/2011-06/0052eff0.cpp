// roc 2011-06 0052eff0  unit: RBX::Network::ProfiledRakPeer  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052eff0
//
// 0052eff0  56                   push esi
// 0052eff1  8bf1                 mov esi, ecx
// 0052eff3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0052eff7  752d                 jne 0x52f026
// 0052eff9  6a10                 push 0x10
// 0052effb  e840b32d00           call 0x80a340
// 0052f000  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052f004  8906                 mov dword ptr [esi], eax
// 0052f006  c7460400000000       mov dword ptr [esi + 4], 0
// 0052f00d  c7460801000000       mov dword ptr [esi + 8], 1
// 0052f014  8a11                 mov dl, byte ptr [ecx]
// 0052f016  83c404               add esp, 4
// 0052f019  8810                 mov byte ptr [eax], dl
// 0052f01b  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 0052f022  5e                   pop esi
// 0052f023  c20c00               ret 0xc
// 0052f026  8b4608               mov eax, dword ptr [esi + 8]
// 0052f029  8b542408             mov edx, dword ptr [esp + 8]
// 0052f02d  8b0e                 mov ecx, dword ptr [esi]
// 0052f02f  8a12                 mov dl, byte ptr [edx]
// 0052f031  881408               mov byte ptr [eax + ecx], dl
// 0052f034  ff4608               inc dword ptr [esi + 8]
// 0052f037  8b4e08               mov ecx, dword ptr [esi + 8]
// 0052f03a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0052f03d  3bc8                 cmp ecx, eax
// 0052f03f  7507                 jne 0x52f048
// 0052f041  c7460800000000       mov dword ptr [esi + 8], 0
// 0052f048  8b4e08               mov ecx, dword ptr [esi + 8]
// 0052f04b  3b4e04               cmp ecx, dword ptr [esi + 4]
// 0052f04e  7559                 jne 0x52f0a9
// 0052f050  03c0                 add eax, eax
// 0052f052  7455                 je 0x52f0a9
// 0052f054  57                   push edi
// 0052f055  50                   push eax
// 0052f056  e8e5b22d00           call 0x80a340
// 0052f05b  8bf8                 mov edi, eax
// 0052f05d  83c404               add esp, 4
// 0052f060  85ff                 test edi, edi
// 0052f062  7444                 je 0x52f0a8
// 0052f064  33c9                 xor ecx, ecx
// 0052f066  394e0c               cmp dword ptr [esi + 0xc], ecx
// 0052f069  761e                 jbe 0x52f089
// 0052f06b  eb03                 jmp 0x52f070
// 0052f06d  8d4900               lea ecx, [ecx]
// 0052f070  8b4604               mov eax, dword ptr [esi + 4]
// 0052f073  03c1                 add eax, ecx
// 0052f075  33d2                 xor edx, edx
// 0052f077  f7760c               div dword ptr [esi + 0xc]
// 0052f07a  8b06                 mov eax, dword ptr [esi]
// 0052f07c  41                   inc ecx
// 0052f07d  8a1402               mov dl, byte ptr [edx + eax]
// 0052f080  885439ff             mov byte ptr [ecx + edi - 1], dl
// 0052f084  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 0052f087  72e7                 jb 0x52f070
// 0052f089  8b460c               mov eax, dword ptr [esi + 0xc]
// 0052f08c  8b0e                 mov ecx, dword ptr [esi]
// 0052f08e  894608               mov dword ptr [esi + 8], eax
// 0052f091  03c0                 add eax, eax
// 0052f093  51                   push ecx
// 0052f094  c7460400000000       mov dword ptr [esi + 4], 0
// 0052f09b  89460c               mov dword ptr [esi + 0xc], eax
// 0052f09e  e861b22d00           call 0x80a304
// 0052f0a3  83c404               add esp, 4
// 0052f0a6  893e                 mov dword ptr [esi], edi
// 0052f0a8  5f                   pop edi
// 0052f0a9  5e                   pop esi
// 0052f0aa  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Push@?$Queue@_N@DataStructures@@QAEXAB_NPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
