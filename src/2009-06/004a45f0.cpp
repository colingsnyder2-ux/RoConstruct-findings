// roc 2009-06 004a45f0  unit: G3D::PBVTextureFormat::?$Table  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a45f0
//
// 004a45f0  6aff                 push -1
// 004a45f2  687f748500           push 0x85747f
// 004a45f7  64a100000000         mov eax, dword ptr fs:[0]
// 004a45fd  50                   push eax
// 004a45fe  64892500000000       mov dword ptr fs:[0], esp
// 004a4605  51                   push ecx
// 004a4606  53                   push ebx
// 004a4607  33db                 xor ebx, ebx
// 004a4609  56                   push esi
// 004a460a  8bf1                 mov esi, ecx
// 004a460c  891e                 mov dword ptr [esi], ebx
// 004a460e  885e04               mov byte ptr [esi + 4], bl
// 004a4611  89742408             mov dword ptr [esp + 8], esi
// 004a4615  895e38               mov dword ptr [esi + 0x38], ebx
// 004a4618  8d4e50               lea ecx, [esi + 0x50]
// 004a461b  895c2414             mov dword ptr [esp + 0x14], ebx
// 004a461f  ff15c0e48900         call dword ptr [0x89e4c0]
// 004a4625  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 004a462b  6a08                 push 8
// 004a462d  6a01                 push 1
// 004a462f  6a01                 push 1
// 004a4631  8d8e20010000         lea ecx, [esi + 0x120]
// 004a4637  c644242002           mov byte ptr [esp + 0x20], 2
// 004a463c  e8bfcbffff           call 0x4a1200
// 004a4641  899e84080000         mov dword ptr [esi + 0x884], ebx
// 004a4647  899e88080000         mov dword ptr [esi + 0x888], ebx
// 004a464d  899e80080000         mov dword ptr [esi + 0x880], ebx
// 004a4653  6a10                 push 0x10
// 004a4655  6a28                 push 0x28
// 004a4657  c644241c04           mov byte ptr [esp + 0x1c], 4
// 004a465c  c7869c080000e8ff8b00 mov dword ptr [esi + 0x89c], 0x8bffe8
// 004a4666  c786a80800000a000000 mov dword ptr [esi + 0x8a8], 0xa
// 004a4670  899ea0080000         mov dword ptr [esi + 0x8a0], ebx
// 004a4676  e8f56a0c00           call 0x56b170
// 004a467b  8b8ea8080000         mov ecx, dword ptr [esi + 0x8a8]
// 004a4681  03c9                 add ecx, ecx
// 004a4683  03c9                 add ecx, ecx
// 004a4685  51                   push ecx
// 004a4686  53                   push ebx
// 004a4687  50                   push eax
// 004a4688  8986a4080000         mov dword ptr [esi + 0x8a4], eax
// 004a468e  e8fd770c00           call 0x56be90
// 004a4693  83c414               add esp, 0x14
// 004a4696  d9ee                 fldz 
// 004a4698  dd5e28               fstp qword ptr [esi + 0x28]
// 004a469b  c644241405           mov byte ptr [esp + 0x14], 5
// 004a46a0  889e98080000         mov byte ptr [esi + 0x898], bl
// 004a46a6  889e99080000         mov byte ptr [esi + 0x899], bl
// 004a46ac  889e10010000         mov byte ptr [esi + 0x110], bl
// 004a46b2  889e11010000         mov byte ptr [esi + 0x111], bl
// 004a46b8  899e14010000         mov dword ptr [esi + 0x114], ebx
// 004a46be  899e18010000         mov dword ptr [esi + 0x118], ebx
// 004a46c4  899e1c010000         mov dword ptr [esi + 0x11c], ebx
// 004a46ca  e881730c00           call 0x56ba50
// 004a46cf  dd5e20               fstp qword ptr [esi + 0x20]
// 004a46d2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a46d6  899eec000000         mov dword ptr [esi + 0xec], ebx
// 004a46dc  899ef0000000         mov dword ptr [esi + 0xf0], ebx
// 004a46e2  899ef4000000         mov dword ptr [esi + 0xf4], ebx
// 004a46e8  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 004a46ee  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 004a46f4  899e00010000         mov dword ptr [esi + 0x100], ebx
// 004a46fa  899e04010000         mov dword ptr [esi + 0x104], ebx
// 004a4700  899e08010000         mov dword ptr [esi + 0x108], ebx
// 004a4706  89358cc8a300         mov dword ptr [0xa3c88c], esi
// 004a470c  8bc6                 mov eax, esi
// 004a470e  5e                   pop esi
// 004a470f  5b                   pop ebx
// 004a4710  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4717  83c410               add esp, 0x10
// 004a471a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??0RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
