// roc 2009-12 005e9da0  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e9da0
//
// 005e9da0  6aff                 push -1
// 005e9da2  68ebea9300           push 0x93eaeb
// 005e9da7  64a100000000         mov eax, dword ptr fs:[0]
// 005e9dad  50                   push eax
// 005e9dae  64892500000000       mov dword ptr fs:[0], esp
// 005e9db5  51                   push ecx
// 005e9db6  56                   push esi
// 005e9db7  8bf1                 mov esi, ecx
// 005e9db9  57                   push edi
// 005e9dba  89742408             mov dword ptr [esp + 8], esi
// 005e9dbe  33ff                 xor edi, edi
// 005e9dc0  c706a0559b00         mov dword ptr [esi], 0x9b55a0
// 005e9dc6  897e04               mov dword ptr [esi + 4], edi
// 005e9dc9  897c2414             mov dword ptr [esp + 0x14], edi
// 005e9dcd  897e08               mov dword ptr [esi + 8], edi
// 005e9dd0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e9dd4  8d4e0c               lea ecx, [esi + 0xc]
// 005e9dd7  c7060c199c00         mov dword ptr [esi], 0x9c190c
// 005e9ddd  50                   push eax
// 005e9dde  c644241801           mov byte ptr [esp + 0x18], 1
// 005e9de3  8939                 mov dword ptr [ecx], edi
// 005e9de5  e8861de6ff           call 0x44bb70
// 005e9dea  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e9dee  894e10               mov dword ptr [esi + 0x10], ecx
// 005e9df1  c6461401             mov byte ptr [esi + 0x14], 1
// 005e9df5  6a10                 push 0x10
// 005e9df7  6a28                 push 0x28
// 005e9df9  c644241c02           mov byte ptr [esp + 0x1c], 2
// 005e9dfe  c74618dc189c00       mov dword ptr [esi + 0x18], 0x9c18dc
// 005e9e05  c746240a000000       mov dword ptr [esi + 0x24], 0xa
// 005e9e0c  897e1c               mov dword ptr [esi + 0x1c], edi
// 005e9e0f  e8ac040000           call 0x5ea2c0
// 005e9e14  8b5624               mov edx, dword ptr [esi + 0x24]
// 005e9e17  03d2                 add edx, edx
// 005e9e19  03d2                 add edx, edx
// 005e9e1b  52                   push edx
// 005e9e1c  57                   push edi
// 005e9e1d  50                   push eax
// 005e9e1e  894620               mov dword ptr [esi + 0x20], eax
// 005e9e21  e89a110000           call 0x5eafc0
// 005e9e26  8b442430             mov eax, dword ptr [esp + 0x30]
// 005e9e2a  83c414               add esp, 0x14
// 005e9e2d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e9e35  3bc7                 cmp eax, edi
// 005e9e37  7427                 je 0x5e9e60
// 005e9e39  83c004               add eax, 4
// 005e9e3c  50                   push eax
// 005e9e3d  ff1508b29800         call dword ptr [0x98b208]
// 005e9e43  85c0                 test eax, eax
// 005e9e45  7519                 jne 0x5e9e60
// 005e9e47  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e9e4b  e8d011e6ff           call 0x44b020
// 005e9e50  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e9e54  3bcf                 cmp ecx, edi
// 005e9e56  7408                 je 0x5e9e60
// 005e9e58  8b01                 mov eax, dword ptr [ecx]
// 005e9e5a  8b10                 mov edx, dword ptr [eax]
// 005e9e5c  6a01                 push 1
// 005e9e5e  ffd2                 call edx
// 005e9e60  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e9e64  5f                   pop edi
// 005e9e65  8bc6                 mov eax, esi
// 005e9e67  5e                   pop esi
// 005e9e68  64890d00000000       mov dword ptr fs:[0], ecx
// 005e9e6f  83c410               add esp, 0x10
// 005e9e72  c20800               ret 8
// library rbxgs-render/DepthBlur.cpp (function ??0Shader@G3D@@IAE@V?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@1@W4UseG3DUniforms@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
