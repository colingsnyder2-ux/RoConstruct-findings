// roc 2009-12 005e9fe0  unit: G3D::Shader  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e9fe0
//
// 005e9fe0  6aff                 push -1
// 005e9fe2  6858eb9300           push 0x93eb58
// 005e9fe7  64a100000000         mov eax, dword ptr fs:[0]
// 005e9fed  50                   push eax
// 005e9fee  64892500000000       mov dword ptr fs:[0], esp
// 005e9ff5  83ec40               sub esp, 0x40
// 005e9ff8  56                   push esi
// 005e9ff9  8bf1                 mov esi, ecx
// 005e9ffb  89742408             mov dword ptr [esp + 8], esi
// 005e9fff  c70600000000         mov dword ptr [esi], 0
// 005ea005  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 005ea00d  c7460400000000       mov dword ptr [esi + 4], 0
// 005ea014  c7460800000000       mov dword ptr [esi + 8], 0
// 005ea01b  803dc8d0b70000       cmp byte ptr [0xb7d0c8], 0
// 005ea022  c644244c02           mov byte ptr [esp + 0x4c], 2
// 005ea027  0f84a1000000         je 0x5ea0ce
// 005ea02d  803dc9d0b70000       cmp byte ptr [0xb7d0c9], 0
// 005ea034  0f8494000000         je 0x5ea0ce
// 005ea03a  803db9d0b70000       cmp byte ptr [0xb7d0b9], 0
// 005ea041  0f8487000000         je 0x5ea0ce
// 005ea047  6828199c00           push 0x9c1928
// 005ea04c  8d4c242c             lea ecx, [esp + 0x2c]
// 005ea050  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea056  6856fd9900           push 0x99fd56
// 005ea05b  8d4c2410             lea ecx, [esp + 0x10]
// 005ea05f  c644245003           mov byte ptr [esp + 0x50], 3
// 005ea064  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ea06a  6a00                 push 0
// 005ea06c  8d44242c             lea eax, [esp + 0x2c]
// 005ea070  50                   push eax
// 005ea071  8d4c2414             lea ecx, [esp + 0x14]
// 005ea075  51                   push ecx
// 005ea076  8d542410             lea edx, [esp + 0x10]
// 005ea07a  52                   push edx
// 005ea07b  c644245c04           mov byte ptr [esp + 0x5c], 4
// 005ea080  e89bfeffff           call 0x5e9f20
// 005ea085  83c410               add esp, 0x10
// 005ea088  8b00                 mov eax, dword ptr [eax]
// 005ea08a  50                   push eax
// 005ea08b  8bce                 mov ecx, esi
// 005ea08d  c644245005           mov byte ptr [esp + 0x50], 5
// 005ea092  e8d91ae6ff           call 0x44bb70
// 005ea097  8d4c2404             lea ecx, [esp + 4]
// 005ea09b  c644244c04           mov byte ptr [esp + 0x4c], 4
// 005ea0a0  e87b2bfeff           call 0x5ccc20
// 005ea0a5  8d4c240c             lea ecx, [esp + 0xc]
// 005ea0a9  c644244c03           mov byte ptr [esp + 0x4c], 3
// 005ea0ae  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea0b4  8d4c2428             lea ecx, [esp + 0x28]
// 005ea0b8  c644244c02           mov byte ptr [esp + 0x4c], 2
// 005ea0bd  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ea0c3  8b0e                 mov ecx, dword ptr [esi]
// 005ea0c5  8b11                 mov edx, dword ptr [ecx]
// 005ea0c7  8b4204               mov eax, dword ptr [edx + 4]
// 005ea0ca  6a00                 push 0
// 005ea0cc  ffd0                 call eax
// 005ea0ce  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005ea0d2  8bc6                 mov eax, esi
// 005ea0d4  5e                   pop esi
// 005ea0d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea0dc  83c44c               add esp, 0x4c
// 005ea0df  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ??0DepthBlur@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
