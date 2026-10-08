// roc 2010-06 0054d370  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054d370
//
// 0054d370  6aff                 push -1
// 0054d372  686b089900           push 0x99086b
// 0054d377  64a100000000         mov eax, dword ptr fs:[0]
// 0054d37d  50                   push eax
// 0054d37e  64892500000000       mov dword ptr fs:[0], esp
// 0054d385  51                   push ecx
// 0054d386  56                   push esi
// 0054d387  8bf1                 mov esi, ecx
// 0054d389  57                   push edi
// 0054d38a  89742408             mov dword ptr [esp + 8], esi
// 0054d38e  33ff                 xor edi, edi
// 0054d390  c7065032a100         mov dword ptr [esi], 0xa13250
// 0054d396  897e04               mov dword ptr [esi + 4], edi
// 0054d399  897c2414             mov dword ptr [esp + 0x14], edi
// 0054d39d  897e08               mov dword ptr [esi + 8], edi
// 0054d3a0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054d3a4  8d4e0c               lea ecx, [esi + 0xc]
// 0054d3a7  c70664f6a100         mov dword ptr [esi], 0xa1f664
// 0054d3ad  50                   push eax
// 0054d3ae  c644241801           mov byte ptr [esp + 0x18], 1
// 0054d3b3  8939                 mov dword ptr [ecx], edi
// 0054d3b5  e86699f3ff           call 0x486d20
// 0054d3ba  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0054d3be  894e10               mov dword ptr [esi + 0x10], ecx
// 0054d3c1  c6461401             mov byte ptr [esi + 0x14], 1
// 0054d3c5  6a10                 push 0x10
// 0054d3c7  6a28                 push 0x28
// 0054d3c9  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0054d3ce  c7461834f6a100       mov dword ptr [esi + 0x18], 0xa1f634
// 0054d3d5  c746240a000000       mov dword ptr [esi + 0x24], 0xa
// 0054d3dc  897e1c               mov dword ptr [esi + 0x1c], edi
// 0054d3df  e8bc040000           call 0x54d8a0
// 0054d3e4  8b5624               mov edx, dword ptr [esi + 0x24]
// 0054d3e7  03d2                 add edx, edx
// 0054d3e9  03d2                 add edx, edx
// 0054d3eb  52                   push edx
// 0054d3ec  57                   push edi
// 0054d3ed  50                   push eax
// 0054d3ee  894620               mov dword ptr [esi + 0x20], eax
// 0054d3f1  e8aa110000           call 0x54e5a0
// 0054d3f6  8b442430             mov eax, dword ptr [esp + 0x30]
// 0054d3fa  83c414               add esp, 0x14
// 0054d3fd  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0054d405  3bc7                 cmp eax, edi
// 0054d407  7427                 je 0x54d430
// 0054d409  83c004               add eax, 4
// 0054d40c  50                   push eax
// 0054d40d  ff157ca39e00         call dword ptr [0x9ea37c]
// 0054d413  85c0                 test eax, eax
// 0054d415  7519                 jne 0x54d430
// 0054d417  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054d41b  e80067f3ff           call 0x483b20
// 0054d420  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054d424  3bcf                 cmp ecx, edi
// 0054d426  7408                 je 0x54d430
// 0054d428  8b01                 mov eax, dword ptr [ecx]
// 0054d42a  8b10                 mov edx, dword ptr [eax]
// 0054d42c  6a01                 push 1
// 0054d42e  ffd2                 call edx
// 0054d430  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054d434  5f                   pop edi
// 0054d435  8bc6                 mov eax, esi
// 0054d437  5e                   pop esi
// 0054d438  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d43f  83c410               add esp, 0x10
// 0054d442  c20800               ret 8
// library rbxgs-render/DepthBlur.cpp (function ??0Shader@G3D@@IAE@V?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@1@W4UseG3DUniforms@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
