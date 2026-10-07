// roc 2007-08 0047a910  unit: G3D::TextureManager::TextureArgs  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047a910
//
// 0047a910  6aff                 push -1
// 0047a912  6824567400           push 0x745624
// 0047a917  64a100000000         mov eax, dword ptr fs:[0]
// 0047a91d  50                   push eax
// 0047a91e  83ec44               sub esp, 0x44
// 0047a921  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047a926  33c4                 xor eax, esp
// 0047a928  89442440             mov dword ptr [esp + 0x40], eax
// 0047a92c  56                   push esi
// 0047a92d  57                   push edi
// 0047a92e  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047a933  33c4                 xor eax, esp
// 0047a935  50                   push eax
// 0047a936  8d442450             lea eax, [esp + 0x50]
// 0047a93a  64a300000000         mov dword ptr fs:[0], eax
// 0047a940  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 0047a944  8bf1                 mov esi, ecx
// 0047a946  8b4604               mov eax, dword ptr [esi + 4]
// 0047a949  3b4608               cmp eax, dword ptr [esi + 8]
// 0047a94c  89742410             mov dword ptr [esp + 0x10], esi
// 0047a950  7d2a                 jge 0x47a97c
// 0047a952  8b16                 mov edx, dword ptr [esi]
// 0047a954  8d0cc500000000       lea ecx, [eax*8]
// 0047a95b  2bc8                 sub ecx, eax
// 0047a95d  8d0cca               lea ecx, [edx + ecx*8]
// 0047a960  894c240c             mov dword ptr [esp + 0xc], ecx
// 0047a964  85c9                 test ecx, ecx
// 0047a966  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0047a96e  7406                 je 0x47a976
// 0047a970  57                   push edi
// 0047a971  e80af7ffff           call 0x47a080
// 0047a976  83460401             add dword ptr [esi + 4], 1
// 0047a97a  eb6c                 jmp 0x47a9e8
// 0047a97c  8b0e                 mov ecx, dword ptr [esi]
// 0047a97e  3bf9                 cmp edi, ecx
// 0047a980  7241                 jb 0x47a9c3
// 0047a982  8d14c500000000       lea edx, [eax*8]
// 0047a989  2bd0                 sub edx, eax
// 0047a98b  8d0cd1               lea ecx, [ecx + edx*8]
// 0047a98e  3bf9                 cmp edi, ecx
// 0047a990  7331                 jae 0x47a9c3
// 0047a992  57                   push edi
// 0047a993  8d4c2418             lea ecx, [esp + 0x18]
// 0047a997  e8e4f6ffff           call 0x47a080
// 0047a99c  8d542414             lea edx, [esp + 0x14]
// 0047a9a0  52                   push edx
// 0047a9a1  8bce                 mov ecx, esi
// 0047a9a3  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 0047a9ab  e860ffffff           call 0x47a910
// 0047a9b0  8d4c2414             lea ecx, [esp + 0x14]
// 0047a9b4  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0047a9bc  e83fd4fdff           call 0x457e00
// 0047a9c1  eb25                 jmp 0x47a9e8
// 0047a9c3  6a00                 push 0
// 0047a9c5  83c001               add eax, 1
// 0047a9c8  50                   push eax
// 0047a9c9  8bce                 mov ecx, esi
// 0047a9cb  e8e0faffff           call 0x47a4b0
// 0047a9d0  8b4604               mov eax, dword ptr [esi + 4]
// 0047a9d3  8b16                 mov edx, dword ptr [esi]
// 0047a9d5  8d0cc500000000       lea ecx, [eax*8]
// 0047a9dc  2bc8                 sub ecx, eax
// 0047a9de  57                   push edi
// 0047a9df  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 0047a9e3  e818f7ffff           call 0x47a100
// 0047a9e8  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0047a9ec  64890d00000000       mov dword ptr fs:[0], ecx
// 0047a9f3  59                   pop ecx
// 0047a9f4  5f                   pop edi
// 0047a9f5  5e                   pop esi
// 0047a9f6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0047a9fa  33cc                 xor ecx, esp
// 0047a9fc  e81d601b00           call 0x630a1e
// 0047aa01  83c450               add esp, 0x50
// 0047aa04  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
