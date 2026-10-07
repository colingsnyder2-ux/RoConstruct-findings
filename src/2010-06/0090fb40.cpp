// roc 2010-06 0090fb40  unit: G3D::TextureManager::TextureArgs  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090fb40
//
// 0090fb40  6aff                 push -1
// 0090fb42  68085c9800           push 0x985c08
// 0090fb47  64a100000000         mov eax, dword ptr fs:[0]
// 0090fb4d  50                   push eax
// 0090fb4e  64892500000000       mov dword ptr fs:[0], esp
// 0090fb55  51                   push ecx
// 0090fb56  56                   push esi
// 0090fb57  8bf1                 mov esi, ecx
// 0090fb59  89742404             mov dword ptr [esp + 4], esi
// 0090fb5d  8b8618020000         mov eax, dword ptr [esi + 0x218]
// 0090fb63  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0090fb6b  85c0                 test eax, eax
// 0090fb6d  7435                 je 0x90fba4
// 0090fb6f  83c004               add eax, 4
// 0090fb72  50                   push eax
// 0090fb73  ff157ca39e00         call dword ptr [0x9ea37c]
// 0090fb79  85c0                 test eax, eax
// 0090fb7b  751d                 jne 0x90fb9a
// 0090fb7d  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 0090fb83  e8983fb7ff           call 0x483b20
// 0090fb88  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 0090fb8e  85c9                 test ecx, ecx
// 0090fb90  7408                 je 0x90fb9a
// 0090fb92  8b01                 mov eax, dword ptr [ecx]
// 0090fb94  8b10                 mov edx, dword ptr [eax]
// 0090fb96  6a01                 push 1
// 0090fb98  ffd2                 call edx
// 0090fb9a  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 0090fba4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0090fba8  c7065032a100         mov dword ptr [esi], 0xa13250
// 0090fbae  5e                   pop esi
// 0090fbaf  64890d00000000       mov dword ptr fs:[0], ecx
// 0090fbb6  83c410               add esp, 0x10
// 0090fbb9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ??1GFont@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
