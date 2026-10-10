// from server: 100% by tester
// roc 2007-03 00730310  unit: seg_00730000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00730310
//
// 00730310  6aff                 push -1
// 00730312  68f9cd7600           push 0x76cdf9
// 00730317  64a100000000         mov eax, dword ptr fs:[0]
// 0073031d  50                   push eax
// 0073031e  83ec08               sub esp, 8
// 00730321  56                   push esi
// 00730322  57                   push edi
// 00730323  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00730328  33c4                 xor eax, esp
// 0073032a  50                   push eax
// 0073032b  8d442414             lea eax, [esp + 0x14]
// 0073032f  64a300000000         mov dword ptr fs:[0], eax
// 00730335  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00730339  8bf1                 mov esi, ecx
// 0073033b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00730343  8b4604               mov eax, dword ptr [esi + 4]
// 00730346  8b16                 mov edx, dword ptr [esi]
// 00730348  8d0cc500000000       lea ecx, [eax*8]
// 0073034f  2bc8                 sub ecx, eax
// 00730351  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 00730355  50                   push eax
// 00730356  8bcf                 mov ecx, edi
// 00730358  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00730360  897c2414             mov dword ptr [esp + 0x14], edi
// 00730364  e817f6ffff           call 0x72f980
// 00730369  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0073036d  8b5604               mov edx, dword ptr [esi + 4]
// 00730370  51                   push ecx
// 00730371  83ea01               sub edx, 1
// 00730374  52                   push edx
// 00730375  8bce                 mov ecx, esi
// 00730377  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0073037f  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00730387  e824faffff           call 0x72fdb0
// 0073038c  8bc7                 mov eax, edi
// 0073038e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00730392  64890d00000000       mov dword ptr fs:[0], ecx
// 00730399  59                   pop ecx
// 0073039a  5f                   pop edi
// 0073039b  5e                   pop esi
// 0073039c  83c414               add esp, 0x14
// 0073039f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?pop@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAE?AVTextureArgs@TextureManager@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
