// roc 2010-06 00497bf0  unit: seg_00490000  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00497bf0
//
// 00497bf0  6aff                 push -1
// 00497bf2  68cf6c9800           push 0x986ccf
// 00497bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00497bfd  50                   push eax
// 00497bfe  64892500000000       mov dword ptr fs:[0], esp
// 00497c05  51                   push ecx
// 00497c06  53                   push ebx
// 00497c07  33db                 xor ebx, ebx
// 00497c09  56                   push esi
// 00497c0a  8bf1                 mov esi, ecx
// 00497c0c  891e                 mov dword ptr [esi], ebx
// 00497c0e  885e04               mov byte ptr [esi + 4], bl
// 00497c11  89742408             mov dword ptr [esp + 8], esi
// 00497c15  895e38               mov dword ptr [esi + 0x38], ebx
// 00497c18  8d4e50               lea ecx, [esi + 0x50]
// 00497c1b  895c2414             mov dword ptr [esp + 0x14], ebx
// 00497c1f  ff1504a49e00         call dword ptr [0x9ea404]
// 00497c25  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 00497c2b  6a08                 push 8
// 00497c2d  6a01                 push 1
// 00497c2f  6a01                 push 1
// 00497c31  8d8e20010000         lea ecx, [esi + 0x120]
// 00497c37  c644242002           mov byte ptr [esp + 0x20], 2
// 00497c3c  e8afc9ffff           call 0x4945f0
// 00497c41  899e84080000         mov dword ptr [esi + 0x884], ebx
// 00497c47  899e88080000         mov dword ptr [esi + 0x888], ebx
// 00497c4d  899e80080000         mov dword ptr [esi + 0x880], ebx
// 00497c53  6a10                 push 0x10
// 00497c55  6a28                 push 0x28
// 00497c57  c644241c04           mov byte ptr [esp + 0x1c], 4
// 00497c5c  c7869c080000fc3ca100 mov dword ptr [esi + 0x89c], 0xa13cfc
// 00497c66  c786a80800000a000000 mov dword ptr [esi + 0x8a8], 0xa
// 00497c70  899ea0080000         mov dword ptr [esi + 0x8a0], ebx
// 00497c76  e8255c0b00           call 0x54d8a0
// 00497c7b  8b8ea8080000         mov ecx, dword ptr [esi + 0x8a8]
// 00497c81  03c9                 add ecx, ecx
// 00497c83  03c9                 add ecx, ecx
// 00497c85  51                   push ecx
// 00497c86  53                   push ebx
// 00497c87  50                   push eax
// 00497c88  8986a4080000         mov dword ptr [esi + 0x8a4], eax
// 00497c8e  e80d690b00           call 0x54e5a0
// 00497c93  83c414               add esp, 0x14
// 00497c96  d9ee                 fldz 
// 00497c98  dd5e28               fstp qword ptr [esi + 0x28]
// 00497c9b  c644241405           mov byte ptr [esp + 0x14], 5
// 00497ca0  889e98080000         mov byte ptr [esi + 0x898], bl
// 00497ca6  889e99080000         mov byte ptr [esi + 0x899], bl
// 00497cac  889e10010000         mov byte ptr [esi + 0x110], bl
// 00497cb2  889e11010000         mov byte ptr [esi + 0x111], bl
// 00497cb8  899e14010000         mov dword ptr [esi + 0x114], ebx
// 00497cbe  899e18010000         mov dword ptr [esi + 0x118], ebx
// 00497cc4  899e1c010000         mov dword ptr [esi + 0x11c], ebx
// 00497cca  e891640b00           call 0x54e160
// 00497ccf  dd5e20               fstp qword ptr [esi + 0x20]
// 00497cd2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00497cd6  899eec000000         mov dword ptr [esi + 0xec], ebx
// 00497cdc  899ef0000000         mov dword ptr [esi + 0xf0], ebx
// 00497ce2  899ef4000000         mov dword ptr [esi + 0xf4], ebx
// 00497ce8  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 00497cee  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 00497cf4  899e00010000         mov dword ptr [esi + 0x100], ebx
// 00497cfa  899e04010000         mov dword ptr [esi + 0x104], ebx
// 00497d00  899e08010000         mov dword ptr [esi + 0x108], ebx
// 00497d06  8935783cc000         mov dword ptr [0xc03c78], esi
// 00497d0c  8bc6                 mov eax, esi
// 00497d0e  5e                   pop esi
// 00497d0f  5b                   pop ebx
// 00497d10  64890d00000000       mov dword ptr fs:[0], ecx
// 00497d17  83c410               add esp, 0x10
// 00497d1a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??0RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
