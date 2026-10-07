// roc 2007-08 006c9d50  unit: VCRect::?$CArray  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c9d50
//
// 006c9d50  83ec3c               sub esp, 0x3c
// 006c9d53  53                   push ebx
// 006c9d54  55                   push ebp
// 006c9d55  56                   push esi
// 006c9d56  6a2c                 push 0x2c
// 006c9d58  33ed                 xor ebp, ebp
// 006c9d5a  8d442420             lea eax, [esp + 0x20]
// 006c9d5e  55                   push ebp
// 006c9d5f  50                   push eax
// 006c9d60  e8276ef6ff           call 0x630b8c
// 006c9d65  8b742460             mov esi, dword ptr [esp + 0x60]
// 006c9d69  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 006c9d6d  83c40c               add esp, 0xc
// 006c9d70  55                   push ebp
// 006c9d71  55                   push ebp
// 006c9d72  8d542418             lea edx, [esp + 0x18]
// 006c9d76  52                   push edx
// 006c9d77  55                   push ebp
// 006c9d78  8d44242c             lea eax, [esp + 0x2c]
// 006c9d7c  8bce                 mov ecx, esi
// 006c9d7e  50                   push eax
// 006c9d7f  f7d9                 neg ecx
// 006c9d81  55                   push ebp
// 006c9d82  c744243428000000     mov dword ptr [esp + 0x34], 0x28
// 006c9d8a  895c2438             mov dword ptr [esp + 0x38], ebx
// 006c9d8e  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006c9d92  66c74424400100       mov word ptr [esp + 0x40], 1
// 006c9d99  66c74424422000       mov word ptr [esp + 0x42], 0x20
// 006c9da0  896c2444             mov dword ptr [esp + 0x44], ebp
// 006c9da4  ff15c4d07700         call dword ptr [0x77d0c4]
// 006c9daa  8bc8                 mov ecx, eax
// 006c9dac  3bcd                 cmp ecx, ebp
// 006c9dae  894c2418             mov dword ptr [esp + 0x18], ecx
// 006c9db2  0f84a9000000         je 0x6c9e61
// 006c9db8  396c2410             cmp dword ptr [esp + 0x10], ebp
// 006c9dbc  0f849f000000         je 0x6c9e61
// 006c9dc2  57                   push edi
// 006c9dc3  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 006c9dc7  8bc3                 mov eax, ebx
// 006c9dc9  0fafc7               imul eax, edi
// 006c9dcc  3bf5                 cmp esi, ebp
// 006c9dce  89442418             mov dword ptr [esp + 0x18], eax
// 006c9dd2  0f8e7d000000         jle 0x6c9e55
// 006c9dd8  896c2410             mov dword ptr [esp + 0x10], ebp
// 006c9ddc  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 006c9de0  89742450             mov dword ptr [esp + 0x50], esi
// 006c9de4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c9de8  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c9dec  03ce                 add ecx, esi
// 006c9dee  85db                 test ebx, ebx
// 006c9df0  8bd5                 mov edx, ebp
// 006c9df2  7e49                 jle 0x6c9e3d
// 006c9df4  8bf3                 mov esi, ebx
// 006c9df6  8a02                 mov al, byte ptr [edx]
// 006c9df8  0fb65a01             movzx ebx, byte ptr [edx + 1]
// 006c9dfc  83c201               add edx, 1
// 006c9dff  83c201               add edx, 1
// 006c9e02  885c245c             mov byte ptr [esp + 0x5c], bl
// 006c9e06  8a1a                 mov bl, byte ptr [edx]
// 006c9e08  8819                 mov byte ptr [ecx], bl
// 006c9e0a  0fb65c245c           movzx ebx, byte ptr [esp + 0x5c]
// 006c9e0f  83c101               add ecx, 1
// 006c9e12  8819                 mov byte ptr [ecx], bl
// 006c9e14  83c101               add ecx, 1
// 006c9e17  8801                 mov byte ptr [ecx], al
// 006c9e19  83c201               add edx, 1
// 006c9e1c  83c101               add ecx, 1
// 006c9e1f  32c0                 xor al, al
// 006c9e21  83ff04               cmp edi, 4
// 006c9e24  7505                 jne 0x6c9e2b
// 006c9e26  8a02                 mov al, byte ptr [edx]
// 006c9e28  83c201               add edx, 1
// 006c9e2b  8801                 mov byte ptr [ecx], al
// 006c9e2d  83c101               add ecx, 1
// 006c9e30  83ee01               sub esi, 1
// 006c9e33  75c1                 jne 0x6c9df6
// 006c9e35  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 006c9e39  8b442418             mov eax, dword ptr [esp + 0x18]
// 006c9e3d  8d0c9d00000000       lea ecx, [ebx*4]
// 006c9e44  014c2410             add dword ptr [esp + 0x10], ecx
// 006c9e48  03e8                 add ebp, eax
// 006c9e4a  836c245001           sub dword ptr [esp + 0x50], 1
// 006c9e4f  7593                 jne 0x6c9de4
// 006c9e51  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c9e55  5f                   pop edi
// 006c9e56  5e                   pop esi
// 006c9e57  5d                   pop ebp
// 006c9e58  8bc1                 mov eax, ecx
// 006c9e5a  5b                   pop ebx
// 006c9e5b  83c43c               add esp, 0x3c
// 006c9e5e  c21000               ret 0x10
// 006c9e61  5e                   pop esi
// 006c9e62  5d                   pop ebp
// 006c9e63  33c0                 xor eax, eax
// 006c9e65  5b                   pop ebx
// 006c9e66  83c43c               add esp, 0x3c
// 006c9e69  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ?ConvertToBitmap@CXTPGraphicBitmapPng@@ABEPAUHBITMAP__@@PAEVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
