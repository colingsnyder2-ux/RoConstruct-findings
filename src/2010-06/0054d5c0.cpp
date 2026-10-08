// roc 2010-06 0054d5c0  unit: G3D::Shader  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054d5c0
//
// 0054d5c0  6aff                 push -1
// 0054d5c2  68f8089900           push 0x9908f8
// 0054d5c7  64a100000000         mov eax, dword ptr fs:[0]
// 0054d5cd  50                   push eax
// 0054d5ce  64892500000000       mov dword ptr fs:[0], esp
// 0054d5d5  83ec40               sub esp, 0x40
// 0054d5d8  56                   push esi
// 0054d5d9  8bf1                 mov esi, ecx
// 0054d5db  89742408             mov dword ptr [esp + 8], esi
// 0054d5df  c70600000000         mov dword ptr [esi], 0
// 0054d5e5  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0054d5ed  c7460400000000       mov dword ptr [esi + 4], 0
// 0054d5f4  c7460800000000       mov dword ptr [esi + 8], 0
// 0054d5fb  803dc438c00000       cmp byte ptr [0xc038c4], 0
// 0054d602  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0054d607  0f84a1000000         je 0x54d6ae
// 0054d60d  803dc538c00000       cmp byte ptr [0xc038c5], 0
// 0054d614  0f8494000000         je 0x54d6ae
// 0054d61a  803db538c00000       cmp byte ptr [0xc038b5], 0
// 0054d621  0f8487000000         je 0x54d6ae
// 0054d627  6880f6a100           push 0xa1f680
// 0054d62c  8d4c242c             lea ecx, [esp + 0x2c]
// 0054d630  ff1510a49e00         call dword ptr [0x9ea410]
// 0054d636  68fe08a000           push 0xa008fe
// 0054d63b  8d4c2410             lea ecx, [esp + 0x10]
// 0054d63f  c644245003           mov byte ptr [esp + 0x50], 3
// 0054d644  ff1510a49e00         call dword ptr [0x9ea410]
// 0054d64a  6a00                 push 0
// 0054d64c  8d44242c             lea eax, [esp + 0x2c]
// 0054d650  50                   push eax
// 0054d651  8d4c2414             lea ecx, [esp + 0x14]
// 0054d655  51                   push ecx
// 0054d656  8d542410             lea edx, [esp + 0x10]
// 0054d65a  52                   push edx
// 0054d65b  c644245c04           mov byte ptr [esp + 0x5c], 4
// 0054d660  e89bfeffff           call 0x54d500
// 0054d665  83c410               add esp, 0x10
// 0054d668  8b00                 mov eax, dword ptr [eax]
// 0054d66a  50                   push eax
// 0054d66b  8bce                 mov ecx, esi
// 0054d66d  c644245005           mov byte ptr [esp + 0x50], 5
// 0054d672  e8a996f3ff           call 0x486d20
// 0054d677  8d4c2404             lea ecx, [esp + 4]
// 0054d67b  c644244c04           mov byte ptr [esp + 0x4c], 4
// 0054d680  e86bf4fdff           call 0x52caf0
// 0054d685  8d4c240c             lea ecx, [esp + 0xc]
// 0054d689  c644244c03           mov byte ptr [esp + 0x4c], 3
// 0054d68e  ff1500a49e00         call dword ptr [0x9ea400]
// 0054d694  8d4c2428             lea ecx, [esp + 0x28]
// 0054d698  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0054d69d  ff1500a49e00         call dword ptr [0x9ea400]
// 0054d6a3  8b0e                 mov ecx, dword ptr [esi]
// 0054d6a5  8b11                 mov edx, dword ptr [ecx]
// 0054d6a7  8b4204               mov eax, dword ptr [edx + 4]
// 0054d6aa  6a00                 push 0
// 0054d6ac  ffd0                 call eax
// 0054d6ae  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0054d6b2  8bc6                 mov eax, esi
// 0054d6b4  5e                   pop esi
// 0054d6b5  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d6bc  83c44c               add esp, 0x4c
// 0054d6bf  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ??0DepthBlur@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
