// from server: 100% by tester
// roc 2007-03 0047e000  unit: seg_00470000  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e000
//
// 0047e000  6aff                 push -1
// 0047e002  68147e7400           push 0x747e14
// 0047e007  64a100000000         mov eax, dword ptr fs:[0]
// 0047e00d  50                   push eax
// 0047e00e  83ec44               sub esp, 0x44
// 0047e011  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047e016  33c4                 xor eax, esp
// 0047e018  89442440             mov dword ptr [esp + 0x40], eax
// 0047e01c  56                   push esi
// 0047e01d  57                   push edi
// 0047e01e  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047e023  33c4                 xor eax, esp
// 0047e025  50                   push eax
// 0047e026  8d442450             lea eax, [esp + 0x50]
// 0047e02a  64a300000000         mov dword ptr fs:[0], eax
// 0047e030  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 0047e034  8bf1                 mov esi, ecx
// 0047e036  8b4604               mov eax, dword ptr [esi + 4]
// 0047e039  3b4608               cmp eax, dword ptr [esi + 8]
// 0047e03c  89742410             mov dword ptr [esp + 0x10], esi
// 0047e040  7d2a                 jge 0x47e06c
// 0047e042  8b16                 mov edx, dword ptr [esi]
// 0047e044  8d0cc500000000       lea ecx, [eax*8]
// 0047e04b  2bc8                 sub ecx, eax
// 0047e04d  8d0cca               lea ecx, [edx + ecx*8]
// 0047e050  894c240c             mov dword ptr [esp + 0xc], ecx
// 0047e054  85c9                 test ecx, ecx
// 0047e056  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0047e05e  7406                 je 0x47e066
// 0047e060  57                   push edi
// 0047e061  e80af3ffff           call 0x47d370
// 0047e066  83460401             add dword ptr [esi + 4], 1
// 0047e06a  eb6c                 jmp 0x47e0d8
// 0047e06c  8b0e                 mov ecx, dword ptr [esi]
// 0047e06e  3bf9                 cmp edi, ecx
// 0047e070  7241                 jb 0x47e0b3
// 0047e072  8d14c500000000       lea edx, [eax*8]
// 0047e079  2bd0                 sub edx, eax
// 0047e07b  8d0cd1               lea ecx, [ecx + edx*8]
// 0047e07e  3bf9                 cmp edi, ecx
// 0047e080  7331                 jae 0x47e0b3
// 0047e082  57                   push edi
// 0047e083  8d4c2418             lea ecx, [esp + 0x18]
// 0047e087  e8e4f2ffff           call 0x47d370
// 0047e08c  8d542414             lea edx, [esp + 0x14]
// 0047e090  52                   push edx
// 0047e091  8bce                 mov ecx, esi
// 0047e093  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 0047e09b  e860ffffff           call 0x47e000
// 0047e0a0  8d4c2414             lea ecx, [esp + 0x14]
// 0047e0a4  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0047e0ac  e87fcaffff           call 0x47ab30
// 0047e0b1  eb25                 jmp 0x47e0d8
// 0047e0b3  6a00                 push 0
// 0047e0b5  83c001               add eax, 1
// 0047e0b8  50                   push eax
// 0047e0b9  8bce                 mov ecx, esi
// 0047e0bb  e860fdffff           call 0x47de20
// 0047e0c0  8b4604               mov eax, dword ptr [esi + 4]
// 0047e0c3  8b16                 mov edx, dword ptr [esi]
// 0047e0c5  8d0cc500000000       lea ecx, [eax*8]
// 0047e0cc  2bc8                 sub ecx, eax
// 0047e0ce  57                   push edi
// 0047e0cf  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 0047e0d3  e8d8e2ffff           call 0x47c3b0
// 0047e0d8  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0047e0dc  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e0e3  59                   pop ecx
// 0047e0e4  5f                   pop edi
// 0047e0e5  5e                   pop esi
// 0047e0e6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0047e0ea  33cc                 xor ecx, esp
// 0047e0ec  e8b50d1a00           call 0x61eea6
// 0047e0f1  83c450               add esp, 0x50
// 0047e0f4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
