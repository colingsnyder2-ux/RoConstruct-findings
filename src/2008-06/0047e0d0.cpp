// from server: 100% by auto
// roc 2008-06 0047e0d0  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047e0d0
//
// 0047e0d0  6aff                 push -1
// 0047e0d2  68c94f7c00           push 0x7c4fc9
// 0047e0d7  64a100000000         mov eax, dword ptr fs:[0]
// 0047e0dd  50                   push eax
// 0047e0de  64892500000000       mov dword ptr fs:[0], esp
// 0047e0e5  51                   push ecx
// 0047e0e6  56                   push esi
// 0047e0e7  8bf1                 mov esi, ecx
// 0047e0e9  c744240400000000     mov dword ptr [esp + 4], 0
// 0047e0f1  8b4604               mov eax, dword ptr [esi + 4]
// 0047e0f4  8b16                 mov edx, dword ptr [esi]
// 0047e0f6  8d0cc500000000       lea ecx, [eax*8]
// 0047e0fd  2bc8                 sub ecx, eax
// 0047e0ff  57                   push edi
// 0047e100  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0047e104  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 0047e108  50                   push eax
// 0047e109  8bcf                 mov ecx, edi
// 0047e10b  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0047e113  e818f6ffff           call 0x47d730
// 0047e118  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0047e11c  8b5604               mov edx, dword ptr [esi + 4]
// 0047e11f  51                   push ecx
// 0047e120  4a                   dec edx
// 0047e121  52                   push edx
// 0047e122  8bce                 mov ecx, esi
// 0047e124  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0047e12c  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0047e134  e8e7f9ffff           call 0x47db20
// 0047e139  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047e13d  8bc7                 mov eax, edi
// 0047e13f  5f                   pop edi
// 0047e140  5e                   pop esi
// 0047e141  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e148  83c410               add esp, 0x10
// 0047e14b  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?pop@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAE?AVTextureArgs@TextureManager@2@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
