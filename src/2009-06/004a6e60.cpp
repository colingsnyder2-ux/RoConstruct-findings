// from server: 100% by auto
// roc 2009-06 004a6e60  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a6e60
//
// 004a6e60  6aff                 push -1
// 004a6e62  6854788500           push 0x857854
// 004a6e67  64a100000000         mov eax, dword ptr fs:[0]
// 004a6e6d  50                   push eax
// 004a6e6e  64892500000000       mov dword ptr fs:[0], esp
// 004a6e75  51                   push ecx
// 004a6e76  56                   push esi
// 004a6e77  8bf1                 mov esi, ecx
// 004a6e79  57                   push edi
// 004a6e7a  89742408             mov dword ptr [esp + 8], esi
// 004a6e7e  8d7e04               lea edi, [esi + 4]
// 004a6e81  8bcf                 mov ecx, edi
// 004a6e83  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004a6e8b  ff15c0e48900         call dword ptr [0x89e4c0]
// 004a6e91  8d44241c             lea eax, [esp + 0x1c]
// 004a6e95  50                   push eax
// 004a6e96  8bcf                 mov ecx, edi
// 004a6e98  c644241801           mov byte ptr [esp + 0x18], 1
// 004a6e9d  ff1564e48900         call dword ptr [0x89e464]
// 004a6ea3  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 004a6ea7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 004a6eab  8b442440             mov eax, dword ptr [esp + 0x40]
// 004a6eaf  884e20               mov byte ptr [esi + 0x20], cl
// 004a6eb2  8d4c241c             lea ecx, [esp + 0x1c]
// 004a6eb6  8916                 mov dword ptr [esi], edx
// 004a6eb8  894624               mov dword ptr [esi + 0x24], eax
// 004a6ebb  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004a6ec3  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a6ec9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a6ecd  5f                   pop edi
// 004a6ece  8bc6                 mov eax, esi
// 004a6ed0  5e                   pop esi
// 004a6ed1  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6ed8  83c410               add esp, 0x10
// 004a6edb  c22800               ret 0x28
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ??0Node@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NIPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
