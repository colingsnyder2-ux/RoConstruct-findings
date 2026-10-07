// roc 2008-06 0045b640  unit: CRobloxWnd  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b640
//
// 0045b640  6aff                 push -1
// 0045b642  68402b7c00           push 0x7c2b40
// 0045b647  64a100000000         mov eax, dword ptr fs:[0]
// 0045b64d  50                   push eax
// 0045b64e  64892500000000       mov dword ptr fs:[0], esp
// 0045b655  51                   push ecx
// 0045b656  56                   push esi
// 0045b657  8bf1                 mov esi, ecx
// 0045b659  89742404             mov dword ptr [esp + 4], esi
// 0045b65d  8b4638               mov eax, dword ptr [esi + 0x38]
// 0045b660  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045b668  85c0                 test eax, eax
// 0045b66a  742c                 je 0x45b698
// 0045b66c  83c004               add eax, 4
// 0045b66f  50                   push eax
// 0045b670  ff15ac218000         call dword ptr [0x8021ac]
// 0045b676  85c0                 test eax, eax
// 0045b678  7517                 jne 0x45b691
// 0045b67a  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0045b67d  e80ef7ffff           call 0x45ad90
// 0045b682  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0045b685  85c9                 test ecx, ecx
// 0045b687  7408                 je 0x45b691
// 0045b689  8b01                 mov eax, dword ptr [ecx]
// 0045b68b  8b10                 mov edx, dword ptr [eax]
// 0045b68d  6a01                 push 1
// 0045b68f  ffd2                 call edx
// 0045b691  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0045b698  c70670978100         mov dword ptr [esi], 0x819770
// 0045b69e  8d4e04               lea ecx, [esi + 4]
// 0045b6a1  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0045b6a9  ff1568248000         call dword ptr [0x802468]
// 0045b6af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045b6b3  c70650978100         mov dword ptr [esi], 0x819750
// 0045b6b9  5e                   pop esi
// 0045b6ba  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b6c1  83c410               add esp, 0x10
// 0045b6c4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1Entry@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
