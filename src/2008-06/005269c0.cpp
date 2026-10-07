// roc 2008-06 005269c0  unit: G3D::Line  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005269c0
//
// 005269c0  53                   push ebx
// 005269c1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005269c5  57                   push edi
// 005269c6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005269ca  0fb78718010000       movzx eax, word ptr [edi + 0x118]
// 005269d1  3bd8                 cmp ebx, eax
// 005269d3  7e11                 jle 0x5269e6
// 005269d5  6838b48200           push 0x82b438
// 005269da  57                   push edi
// 005269db  e870300000           call 0x529a50
// 005269e0  83c408               add esp, 8
// 005269e3  5f                   pop edi
// 005269e4  5b                   pop ebx
// 005269e5  c3                   ret 
// 005269e6  56                   push esi
// 005269e7  8d0c1b               lea ecx, [ebx + ebx]
// 005269ea  51                   push ecx
// 005269eb  687c948200           push 0x82947c
// 005269f0  57                   push edi
// 005269f1  e82afaffff           call 0x526420
// 005269f6  83c40c               add esp, 0xc
// 005269f9  33f6                 xor esi, esi
// 005269fb  85db                 test ebx, ebx
// 005269fd  7e3a                 jle 0x526a39
// 005269ff  55                   push ebp
// 00526a00  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00526a04  0fb7447500           movzx eax, word ptr [ebp + esi*2]
// 00526a09  8bd0                 mov edx, eax
// 00526a0b  88442415             mov byte ptr [esp + 0x15], al
// 00526a0f  6a02                 push 2
// 00526a11  8d442418             lea eax, [esp + 0x18]
// 00526a15  50                   push eax
// 00526a16  c1ea08               shr edx, 8
// 00526a19  57                   push edi
// 00526a1a  88542420             mov byte ptr [esp + 0x20], dl
// 00526a1e  e85d73ffff           call 0x51dd80
// 00526a23  6a02                 push 2
// 00526a25  8d4c2424             lea ecx, [esp + 0x24]
// 00526a29  51                   push ecx
// 00526a2a  57                   push edi
// 00526a2b  e88070ffff           call 0x51dab0
// 00526a30  46                   inc esi
// 00526a31  83c418               add esp, 0x18
// 00526a34  3bf3                 cmp esi, ebx
// 00526a36  7ccc                 jl 0x526a04
// 00526a38  5d                   pop ebp
// 00526a39  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 00526a3f  8bd0                 mov edx, eax
// 00526a41  c1ea18               shr edx, 0x18
// 00526a44  88542418             mov byte ptr [esp + 0x18], dl
// 00526a48  8bc8                 mov ecx, eax
// 00526a4a  8bd0                 mov edx, eax
// 00526a4c  8844241b             mov byte ptr [esp + 0x1b], al
// 00526a50  6a04                 push 4
// 00526a52  8d44241c             lea eax, [esp + 0x1c]
// 00526a56  50                   push eax
// 00526a57  c1e910               shr ecx, 0x10
// 00526a5a  c1ea08               shr edx, 8
// 00526a5d  57                   push edi
// 00526a5e  884c2425             mov byte ptr [esp + 0x25], cl
// 00526a62  88542426             mov byte ptr [esp + 0x26], dl
// 00526a66  e84570ffff           call 0x51dab0
// 00526a6b  83c40c               add esp, 0xc
// 00526a6e  5e                   pop esi
// 00526a6f  5f                   pop edi
// 00526a70  5b                   pop ebx
// 00526a71  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_hIST)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
