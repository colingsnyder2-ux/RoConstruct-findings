// roc 2009-06 0045a130  unit: G3D::TextureManager::TextureArgs  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a130
//
// 0045a130  6aff                 push -1
// 0045a132  6858238500           push 0x852358
// 0045a137  64a100000000         mov eax, dword ptr fs:[0]
// 0045a13d  50                   push eax
// 0045a13e  64892500000000       mov dword ptr fs:[0], esp
// 0045a145  51                   push ecx
// 0045a146  56                   push esi
// 0045a147  8bf1                 mov esi, ecx
// 0045a149  89742404             mov dword ptr [esp + 4], esi
// 0045a14d  c70628a18b00         mov dword ptr [esi], 0x8ba128
// 0045a153  8d4e04               lea ecx, [esi + 4]
// 0045a156  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045a15e  ff15c4e48900         call dword ptr [0x89e4c4]
// 0045a164  f644241801           test byte ptr [esp + 0x18], 1
// 0045a169  c70610a18b00         mov dword ptr [esi], 0x8ba110
// 0045a16f  7409                 je 0x45a17a
// 0045a171  56                   push esi
// 0045a172  e8bbe82b00           call 0x718a32
// 0045a177  83c404               add esp, 4
// 0045a17a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045a17e  8bc6                 mov eax, esi
// 0045a180  5e                   pop esi
// 0045a181  64890d00000000       mov dword ptr fs:[0], ecx
// 0045a188  83c410               add esp, 0x10
// 0045a18b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??_GTextureArgs@TextureManager@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
