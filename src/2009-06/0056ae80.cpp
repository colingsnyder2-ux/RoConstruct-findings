// roc 2009-06 0056ae80  unit: G3D::Shader  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056ae80
//
// 0056ae80  6aff                 push -1
// 0056ae82  6848fc8500           push 0x85fc48
// 0056ae87  64a100000000         mov eax, dword ptr fs:[0]
// 0056ae8d  50                   push eax
// 0056ae8e  64892500000000       mov dword ptr fs:[0], esp
// 0056ae95  83ec40               sub esp, 0x40
// 0056ae98  56                   push esi
// 0056ae99  8bf1                 mov esi, ecx
// 0056ae9b  89742408             mov dword ptr [esp + 8], esi
// 0056ae9f  c70600000000         mov dword ptr [esi], 0
// 0056aea5  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0056aead  c7460400000000       mov dword ptr [esi + 4], 0
// 0056aeb4  c7460800000000       mov dword ptr [esi + 8], 0
// 0056aebb  803d18c9a30000       cmp byte ptr [0xa3c918], 0
// 0056aec2  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0056aec7  0f84a1000000         je 0x56af6e
// 0056aecd  803d19c9a30000       cmp byte ptr [0xa3c919], 0
// 0056aed4  0f8494000000         je 0x56af6e
// 0056aeda  803d09c9a30000       cmp byte ptr [0xa3c909], 0
// 0056aee1  0f8487000000         je 0x56af6e
// 0056aee7  68a0aa8c00           push 0x8caaa0
// 0056aeec  8d4c242c             lea ecx, [esp + 0x2c]
// 0056aef0  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056aef6  6816d28a00           push 0x8ad216
// 0056aefb  8d4c2410             lea ecx, [esp + 0x10]
// 0056aeff  c644245003           mov byte ptr [esp + 0x50], 3
// 0056af04  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056af0a  6a00                 push 0
// 0056af0c  8d44242c             lea eax, [esp + 0x2c]
// 0056af10  50                   push eax
// 0056af11  8d4c2414             lea ecx, [esp + 0x14]
// 0056af15  51                   push ecx
// 0056af16  8d542410             lea edx, [esp + 0x10]
// 0056af1a  52                   push edx
// 0056af1b  c644245c04           mov byte ptr [esp + 0x5c], 4
// 0056af20  e89bfeffff           call 0x56adc0
// 0056af25  83c410               add esp, 0x10
// 0056af28  8b00                 mov eax, dword ptr [eax]
// 0056af2a  50                   push eax
// 0056af2b  8bce                 mov ecx, esi
// 0056af2d  c644245005           mov byte ptr [esp + 0x50], 5
// 0056af32  e82949f3ff           call 0x49f860
// 0056af37  8d4c2404             lea ecx, [esp + 4]
// 0056af3b  c644244c04           mov byte ptr [esp + 0x4c], 4
// 0056af40  e81b22f3ff           call 0x49d160
// 0056af45  8d4c240c             lea ecx, [esp + 0xc]
// 0056af49  c644244c03           mov byte ptr [esp + 0x4c], 3
// 0056af4e  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056af54  8d4c2428             lea ecx, [esp + 0x28]
// 0056af58  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0056af5d  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056af63  8b0e                 mov ecx, dword ptr [esi]
// 0056af65  8b11                 mov edx, dword ptr [ecx]
// 0056af67  8b4204               mov eax, dword ptr [edx + 4]
// 0056af6a  6a00                 push 0
// 0056af6c  ffd0                 call eax
// 0056af6e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0056af72  8bc6                 mov eax, esi
// 0056af74  5e                   pop esi
// 0056af75  64890d00000000       mov dword ptr fs:[0], ecx
// 0056af7c  83c44c               add esp, 0x4c
// 0056af7f  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ??0DepthBlur@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
