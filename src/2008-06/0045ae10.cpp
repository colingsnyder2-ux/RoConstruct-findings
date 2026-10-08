// from server: 100% by auto
// roc 2008-06 0045ae10  unit: G3D::TextureManager::TextureArgs  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ae10
//
// 0045ae10  6aff                 push -1
// 0045ae12  68482a7c00           push 0x7c2a48
// 0045ae17  64a100000000         mov eax, dword ptr fs:[0]
// 0045ae1d  50                   push eax
// 0045ae1e  64892500000000       mov dword ptr fs:[0], esp
// 0045ae25  51                   push ecx
// 0045ae26  56                   push esi
// 0045ae27  8bf1                 mov esi, ecx
// 0045ae29  89742404             mov dword ptr [esp + 4], esi
// 0045ae2d  c70670978100         mov dword ptr [esi], 0x819770
// 0045ae33  8d4e04               lea ecx, [esi + 4]
// 0045ae36  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045ae3e  ff1568248000         call dword ptr [0x802468]
// 0045ae44  f644241801           test byte ptr [esp + 0x18], 1
// 0045ae49  c70650978100         mov dword ptr [esi], 0x819750
// 0045ae4f  7409                 je 0x45ae5a
// 0045ae51  56                   push esi
// 0045ae52  e823582400           call 0x6a067a
// 0045ae57  83c404               add esp, 4
// 0045ae5a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045ae5e  8bc6                 mov eax, esi
// 0045ae60  5e                   pop esi
// 0045ae61  64890d00000000       mov dword ptr fs:[0], ecx
// 0045ae68  83c410               add esp, 0x10
// 0045ae6b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??_GTextureArgs@TextureManager@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
