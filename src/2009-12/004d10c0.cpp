// roc 2009-12 004d10c0  unit: G3D::PBVTextureFormat::?$Table  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d10c0
//
// 004d10c0  6aff                 push -1
// 004d10c2  683f339300           push 0x93333f
// 004d10c7  64a100000000         mov eax, dword ptr fs:[0]
// 004d10cd  50                   push eax
// 004d10ce  64892500000000       mov dword ptr fs:[0], esp
// 004d10d5  51                   push ecx
// 004d10d6  53                   push ebx
// 004d10d7  33db                 xor ebx, ebx
// 004d10d9  56                   push esi
// 004d10da  8bf1                 mov esi, ecx
// 004d10dc  891e                 mov dword ptr [esi], ebx
// 004d10de  885e04               mov byte ptr [esi + 4], bl
// 004d10e1  89742408             mov dword ptr [esp + 8], esi
// 004d10e5  895e38               mov dword ptr [esi + 0x38], ebx
// 004d10e8  8d4e50               lea ecx, [esi + 0x50]
// 004d10eb  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d10ef  ff15e8b69800         call dword ptr [0x98b6e8]
// 004d10f5  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 004d10fb  6a08                 push 8
// 004d10fd  6a01                 push 1
// 004d10ff  6a01                 push 1
// 004d1101  8d8e20010000         lea ecx, [esi + 0x120]
// 004d1107  c644242002           mov byte ptr [esp + 0x20], 2
// 004d110c  e8afc9ffff           call 0x4cdac0
// 004d1111  899e84080000         mov dword ptr [esi + 0x884], ebx
// 004d1117  899e88080000         mov dword ptr [esi + 0x888], ebx
// 004d111d  899e80080000         mov dword ptr [esi + 0x880], ebx
// 004d1123  6a10                 push 0x10
// 004d1125  6a28                 push 0x28
// 004d1127  c644241c04           mov byte ptr [esp + 0x1c], 4
// 004d112c  c7869c080000d4589b00 mov dword ptr [esi + 0x89c], 0x9b58d4
// 004d1136  c786a80800000a000000 mov dword ptr [esi + 0x8a8], 0xa
// 004d1140  899ea0080000         mov dword ptr [esi + 0x8a0], ebx
// 004d1146  e875911100           call 0x5ea2c0
// 004d114b  8b8ea8080000         mov ecx, dword ptr [esi + 0x8a8]
// 004d1151  03c9                 add ecx, ecx
// 004d1153  03c9                 add ecx, ecx
// 004d1155  51                   push ecx
// 004d1156  53                   push ebx
// 004d1157  50                   push eax
// 004d1158  8986a4080000         mov dword ptr [esi + 0x8a4], eax
// 004d115e  e85d9e1100           call 0x5eafc0
// 004d1163  83c414               add esp, 0x14
// 004d1166  d9ee                 fldz 
// 004d1168  dd5e28               fstp qword ptr [esi + 0x28]
// 004d116b  c644241405           mov byte ptr [esp + 0x14], 5
// 004d1170  889e98080000         mov byte ptr [esi + 0x898], bl
// 004d1176  889e99080000         mov byte ptr [esi + 0x899], bl
// 004d117c  889e10010000         mov byte ptr [esi + 0x110], bl
// 004d1182  889e11010000         mov byte ptr [esi + 0x111], bl
// 004d1188  899e14010000         mov dword ptr [esi + 0x114], ebx
// 004d118e  899e18010000         mov dword ptr [esi + 0x118], ebx
// 004d1194  899e1c010000         mov dword ptr [esi + 0x11c], ebx
// 004d119a  e8e1991100           call 0x5eab80
// 004d119f  dd5e20               fstp qword ptr [esi + 0x20]
// 004d11a2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d11a6  899eec000000         mov dword ptr [esi + 0xec], ebx
// 004d11ac  899ef0000000         mov dword ptr [esi + 0xf0], ebx
// 004d11b2  899ef4000000         mov dword ptr [esi + 0xf4], ebx
// 004d11b8  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 004d11be  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 004d11c4  899e00010000         mov dword ptr [esi + 0x100], ebx
// 004d11ca  899e04010000         mov dword ptr [esi + 0x104], ebx
// 004d11d0  899e08010000         mov dword ptr [esi + 0x108], ebx
// 004d11d6  89354cd0b700         mov dword ptr [0xb7d04c], esi
// 004d11dc  8bc6                 mov eax, esi
// 004d11de  5e                   pop esi
// 004d11df  5b                   pop ebx
// 004d11e0  64890d00000000       mov dword ptr fs:[0], ecx
// 004d11e7  83c410               add esp, 0x10
// 004d11ea  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??0RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
