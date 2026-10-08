// roc 2008-06 0047d0d0  unit: seg_00470000  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d0d0
//
// 0047d0d0  6aff                 push -1
// 0047d0d2  684f4e7c00           push 0x7c4e4f
// 0047d0d7  64a100000000         mov eax, dword ptr fs:[0]
// 0047d0dd  50                   push eax
// 0047d0de  64892500000000       mov dword ptr fs:[0], esp
// 0047d0e5  51                   push ecx
// 0047d0e6  53                   push ebx
// 0047d0e7  33db                 xor ebx, ebx
// 0047d0e9  56                   push esi
// 0047d0ea  8bf1                 mov esi, ecx
// 0047d0ec  891e                 mov dword ptr [esi], ebx
// 0047d0ee  885e04               mov byte ptr [esi + 4], bl
// 0047d0f1  89742408             mov dword ptr [esp + 8], esi
// 0047d0f5  895e38               mov dword ptr [esi + 0x38], ebx
// 0047d0f8  8d4e50               lea ecx, [esi + 0x50]
// 0047d0fb  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047d0ff  ff1560248000         call dword ptr [0x802460]
// 0047d105  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 0047d10b  6a08                 push 8
// 0047d10d  6a01                 push 1
// 0047d10f  6a01                 push 1
// 0047d111  8d8e20010000         lea ecx, [esi + 0x120]
// 0047d117  c644242002           mov byte ptr [esp + 0x20], 2
// 0047d11c  e8cfcbffff           call 0x479cf0
// 0047d121  899e84080000         mov dword ptr [esi + 0x884], ebx
// 0047d127  899e88080000         mov dword ptr [esi + 0x888], ebx
// 0047d12d  899e80080000         mov dword ptr [esi + 0x880], ebx
// 0047d133  6a10                 push 0x10
// 0047d135  6a28                 push 0x28
// 0047d137  c644241c04           mov byte ptr [esp + 0x1c], 4
// 0047d13c  c7869c08000024ce8100 mov dword ptr [esi + 0x89c], 0x81ce24
// 0047d146  c786a80800000a000000 mov dword ptr [esi + 0x8a8], 0xa
// 0047d150  899ea0080000         mov dword ptr [esi + 0x8a0], ebx
// 0047d156  e825b40800           call 0x508580
// 0047d15b  8b8ea8080000         mov ecx, dword ptr [esi + 0x8a8]
// 0047d161  03c9                 add ecx, ecx
// 0047d163  03c9                 add ecx, ecx
// 0047d165  51                   push ecx
// 0047d166  53                   push ebx
// 0047d167  50                   push eax
// 0047d168  8986a4080000         mov dword ptr [esi + 0x8a4], eax
// 0047d16e  e8bdb80800           call 0x508a30
// 0047d173  83c414               add esp, 0x14
// 0047d176  d9ee                 fldz 
// 0047d178  dd5e28               fstp qword ptr [esi + 0x28]
// 0047d17b  c644241405           mov byte ptr [esp + 0x14], 5
// 0047d180  889e98080000         mov byte ptr [esi + 0x898], bl
// 0047d186  889e99080000         mov byte ptr [esi + 0x899], bl
// 0047d18c  889e10010000         mov byte ptr [esi + 0x110], bl
// 0047d192  889e11010000         mov byte ptr [esi + 0x111], bl
// 0047d198  899e14010000         mov dword ptr [esi + 0x114], ebx
// 0047d19e  899e18010000         mov dword ptr [esi + 0x118], ebx
// 0047d1a4  899e1c010000         mov dword ptr [esi + 0x11c], ebx
// 0047d1aa  e821b20800           call 0x5083d0
// 0047d1af  dd5e20               fstp qword ptr [esi + 0x20]
// 0047d1b2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047d1b6  899eec000000         mov dword ptr [esi + 0xec], ebx
// 0047d1bc  899ef0000000         mov dword ptr [esi + 0xf0], ebx
// 0047d1c2  899ef4000000         mov dword ptr [esi + 0xf4], ebx
// 0047d1c8  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 0047d1ce  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 0047d1d4  899e00010000         mov dword ptr [esi + 0x100], ebx
// 0047d1da  899e04010000         mov dword ptr [esi + 0x104], ebx
// 0047d1e0  899e08010000         mov dword ptr [esi + 0x108], ebx
// 0047d1e6  8935f8ef9600         mov dword ptr [0x96eff8], esi
// 0047d1ec  8bc6                 mov eax, esi
// 0047d1ee  5e                   pop esi
// 0047d1ef  5b                   pop ebx
// 0047d1f0  64890d00000000       mov dword ptr fs:[0], ecx
// 0047d1f7  83c410               add esp, 0x10
// 0047d1fa  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??0RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
