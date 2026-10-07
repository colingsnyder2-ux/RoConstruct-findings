// roc 2007-08 0047fc20  unit: G3D::Win32Window  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047fc20
//
// 0047fc20  6aff                 push -1
// 0047fc22  68345d7400           push 0x745d34
// 0047fc27  64a100000000         mov eax, dword ptr fs:[0]
// 0047fc2d  50                   push eax
// 0047fc2e  83ec44               sub esp, 0x44
// 0047fc31  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047fc36  33c4                 xor eax, esp
// 0047fc38  89442440             mov dword ptr [esp + 0x40], eax
// 0047fc3c  56                   push esi
// 0047fc3d  57                   push edi
// 0047fc3e  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047fc43  33c4                 xor eax, esp
// 0047fc45  50                   push eax
// 0047fc46  8d442450             lea eax, [esp + 0x50]
// 0047fc4a  64a300000000         mov dword ptr fs:[0], eax
// 0047fc50  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 0047fc54  8bf1                 mov esi, ecx
// 0047fc56  8b4604               mov eax, dword ptr [esi + 4]
// 0047fc59  3b4608               cmp eax, dword ptr [esi + 8]
// 0047fc5c  89742410             mov dword ptr [esp + 0x10], esi
// 0047fc60  7d2a                 jge 0x47fc8c
// 0047fc62  8b16                 mov edx, dword ptr [esi]
// 0047fc64  8d0cc500000000       lea ecx, [eax*8]
// 0047fc6b  2bc8                 sub ecx, eax
// 0047fc6d  8d0cca               lea ecx, [edx + ecx*8]
// 0047fc70  894c240c             mov dword ptr [esp + 0xc], ecx
// 0047fc74  85c9                 test ecx, ecx
// 0047fc76  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0047fc7e  7406                 je 0x47fc86
// 0047fc80  57                   push edi
// 0047fc81  e80af3ffff           call 0x47ef90
// 0047fc86  83460401             add dword ptr [esi + 4], 1
// 0047fc8a  eb6c                 jmp 0x47fcf8
// 0047fc8c  8b0e                 mov ecx, dword ptr [esi]
// 0047fc8e  3bf9                 cmp edi, ecx
// 0047fc90  7241                 jb 0x47fcd3
// 0047fc92  8d14c500000000       lea edx, [eax*8]
// 0047fc99  2bd0                 sub edx, eax
// 0047fc9b  8d0cd1               lea ecx, [ecx + edx*8]
// 0047fc9e  3bf9                 cmp edi, ecx
// 0047fca0  7331                 jae 0x47fcd3
// 0047fca2  57                   push edi
// 0047fca3  8d4c2418             lea ecx, [esp + 0x18]
// 0047fca7  e8e4f2ffff           call 0x47ef90
// 0047fcac  8d542414             lea edx, [esp + 0x14]
// 0047fcb0  52                   push edx
// 0047fcb1  8bce                 mov ecx, esi
// 0047fcb3  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 0047fcbb  e860ffffff           call 0x47fc20
// 0047fcc0  8d4c2414             lea ecx, [esp + 0x14]
// 0047fcc4  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0047fccc  e8dfc8ffff           call 0x47c5b0
// 0047fcd1  eb25                 jmp 0x47fcf8
// 0047fcd3  6a00                 push 0
// 0047fcd5  83c001               add eax, 1
// 0047fcd8  50                   push eax
// 0047fcd9  8bce                 mov ecx, esi
// 0047fcdb  e860fdffff           call 0x47fa40
// 0047fce0  8b4604               mov eax, dword ptr [esi + 4]
// 0047fce3  8b16                 mov edx, dword ptr [esi]
// 0047fce5  8d0cc500000000       lea ecx, [eax*8]
// 0047fcec  2bc8                 sub ecx, eax
// 0047fcee  57                   push edi
// 0047fcef  8d4ccac8             lea ecx, [edx + ecx*8 - 0x38]
// 0047fcf3  e8a8e2ffff           call 0x47dfa0
// 0047fcf8  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0047fcfc  64890d00000000       mov dword ptr fs:[0], ecx
// 0047fd03  59                   pop ecx
// 0047fd04  5f                   pop edi
// 0047fd05  5e                   pop esi
// 0047fd06  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0047fd0a  33cc                 xor ecx, esp
// 0047fd0c  e80d0d1b00           call 0x630a1e
// 0047fd11  83c450               add esp, 0x50
// 0047fd14  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?append@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
