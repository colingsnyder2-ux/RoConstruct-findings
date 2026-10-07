// roc 2007-08 0047aa10  unit: G3D::TextureManager::TextureArgs  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047aa10
//
// 0047aa10  6aff                 push -1
// 0047aa12  6869567400           push 0x745669
// 0047aa17  64a100000000         mov eax, dword ptr fs:[0]
// 0047aa1d  50                   push eax
// 0047aa1e  83ec08               sub esp, 8
// 0047aa21  56                   push esi
// 0047aa22  57                   push edi
// 0047aa23  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047aa28  33c4                 xor eax, esp
// 0047aa2a  50                   push eax
// 0047aa2b  8d442414             lea eax, [esp + 0x14]
// 0047aa2f  64a300000000         mov dword ptr fs:[0], eax
// 0047aa35  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0047aa39  8bf1                 mov esi, ecx
// 0047aa3b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0047aa43  8b4604               mov eax, dword ptr [esi + 4]
// 0047aa46  8b16                 mov edx, dword ptr [esi]
// 0047aa48  8d0cc500000000       lea ecx, [eax*8]
// 0047aa4f  2bc8                 sub ecx, eax
// 0047aa51  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 0047aa55  50                   push eax
// 0047aa56  8bcf                 mov ecx, edi
// 0047aa58  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0047aa60  897c2414             mov dword ptr [esp + 0x14], edi
// 0047aa64  e817f6ffff           call 0x47a080
// 0047aa69  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0047aa6d  8b5604               mov edx, dword ptr [esi + 4]
// 0047aa70  51                   push ecx
// 0047aa71  83ea01               sub edx, 1
// 0047aa74  52                   push edx
// 0047aa75  8bce                 mov ecx, esi
// 0047aa77  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0047aa7f  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0047aa87  e824faffff           call 0x47a4b0
// 0047aa8c  8bc7                 mov eax, edi
// 0047aa8e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047aa92  64890d00000000       mov dword ptr fs:[0], ecx
// 0047aa99  59                   pop ecx
// 0047aa9a  5f                   pop edi
// 0047aa9b  5e                   pop esi
// 0047aa9c  83c414               add esp, 0x14
// 0047aa9f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?pop@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAE?AVTextureArgs@TextureManager@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
