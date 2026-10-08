// roc 2009-12 00461a00  unit: G3D::TextureManager::TextureArgs  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00461a00
//
// 00461a00  6aff                 push -1
// 00461a02  6878339300           push 0x933378
// 00461a07  64a100000000         mov eax, dword ptr fs:[0]
// 00461a0d  50                   push eax
// 00461a0e  64892500000000       mov dword ptr fs:[0], esp
// 00461a15  51                   push ecx
// 00461a16  56                   push esi
// 00461a17  8bf1                 mov esi, ecx
// 00461a19  89742404             mov dword ptr [esp + 4], esi
// 00461a1d  c70620e69a00         mov dword ptr [esi], 0x9ae620
// 00461a23  8d4e04               lea ecx, [esi + 4]
// 00461a26  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00461a2e  ff15e4b69800         call dword ptr [0x98b6e4]
// 00461a34  f644241801           test byte ptr [esp + 0x18], 1
// 00461a39  c70608e69a00         mov dword ptr [esi], 0x9ae608
// 00461a3f  7409                 je 0x461a4a
// 00461a41  56                   push esi
// 00461a42  e8131e3900           call 0x7f385a
// 00461a47  83c404               add esp, 4
// 00461a4a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00461a4e  8bc6                 mov eax, esi
// 00461a50  5e                   pop esi
// 00461a51  64890d00000000       mov dword ptr fs:[0], ecx
// 00461a58  83c410               add esp, 0x10
// 00461a5b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??_GTextureArgs@TextureManager@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
