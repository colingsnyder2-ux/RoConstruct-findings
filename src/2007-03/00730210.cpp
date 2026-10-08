// roc 2007-03 00730210  unit: seg_00730000  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00730210
//
// 00730210  6aff                 push -1
// 00730212  68b4cd7600           push 0x76cdb4
// 00730217  64a100000000         mov eax, dword ptr fs:[0]
// 0073021d  50                   push eax
// 0073021e  83ec44               sub esp, 0x44
// 00730221  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00730226  33c4                 xor eax, esp
// 00730228  89442440             mov dword ptr [esp + 0x40], eax
// 0073022c  56                   push esi
// 0073022d  57                   push edi
// 0073022e  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00730233  33c4                 xor eax, esp
// 00730235  50                   push eax
// 00730236  8d442450             lea eax, [esp + 0x50]
// 0073023a  64a300000000         mov dword ptr fs:[0], eax
// 00730240  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 00730244  8bf1                 mov esi, ecx
// 00730246  8b4604               mov eax, dword ptr [esi + 4]
// 00730249  3b4608               cmp eax, dword ptr [esi + 8]
// 0073024c  89742410             mov dword ptr [esp + 0x10], esi
// 00730250  7d2a                 jge 0x73027c
// 00730252  8b16                 mov edx, dword ptr [esi]
// 00730254  8d0cc500000000       lea ecx, [eax*8]
// 0073025b  2bc8                 sub ecx, eax
// 0073025d  8d0cca               lea ecx, [edx + ecx*8]
// 00730260  894c240c             mov dword ptr [esp + 0xc], ecx
// 00730264  85c9                 test ecx, ecx
// 00730266  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0073026e  7406                 je 0x730276
// 00730270  57                   push edi
// 00730271  e80af7ffff           call 0x72f980
// 00730276  83460401             add dword ptr [esi + 4], 1
// 0073027a  eb6c                 jmp 0x7302e8
// 0073027c  8b0e                 mov ecx, dword ptr [esi]
// 0073027e  3bf9                 cmp edi, ecx
// 00730280  7241                 jb 0x7302c3
// 00730282  8d14c500000000       lea edx, [eax*8]
// 00730289  2bd0                 sub edx, eax
// 0073028b  8d0cd1               lea ecx, [ecx + edx*8]
// 0073028e  3bf9                 cmp edi, ecx
// 00730290  7331                 jae 0x7302c3
// 00730292  57                   push edi
// 00730293  8d4c2418             lea ecx, [esp + 0x18]
// 00730297  e8e4f6ffff           call 0x72f980
// 0073029c  8d542414             lea edx, [esp + 0x14]
// 007302a0  52                   push edx
// 007302a1  8bce                 mov ecx, esi
// 007302a3  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 007302ab  e860ffffff           call 0x730210
// 007302b0  8d4c2414             lea ecx, [esp + 0x14]
// 007302b4  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 007302bc  e85f1cd9ff           call 0x4c1f20
// 007302c1  eb25                 jmp 0x7302e8
// 007302c3  6a00                 push 0
// 007302c5  83c001               add eax, 1
// 007302c8  50                   push eax
// 007302c9  8bce                 mov ecx, esi
// 007302cb  e8e0faffff           call 0x72fdb0
// 007302d0  8b4604               mov eax, dword ptr [esi + 4]
// 007302d3  8b16                 mov edx, dword ptr [esi]
// 007302d5  8d0cc500000000       lea ecx, [eax*8]
// 007302dc  2bc8                 sub ecx, eax
// 007302de  57                   push edi
// 007302df  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 007302e3  e818f7ffff           call 0x72fa00
// 007302e8  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007302ec  64890d00000000       mov dword ptr fs:[0], ecx
// 007302f3  59                   pop ecx
// 007302f4  5f                   pop edi
// 007302f5  5e                   pop esi
// 007302f6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007302fa  33cc                 xor ecx, esp
// 007302fc  e8a5ebeeff           call 0x61eea6
// 00730301  83c450               add esp, 0x50
// 00730304  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
