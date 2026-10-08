// roc 2009-12 004d3360  unit: G3D::TextureManager::TextureArgs  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d3360
//
// 004d3360  6aff                 push -1
// 004d3362  68a9e59200           push 0x92e5a9
// 004d3367  64a100000000         mov eax, dword ptr fs:[0]
// 004d336d  50                   push eax
// 004d336e  64892500000000       mov dword ptr fs:[0], esp
// 004d3375  83ec20               sub esp, 0x20
// 004d3378  68031f0000           push 0x1f03
// 004d337d  ff150cbc9800         call dword ptr [0x98bc0c]
// 004d3383  50                   push eax
// 004d3384  8d4c2408             lea ecx, [esp + 8]
// 004d3388  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d338e  6a17                 push 0x17
// 004d3390  6a00                 push 0
// 004d3392  68a4559b00           push 0x9b55a4
// 004d3397  8d4c2410             lea ecx, [esp + 0x10]
// 004d339b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004d33a3  ff1588b59800         call dword ptr [0x98b588]
// 004d33a9  8b0da4b69800         mov ecx, dword ptr [0x98b6a4]
// 004d33af  3b01                 cmp eax, dword ptr [ecx]
// 004d33b1  8d4c2404             lea ecx, [esp + 4]
// 004d33b5  0f95c2               setne dl
// 004d33b8  8815d1d0b700         mov byte ptr [0xb7d0d1], dl
// 004d33be  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004d33c6  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d33cc  68ffff0f00           push 0xfffff
// 004d33d1  ff1504bc9800         call dword ptr [0x98bc04]
// 004d33d7  8d0424               lea eax, [esp]
// 004d33da  50                   push eax
// 004d33db  6a01                 push 1
// 004d33dd  ff15e0bb9800         call dword ptr [0x98bbe0]
// 004d33e3  8b0c24               mov ecx, dword ptr [esp]
// 004d33e6  51                   push ecx
// 004d33e7  68e10d0000           push 0xde1
// 004d33ec  ff15e4bb9800         call dword ptr [0x98bbe4]
// 004d33f2  803dd1d0b70000       cmp byte ptr [0xb7d0d1], 0
// 004d33f9  7412                 je 0x4d340d
// 004d33fb  6a01                 push 1
// 004d33fd  6891810000           push 0x8191
// 004d3402  68e10d0000           push 0xde1
// 004d3407  ff15f0bb9800         call dword ptr [0x98bbf0]
// 004d340d  56                   push esi
// 004d340e  6a30                 push 0x30
// 004d3410  e82d073200           call 0x7f3b42
// 004d3415  6a30                 push 0x30
// 004d3417  8bf0                 mov esi, eax
// 004d3419  6a00                 push 0
// 004d341b  56                   push esi
// 004d341c  e883163200           call 0x7f4aa4
// 004d3421  83c410               add esp, 0x10
// 004d3424  33c0                 xor eax, eax
// 004d3426  c60430ff             mov byte ptr [eax + esi], 0xff
// 004d342a  83c003               add eax, 3
// 004d342d  83f830               cmp eax, 0x30
// 004d3430  7cf4                 jl 0x4d3426
// 004d3432  56                   push esi
// 004d3433  6801140000           push 0x1401
// 004d3438  6807190000           push 0x1907
// 004d343d  6a00                 push 0
// 004d343f  6a04                 push 4
// 004d3441  6a04                 push 4
// 004d3443  6851800000           push 0x8051
// 004d3448  6a00                 push 0
// 004d344a  68e10d0000           push 0xde1
// 004d344f  ff15f8bb9800         call dword ptr [0x98bbf8]
// 004d3455  56                   push esi
// 004d3456  6801140000           push 0x1401
// 004d345b  6807190000           push 0x1907
// 004d3460  6a00                 push 0
// 004d3462  68e10d0000           push 0xde1
// 004d3467  ff15e8bb9800         call dword ptr [0x98bbe8]
// 004d346d  803eff               cmp byte ptr [esi], 0xff
// 004d3470  7513                 jne 0x4d3485
// 004d3472  807e0100             cmp byte ptr [esi + 1], 0
// 004d3476  750d                 jne 0x4d3485
// 004d3478  807e0200             cmp byte ptr [esi + 2], 0
// 004d347c  c605b5d0b70000       mov byte ptr [0xb7d0b5], 0
// 004d3483  7407                 je 0x4d348c
// 004d3485  c605b5d0b70001       mov byte ptr [0xb7d0b5], 1
// 004d348c  56                   push esi
// 004d348d  e874063200           call 0x7f3b06
// 004d3492  83c404               add esp, 4
// 004d3495  8d542404             lea edx, [esp + 4]
// 004d3499  52                   push edx
// 004d349a  6a01                 push 1
// 004d349c  ff15c4bb9800         call dword ptr [0x98bbc4]
// 004d34a2  ff1500bc9800         call dword ptr [0x98bc00]
// 004d34a8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004d34ac  5e                   pop esi
// 004d34ad  64890d00000000       mov dword ptr fs:[0], ecx
// 004d34b4  83c42c               add esp, 0x2c
// 004d34b7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?checkBug_redBlueMipmapSwap@GLCaps@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
