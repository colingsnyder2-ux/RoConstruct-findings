// roc 2009-12 004d3a30  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d3a30
//
// 004d3a30  6aff                 push -1
// 004d3a32  6834379300           push 0x933734
// 004d3a37  64a100000000         mov eax, dword ptr fs:[0]
// 004d3a3d  50                   push eax
// 004d3a3e  64892500000000       mov dword ptr fs:[0], esp
// 004d3a45  51                   push ecx
// 004d3a46  56                   push esi
// 004d3a47  8bf1                 mov esi, ecx
// 004d3a49  57                   push edi
// 004d3a4a  89742408             mov dword ptr [esp + 8], esi
// 004d3a4e  8d7e04               lea edi, [esi + 4]
// 004d3a51  8bcf                 mov ecx, edi
// 004d3a53  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004d3a5b  ff15e8b69800         call dword ptr [0x98b6e8]
// 004d3a61  8d44241c             lea eax, [esp + 0x1c]
// 004d3a65  50                   push eax
// 004d3a66  8bcf                 mov ecx, edi
// 004d3a68  c644241801           mov byte ptr [esp + 0x18], 1
// 004d3a6d  ff159cb69800         call dword ptr [0x98b69c]
// 004d3a73  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 004d3a77  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 004d3a7b  8b442440             mov eax, dword ptr [esp + 0x40]
// 004d3a7f  884e20               mov byte ptr [esi + 0x20], cl
// 004d3a82  8d4c241c             lea ecx, [esp + 0x1c]
// 004d3a86  8916                 mov dword ptr [esi], edx
// 004d3a88  894624               mov dword ptr [esi + 0x24], eax
// 004d3a8b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004d3a93  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d3a99  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d3a9d  5f                   pop edi
// 004d3a9e  8bc6                 mov eax, esi
// 004d3aa0  5e                   pop esi
// 004d3aa1  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3aa8  83c410               add esp, 0x10
// 004d3aab  c22800               ret 0x28
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ??0Node@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NIPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
